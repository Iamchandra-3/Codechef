#include <stdio.h>
#include <stdlib.h>
struct node *insert(struct node *, int);
int arr[10000];

struct node
{
    int element;
    struct node *next;
};

struct node *create(struct node *head)
{
    int element, n;
    printf("enter no of players: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        element = i;
        head = insert(head, element);
        i++;
    }
    struct node *x = head;
    while (x->next != NULL)
        x = x->next;
    x->next = head;
    return head;
}
struct node *insert(struct node *head, int k)
{
    struct node *temp, *x;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->element = k;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    x = head;
    while (x->next != NULL)
        x = x->next;
    x->next = temp;
    return head;
}
void game(struct node *head)
{
    int n, b = 0;
    printf("enter no of passes: ");
    scanf("%d", &n);
    struct node *x = head;
    struct node *t;
    while (x->next != x)
    {
        for (int i = 0; i < (n-1); i++)
            x = x->next;
        t = x->next;
        x->next = t->next;
        x = x->next;
        printf("Player %d is out and eliminated\n", t->element);
        free(t);

    }
    printf("The winner is player %d", x->element);
    arr[b] = x->element;
    b++;
}
int main()
{
    int t, x;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        while (x--)
        {
            struct node *head = NULL;
            head = create(head);
            game(head);
        }
    }
    return 0;
}