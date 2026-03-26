class Library {
    private:
        

    public:
        std::vector<Book> books;

        Library(){

        }

        void addBook(std::string title, std::string author, std::string description, int pages, std::string genre, bool read){
            this->books.push_back(Book(title, author, description, pages, genre, read));
        }

        void removeBook(){}
};
