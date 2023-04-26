#include <iostream>
#include <cmath>

using namespace std;

class Book {
public:
    string topic;
    string author;
    string title;
    int pages;
};

int main(){
    
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J.K.Rowling";
    book1.pages = 500; 

    cout << book1.title;

    return 0;
    }
