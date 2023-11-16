#include "stdio.h"
main()
{
 int i=0,a=0,b=0,x;
 printf("input");
 scanf("%d",&x);
 while(x!=1)
 {if(x%2!=0)
    a=3*x+1;
  else
    a=x/2;
  if(b<a||b<x)
   {  if(x>a)
	    b=x,x=a;
      else
        b=a,x=a;
   }
  else
     x=a;
  i++;
 }
 printf("%d  %d",i,b);
}