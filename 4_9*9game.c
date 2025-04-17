#include <stdio.h>
int main()
{
    int i=0;
    int j=1;
    int c=0;
    for (i=1;i<=9;i++)
    {   
       for (j=i;j<=9;j++)
//这个是两层循环，循环的时候先固定i的值，j开始变，内层循环了一圈以后i加1，外圈来到第二次循环
       {if (j<9)
        {c=i*j;
        printf("%d*%d=%d ",i,j,c);}
        else
        {c=i*j;
        printf("%d*%d=%d\n",i,j,c);}
       }
    }
     
    return 0;
}