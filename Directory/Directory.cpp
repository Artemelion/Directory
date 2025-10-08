#include "Directory.h"
#include <iostream>
using namespace std;

Directory::Directory()
{
	arr = nullptr;
	size = 0;
}

Directory::Directory(int size)
{
	this->size = size;
	arr = new Client[size];
}

Directory::Directory(const Directory& other)
{
	size = other.size;
	arr = new Client[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

Directory& Directory::operator=(const Directory& other)
{
	if (this != &other)
	{
		delete[] arr;
		size = other.size;
		arr = new Client[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
	}
	return *this;
}

Directory::~Directory()
{
	delete[] arr;
}

void Directory::findByName(const string& name) const
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getName() == name)
		{
			cout << "Client found:\n";
			cout << "Name: " << arr[i].getName() << "\n";
			cout << "Owner: " << arr[i].getOwner() << "\n";
			cout << "Phone: " << arr[i].getPhone() << "\n";
			cout << "Address: " << arr[i].getAddress() << "\n";
			cout << "Activity: " << arr[i].getActivity() << "\n\n";
			return;
		}
	}
	cout << "Client with name " << name << " not found.\n";
}

void Directory::findByOwner(const string& owner) const
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getName() == owner)
		{
			cout << "Client found:\n";
			cout << "Name: " << arr[i].getName() << "\n";
			cout << "Owner: " << arr[i].getOwner() << "\n";
			cout << "Phone: " << arr[i].getPhone() << "\n";
			cout << "Address: " << arr[i].getAddress() << "\n";
			cout << "Activity: " << arr[i].getActivity() << "\n\n";
			return;
		}
	}
	cout << "Client with name " << owner << " not found.\n";
}

void Directory::findByNumber(const string& phone) const
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getName() == phone)
		{
			cout << "Client found:\n";
			cout << "Name: " << arr[i].getName() << "\n";
			cout << "Owner: " << arr[i].getOwner() << "\n";
			cout << "Phone: " << arr[i].getPhone() << "\n";
			cout << "Address: " << arr[i].getAddress() << "\n";
			cout << "Activity: " << arr[i].getActivity() << "\n\n";
			return;
		}
	}
	cout << "Client with name " << phone << " not found.\n";
}

void Directory::findByAddress(const string& address) const
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getName() == address)
		{
			cout << "Client found:\n";
			cout << "Name: " << arr[i].getName() << "\n";
			cout << "Owner: " << arr[i].getOwner() << "\n";
			cout << "Phone: " << arr[i].getPhone() << "\n";
			cout << "Address: " << arr[i].getAddress() << "\n";
			cout << "Activity: " << arr[i].getActivity() << "\n\n";
			return;
		}
	}
	cout << "Client with name " << address << " not found.\n";
}

void Directory::findByActivity(const string& activity) const
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getName() == activity)
		{
			cout << "Client found:\n";
			cout << "Name: " << arr[i].getName() << "\n";
			cout << "Owner: " << arr[i].getOwner() << "\n";
			cout << "Phone: " << arr[i].getPhone() << "\n";
			cout << "Address: " << arr[i].getAddress() << "\n";
			cout << "Activity: " << arr[i].getActivity() << "\n\n";
			return;
		}
	}
	cout << "Client with name " << activity << " not found.\n";
}


void Directory::addClient(const Client& client)
{
	static int index = 0;
	if (index < size)
	{
		arr[index] = client;
		index++;
	}
}

int Directory::getSize() const
{
	return size;
}

Client Directory::getClient(int index) const
{
	if (index >= 0 && index < size)
	{
		return arr[index];
	}
	else
	{
		cout << "Index not found.\n";
	}
}

void Directory::printClients() const
{
	for (int i = 0; i < size; i++)
	{
		cout << "Client " << i + 1 << ":\n";
		cout << "Name: " << arr[i].getName() << "\n";
		cout << "Owner: " << arr[i].getOwner() << "\n";
		cout << "Phone: " << arr[i].getPhone() << "\n";
		cout << "Address: " << arr[i].getAddress() << "\n";
		cout << "Activity: " << arr[i].getActivity() << "\n\n";
	}
}