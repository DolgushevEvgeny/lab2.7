#include "stdafx.h"
#include "AddToList.h"

using namespace std;

void AddedItemToList(EducationList &list, const string &fileName)
{
	ifstream inputFile;
	inputFile.open(fileName, ifstream::in);
	if (!inputFile.is_open())
	{
		bool isFileOpen = false;
		while (!isFileOpen)
		{
			cout << "Error: cannot load input file. Try again to enter new file name.\n";
			string fileName;
			getline(cin, fileName);
			inputFile.open(fileName, ifstream::in);
			if (inputFile.is_open())
			{
				isFileOpen = true;
			}
		}
	}

	while (inputFile.good())
	{
		string studentFIO;
		getline(inputFile, studentFIO);
		if (list.find(studentFIO) == list.end())
		{
			list.insert(studentFIO);
		}
	}
	inputFile.close();
}