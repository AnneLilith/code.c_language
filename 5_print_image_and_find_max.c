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

/*#include <stdio.h>

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
}*/

//冒泡函数 内层循环每两位相邻的数比较大小，一共要比较总数减一次，
// 每次内层循环都可以把最大的数推到队伍最后，最坏的情况需要推总数减一次 就是需要实现总数减一次外层循环
/*int main() {
    int n;
    int m;
    scanf("%d %d",&n,&m);
    int arr1[n];
    int arr2[m];
    int mid;
    int a=m+n;
    int arr3[a];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    for (int i=0;i<m;i++)
    {
        arr3[i+n]=arr2[i];
    }
    for(int i=0;i<m+n-1;i++)  // 外层是m+n-1次
    {
        for(int j=0;j<m+n-1-i;j++)  // 内层是m+n-1-i次
        {
            if(arr3[j]>arr3[j+1])
            {
                mid=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=mid;
            }
        }
    }
    for(int i=0;i<a;i++)
        printf("%d ",arr3[i]);

    return 0;  
}*/
