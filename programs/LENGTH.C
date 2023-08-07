main()
{
char a[]="anish";
int b;
int strb(char*);
clrscr();
b=strb(a);
printf("\n string=%s length=%d",a,b);
getch();
return(0);
}
int strb(char*s)
{
int c=0;
while(*s!='\0')
{
c++;
s++;
}
return(c);
}