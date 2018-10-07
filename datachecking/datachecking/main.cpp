#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool readData()
{
	string line;
	string filename = "";
	cout << "Enter the file name: ";
	cin >> filename;

	ifstream file;
	file.open(filename.c_str());
	if (file.fail())
	{
		cerr << "Could not open file: " << filename << endl;
		return false;
	}
	while (!file.eof())
	{
		
	}

}
int main()
{
	
}