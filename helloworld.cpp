#include <iostream>
#include <cmath>

using namespace std;

class Book {
public:
    string topic;
    string author;
    string title;
    int pages;
    bool pagesUndOv(){
       if (pages>100){
          return true;
          }
          return false;
          };
};

int main(){
    
    Book book1;
    
    cout <<  book1.pagesUndOv();

    cout << book1.title;

    return 0;
    }
