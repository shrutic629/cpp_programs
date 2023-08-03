#include<iostream>
using namespace std;

class Book
{
    string title;
    string author;
    int p_year;
public:
    Book()
    {
        title= "x";
        author= "y";
        p_year= 1993;
    }

    Book(string t, string a, int y)
    {
        title=t;
        author=a;
        p_year=y;
    }

    void displayInfo()
    {
        cout<<"title is: "<<title<<endl;
        cout<<"author is: "<<author<<endl;
        cout<<"publish year is: "<<p_year<<endl;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    Book b1;
    b1.displayInfo();

    Book b2("abc", "xyz", 2001);
    b2.displayInfo();

    return 0;
}