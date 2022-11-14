#include "Magazine.h"

void Magazine::setPublishingDay(int publishing_day)
{
    Publishing_Day = publishing_day;
}

void Magazine::setPublishingMonth(int publishing_month)
{
    Publishing_Month = publishing_month;
}

void Magazine::setEditor(string editor)
{
    Editor = editor;
}


int Magazine::getPublishingDay()
{
    return Publishing_Day;
}

int Magazine::getPublishingMonth()
{
    return Publishing_Month;
}

string Magazine::getEditor()
{
    return Editor;
}


Magazine::Magazine()
{
    Publishing_Day = 0;
    Publishing_Month = 0;
}

Magazine::Magazine(string title, string editor, string publisher, string polygraphy, int publishing_day, int publishing_month, int publishing_year, string ISBN_code)
{
    Title = title;
    Editor = editor;
    Publisher = publisher;
    Polygraphy = polygraphy;
    Publishing_Day = publishing_day;
    Publishing_Month = publishing_month;
    Publishing_Year = publishing_year;
    ISBN_Code = ISBN_code;
}
