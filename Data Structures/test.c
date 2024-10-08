#include<stdio.h>
#include<stdlib.h>
// code in c language inserting values in front and in the end of the linked list :)

struct node
{
    int data;
    struct node* next;
};

struct node* distory( struct node* head ){

        struct node* temp = head;
        while ( head != NULL)
        {
                head = head ->next;
                free(temp);
                head = temp;
        }
        return head;
}

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

    head = addfront( head , 4);
    head = addfront( head , 5);
    head = addfront( head , 6);
    head = addend ( head , 22);
    head = addend ( head , 7);
    head = addend ( head , 9);

    while (head != NULL)
    {
        printf("%d " , head ->data);
        head = head -> next ; 
            }

    head = distory(head);

    if (head == NULL)
    {
        printf("\nthe head distored and now it is null");
    }      
    return 0;
}