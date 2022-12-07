#include "pch.h"
#include "FileOperator.h"

void FileOperator::ReadFromFile()
{
	string temp;

	inFile.open(readFileName);  // połączenie inFile z plikiem

	if (!inFile.is_open())  // nieudana próba otwarcia pliku
	{
		cout << "Otwarcie pliku " << FileOperator::readFileName << " nie powiodło się.\n";
		cout << "Program zostanie zakończony.\n";
		exit(EXIT_FAILURE);
	}
	while (std::getline(inFile, temp))
	{
		temp += "\n";
		FileOperator::readFileContent += temp;
	}
	inFile.close();
	cout << "Zawartosc wczytanego pliku to:" << endl;
	cout << FileOperator::readFileContent << endl;
	FileOperator::readFileContent = "";

}

void FileOperator::WriteToFile()
{
	outFile.open(writeFileName);
	string userInput;
	cout << "Wpisz tekst do zapisania w pliku i zatwierdz [Enter]:";
	cin >> userInput;
	outFile << userInput;
	outFile.close();
}
