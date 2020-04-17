#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int val;
struct node * next;
    } node_t;

int searchNode(node_t *head, int value)
{
    if( head == NULL )
        return -1;
    if( head->next == NULL)
        return (head->val == value) ? 0: -1;

        int position = 0;
    node_t *cur = head;
    do {
        if( cur->val == value )
            return position;
        else
            position++;
        cur = cur->next;
    } while( cur != NULL );

    return -1;
};

void print_list(node_t * head) {
    node_t * current = head;
while (current != NULL) {
    printf("chislo: %d\n", current->val);
        current = current->next;
}
}

void push(node_t * head, int val) {
    node_t * current = head;
while (current->next != NULL) {
current = current->next;
}
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;

}
int remove_last(node_t * head) {

int retval = 0;
    if (head->next == NULL) {
        retval = head->val;
            free(head);
return retval;
}
    node_t * current = head;
while (current->next->next != NULL) {
    current = current->next;
}
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
return retval;
}
int main() {
    node_t * head = NULL;
    head = malloc(sizeof(node_t));

    if (head == NULL) {
return 1;
}
int n, a;
    head->val = 1000;
    head->next = malloc(sizeof(node_t));
    head->next->val = 2000;
    head->next->next = malloc(sizeof(node_t));
    head->next->next->val = 1608;
    head->next->next->next = malloc(sizeof(node_t));
    head->next->next->next->val = 2001;
    head->next->next->next->next = NULL;
    print_list(head);
printf("\nvvedite chislo: ");
    n=scanf("%d", &a);
    if(n !=1)
return 2;
    printf("\ndobavleno novoe znachenie v spisok \n\n");

push(head, a);

print_list(head);

getch();

    printf("\nUdalaem posledn chislo\n\n");

remove_last(head);

print_list(head);

puts("BBEDI 4ICLO, DLY POISKA:");
    int val;
    scanf("%d", &val);
    if (searchNode(head, val) != -1)
        printf("4ICLO NAIDENO! Position %d\n",searchNode(head, val) +1 );
    else
        puts("4ICLO NE NAIDENO!");

return 0;
}
