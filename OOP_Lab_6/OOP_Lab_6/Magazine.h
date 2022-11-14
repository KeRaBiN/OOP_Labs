#pragma once

#include "PrintedEdition.h"

class Magazine : public PrintedEdition
{
private:

    int Publishing_Day;
    int Publishing_Month;
    string Editor;

public:

    void setPublishingDay(int publishing_day);
    void setPublishingMonth(int publishing_month);
    void setEditor(string editor);

    int getPublishingDay();
    int getPublishingMonth();
    string getEditor();

    Magazine();
    Magazine(string title, string editor, string publisher, string polygraphy, int publishing_day, int publishing_month, int publishing_year, string ISBN_code);

};

