#include<stdio.h>
main()
{
	int a[11],i,j,k,t;
	printf("input ten number\n");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<10;i++) //choose paixufa daoxu
	{ 
	   k=i;
	   for(j=i;j<9;j++)//j<9 is right while j<10 is wrong because it will compare a[10] and a[9] which is useless and harmful
	    if(a[j+1]>a[j])
	      k=j+1;
	   t=a[i];
	   a[i]=a[k];
	   a[k]=t;
    }
    printf("input a number to insert\n");
    scanf("%d",&t);
    for(i=0;i<10;i++)
    {
    	if(a[i]==t)
    	{
    		k=i;
    	    break;
		}
	}//first find out the location
    for(j=10;j>i;j--)
    	a[j]=a[j-1];//then do the change do not together
	for(i=0;i<11;i++)
	printf("%d ",a[i]);
}