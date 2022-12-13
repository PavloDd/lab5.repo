#include <iostream>
# include "File.h"

File::File() {
	name = "file";
	extention = "-";
	size = "2gb";
	type = "folder";
};

File::File(std::string aName, std::string aExtention, std::string aSize, std::string aType) {
	this->name = aName;
	this->extention = aExtention;
	this->size = aSize;
	this->type = aType;
}; 

void File::show_File() {
	std::cout << "name=" << this->name << "\t extentoin=" << this->extention << "\t size=" << this->size << std::endl;
};

void File:: add_File(File& a) {
	Folder.push_back(a);
};

void File::show_Folder() {
	for (int j = 0; j < Folder.size(); j++) {
		std::cout << "name=" << Folder[j].name << "\t extentoin=" << Folder[j].extention << "\t size=" << Folder[j].size << std::endl;
	}
};
void File::output_Folder() {
	std::cout << "Folder`s name:" << this->name << std::endl;
	for (int i = 0; i < Folder.size(); i++) {
		if (Folder[i].type== "folder") {
			std::cout << "name:" << Folder[i].name << std::endl;
			Folder[i].show_Folder();
		}
		else {
			Folder[i].show_File();
		}
	};
};
