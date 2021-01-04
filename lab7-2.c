#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int x=0;
    int y=0;
    while (a-- > 0)
    {
       if(0==b)
              {
                  x=y+2;
                  break;
              }
       else
             {
                 if(1==b)
  	                 x=y+10;
                 else
        	         x=y+20;
             }
    }
    printf("x=%d",x);
    return 0;
}
