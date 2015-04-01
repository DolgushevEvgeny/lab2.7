#include "stdafx.h"
#include "SaveList.h"

using namespace std;

void SaveList(const educationList &list, const string &fileName)
{
	ofstream outputFile(fileName, ios::out);

	if (!outputFile.is_open())
	{
		printf("Error: cannot create output file\n");
		system("pause");
		exit(1);
	}

	for (auto studentName : list)
	{
		outputFile << studentName << "\n";
	}
	outputFile.close();
}
