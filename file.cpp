#include <iostream>
# include "File.h"

File::File() {
	name = "file";
	extention = "-";
	size = "2gb";
	type = "folder";
};

File::File(string Name, string Extention, string Size, string Type) {
	this->name = Name;
	this->extention = Extention;
	this->size = Size;
	this->type = Type;
}; 

void File::show_file() {
	std::cout << "name=" << this->name << "\t extentoin=" << this->extention << "\t size=" << this->size << std::endl;
};

void File:: add_file(File& a) {
	Folder.push_back(a);
};

void File::show_folder() {
	for (int j = 0; j < Folder.size(); j++) {
		std::cout << "name=" << Folder[j].name << "\t extentoin=" << Folder[j].extention << "\t size=" << Folder[j].size << std::endl;
	}
};
void File::output_folder() {
	std::cout << "Folder`s name:" << this->name << std::endl;
	for (int i = 0; i < Folder.size(); i++) {
		if (Folder[i].type== "folder") {
			std::cout << "name:" << Folder[i].name << std::endl;
			Folder[i].show_folder();
		}
		else {
			Folder[i].show_file();
		}
	};
};
