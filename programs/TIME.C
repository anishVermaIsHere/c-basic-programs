#include<time.h>
#include<stdio.h>
 main()
{
int a,b,sl;
double p;

time_t  s,e;
time(&s);
printf("enter two no.");
scanf("%d%d",&a,&b);
sl=a+b;
printf("%d",sl);
time(&e);


p=difftime(e,s);
printf("\n %lf",p);
getch();
}
