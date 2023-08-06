#include<iostream>
using namespace std;

class Book
{
    string title;
    string author;
    int isbn;

    public:
    Book(string t, string a, int i)
    {
        title = t;
        author = a;
        isbn = i;
    }
    void displayDetails()
    {
        cout<<"the title of book is: "<<title<<endl;
        cout<<"the author of book is: "<<author<<endl;
        cout<<"the isbn of book is: "<<isbn<<endl;
    }

};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Book b1("two states", "Chetan Bhagat", 23);
b1.displayDetails();


    return 0;
}