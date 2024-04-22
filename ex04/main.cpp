/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:44:00 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/22 21:08:22 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int checkArgs(int argc) {
	if (argc != 4) {
		std::cerr << "Provide the following 3 parameters: 1) 'File name', 2) 'string' to be replaced with 3) 'string'" << std::endl;
		return 0;
	}
	return 1;
}

int openFiles(std::ifstream &infile, std::ofstream &outfile, std::string inFileName) {
	std::string outFileName;
	infile.open(inFileName);
	if (!infile.is_open()) {
		std::cerr << "The '" << inFileName << "' file does not exist" << std::endl;
		return 0;
	}
	outFileName = inFileName;
	outFileName += ".replace";
	outfile.open(outFileName);
	return 1;
}

int main(int argc, char **argv)
{
	std::ifstream	inData;
	std::ofstream	outData;
	std::string		line;

	if (!checkArgs(argc))
		return 1;
	if (!openFiles(inData, outData, argv[1]))
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