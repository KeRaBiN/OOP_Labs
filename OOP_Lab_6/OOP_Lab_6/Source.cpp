
#include "Magazine.h"
#include "Book.h"
#include "Schoolbook.h"

ostream& operator << (ostream& out, Magazine& mag)
{
    out << "\nMagazine data" <<
        "\nTitle: " << mag.getTitle() <<
        "\nEditor: " << mag.getEditor() <<
        "\nPublisher: " << mag.getPublisher() <<
        "\nPolygraphy: " << mag.getPolygraphy() <<
        "\nPublishing date: " << mag.getPublishingDay() <<
        "/" << mag.getPublishingMonth() <<
        "/" << mag.getPublishingYear() <<
        "\nISBN Code: " << mag.getISBNCode() << endl;

    return out;
}

ostream& operator << (ostream& out, Book& mag)
{
    out << "\nBook data" <<
        "\nTitle: " << mag.getTitle() <<
        "\nAuthor: " << mag.getAuthor() <<
        "\nPublisher: " << mag.getPublisher() <<
        "\nPolygraphy: " << mag.getPolygraphy() <<
        "\nPublishing year: " << mag.getPublishingYear() <<
        "\nPublishing number: " << mag.getPublishingNumber() <<
        "\nISBN Code: " << mag.getISBNCode() << endl;

    return out;
}

ostream& operator << (ostream& out, Schoolbook& mag)
{
    out << "\nSchoolbook data" <<
        "\nTitle: " << mag.getTitle() <<
        "\nSchool grade: " << mag.getSchoolGrade() <<
        "\nAuthor: " << mag.getAuthor() <<
        "\nPublisher: " << mag.getPublisher() <<
        "\nPolygraphy: " << mag.getPolygraphy() <<
        "\nPublishing year: " << mag.getPublishingYear() <<
        "\nISBN Code: " << mag.getISBNCode() << endl;

    return out;
}

void main()
{
	Magazine Mag1("Forbes: 10 Richiest People In The World", "Randall Lane", "Integrated Whale Media Investments", "Edabs", 21, 5, 2020, "977270832620");
	Book Book1("Harry Potter: Philosopher Stone", "Joanne Rowling", "Macmillan", "Chicago polygraphy", 1999, 21, "984525257726143");
	Schoolbook SB1("Physics", 11, "Volodymyr Syrotyuk", "Sicia", "Kharkiv polygraphy", 2011, "9789662542028");
	
	cout << Mag1 << Book1 << SB1;

}