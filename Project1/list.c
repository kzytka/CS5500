#include <list.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Allocate space for a new list and set its head to Null
 * Returns the created list if successful, NULL otherwise. */
list* create_list(){
    //allocate memory for the list
    list* newList = (list*)malloc(sizeof(list));
    //check if list is empty
    if(newList != NULL){
        newList->head = NULL;
    }
    return newList;
}//create_list

/* Allocates a new node and copies the string from item to this node
 * (use malloc, strlen, and strcpy; or try strdup). Adds this new node
 * to the end of the list ll. Reutrns 0 if successful, non-zero otherwise. */
int add_to_list(list* ll, char* item){
    //allocate memory for the node
    node *newNode = (node*)malloc(sizeof(node));
    //check if node is empty
    if(newNode != NULL){
        //create the node
        newNode->item = malloc(strlen(item));
        newNode->item = strdup(item);
        newNode->next = NULL;
        //find where the node should go
        //if head is null then it should go in the first position
        if(ll->head == NULL){
            ll->head = newNode;
        }else{
            //create a temporary to hold where the node needs to go
            node* temp = ll->head;
            //find the end of the list
            while(temp->next != NULL){
                temp = temp->next;
            }
            //add node to list
            temp->next = newNode;
        }
    }
    if(ll != NULL){
        return 0;
    }else{
        return 1;
    }
}//add_to_list

/* Removes the head of the list ll (and move the head of ll to the next node
 * in the list), extracts the string stored in the head, and returns a 
 * pointer to this string. Also frees the removed head node. */
char* remove_from_list(list *ll){
    if(ll->head == NULL){
        return NULL;
    }

    node* temp = ll->head;
    char* item = temp->item;
    ll->head = temp->next;
    free(temp);
    return item;
}//remove_from_list

/* Prints every string in each node of the list ll, with a new line
 * character at the end of each string */
void print_list(list *ll){
    node* temp = ll->head;
    while(temp != NULL){
        printf("%s\n", temp->item);
        temp = temp->next;
    }
}//print_list

/* Flushes (clears) the entire list and re-initializes the list. The passed
 * pointer ll should still point to a valid, empty list when this function
 * returns. Any memory allocated to store nodes in the list should be freed.
 */
void flush_list(list *ll){
    node* temp = ll->head;
    node* next;
    while(temp != NULL){
        free(temp->item);
        next = temp->next;
        free(temp);
        temp = next;
    }

    free(temp);
    ll->head = NULL;
}//flush_list

/* De-allocates all data for the list. Ensure all memeory allocated for list
 * ll is freed, including any allocated strings and list ll iteself. */
void free_list(list **ll){
    node* temp = (*ll)->head;
    node* next;
    while(temp != NULL){
        free(temp->item);
        next = temp->next;
        free(temp);
        temp = next;
    }

    free(temp);
    free(*ll);
}//free_list
