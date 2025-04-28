#include <stdio.h>

/*int main() 
{
    int n=0;
    printf("please input an integer!\n");
    while (scanf("%d", &n) != EOF)
    { 
        for(int i=0;i<=n-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
            if(i==j||j==n-1-i)
            printf("*");
            else
            printf(" ");
            }
            printf("\n");

        }
    }
     
    return 0;
}*/
//打印图像的思路是把图像像素化 每个点位都会有自己的坐标，考虑这些坐标有什么规律如何与空格坐标配合就行了

#include <stdio.h>

int main()
{
    printf("please input two integers.\n");
    int n;
    int m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("You need to input %d integers",n*m);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[m][n];
    printf("This is the transposed array:\n");
    for(int i =0;i<m;i++)
    {
        for(int j=0; j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}