//写一个二分查找函数
// 功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回-1.
# include <stdio.h>
# include <math.h>
/*int bin_search(int arr[], int left, int right, int key)
{
    int mid=(left+right)/2;
    while(left<=right)
    {
    if(key<arr[mid])
    {right=mid-1;
    mid=(left+right)/2;}
    else if(key>arr[mid])
    {
        left=mid+1;
        mid=(left+right)/2;
    }
    else
    {
    return mid;}
    }
    return -1;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=7;
    int right=sizeof(arr)/sizeof(arr[0])-1;
    int result= bin_search(arr,0,right,key);
    printf("Result: %d\n", result);
return 0;
}*/
/*void multiple(int x)
//虽然打印东西，但是并不会返回东西，所以应该用void
{
    int i;
    int j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            int c=i*j;
            printf("%d=%d*%d ",c,i,j);
        }
        printf("\n");
    }

}
int main()
{
    int y;
    scanf("%d",&y);
    multiple(y);
    //声明的时候才需要加数据类型，引用不需要
    return 0;
}*/
//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数
/*int is_prime(int x)
{
    for(int j=2;j<=sqrt(x);j++)
    {
        if(x%j==0)
        {return 0;
        break;}
        else
        return 1;
    }
}
int main()
{
    
    for(int i=100;i<=200;i++)
    {
    if(is_prime(i)==1)
    printf("%d\n",i);
    }
    return 0;
}*/
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
void fixzero(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=0;
    }
}
void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int size)
{
    int intermid;
for(int i=0;i<size/2;i++)
{
    intermid=arr[i];
    arr[i]=arr[size-1-i];
    arr[size-1-i]=intermid;
}
}
int main()
{
    int init[10];
    int size=10;
    fixzero(init,10);
    for(int i=0;i<10;i++)
    {
        init[i]=i+1;
    }
    printarr(init,10);
    reverse(init,10);
    printarr(init,10);
    return 0;
}