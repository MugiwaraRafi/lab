///4. Create a class called card that maintains a library card catalog entry. In the card, it will store a book’s title, author and number of
/// copies on hand. Store the title, author as string and the number of books on hand as an integer value. Use two public functions store ()
/// to store the title, author and number of books on hand. And another public function display () will display the information.
#include<iostream>
using namespace std;

class card
{
    string title , author ;
    int book;
public:
    void store()
    {
        cout<<"Title : ";
        getline(cin,title);
        cout<<"Author : ";
        getline(cin , author);
        cout<<"Number of copys of book : ";
        cin>>book;
    }
    void display()
    {
        cout<<"Title : "<<title<<endl<<"Author : "<<author<<endl<<"Number of books on hand : "<<book<<endl;
    }
};
int main()
{
    card p1;
    p1.store();
    p1.display();

    return 0;
}
