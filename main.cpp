#include "pch.h"
#include "FileOperator.h"


int main()
{
	FileOperator fileManager;
	char toContinue = 'Y';

	while (toupper(toContinue) != 'K')
	{
		fileManager.ReadFromFile();
		fileManager.WriteToFile();
		cout << "Jezeli chcesz zakonczyc nacisnij (K):" << endl;
		cin >> toContinue;
	}
}
