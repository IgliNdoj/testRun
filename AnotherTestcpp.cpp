#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
	cout << "This is another test to see if it can go into multiple files and find leaks" << endl;
	vector<string> names_list = { "naproxy", "saeraha01", "GeneralMotors2019" };
	for (int i = 0; i < 3; i++)
	{
		cout << names_list[i] << endl;
	}
}