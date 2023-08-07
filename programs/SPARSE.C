
int a[10][10],r,c,z=0,nz=0;
int b[50][3],i,j,k=1;

main()
{      clrscr();

printf("enter rows matrices");
scanf("%d",&r);
printf("enter columns matrices");
scanf("%d",&c);

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);

if(a[i][j]==0)
z++;
else
nz++;
}      getch();
}

if(z<=nz)
{
printf("not sparse");
exit();
}
b[0][0]=r;
b[0][1]=c;
b[0][2]=nz;
for(i=0; i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
 k++;
 }
 }
 }

 for(i=0;i<k;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%d",b[i][j]);
 }
 printf("\n");
 }
 }
