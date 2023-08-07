int a[10],b[10],c[20],i,j,k,n1,n2    ;
main()
{
scanf("%d",&n1);
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
scanf("%d",&n2);
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
for(i=0;j=0;i<n1&&j<n2;)
{
if(a[i]<b[j])
{
c[k]=a[i];
k++;
i++;
}

else
if(b[j]<a[i])
{
c[k]=b[j];
k++;
j++;
}

else
{
c[k]=a[i];
k++;
i++;
c[k]=b[j];
k++;
j++;
}
}

while(j<n2)
{
c[k]=b[j];
k++;
j++;
}

while(i<n1)
{
c[k]=a[i];
k++;
i++;
}
for(i=0;i<n1+n2;i++)
printf("%d",c[i]);
}
