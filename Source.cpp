#include<iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;
	float height, weight;
public:
	//constructor
	Person(string n, int a, float h, float w)
	{
		cout << "===Constructor call===\n\n";
		name = n;
		age = a;
		height = h;
		weight = w;
	}
	//set
	void SetName(string n)
	{
		name = n;
	}
	void SetAge(int a)
	{
		age = a;
	}
	void SetHeight(float h)
	{
		height = h;
	}
	void SetWeight(float w)
	{
		weight = w;
	}

	//get
	string GetName()
	{
		return name;
	}
	int GetAge()
	{
		return age;
	}
	float GetHeight()
	{
		return height;
	}
	float GetWeight()
	{
		return weight;
	}

	//other functions
	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Height: " << height << endl;
		cout << "Weight: " << weight << endl;
	}

	//destructor
	~Person()
	{
		cout << "\n===Destructor call===" << endl;
		//ƒеструктор нужен только дл€ динамических масивов. ќбычные переменные удалить в деструкторе нельз€.

		/*delete& name;
		delete& age;
		delete& height;
		delete& weight;*/
	}
};

int main()
{
	Person p("Roman", 17, 175.6, 65.2);

	cout << "print function:" << endl;
	p.print();

	cout << "\nget|set" << endl;
	cout << "Name-" << p.GetName() << endl;
	cout << "Age-" << p.GetAge() << endl;
	p.SetHeight(190);
	cout << "Height-" << p.GetHeight() << endl;
	cout << "Weight-" << p.GetWeight() << endl;

}