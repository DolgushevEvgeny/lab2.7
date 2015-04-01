#include "stdafx.h"
#include "AddToList.h"

using namespace std;

void AddedItemToList(educationList &list, const string &fileName)
{
	ifstream inputFile(fileName, ifstream::in);

	if (!inputFile.is_open())
	{
		printf("Error: cannot load input file\n");
		system("pause");
		exit(1);
	}

	string studentFIO;
	while (inputFile.good())
	{
		getline(inputFile, studentFIO);
		if (list.find(studentFIO) == list.end())
		{
			list.insert(studentFIO);
		}
	}
	inputFile.close();
}