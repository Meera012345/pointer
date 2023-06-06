#include<stdio.h>
void main()
{
	int a[100],i,n;
	printf("Enter your array size:-");
	scanf("%d",&n);
	int *p1;
	p1=a;
	int b[100],ans;
	int *p2;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%u===>%d\n",p1+i,*(p1+i));
	}
	printf("\nAll elements suqare:-\n\n");
	for(i=0;i<n;i++)
	{
		ans=(a[i])*((a[i]));
		b[i]=ans;
	}
	p2=b;
	for(i=0;i<n;i++)
	{
		printf("%u===>%d\n",p2+i,*(p2+i));
	}
	
}
