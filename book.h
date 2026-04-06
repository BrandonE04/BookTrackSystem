#include <iostream>

class Book {

    private:
        std::string title;
        std::string author;
        std::string description;
        std::string genre;
        int pages;
        bool read;

        friend std::ostream& operator<<(std::ostream& o, const Book& b);
    
    public:
        Book(std::string title, std::string author, std::string description, int pages, std::string genre, bool read){
            this->title = title;
            this->author = author;
            this->description = description;
            this->pages = pages;
            this->genre = genre;
            this->read = read;
        }

        void setTitle(std::string newTitle){
            this->title = newTitle;
        }

        void setAuthor(std::string newAuthor){
            this->author = newAuthor;
        }

};

std::ostream& operator<<(std::ostream& o, const Book& b){
        o << "Title: " << b.title << std::endl;
        o << "Author: " << b.author << std::endl;
        o << "Description: " << b.description << std::endl;
        o << "# of pages:" << b.pages << std::endl;
        o << "Genre: " << b.genre << std::endl;

        if(b.read){
            o << "Read: True" << std::endl;
        }
        else{
            o << "Read: False" << std::endl;
        }

        return o;
}