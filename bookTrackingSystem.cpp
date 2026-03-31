#include <iostream>
#include <vector>
#include <string>
#include "book.h"
#include "library.h"

Library library = Library();

int main(){
    char select;
    bool running = true;

    while(running){

        printf("Menu: \n");
        printf("1. Add Book \n");
        printf("2. Remove Book \n");
        printf("3. Update Book \n");
        printf("4. View Book List \n");
        printf("X. Exit \n");
        printf("Select:");
        std::cin >> select;

        switch(select){
            case '1': {
                std::string title;
                std::string author;
                std::string description;
                int pages;
                std::string genre;
                bool read;
                
                printf("Enter Book Title: ");
                std::cin.ignore();
                std::getline(std::cin, title);

                printf("Enter Book Author: ");
                std::getline(std::cin, author);

                printf("Enter Book Description: ");
                std::getline(std::cin, description);

                printf("Enter # of Pages: ");
                scanf("%d",&pages);

                printf("Enter Book Genre: ");
                std::cin.ignore();
                std::getline(std::cin, genre);

                library.addBook(title, author, description, pages, genre, false);
                break;
            }
            case '2':
                int removeId;
                printf("Enter the id of the book you would like to remove: ");
                scanf("%d", &removeId);
                library.removeBook(removeId);
                break;
            case '3':{
                int updateChoice;
                int updateId;

                printf("Enter the id of the book you wish to update: ");
                std::cin >> updateId;

                printf("Update Menu \n");
                printf("1. Update Name \n");
                printf("2. Update Author \n");
                printf("3. Update Description \n");
                printf("4. Update # of Pages \n");
                printf("5. Update Genre \n");
                printf("6. Mark as Read \n");
                std::cin >> updateChoice;
                
                library.updateBook(updateId, updateChoice);

                break;
            }
            case '4':
                for (int i = 0; i < library.books.size(); i++){
                    std::cout << library.books[i];
                }
                break;
            case 'X':
                running = false;
                break;
            default:
                printf("Incorrect Selection");
        }
    }
    
}

