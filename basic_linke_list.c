#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=18;
	head->link=NULL;
	struct node *current=malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;
	head->link=current;
	current=malloc(sizeof(struct node));
	current->data=25;
	current->link=NULL;
	head->link->link=current;
	current = malloc(sizeof(struct node));
	current->data=30;
	current->link=NULL;
	head->link->link->link=current;
	
	struct node *temp = head;  // Temporary pointer for traversal
    printf("Linked List Elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
	
	return 0;
}
