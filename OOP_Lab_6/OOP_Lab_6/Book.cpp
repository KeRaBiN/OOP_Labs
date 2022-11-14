#include "Book.h"

void Book::setAuthor(string author)
{
    Author = author;
}

void Book::setPublishingNumber(int publishing_number)
{
    Publishing_Number = publishing_number;
}


string Book::getAuthor()
{
    return Author;
}

int Book::getPublishingNumber()
{
    return Publishing_Number;
}


Book::Book()
{
    Publishing_Number = 0;
}

Book::Book(string title, string author, string publisher, string polygraphy, int publishing_year, int publishing_number, string ISBN_code)
{
    Title = title;
    Author = author;
    Publisher = publisher;
    Polygraphy = polygraphy;
    Publishing_Number = publishing_number;
    Publishing_Year = publishing_year;
    ISBN_Code = ISBN_code;
}