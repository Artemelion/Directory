#include <iostream>
#include <fstream>
#include <string>
#include "Directory.h"
#include "Client.h"
#include "FileHandler.h"

using namespace std;

int main()
{
	Directory array(2);
	Client client1("Aizek Azimov", "Artyom Morar", "+38 012 34 56 789", "Kosmonavtiv 2", "Programming");
	Client client2("Bjarne Stroustrup's Homepage", "Bjarne Stroustrup", "987-654-3210", "Deribasovskaya 1", "Marketing");

	array.addClient(client1);
	array.addClient(client2);

	//array.printClients();
	//array.findByName("Aizek Azimov");

	// Save to file
	FileHandler::saveFile(array);
	// Read from file
	Directory newArray(2);
	newArray.operator=(array); 
	FileHandler::readFile(newArray);

	newArray.printClients();




	return 0;
}
