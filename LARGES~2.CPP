#include<stdio.h>
#include<conio.h>
void main()
{

int i,n,ch[90],max;
printf("enter no");
scanf("%d",&n);
printf("enter array");
for(i=1;i<=n;i++)
scanf("%d",&ch[i]);
max=ch[0];
for(i=1;i<n;i++)
if(ch[i]>max)
{
max=ch[i];
}
printf("largest no :%d",max);
getch();
}