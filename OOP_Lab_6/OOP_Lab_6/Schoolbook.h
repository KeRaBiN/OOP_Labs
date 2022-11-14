#pragma once

#include "PrintedEdition.h"

class Schoolbook : public PrintedEdition
{
private:

    string Author;
    int School_Grade;

public:
    
    void setAuthor(string author);
    void setSchoolGrade(int school_grade);

    string getAuthor();
    int getSchoolGrade();

    Schoolbook();
    Schoolbook(string title, int school_grade, string author, string publisher, string polygraphy, int publishing_year, string ISBN_code);

};

