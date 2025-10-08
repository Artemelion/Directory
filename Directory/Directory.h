#pragma once
#include "Client.h"

class Directory
{
	Client* arr;
	int size;
public:
	Directory();
	Directory(int size);
	Directory(const Directory& other);
	Directory& operator=(const Directory& other);
	~Directory();

	void findByName(const string& name) const;
	void findByOwner(const string& owner) const;
	void findByNumber(const string& phone) const;
	void findByAddress(const string& address) const; 
	void findByActivity(const string& activity) const; 

	void printClients() const;
	void addClient(const Client& client);

};

