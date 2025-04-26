#include <stdio.h>
#include <unistd.h> // Add this for usleep
int main()
{
    int number[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%lu\n",sizeof(number));
//用sizeof计算数组的大小
    printf("%lu\n",sizeof(number[1]));
//计算number[1]数组里的元素大小
    int n=sizeof(number)/sizeof(number[1]);
    printf("%d\n",n);
//计算数组的个数
    printf("%d\n",number[2]);
    printf("%d\n",number[5]);
    //number[2]=3;number[5]=6
int arr3[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
printf("%d\n",arr3[2][3]);
//输出是12 是这个数组的第0，1，2列，第0，1，2，3个数
//二维数组 三行四列 
int arrk[][5]={1,2};
//二维数组初始化可以省略行但是不可以省略列
int arr4[3][5]={{1,2},{3,4},{5,6}};
//按行初始化，只初始化了每行的前两个数字
    int i=0;
    for(i=0;i<10;i++)
    printf("%d\n",number[i]);
//如何打印整个数组
//如何输入一个数组并且完整打印
/*  int arr[4];
    int j=0;
    for(int j=0;j<5;j++)
    {
    printf("please input an integer to the array.\n");
    scanf("%d",&arr[j]);
    }
    for (j=0;j<5;j++)
    {
        printf("%d\n",arr[j]);
        printf("&arr[%d]=%p:\n",j,&arr[j]);
        //%p是用来打印内存地址的
    }*/
/*    int arrnew[3][5]={};
    for(int m=0;m<3;m++)
    {
        for(int n=0;n<5;n++)
        {   printf("please input an integer in this array.\n");
            scanf("%d",&arrnew[m][n]);}
    }
    for(int m=0;m<3;m++)
    {
        for(int n=0;n<5;n++)
        {   printf("%d\n",arrnew[m][n]);
            printf("&arrnew[%d][%d]:%p\n",m,n,&arrnew[m][n]);}
    }*/
//变长数组
/*int t;
int f =0;
printf("please input a number.\n");
scanf("%d",&t);
int arr[t];
//不能在你还不知道 t 值的时候就用它来定义变长数组。这会导致数组大小是随机的（未定义行为）。
//应该先输入 t，再用 t 定义数组。
for (f =0;f<t;f++)
{   printf("please input a number in the array.\n");
    scanf("%d",&arr[f]);}
for (f=0;f<t;f++)
{printf("%d",arr[f]);}*/
    
//编写代码，使得多个字符从两端移动，向中间汇聚
char text1[]="******************";
char text2[]="Welcome to here***";
//注意在数组中写入字符的写法！！！
//一般就是两种 char text1[]="hello"; 或者 char text2[]={"h","e","l","l","o","\0"};
//这两种可以说是等价的 “hello”本身隐藏了一个结束符号\0，要打印字符串的时候用第一种比较多，要存储单独字符的时候用第二种比较多
printf("size of text1 is %d.\n", sizeof(text1));
int left =0;
int right=sizeof(text1)-1;
//把字符串放进数组要留一个位子给\0，用sizeof计算字符串的大小是包括\0的
//用strlen计算的是\0之前有意义的字符 这里用strlen就不需要-1
while(left<=right)
{
    usleep(1000 * 1000);
    text1[left]=text2[left];
    text1[right]=text2[right];
    //char text1[]="******************"; chartext1[1]是一个字符表示*。 text1[1]是一个变量，表示数组里下标为1的那个位置
    //char text1[left]=char text2[left];是错误的！！！
    //两个不同的字符是不会相等的，只有数组中的变量才会相等
    left++;
    right--;
    printf("%s\n",text1);
}
//在这个数组中查找指定值的 n，找到就打印出 n 所在的下标，找不到就打印：“找不到”。
int arrfin[]={4,8,9,11,15,18,20,29,34,67};
int left1=0;
int right1=sizeof(arrfin)/sizeof(arrfin[0])-1;
//strlen只能用来计算字符的个数，sizeof计算的是数组所占字节的大小，
// int right1=sizeof(arrfin)/sizeof(arrfin[0])-1;是一个常见的求元素的右边下标的方法。
int key =15;
int mid=(left1+right1)/2;
int find=1;
while(left1<=right1)
{
    if (key<arrfin[mid])
    right1=mid-1;
    else if(key>arrfin[mid])
    left1=mid+1;
    else
    {
    find=1;
    printf("找到了,下标为%d\n",mid);
    break;
    }   
    if (find==0)
    printf("没找到。\n");
}

return 0;
}