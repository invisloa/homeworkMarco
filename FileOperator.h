#pragma once
#include <string>
#include <fstream>   
#include <iostream>

using namespace std;

class FileOperator
{
public:
	const string readFileName = "d:/output_socket.txt";
	const string writeFileName = "d:/input_socket.txt";
	ifstream inFile;        // obiekt obsługujący odczyt z pliku
	ofstream outFile;
	string readFileContent;

	void WriteToFile();
	void ReadFromFile();
};

