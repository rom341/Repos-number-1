#include<iostream>
using namespace std;

class Phone
{
protected:
	string number;
public:
	Phone()
	{
		this->number = number;
	}
	string call()
	{
		return "Call function is trigerred";
	}
	void SetNumber(string number)
	{
		this->number = number;
	}
	string GetNumber()
	{
		return number;
	}
	~Phone()
	{}
};

class HomePhone : public Phone
{
private:
	string respond;
public:

	HomePhone(string number, string respond)
	{
		this->number = number;
		this->respond = respond;
	}
	~HomePhone() {}

	void SetRespond(string respond)
	{
		this->respond = respond;
	}
	void SetNumber(string number)
	{
		this->number = number;
	}

	string GetRespond()
	{
		return respond;
	}
	string GetNumber()
	{
		return number;
	}

	string AutoRespond()
	{
		return respond;
	}
};

class SmartPhone : public Phone
{
private:
	string internet;
public:
	SmartPhone(string number, string internet)
	{
		this->number = number;
		this->internet = internet;
	}
	string SearchInWeb()
	{
		return "*Web search result*";
	}

	void SetInternet(string internet)
	{
		this->internet = internet;
	}
	string GetInternet()
	{
		return internet;
	}
	~SmartPhone() {}
};

int main()
{
	HomePhone hp("+000 000 000 000", "Hello, World!");
	SmartPhone sp("+111 111 111 111", "4G");
	
	cout << hp.AutoRespond() << endl;
	cout << sp.SearchInWeb() << endl;
}