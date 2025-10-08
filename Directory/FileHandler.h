#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Directory.h"
using namespace std;

class FileHandler
{
public:
    static void saveFile(Directory& dir);
    static void readFile(Directory& dir);
};
