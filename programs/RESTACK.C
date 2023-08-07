int i=-1,s[10],q[10],f,r,j;

main()
{
int choice;
char ch='y';

while(ch=='y')
{     clrscr();
printf("\n1 push");
printf("\n2 reverse");
printf("\n enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1: push(); break;
case 2: reverse(); break;
}

printf("  to continue") ;   flushall();
scanf("%c",&ch);
}              getch();
}

push()
{
if(i==9)
printf("overflow");
else
{
i++;
scanf("%d",&s[i]);
}
}
reverse()
{
display();
for(i=f; i<r; i++)
printf("%d",q[i]);
}


display()
{
for(j=i; j>=0; j--)
{
q[r]=s[j];
r++;
}
}
