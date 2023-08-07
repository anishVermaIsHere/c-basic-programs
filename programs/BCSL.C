#include<stdio.h>
#include<conio.h>

int a[10],i=-1,j,choice,a,b,s;
char ch='y';
main()
{
while(ch=='y')
{           clrscr();
printf("\n1 addition");
printf("\n2 subtraction");
printf("\n3 multiplication");
printf("\n4 division");
printf("\n5 exit");

printf("\n enter choice");
scanf("%d",&choice);

switch(choice)
{
case 1: addition(); break;
case 2: subtraction(); break;
case 3: multiplication(); break;
case 4: division(); break;
case 5: exit(); break;

}
printf("  to continue");
flushall();
scanf("%c",&ch);
}
getch();
}


addition()
{
scanf("%d%d",&a,&b);
S=a+b;
Printf("%d",s);
Printf("\n");
}


multiplication()
{	scanf("%d%d",&a,&b);
S=a*b;
Printf("%d",s);
Printf("\n");

}

division()
{	scanf("%d%d",&a,&b);
S=a/b;
Printf("%d",s);
Printf("\n");

}

subtraction()
{	scanf("%d%d",&a,&b);
S=a-b;
Printf("%d",s);
Printf("\n");

}


