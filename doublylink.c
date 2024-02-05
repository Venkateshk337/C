#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
	struct node *head;
};
struct node *create(struct node *head, int data){
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	new->prev=NULL;
	head=new;
	return head;
}
struct node *addfront(struct node* head,int data){
	struct node *p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->next=head;
	p->prev=NULL;
	head->prev=p;
	p=head;
	return head;
}
struct node *addrear(struct node *head,int data){
	struct node *n=(struct node*)malloc(sizeof(struct node));
	struct node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	n->data=data;
	n->next=NULL;
	n->prev=ptr;
	ptr->next=n;
	return head;
}
struct node *deletefront(struct node *head){
	struct node *n=head;
	free(n);
	n=NULL;
	head->prev=NULL;
	return head;
}
struct node *deleterear(struct node *head){
	struct node *p =head;
	struct node *q;
	while(p->next!=NULL){
		p=p->next;
	}
	q=p->prev;
	q->next=NULL;
	free(p);
	return head;
}
void display(struct node *head){
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	struct node *head=NULL;
	printf("Create a node:\n");
	int data;
	scanf("%d",&data);
	head=create(head,data);
	printf("Enter the choices:\n 1.InsertFront\n 2.InsertRear\n 3.DeleteFront\n 4.DeleteRear\n 5.Display\n"); 
	while (true){
		printf("Enter your choice:\n");
		int c;
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("Enter the element to add at front:\n");
				scanf("%d", &data);
				head=addfront(head,data);
				break;
			case 2: printf("Enter the element to add at rear:\n");
                                scanf("%d", &data);
				break;
                                head=addrear(head,data);
			case 3: printf("Enter the element to delete at front:\n");
                                head=deletefront(head);
				break;
                        case 4: printf("Enter the element to delete at rear:\n");
                                head=deleterear(head);
				break;
			case 5: printf("Display all:\n");
				display(head);
				break;
			default: printf("WRONG---CHOICE\n");
				 break;
		}
		return 0;
	}

}


		
