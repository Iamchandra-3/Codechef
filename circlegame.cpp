#include <stdio.h>
#include <stdlib.h>
struct node *insert(struct node *, int);

struct node
{
    int element;
    struct node *next;
};

struct node *create(struct node *head)
{
    int element, x;
    scanf("%d", &x);
    int i = 1;
    while (i <= x)
    {
        element = i;
        head = insert(head, element);
        i++;
    }
    struct node *n = head;
    while (n->next != NULL)
        n = n->next;
    n->next = head;
    return head;
}
struct node *insert(struct node *head, int k)
{
    struct node *temp, *n;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->element = k;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    n = head;
    while (n->next != NULL)
        n = n->next;
    n->next = temp;
    return head;
}
void game(struct node *head)
{
    int n;
    scanf("%d", &n);
    struct node *x = head;
    struct node *t;
    while (x->next != x)
    {
        for (int i = 0; i < n - 2; i++)
            x = x->next;
        t = x->next;
        x->next = t->next;
        x = x->next;
        free(t);
    }
    printf("%d", x->element);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    struct node *head = NULL;
    head = create(head);
    game(head);
    }
    return 0;
}