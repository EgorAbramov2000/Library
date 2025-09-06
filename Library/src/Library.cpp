//============================================================================
// Name        : Library.cpp
// Author      : Egor Abramov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Library.h"
#include <iostream>
using namespace std;

Library::Library(){
	author = "";
	name = "";
	isbn = 0;
	isAvailable = false;
}

Library::Library(string x, string y, int z, bool w){
	author = x;
	name = y;
	isbn = z;
	isAvailable = w;
}

void Library::setAuthor(const string& newAuthor){ // name setter
	if (!newAuthor.empty()){
		name = newAuthor;
	}
}

void Library::setName(const string& newName){ // name setter
	if (!newName.empty()){
		name = newName;
	}
}

void Library::setISBN(int newISBN){ //ID setter
	if (newISBN > 0){
		isbn = newISBN;
	}
}

void Library::setAvailability(bool newAvailability){ //availability setter
	isAvailable = newAvailability;
}

string Library::getAuthor() const{
	return author;
}

string Library::getName() const{
	return name;
}

int Library::getISBN() const{
	return isbn;
}

bool Library::getAvailability(){
	return isAvailable;
}

void Library::displayInfo(){
	cout << "Author: " << author << endl;
	cout << "Book name: " << name << endl;
	cout << "ISBN: " << isbn << endl;
	if(isAvailable == true){
		cout << "Book is available" << endl;
	} else {
		cout << "Book is not available" << endl;
	}
}


void Library::borrowBook(){
	isAvailable = false;
	cout << "You have borrowed the " << name << endl;
}

void Library::returnBook(){
	isAvailable = true;
	cout << "You have returned the " << name << endl;
}

void Library::menu(){
	int choice;
	do{
		cout << "Select your option: 1 to display info; 2 to borrow the book; 3 to return the book; 0 key to quit:\n";
		cin >> choice;

		switch (choice){
			case 1:
				displayInfo();
				break;
			case 2:
				borrowBook();
				break;
			case 3:
				returnBook();
				break;
			case 0:
				cout << "Closing app.\n";
		}
	} while (choice !=0); //program works until user inputs 0
}
