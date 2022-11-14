#pragma once

#include <iostream>

using namespace std;

class PrintedEdition
{
protected:

	string Title;
	string Publisher;
	string Polygraphy;
	int Publishing_Year;
	string ISBN_Code;

public:

	void setTitle(string title);
	void setPublisher(string publisher);
	void setPolygraphy(string polygraphy);
	void setPublishingYear(int publishing_year);
	void setISBNcode(string ISBN_code);

	string getTitle();
	string getPublisher();
	string getPolygraphy();
	int getPublishingYear();
	string getISBNCode();

	PrintedEdition();
	PrintedEdition(string title, string publisher, string polygraphy, int publishing_year, string ISBN_code);
};

