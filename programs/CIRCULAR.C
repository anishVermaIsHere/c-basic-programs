/* this program is for Circular Queue */

#include<stdio.h>
#include<conio.h>


int choice, a[10],i,f,r,c;
char ch='y';
main()
{
    while(ch=='y')
{
clrscr();
printf("\n Circular Queue Program");
printf("\n\n1 insert");
printf("\n\n2 display");
printf("\n\n3 delete");
printf("\n\nenter choice");
scanf("%d",&choice);

switch(choice)
{
case 1: insert(); break;
case 2: display(); break;
case 3: delet(); break;
}
printf("\nto continue");
flushall();
scanf("%c",&ch);
}getch();
}

insert()
{
if(c==10)
printf("\noverflow");
else
{
if(r==10)
r=0;
scanf("%d",&a[r]);
r++;  c++;
}
}

delet()
{
if(c==0)
printf("\nunderflow");
  else
  {
  if(f==10)
  f=0;
  f++;
  c--;
  }
  }


  display()
  {
  i=f;
  do
  {
  if(i==10)
  i=0;
  printf("%d",a[i]);
  i++;
  }
  while(i!=r);
  }


