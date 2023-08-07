int a[10],i,f,r,f1,r1,choice;
char ch='y';
main()
{
clrscr();

f1=9;
r1=9;
while(ch=='y')
{
printf("\n 1 insert
yleft");
printf("\n 2 delete left");
printf("\n 3 list left");
printf("\n 4 insert right");
printf("\n 5 delete right");
printf("\n 6 list right");
printf("\n enter choice");
scanf("%d",&choice);
switch(choice)
{
case1 : insert_left(); break;
case2 : delete_left(); break;
case3 : list_left(); break;
case4 : insert_right(); break;
case5 : delete_right(); break;
case6 : list_right(); break;
}
printf("to continue");
flushall();

scanf("%c",&ch);


}
}
insert_left()
{
if(r>r1)
printf("overflow");
else
{
scanf("%d",&a[r]);
r++;
}
}
insert_right()
{
if(r>r1)
printf("overflow");
else
{
scanf("%d",&a[r1]);
r1--;
}}
delete_left()
{
if(f==r)
printf("underflow");
else
f++;
}
delete_right()
{
if(f1==r1)
printf("underflow") ;
else
f1--;
}
list_left()
{
for(i=f;i<r;i++)
{
printf("%d",a[i]);
}
}
list_right()
{
for(i=f1;i<r1;i--)
{
printf("%d",a[i]);
getch();
}
}