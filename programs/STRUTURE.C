struct student
{
char name[10];
int roll;
}e1,e2,e3;
main()
{
scanf("%s%d%s%d%s%d",&e1.name,&e1.roll,&e2.name,&e2.roll,&e3.name,&e3.roll);
printf("%s%d%s%d%s%d",e1.name,e1.roll,e2.name,e2.roll,e3.name,e3.roll);
}
