#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "EducationList.h"

extern EducationList studentsList;

void SaveList(const EducationList &list, const std::string &fileName);