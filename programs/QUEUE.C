int a[10],i,choice, F,R;
char ch='y';

main()
{
while(ch=='y')
{
clrscr();
printf("\n1 insert");
printf("\n2 delete");
printf("\n3 display");
printf("\n4 exit");
printf("\n enter choice");
			 scanf("%d",&choice);

			 switch(choice)
			 {
			 case 1 : insert(); break;
			 case 2 : delet(); break;
			 case 3 : display(); break;
			 }

			 printf(" to  continue");  flushall();
			 scanf("%c",&ch);
			 }
			 }

insert()
{
if(R==10)
printf("overflow");
else
{   scanf("%d",&a[R]);
R++;
}
}

delet()
{
if(F==R)
printf("underflow");
else
{
F++;
}
}

display()
{
for(i=F; i<R; i++)
printf("\n\n%d",a[i]);
}
