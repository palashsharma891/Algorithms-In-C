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
        printf("STACK OVERFLOW!\n");
        return;
    }
    int num;
    printf("Enter the number to push into the list : ");
    scanf("%d", &num);
    new_node -> data = num;
    new_node -> next = *head_ref;
    *head_ref = new_node;
}

void pop(struct Node ** head_ref)
{
    struct Node * node = * head_ref;
    if(node == NULL)
    {
        printf("NO ELMENTS TO POP!\n");
        return;
    }
    *head_ref = node -> next;
    printf("Popped element is : %d\n", node -> data);
    free(node);
}

void display(struct Node * head_ref)
{
    struct Node * node = head_ref;
    if(node == NULL)
    {
        printf("EMPTY STACK!\n");
        return;
    }
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
        printf("Press 1 to push an element on top of the stack\n");
        printf("Press 2 to pop an element from the stack\n");
        printf("Press 3 to display the elements of the stack\n");
        printf("Press 4 to exit the program\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 : push(&head);
                     break;
            case 2 : pop(&head);
                     break;
            case 3 : display(head);
                     break;
            case 4 : printf("Thanks!");
                     break;
            default: printf("INVALID CHOICE\nPLEASE ENTER A VALID CHOICE (1 - 3)\n");
        }
    }while(ch != 4);
}
