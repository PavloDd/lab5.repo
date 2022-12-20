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
	File(string Name, string Extention, string Size, string Type);

	void show_file();
	void add_file(File& a);
	void show_folder();
	void output_folder();

};
