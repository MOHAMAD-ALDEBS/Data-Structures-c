#include<stdio.h> 
#include<stdlib.h>
//adding data to the double linked list :)

struct node
{
    int data;
    struct node* next;
    struct node* pre;
};


struct node * addinfront( struct node* head , int x ){

            struct node* temp = ( struct node* ) malloc ( sizeof( struct node));
            temp-> pre = NULL;
            temp-> data = x;
            if (head == NULL)
            {
                temp->next = NULL;
                head = temp ;
                return head;
            }
            else{
                temp->next = head;
                head->pre = temp;
                head = temp;
                return head;
            }

}

int main () {

    struct node* head = NULL;

    head = addinfront( head , 5);
    head = addinfront( head , 10);
    head = addinfront( head , 6);
    head = addinfront( head , 4);

    for (int i = 0; i < 5; i++)
    {
        printf("%d , " , head -> data);
        head = head ->next;
    }
    
    return 0;
}