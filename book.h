#include <iostream>

class Book {

    private:
        std::string title;
        std::string author;
        std::string description;
        int pages;
        bool read;

        friend std::ostream& operator<<(std::ostream& o, const Book& b);
    
    public:
        Book(std::string title, std::string author, std::string description, int pages, bool read){
            this->title = title;
            this->author = author;
            this->description = description;
            this->pages = pages;
            this->read = read;
        }


};

std::ostream& operator<<(std::ostream& o, const Book& b){
        o << "Title: " << b.title << std::endl;
        o << "Author: " << b.author << std::endl;
        o << "Description: " << b.description << std::endl;
        o << "# of pages:" << b.pages << std::endl;

        if(b.read){
            o << "Read: True" << std::endl;
        }
        else{
            o << "Read: False" << std::endl;
        }

        return o;
}