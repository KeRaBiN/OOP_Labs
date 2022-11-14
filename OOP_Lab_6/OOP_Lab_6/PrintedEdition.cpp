#include "PrintedEdition.h"

void PrintedEdition::setTitle(string title)
{
	Title = title;
}

void PrintedEdition::setPublisher(string publisher)
{
	Publisher = publisher;
}

void PrintedEdition::setPolygraphy(string polygraphy)
{
	Polygraphy = polygraphy;
}

void PrintedEdition::setPublishingYear(int publishing_year)
{
	Publishing_Year = publishing_year;
}

void PrintedEdition::setISBNcode(string ISBN_code)
{
	ISBN_Code = ISBN_code;
}


string PrintedEdition::getTitle()
{
	return Title;
}

string PrintedEdition::getPublisher()
{
	return Publisher;
}

string PrintedEdition::getPolygraphy()
{
	return Polygraphy;
}

int PrintedEdition::getPublishingYear()
{
	return Publishing_Year;
}

string PrintedEdition::getISBNCode()
{
	return ISBN_Code;
}


PrintedEdition::PrintedEdition()
{
	Publishing_Year = 0;
}

PrintedEdition::PrintedEdition(string title, string publisher, string polygraphy, int publishing_year, string ISBN_code)
{
	Title = title;
	Publisher = publisher;
	Polygraphy = polygraphy;
	Publishing_Year = publishing_year;
	ISBN_Code = ISBN_code;
}