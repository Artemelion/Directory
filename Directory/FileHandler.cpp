#include "FileHandler.h"

void FileHandler::saveFile(Directory& dir)
{
	ofstream out("File.txt", ios::trunc);

	if (!out.is_open())
	{
		cout << "Error opening file for writing.\n";
		return;
	}

	for (int i = 0; i < dir.getSize(); i++)
	{
		Client client = dir.getClient(i);
		out << client.getName() << "\n";
		out << client.getOwner() << "\n";
		out << client.getPhone() << "\n";
		out << client.getAddress() << "\n";
		out << client.getActivity() << "\n";
	}

	out.close();

}

void FileHandler::readFile(Directory& dir)
{
	ifstream in("File.txt");
	if (!in.is_open())
	{
		cout << "Error opening file for reading.\n";
		return;
	}

	string name, owner, phone, address, activity;
	while (getline(in, name) && getline(in, owner) && getline(in, phone) && getline(in, address) && getline(in, activity))
	{
		Client client(name, owner, phone, address, activity);
		dir.addClient(client);
	}
	in.close();

}
