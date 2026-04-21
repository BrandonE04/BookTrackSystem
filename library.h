class Library {
    private:
        

    public:
        std::vector<Book> books;

        Library(){
        }

        void addBook(std::string title, std::string author, std::string description, int pages, std::string genre, bool read){
            this->books.push_back(Book(title, author, description, pages, genre, read));
        }

        void removeBook(int removeId){
            this->books.erase(books.begin() + removeId);
        }

        void updateBook(int updateId, int updateChoice){
            switch(updateChoice){
                case 1: {
                    std::string newTitle;

                    printf("Please enter the new title: ");
                    std::cin.ignore();
                    std::getline(std::cin, newTitle);

                    this->books[updateId].setTitle(newTitle);
                    break;
                }
                case 2:{
                    std::string newAuthor;

                    printf("Please enter the new author: ");
                    std::cin.ignore();
                    std::getline(std::cin, newAuthor);
                    
                    this->books[updateId].setAuthor(newAuthor);
                    break;
                }
                case 3:{
                    std::string newDescription;

                    printf("Please enter the new description: ");
                    std::cin.ignore();
                    std::getline(std::cin, newDescription);
                    
                    this->books[updateId].setDescription(newDescription);
                    break;
                }
                case 4:
                    int newPages;

                    printf("Please enter the new # of pages: ");
                    std::cin.ignore();
                    std::cin >> newPages;
                    
                    this->books[updateId].setPages(newPages);
                    break;
            }
        }

};
