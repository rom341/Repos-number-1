#include<iostream>
using namespace std;
const int n = 10;
struct Attributes
{
	string name;
	int instance;
	bool multiInstance;
	string value;
};
struct Component
{
	string name;
	string source;
	Attributes attribute[n];
};

void main()
{
	Component comp;
	cout << "Enter Component name: ";
	cin >> comp.name;
	cout << "Enter Component source: ";
	cin >> comp.source;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter Atribute №" << i + 1 << " name: ";
		cin >> comp.attribute[i].name;

		cout << "Enter Atribute №" << i + 1 << " instance: ";
		cin >> comp.attribute[i].instance;

		cout << "Enter Atribute №" << i + 1 << " multiInstance: ";
		cin >> comp.attribute[i].multiInstance;

		cout << "Enter Atribute №" << i + 1 << " value: ";
		cin >> comp.attribute[i].value;
	}
}