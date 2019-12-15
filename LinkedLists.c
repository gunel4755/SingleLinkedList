#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node node;
node *list;

node *addFront(node *head,int key){
	node *temp=(node*)malloc(sizeof(node));
	temp->data=key;
	
	if(head == NULL){
		temp->next=NULL;
		head=temp;
	}
	else{
		
		temp->next=head;
		head=temp;
	}
	return head;
}

void print(node *head){
	if(head ==NULL)
		printf("list is empty");
	else{
		node *q=head;
		while(q->next != NULL)
		{
			printf("%d\n\n",q->data);
			q=q->next;
		}
		
		printf("%d",q->data);
	
	}
}

int *topla(node *head){
	
	int max=head->data;
	int min=head->data;
	
	while(head != NULL){
		
		if(head->data > max)
			max = head->data;
		if(head->data < min)
			min=head->data;
		
		head=head->next;
	}	
	printf("\n*******\nmax : %d\nmin : %d\n",max,min);
	return min+max;
}

main(){

	list=addFront(list,5);
	list=addFront(list,3);
	list=addFront(list,4);
	list=addFront(list,9);
	list=addFront(list,1);
	list=addFront(list,2);
	
	print(list);
			
	printf("\n---sonuc--\n%d",topla(list));
			
}
