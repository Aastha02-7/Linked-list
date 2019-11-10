#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
};
typedef struct node NODE;
NODE*start;
void createmptylist(NODE**start)
{
	*start=(NODE*)NULL;
}
void traversinorder(NODE*start)
{
	while(start!=(NODE*)NULL)
	{
		printf("%d\n",start->info);
		start=start->next;
	}
}
void insertatbegin(int item)
{
	NODE*ptr;
	ptr=(NODE*)malloc(sizeof(NODE));
	ptr->info=item;
	if(start==(NODE*)NULL)
		ptr->next=(NODE*)NULL;
	else
		ptr->next=start;
	start=ptr;
}
void insert_at_end(int item)
{
	NODE*ptr,*loc;
	ptr=(NODE*)
	malloc(sizeof(NODE));
	ptr->info=item;
	ptr->next=(NODE*)NULL;
	if(start==(NODE*)NULL)
		start=ptr;
	else
	{
		loc=start;
		while(loc->next!=(NODE*)NULL)
			loc=loc->next;
		loc->next=ptr;
	}
}
void insert_spe(NODE*start,int item)
{
	NODE*ptr,*loc;
	int temp,k;
	for(k=0,loc=start;k<temp;k++)
	{
		loc=loc->next;
		if(loc==NULL)
		{
			printf("Node in the list is less than one\n");
			return;
		}
	}
	ptr=(NODE*)malloc(sizeof(NODE));
	ptr->info=item;
	ptr->next=loc->next;
	loc->next=ptr;
}
int main()
{
	int choice,item,after;
	char ch;
	createmptylist(&start);
	do
	{
		printf("1.Insert element at begin\n");
		printf("2.Insert element at the end position\n");
		printf("3.Insert at specific position\n");
		printf("4.Travers the list in order\n");
		printf("5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the item: ");
				scanf("%d",&item);
				insertatbegin(item);
				break;
			case 2:
				printf("Enter the item: ");
				scanf("%d",&item);
				insert_at_end(item);
				break;
			case 3:
				printf("Enter the item: ");
				scanf("%d",&item);
				insert_spe(start,item);
				break;
			case 4:
				printf("\nTravers the list\n");
				traversinorder(start);
				break;
			case 5:
				return 0;
		}
		fflush(stdin);
		printf("Do you want continue[Y/N]:");
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');
	return 0;
}
