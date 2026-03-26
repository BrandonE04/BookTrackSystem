#include <iostream>
#include <vector>
#include "book.h"
#include "library.h"

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
            case '1':
                //Add Book
                break;
            case '2':
                //Remove Book
                break;
            case '3':
                //Update Book
                break;
            case '4':
                //Print Books
                break;
            case 'X':
                running = false;
                break;
            default:
                printf("Incorrect Selection");
        }
    }
    
}

