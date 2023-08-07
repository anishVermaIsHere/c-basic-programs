#include<stdio.h>
#include<conio.h>
struct a
{
int fg;
struct a*next;
} *p,*s;
main()
{    int k;
clrscr();     scanf("%d",&p->fg);
 if(s==NULL)
s=p;
else
{
p=(struct a*)malloc(sizeof(struct a));
p->next=NULL;
p->next=s;
s=p;
dis();
}}

dis()
{
for(p=s;p!=NULL;p=p->next)
printf("%d",p->fg);
}
