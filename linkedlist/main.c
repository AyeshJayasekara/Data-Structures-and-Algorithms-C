#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE *next;
}node;

int main()
{
    node *head = malloc(sizeof(node));

    head->data = 0;
    head->next = NULL;

    //printf("Hello world!\n");
    append(head ,33);
    append(head ,36);
    append(head ,38);
    append(head ,300);
    deleteLast(head);
    deleteLast(head);
    printList(head);
    return 0;
}

void printList(node *head) {
    node *current = head;

    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void append(node *head, int new_data)
{

     node *new_node = ( node*) malloc(sizeof( node));
//     node *last = head_ref;

     new_node->data  = new_data;
     new_node->next = NULL;

    node *current = head;
    node *previousNode;

    while (current != NULL) {
        previousNode = current;
        current = current->next;
    }
    previousNode->next = new_node;
    return;
}

int deleteLast(node *head)
{
    node *temp =head;
    node *t;
  while(temp->next != NULL)
  {
    t=temp;
    temp=temp->next;
  }
  free(t->next);
  t->next=NULL;
}
