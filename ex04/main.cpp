/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:44:00 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/25 09:59:32 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

int checkArgs(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "ERROR: Provide the following 3 parameters: 1) 'File name', 2) 'string' to be replaced with 3) 'string'" << std::endl;
		return 0;
	}
	if (std::strcmp(argv[1], "") == 0 || std::strcmp(argv[2], "") == 0 || std::strcmp(argv[3], "") == 0) {
		std::cerr << "ERROR: one of the parameters is an empty string" << std::endl;
		return 0;
	}
	return 1;
}

int openFileForReading(std::ifstream &infile, const std::string &inFileName) 
{
	struct stat fileInfo;	

	if (stat(inFileName.c_str(), &fileInfo) != 0) {
		std::cout << "ERROR: Failed to get file information" << std::endl;
        return 0;
    }
	// Check if the passed file is a folder..
	if (S_ISREG(fileInfo.st_mode) == false) {
		std::cout << "ERROR: The file seems to be a folder..." << std::endl;
		return 0;
	}

	infile.open(inFileName.c_str(), std::ifstream::in);
	// Check if file opened successfully
	if (!infile.is_open()) {
		std::cerr << "ERROR: Failed to open the file for reading" << std::endl;
		return 0;
	}
	// Check if the file is readable
	if (!infile.good()) {
		std::cerr << "ERROR: Failed reading file" << std::endl;
		return 0;
	}
	
	return 1;
}

int openFileForWriting(std::ofstream &outfile,  const std::string &inFileName) 
{
	std::string outFileName;

	outFileName = inFileName;
	outFileName += ".replace";
	outfile.open(outFileName.c_str(), std::ios::out);
	
	if(!outfile.is_open()) {
		std::cerr << "ERROR: Failed to open the file for writing" << std::endl;
		return 0;
	}

	return 1;
}


int main(int argc, char **argv)
{
	std::ifstream	inData;
	std::ofstream	outData;
	std::string		line;

	if (!checkArgs(argc, argv))
		return 1;
	if (!openFileForReading(inData, argv[1]))
		return 1;
	if (!openFileForWriting(outData, argv[1]))
		return 1;

	std::string wordToFind = argv[2];
	std::string replacementWord = argv[3];

	while (std::getline(inData, line)) {
		size_t pos = 0;
		while ((pos = line.find(wordToFind, pos)) != std::string::npos) {
			std::string newLine = line.substr(0, pos) + replacementWord + line.substr(pos + wordToFind.length());
			line = newLine;
			pos += replacementWord.length();
		}
		outData << line << std::endl;
	}

	inData.close();
	outData.close();
	return 0;
}