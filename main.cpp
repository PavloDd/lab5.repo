#include <iostream>
#include "File.h"

int main() {

	File File_1("PHOTO_FROM_CRIMEA", "JPEG", "245mb", "file");
	File File_2("PHOTO_FROM_LONDON", "JPEG", "541mb", "file");
	File File_3("PHOTO_FROM_PARIS", "RAW", "295mb", "file");
	File File_4("PHOTO_FROM_TORONTO", "JPEG", "1193mb", "file");
	File File_5("PHOTO_FROM_BERLIN", "RAW", "288mb", "file");
	File Folder_1("PHOTO_1", "-", "500mb", "folder");
	File Folder_4("PHOTO_2", "-", "599mb", "folder");
	File Folder_3("PHOTO_3", "-", "893mb", "folder");

	Folder_1.add_file(File_1);
	Folder_1.add_file(File_2);
	Folder_1.add_file(File_3);
	Folder_4.add_file(File_4);
	Folder_4.add_file(File_5);
	Folder_3.add_file(File_1);
	Folder_3.add_file(File_4);
	Folder_3.add_file(File_3);
	Folder_3.add_file(File_4);
	Folder_3.add_file(File_5);
	Folder_3.add_file(Folder_1);
	Folder_3.add_file(Folder_4);
	Folder_3.output_folder();
}
