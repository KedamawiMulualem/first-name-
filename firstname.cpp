
#include<vector>
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{

	vector <string> fullNames;
	fullNames.push_back("J. J. Evans");
	fullNames.push_back("Paul Bunyan");
	fullNames.push_back("Will E. Smith");
	fullNames.push_back("Cher");
	fullNames.push_back("Alexandria O.");
	fullNames.push_back("Maceo");

	vector <string> vecFName;  //Will add first names here. 


	for (size_t ii = 0; ii<fullNames.size(); ii++)
	{
		string elem = fullNames[ii];
		int spacePos = elem.find(" ");
		if (spacePos < elem.size())
			vecFName.push_back(elem.substr(0, spacePos));
		else
			vecFName.push_back(elem);

	}




	for (size_t ii = 0; ii<vecFName.size(); ii++)
	{
		cout << "First Name:" << vecFName[ii] << "\"" << endl;

	}
	system("pause");
	return 0;
}

