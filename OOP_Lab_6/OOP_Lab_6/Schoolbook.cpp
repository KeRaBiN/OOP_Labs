#include "Schoolbook.h"

void Schoolbook::setAuthor(string author)
{
    Author = author;
}

void Schoolbook::setSchoolGrade(int school_grade)
{
    School_Grade = school_grade;
}


string Schoolbook::getAuthor()
{
    return Author;
}

int Schoolbook::getSchoolGrade()
{
    return School_Grade;
}


Schoolbook::Schoolbook()
{
    School_Grade = 0;
}

Schoolbook::Schoolbook(string title, int school_grade, string author, string publisher, string polygraphy, int publishing_year, string ISBN_code)
{
    Title = title;
    School_Grade = school_grade;
    Author = author;
    Publisher = publisher;
    Polygraphy = polygraphy;
    Publishing_Year = publishing_year;
    ISBN_Code = ISBN_code;
}
