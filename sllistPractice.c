#include <stdio.h>
#include <stdlib.h>

// create a node struct
typedef struct node
{
    int val;
    struct node *next;
}
node;

// function prototypes
node *createList(int headVal);
node *startInsert(node *sllist, int val);
void printList(node *sllist);

int main(void)
{
    // create a singly-linked list and store it at an address called listA
    node *listA = createList(2);
    // print the values in the sllist
    printList(listA);
    // insert a node with the value of 1 at the start of the sllist
    listA = startInsert(listA, 1);
    // print the values in the sllist
    printList(listA);
}

// a function to create a singly-linked list
node *createList(int headVal)
{
    // allocate space in memory for a node object
    node *tmp = malloc(sizeof(node));
    // ensure there is enough memory for node object
    if (tmp != NULL)
    {
        // set the head value
        tmp->val = headVal;
        // set the next valued to NULL
        tmp->next = NULL;
    }
    return tmp;
}

// a function to insert a node at the start of a singly-linked list
node *startInsert(node *sllist, int val)
{
    // allocate space in memory for a node object
    node *tmp = malloc(sizeof(node));
    // ensure there is enough memory for node object
    if (tmp != NULL)
    {
        // set the head value
        tmp->val = val;
        // set the next value to the address of previous head node
        tmp->next = sllist;
    }
    return tmp;
}

// a function to add a node to the end of a singly-linked list
void append(node *sllist, int val)
{
    
}

// a function to print the values in a singly-linked list
void printList(node *sllist)
{
    int counter = 0;
    while (sllist != NULL)
    {
        if (counter > 0)
        {
            printf(", %i", sllist->val);
        }
        else
        {
            printf("%i", sllist->val);
        }
        sllist = sllist->next;
        counter++;
    }
    printf("\n");
}
