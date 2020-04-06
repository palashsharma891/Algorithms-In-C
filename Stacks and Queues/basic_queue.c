#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void enqueue(struct Node ** head_ref)
{
    struct Node * new_node = (struct Node *) malloc(sizeof(struct Node));
    if(new_node == NULL)
    {
        printf("NO SPACE TO ADD ELEMENTS TO THE QUEUE!\n");
        return;
    }
    int num;
    printf("Enter the element to add to the queue : ");
    scanf("%d", &num);
    struct Node * node = *head_ref;
    if(node == NULL)
    {

        new_node -> data = num;
        new_node -> next = NULL;
        *head_ref = new_node;
        return;
    }
    while(node -> next != NULL)
    {
        node = node -> next;
    }
    new_node -> data = num;
    new_node -> next = NULL;
    node -> next = new_node;
}

void dequeue(struct Node ** head_ref)
{
    struct Node * node = *head_ref;
    if(node == NULL)
    {
        printf("NO ELEMENT TO REMOVE!\n");
        return;
    }
    *head_ref = node -> next;
    printf("The removed element is : %d\n", node -> data);
    free(node);
}

void display(struct Node * head)
{
    if(head == NULL)
    {
        printf("EMPTY QUEUE!\n");
        return;
    }
    while(head != NULL)
    {
        printf("%d ", head -> data);
        head = head -> next;
    }
    printf("\n");
}

int main()
{
    struct Node * head = NULL;
    int ch;
    do
    {
        printf("Press 1 to add an element to the queue\n");
        printf("Press 2 to remove an element from the queue\n");
        printf("Press 3 to display the elements of the queue\n");
        printf("Press 4 to exit the program\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 : enqueue(&head);
                     break;
            case 2 : dequeue(&head);
                     break;
            case 3 : display(head);
                     break;
            case 4 : printf("Thanks!");
                     break;
            default: printf("INVALID CHOICE\nPLEASE ENTER A VALID CHOICE (1 - 3)\n");
        }
    }while(ch != 4);
}
