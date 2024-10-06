#include<stdio.h>
#include<stdlib.h>
// code in c language inserting values in front and in the end of the linked list :)

struct node
{
    int data;
    struct node* next;
};

struct node* addfront( struct node* head , int x ){

    struct node* temp = (struct node* ) malloc (sizeof(struct node ));
    temp -> data = x;
    temp -> next = NULL;
    if (head == NULL)
    {
        return temp;
    }
    else {
    temp -> next = head ;
    head = temp;

        return head;
     }

}

struct node* addend( struct node * head , int x){

    struct node * temp = (struct node* ) malloc ( sizeof( struct node));
    temp -> data = x;
    temp -> next = NULL;
    if ( head == NULL)
    {
        return temp;
    }
    else {

        struct node * findlast = head ;

        while ( findlast-> next != NULL)
        {
            findlast = findlast -> next;
        }
        
        findlast ->next = temp ;
        findlast= head ;
        
        return head;   
    }
}

int main(){

    struct node* head = NULL;

    head = addfront( head , 5);
    head = addend ( head , 1);

    while (head != NULL)
    {
        printf("%d " , head ->data);
        head = head -> next ; 
            }
    return 0;
}