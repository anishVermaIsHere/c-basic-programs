#include<stdio.h>
#include<conio.h>

int a,b,m,n,p,q,r,s,s1,s2,s3,s4;
char ch='y';

 main()
 {      int option;

while(ch=='y')
{
printf("1 add");
printf("2 subtract");
printf("3 divide");
printf("4 multiply");
printf("enter option");
scanf("%d",&option)    ;
}
switch(option)
{

case 1: add();
break();
case 2: subtract();
break();
case 3: divide();
break();
case 4: multiply();
break();
}
printf("to continue");     flushall();
scanf("%d",&ch);
}

add()
{
s1=a+b;        return();
}

subtract()
{
s2=m-n;
}

divide()
{
s3=(p/q);
}

multiply()
{
s4=r*s;
}
