/*
 * Library.h
 *
 *  Created on: 19 авг. 2025 г.
 *      Author: abreg
 */

#include <string>
using namespace std;

class Library{
	private:
		string author;
		string name;
		int isbn;
		bool isAvailable;
	public:
		Library();
		Library(string x, string y, int z, bool w);

		string getAuthor() const;
		string getName() const;
		int getISBN() const;
		bool getAvailability();

		void setAuthor(const string& x);
		void setName(const string& y);
		void setISBN(const int z);
		void setAvailability(bool w);

		void menu();
		void displayInfo();
		void borrowBook();
		void returnBook();
};
