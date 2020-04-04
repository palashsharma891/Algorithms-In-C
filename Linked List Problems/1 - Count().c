#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void push(struct Node ** head_ref)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
    if(new_node == NULL)
    {
        printf("NO MEMORY LEFT TO ALLOCATE TO A NEW NODE!\n");
        return;
    }
    int num;
    printf("Enter the number to insert in the list : ");
    scanf("%d", &num);
    if(*head_ref == NULL)                 //checking if linked list is empty
    {
        new_node->data = num;        //if so, then
        new_node->next = NULL;            //adding new_node
        *head_ref = new_node;             //at the top
        return;
    }
    new_node -> data = num;
    new_node -> next = * head_ref;
    * head_ref = new_node;
    if(*head_ref == new_node)
        printf("%d", new_node -> data);
}

void count(struct Node ** head_ref)
{
    int n, c = 0;
    if(*head_ref == NULL)
    {
        printf("LIST IS EMPTY!\n");
        return;
    }
    printf("Enter the number to count : ");
    scanf("%d", &n);
    struct Node * node = *head_ref;
    while(node != NULL)
    {
        if(node -> data == n)
        {
            c++;
        }
        node = node -> next;
    }
    printf("%d occurs %d times in the list\n", n, c);
}

void display(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node -> data);
        node = node -> next;
    }
    printf("\n");
}

int main()
{
    struct Node * head = NULL;
    int ch;
    do
    {
        printf("Press 1 to push an element on top of the list\n");
        printf("Press 2 to count the number of times a given node occurs in the list\n");
        printf("Press 3 to display the list\n");
        printf("Press 4 to exit the program\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 : push(&head);
                     break;
            case 2 : count(&head);
                     break;
            case 3 : display(head);
                     break;
            case 4 : printf("Thanks!");
                     break;
            default: printf("INVALID CHOICE!\nPLEASE ENTER A VALID CHOICE (1 - 3)\n");
        }
    }while(ch != 4);
}
