#pragma once

#include "PrintedEdition.h"

class Book : public PrintedEdition
{
private:

    string Author;
    int Publishing_Number;

public:

    void setAuthor(string author);
    void setPublishingNumber(int publishing_number);

    string getAuthor();
    int getPublishingNumber();

    Book();
    Book(string title, string author, string publisher, string polygraphy, int publishing_year, int publishing_number, string ISBN_code);

};

