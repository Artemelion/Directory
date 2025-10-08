#pragma once
#include <string>
using namespace std;
class Client
{
	string name;
	string owner;
	string phone;
	string address;
	string activity;
public:
	Client();
	Client(string name, string owner, string phone, string address, string activity);
	Client(const Client& other);
	Client& operator=(const Client& other);
	~Client();


	string getName() const;
	string getOwner() const;
	string getPhone() const;
	string getAddress() const;
	string getActivity() const;

	void setName(string name);
	void setOwner(string owner);
	void setPhone(string phone);
	void setAddress(string address);
	void setActivity(string activity);
};

