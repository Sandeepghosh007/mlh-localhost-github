#include<stdio.h>
#include<conio.h>

struct node {
  int data;
  struct node *next;
};
typedef struct node *LL;

void main() {
	LL first=NULL;
	LL last=NULL;
	LL temp,temp1;
	int no,choice,key;
	for(;;) {
	 clrscr();
	 printf("1.Insert First\n2.Insert Last\n3.Insert after\n4.Delete Last\n5.Delete First\n6.Delete after\n7.Display\n8.Exit\n");
	 printf("Enter choice : ");
	 scanf("%d",&choice);
	 switch(choice) {
	  case 1:
		printf("Enter value: ");
		scanf("%d",&no);
		temp=(LL)malloc(sizeof(LL));
		temp->data=no;
		temp->next=first;
		first=temp;
		if(last==NULL) last=first;
		printf("Successfully inserted.\n");
		break;
	  case 2:
		printf("Enter value: ");
		scanf("%d",&no);
		temp=(LL)malloc(sizeof(LL));
		temp->data=no;
		temp->next=NULL;
		if(first==NULL) first=last=temp;
		else {
		last->next=temp;
		last=temp;
		}
		printf("Successfully inserted.\n");
		break;
	  case 3:
		printf("After which node?\n");
		scanf("%d",&key);
		temp1=first;
		while(temp1!=NULL&&temp1->data!=key)
		{
		 temp1=temp1->next;
		}
		if(temp1==NULL)
		{
			printf("Node not found.\n");
		}
		else
		{
		       printf("Enter value:");
		       scanf("%d",&no);
		       temp=(LL)malloc(sizeof(LL));
		       temp->data=no;
		       temp->next=temp1->next;
		       temp1->next=temp;
		       printf("Successfully inseted.\n");
		}

		break;
	  case 4:
		if(first==NULL) {
		 printf("Linklist is empty.\n");
		 break;
		}
		else if(first->next==NULL) {
		 temp=first;
		 first=last=NULL;
		 printf("Deleted value : %d\n",temp->data);
		 free(temp);
		 break;
		}
		for(temp=first;temp->next->next!=NULL;temp=temp->next);
		printf("Deleted value : %d\n",temp->next->data);
		free(temp->next);
		last=temp;
		temp->next=NULL;
		break;
	  case 5:
		if(first==NULL)
		{
		 printf("Linklist is empty.\n");
		}
		else {
		 temp=first;
		 if(first->next==NULL) {
		  first=last=NULL;
		 }
		 else {
		  first=first->next;
		 }
		 printf("Deleted value: %d\n",temp->data);
		 free(temp);
		}
		break;
	  case 6:
		if(first==NULL) {
		 printf("Linklist is empty.\n");
		}
		else {
		 printf("After which node?");
		 scanf("%d",&key);
		 temp1=first;
		 while(temp1->data!=key&&temp1!=NULL) {
		  temp1=temp1->next;
		 }
		 if(temp1==NULL) {
		  printf("Node not found.\n");
		 }
		 else if(temp1->next==NULL) {
		  printf("No node available after...\n");
		 }
		 else {
		  temp=temp1->next;
		  temp1->next=temp->next;
		  printf("Deleted value: %d\n",temp->data);
		  free(temp);
		 }
		}
		break;
	  case 7:
		if(first==NULL) {
		 printf("Linklist is empty.\n");
		 break;
		}
		printf("Linklist is : ");
		for(temp=first;temp!=NULL;temp=temp->next) {
		 printf("%d ",temp->data);
		}
		break;
	  case 8:
		return;

	 }
	 printf("\nPress any key.\n");
	 getch();
	}
}
