#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct a

{
struct a *next;
int val;
}
*s,*p,*e,*t;

char ch='y';
int choice;

main()
{

while(ch=='y')
{
printf("1 insert start");
printf("2 insert end");
printf("3 display");
printf("4 insert before");
printf("5 insert after");
printf("\n enter choice");
scanf("%d",&choice);

switch(choice)
{
case 1: insert_start(); break;
case 2: insert_end(); break;
case 3: display(); break;
case 4: insert_before(); break;
case 5: insert_after(); break;
}

printf("to continue");   flushall();
scanf("%d",&ch);