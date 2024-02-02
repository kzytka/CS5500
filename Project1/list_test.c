#include <stdlib.h>
#include <stdio.h>

#include <list.h>

int main(int argc, char *argv[]){

    list* myList;

    myList = create_list();

    add_to_list(myList, "h");
    add_to_list(myList, "he");
    add_to_list(myList, "hel");
    add_to_list(myList, "hell");
    add_to_list(myList, "hello");

    print_list(myList);
    remove_from_list(myList);
  
    print_list(myList);

    flush_list(myList);
    printf("List Flushed\n");

    list* newList;

    newList = create_list();

    add_to_list(newList, "h");
    add_to_list(newList, "he");
    add_to_list(newList, "hel");
    add_to_list(newList, "hell");
    add_to_list(newList, "hello");

    free_list(&newList);
    printf("List freed\n");

    return 0;

}//main    