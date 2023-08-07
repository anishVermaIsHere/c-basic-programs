int a[10],i=-1,j,choice;
char ch='y';
main()
{
while(ch=='y')
{           clrscr();
printf("\n1 push");
printf("\n2 pop");
printf("\n3 display");
printf("\n enter choice");
scanf("%d",&choice);

switch(choice)
{
case 1: push(); break;
case 2: pop(); break;
case 3: display(); break;
}
printf("  to continue");
flushall();
scanf("%c",&ch);
}
getch();
}


push()
{
if(i==9)
printf("overflow");
else
{
i++;
scanf("%d",&a[i]);
}
}


pop()
{
if(i==-1)
printf("underflow");
else
{
i--;
}
}

display()
{
for(j=i; j>=0 ;j--)
printf("\n\n%d",a[j]);
}

