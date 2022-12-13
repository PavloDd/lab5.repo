#pragma once 
#include <iostream>
#include <vector>
using namespace std;
class File {
public:
	string name;
	string extention;
	string size;
	string type;
	vector<File>Folder;
	File();
	File(std::string aName, std::string aExtention, std::string aSize, std::string aType);

	void show_File();
	void add_File(File& a);
	void show_Folder();
	void output();

};
