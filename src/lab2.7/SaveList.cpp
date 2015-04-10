#include "stdafx.h"
#include "SaveList.h"

using namespace std;

void SaveList(const EducationList &list, const string &fileName)
{
	ofstream outputFile;
	outputFile.open(fileName, ios::out);

	if (!outputFile.is_open())
	{
		bool isFileOpen = false;
		while (!isFileOpen)
		{
			cout << "Error: cannot create output file. Try again to enter new file name.\n";
			string fileName;
			getline(cin, fileName);
			outputFile.open(fileName, ios::out);
			if (outputFile.is_open())
			{
				isFileOpen = true;
			}
		}
	}

	for (auto studentName : list)
	{
		outputFile << studentName << "\n";
	}
	outputFile.close();
}
