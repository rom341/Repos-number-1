#include<iostream>
using namespace std;
const int n = 2;
class Attributes
{
	string name;
	int instance;
	bool multiInstance;
	string value;
public: void SetAttributes()
{
	cout << "Enter Atribute name: ";
	cin >> name;

	cout << "Enter Atribute instance: ";
	cin >> instance;

	cout << "Enter Atribute multiInstance: ";
	cin >> multiInstance;

	cout << "Enter Atribute value: ";
	cin >> value;
}
};
class Component
{
	string name;
	string source;
	Attributes attribute[n];

public:
	void SetComponent()
	{
		cout << "Enter Component name: ";
		cin >> name;
		cout << "Enter Component source: ";
		cin >> source;
	}
	void SetAttributes()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "=====Attribute № " << i + 1 << "=====" << endl;
			attribute[i].SetAttributes();
		}
	}
};

void main()
{
	Component comp;
	comp.SetComponent();
	comp.SetAttributes();
	cout << endl << "Work finished!" << endl;
}