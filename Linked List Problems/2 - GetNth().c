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
        printf("NO SPACE LEFT TO INSERT A NEW NODE!\n");
        return;
    }
    int num;
    printf("Enter the number to push on top of the list : ");
    scanf("%d", &num);
    new_node -> data = num;
    new_node -> next = * head_ref;
    *head_ref = new_node;
}

void GetNth(struct Node ** head_ref)
{
    struct Node * node = *head_ref;
    int i, f = 0;
    printf("Enter the index of the node you would like to display : ");
    scanf("%d", &i);
    while(f != i)
    {
        node = node -> next;
        f++;
    }
    if(node == NULL)
    {
        printf("INDEX OUT OF BOUND!\n");
        return;
    }
    printf("The node at index %d is : %d\n", i, node -> data);
}

void display(struct Node * node)
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
        printf("Press 2 to display the Nth element in the list\n");
        printf("Press 3 to display the list\nPress 4 to exit the program\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 : push(&head);
                     break;
            case 2 : GetNth(&head);
                     break;
            case 3 : display(head);
                     break;
            case 4 : printf("Thanks!");
                     break;
            default: printf("INVALID CHOICE\nPLEASE ENTER A VALID CHOICE (1 - 3)\n");
        }
    }while(ch != 4);
}
