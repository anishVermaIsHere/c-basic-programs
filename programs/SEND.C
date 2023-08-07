#include<stdio.h>
struct a
{
int roll;
struct a *next,*prev ;
}
 *s,
*e,*t,*k,*p  ;
 char ch='y'  ;
 int choice ;
 main()
 {
 while(ch=='y')
 {
 clrscr();
 printf("\n \n(1) insert start ");

 printf("\n \n(2) insert end");

 printf("\n \n(3) insert before");

 printf("\n \n(4) insert after");

 printf("\n \n(5) list");

 printf("\n \n(6) delete start");

 printf("\n \n(7) delete end");

 printf("\n \n(8) delete middle");

 printf("\n \n Enter Choice");
 scanf("%d",&choice);

 switch(choice)
 {
 case 1 : insert_start(); break;
 case 2 : insert_end(); break;
 case 3 : insert_before(); break;
 case 4 : insert_after(); break;
 case 5 : list(); break;
 case 6 : delete_start(); break;
 case 7 : delete_end(); break;
 case 8: delete_middle(); break;
 }
 printf("\nTo Continue");    flushall();
 scanf("%c",&ch);
 }
 getch();
 }


 list()
 {
 for(t=s;t!=NULL;t=t->next)
 printf("%d",t->roll);
 }

 insert_start()
 {
 t=(struct a*)malloc(sizeof(struct a));
 scanf("%d",&t->roll);
 t->next=NULL;
 if(s==NULL)
 {

 s=t; e=t;
 }
 else
 {
 t->next=s;
 s=t;
 }
 }


 insert_end()
 {
 t=(struct a*)malloc(sizeof(struct a));
 scanf("%d",&t->roll);
 t->next=NULL;
 if(s==NULL)
 {
 s=t; e=t;
 }
 else
 {
 e->next=t;
 e=t;
 }
 }


 insert_before()
 {
 int n;
 printf("enter the roll before which to insert ");
 scanf("%d",&n);
 k=(struct a*)malloc(sizeof(struct a));
 scanf("%d",&k->roll);
 for(t=s;t!=NULL;t=t->next)
 {
 if(t->next->roll==n)
 {
 p=t->next;
 t->next=k;
 k->next=p;
 break;
 }
 }
 }


 insert_after()
 {
 int n;
 printf("enter the roll after which to insert ");
 scanf("%d",&n);
 k=(struct a*)malloc(sizeof(struct a));
 scanf("%d",&k->roll);
 for(t=s;t!=NULL;t=t->next)
 {
 if(t->roll==n)
 {
 p=t->next;
 t->next=k;
 k->next=p;
 break;
 }
 }
 }


 delete_start()
 {
 t=s;s=s->next;
 free(t);
 }
 delete_end()
 {
 for(t=s;t!=NULL;t=t->next)
 {
 if(t->next==e)
 {
 free(e);
 e=t;
 e->next=NULL;
 }
 }
 }

 delete_middle()
 {
 int n;
 printf("enter no to delete");
 scanf("%d",&n);
 for(t=s;t!=NULL;t=t->next)
 {
 if(t->next->roll==n)
 {
 p=t->next;
 k=p->next;
 t->next=k;
 free(p);
 }
 }
 }

