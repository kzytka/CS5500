#include <stdlib.h>
#include <stdio.h>

#include "list.c"

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
        print_list(myList);

    add_to_list(myList, "h");
    add_to_list(myList, "he");
    add_to_list(myList, "hel");
    add_to_list(myList, "hell");
    add_to_list(myList, "hello");

    free_list(&myList);
    print_list(myList);

    return 0;

}//main    