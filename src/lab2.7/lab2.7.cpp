#include "stdafx.h"
#include "AddToList.h"
#include "SaveList.h"
#include <vector>
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector<string> SectionsList;
	educationList studentsList;
	copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(SectionsList));
	for (vector<string>::iterator position = SectionsList.begin(); position != SectionsList.end(); ++position)
	{
		AddedItemToList(studentsList, *position);
	}
	SaveList(studentsList, "output.txt");
	return 0;
}

