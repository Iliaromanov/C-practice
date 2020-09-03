#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}
node;

node *createList(int rootVal);
node *startInsert(node *sllist, int val);
void printList(node *sllist);

int main(void)
{
    node *listA = createList(2);
    printList(listA);
    listA = startInsert(listA, 1);
    printList(listA);
}

node *createList(int rootVal)
{
    node *tmp = malloc(sizeof(node));
    if (tmp != NULL)
    {
        tmp->val = rootVal;
        tmp->next = NULL;
    }
    return tmp;
}

node *startInsert(node *sllist, int val)
{
    node *tmp = malloc(sizeof(node));
    if (tmp != NULL)
    {
        tmp->val = val;
        tmp->next = sllist;
    }
    return tmp;
}

void append(node *sllist, int val)
{
    
}
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
