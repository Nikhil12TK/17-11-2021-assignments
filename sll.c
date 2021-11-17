#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
int data;
struct student *next;
}SLL;
SLL *headptr=0;
void main()
{
//SLL *headptr=0;
int op;
while(1)
{
printf("enter choice\n");
printf("1)add_begin \n2)add_middle \n3)add_end \n4)print_data \n5)exit\n");
scanf("%d",&op);
switch(op)
{
case 1:add_begin();
	break;
case 2:add_middle();
	break;
case 3:add_end();
	break;
case 4:print_data();
	break;
case 5:exit(0);
    break;
default:printf("wrong choice\n");
}
}
}
void add_begin()
{
SLL *new;
new=(SLL*)malloc(sizeof(SLL));
printf("enter the data to be added at begin: ");
scanf("%d",&new->data);
new->next=0;
headptr=new;
}
void print_data()
{
SLL *ptr;
ptr=headptr;
if(ptr==0)
{
printf("no record are available to print:\n");
return;
}
while(ptr)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
void add_middle()
{
SLL **ptr,*new,*last;
ptr=&headptr;
new=(SLL*)malloc(sizeof(SLL));
printf("enter the data to be added at middle: ");
scanf("%d",&new->data);
if(*ptr==0 ||(new->data<(*ptr)->data))
{
new->next=*ptr;
*ptr=new;
}
else
{
last=*ptr;
while((last->next!=0)&&(last->next->data<new->data))
last=last->next;
new->next=last->next;
last->next=new;
}
}
void add_end()
{
SLL *new,*last;
new=(SLL*)malloc(sizeof(SLL));
printf("enter the data to be added at end: ");
scanf("%d",&new->data);
new->next=0;
if(headptr==0)
headptr=new;
else
{
last=headptr;
while(last->next)
last=last->next;
last->next=new;
}
}
