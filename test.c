#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    void* data;
    struct node* next;
} node;

typedef struct {
    node* head;
} linked_list;




int main() {
    
    linked_list list;
    int data = 10;
    list.head = NULL;
    list.head = malloc(sizeof(node));
    list.head->data = &data;
    list.head->next = NULL;
    list.head->next = malloc(sizeof(node));
    int data2 = 20;
    list.head->next->data = &data2;


    printf("First node data: %d\n", *(int*)list.head->data);
    printf("Second node data: %d\n", *(int*)list.head->next->data);


    int a;
    char b;
    double c;

    scanf("%d", &a);
    scanf(" %c", &b);
    scanf("%lf", &c);

    printf("Integer: %d\n", a);
    printf("Character: %c\n", b);
    printf("Double: %.2lf\n", c);

}
