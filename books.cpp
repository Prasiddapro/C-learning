#include <iostream>
using namespace std;

int main() {
    struct myBook1 
    struct mybook2
    struct mybook3{
        string bookname;
        string author;
        float price;
        int publishyear;
    } myBook myBook1, myBook2, myBook2;
    
    myBook.bookname = "The ice monster";
    myBook1.author = "David walliams";
    myBook1.price = 12.99;
    myBook1.publishyear = 2013;
    
    
    myBook2.bookname = "Charlie and the chocolate factory";
    myBook2.author = "Roadh dahl";
    myBook2.price = 14.50;
    myBook2.publishyear = 2009;
    
    
    myBook3.bookname = "The diary of the wimpy kid";
    myBook3.author = "J.k rowling";
    myBook3.price = 11.99;
    myBook3.publishyear = 2011;
    
  
    cout << book1.bookname << " by " << book1.author 
         << " | Price: $" << book1.price 
         << " | Published: " << book1.publishyear << "\n";
    
    cout << myBook2.bookname << " by " << myBook2.author 
         << " | Price: $" << myBook2.price 
         << " | Published: " << myBook2.publishyear << "\n";
    
    cout << myBook3.bookname << " by " << myBook3.author 
         << " | Price: $" << myBook3.price 
         << " | Published: " << myBook3.publishyear << "\n";
    
    return 0;
}