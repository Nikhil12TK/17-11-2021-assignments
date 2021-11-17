
#include <stdio.h>
//#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
char data;
struct student *next;
}CSLL;
CSLL *headptr=0;
void main()
{
//SLL *headptr=0;
int op;
while(1)
{
printf("enter choice\n");
printf("1)add_begin \n2)add_middle \n3)add_end \n4)print_data \n5)delete_all \n6)exit\n");
scanf("%d",&op);
switch(op)
{
case 1:add_begin(&headptr);
        break;
case 2:add_middle();
        break;
case 3:add_end(&headptr);
        break;
case 4:print_data(headptr);
        break;
case 5:delete_all(&headptr);
    break;
//case 6:delete_begin(headptr);
   // break;
//case 7:delete_end(headptr);
    //break;
case 6:exit(0);
default:printf("wrong choice\n");
}
}
}
void add_begin(CSLL **ptr)
{
CSLL *new,*last;
new=(CSLL*)malloc(sizeof(CSLL));
printf("enter the data to be added at begin: ");
scanf(" %c",&new->data);
if(*ptr==0)
{
    *ptr=new;
   new->next=*ptr;
}
else
{
    last=*ptr;
while(last->next!=*ptr)
    last=last->next;
new->next=*ptr;
last->next=new;
*ptr=new;
}
}
void print_data(CSLL *ptr)
{
CSLL *headptr=ptr;
if(ptr==0)
{
printf("no record are available to print\n");
return;
}
else
while(ptr->next!=headptr)
{
printf("%c\n",ptr->data);
ptr=ptr->next;
}
printf("%c\n",ptr->data);
}
void add_middle()
{
CSLL **ptr,*new,*last;
ptr=&headptr;
new=(CSLL*)malloc(sizeof(CSLL));
printf("enter the data to be added at middle: ");
scanf(" %c",&new->data);
if(*ptr==0 ||(new->data<(*ptr)->data))
{
    
new->next=*ptr;
*ptr=new;
}
else
{
last=*ptr;
while((last->next!=*ptr)&&(last->next->data<new->data))
last=last->next;
new->next=last->next;
last->next=new;
}
}
void add_end(CSLL **ptr)
{
CSLL *new,*last;
new=(CSLL*)malloc(sizeof(CSLL));
printf("enter the data to be added at end: ");
scanf(" %c",&new->data);
if(*ptr==0)
{
    *ptr=new;
    new->next=new;
}
else
{
last=*ptr;
while(last->next!=*ptr)
{
last=last->next;
}
last->next=new;
new->next=*ptr;
}
}
void delete_all(CSLL **ptr)
{
    CSLL *del,*temp;
    if(*ptr==0)
    {
        printf("no records available to delete\n");
        return;
    }
    temp=del=*ptr;
    while(del->next!=temp)
    {
        (*ptr)=(*ptr)->next;
        free(del);
        //printf("node num:%d\n",i);
        del=*ptr;
    }
    *ptr=0;
}


