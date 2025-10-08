#include "Client.h"
#include <string>
using namespace std;

Client::Client()
{
	name = "NoName";
	owner = "NoOwner";
	phone = "NoPhone";
	address = "NoAddress";
	activity = "NoActivity";
}

Client::Client(string name, string owner, string phone, string address, string activity)
{
	this->name = name;
	this->owner = owner;
	this->phone = phone;
	this->address = address;
	this->activity = activity;
}

Client::Client(const Client& other)
{
	name = other.name;
	owner = other.owner;
	phone = other.phone;
	address = other.address;
	activity = other.activity;
}

Client& Client::operator=(const Client& other)
{
	if (this != &other)
	{
		name = other.name;
		owner = other.owner;
		phone = other.phone;
		address = other.address;
		activity = other.activity;
	}
	return *this;
}

Client::~Client() {}

string Client::getName() const
{
	return name;
}

string Client::getOwner() const
{
	return owner;
}

string Client::getPhone() const
{
	return phone;
}

string Client::getAddress() const
{
	return address;
}

string Client::getActivity() const
{
	return activity;
}

void Client::setName(string name)
{
	this->name = name;
}
void Client::setOwner(string owner)
{
	this->owner = owner;
}

void Client::setPhone(string phone)
{
	this->phone = phone;
}

void Client::setAddress(string address)
{
	this->address = address;
}

void Client::setActivity(string activity)
{
	this->activity = activity;
}

