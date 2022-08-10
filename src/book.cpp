/*
* File contains book class
*/

#include <iostream>
#include <string>
#include <fstream>

class Book {
private:
    std::string author{};
    std::string publisher{};
    std::string title{};
    std::string issue{};
    int page_number{}, price{};
    enum reading_status {Not_Started, Started, Dropped, Finished};
    std::string database{"Bookshelf.txt"};

public:
    void get_all();
    void set_all();
    void set_author(std::string str){ author = str;}
    void set_publisher(std::string str){ publisher = str;}
    void set_title(std::string str){ title = str;}
    void set_price(short num){ price = num;}
    void set_page_number(short num){ page_number = num;}

    void write_to_file();
};

void Book::set_all(){
    std::cout << "Author: " ;
    std::getline(std::cin,author);
    std::cout << "Publisher: " ;
    std::getline(std::cin,publisher);
    std::cout << "Title: " ;
    std::getline(std::cin,title);
}

void Book::get_all(){
    std::cout << "Author: " << author << '\n';
    std::cout << "Publisher: " << publisher << '\n';
    std::cout << "Title: " << title << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Page Number: " << page_number << '\n';
}

void Book::write_to_file(){
    ofstream outfile;
    outfile.open(database);
    outfile << "Print some text" << '\n';
    outfile.close();

}
