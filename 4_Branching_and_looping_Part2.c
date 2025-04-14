#include <stdio.h>
#include <math.h>
//输入一个整数值，记录除3以后的余数
/*int main ()
{
    int a;
    printf("please input an integer.\n");
    scanf("%d",&a);
    switch (a%3)
    {
        case 0:
        printf("The reminder is 0.\n");
        break;
//break is used to exit the switch statement, otherwise the program will continue to execute the next case statement.
//: is necessary after case
        case 1:
        printf("The reminder is 1.\n");
        break;
        case 2:
        printf("The reminder is 2.\n");
        break;
    }

    return 0;

}*/
//输入1-5,显示工作日 输入6-7，显示周末
/*int main()
{
    int b;
    scanf("%d",&b);
//scanf does not have to pay attention to the format and add \n
    switch (b)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
//case 1-5 is the same as case 1, case 2, case 3, case 4, case 5
//so it can be written like this
        printf("workday.\n");
        break;
        case 6:
        case 7:
        printf("weekend.\n");
        break;
        default:
        printf("error.\n");
//default is the default case, if none of the above cases are met, it will execute this case
    }
    return 0;
}*/
//输入一个正整数，逆序打印这个整数的每一位
/*int main()
{
    int integer;
    printf("please input a positive integer.\n");
    scanf("%d",&integer);
    while (integer>0)
    {
        int reminder;
        reminder=integer%10;
       printf("%d ",reminder);
       integer=(int)integer/10;
//这个地方的强制类型转换是没有必要的
//可以直接写成integer=integer/10
//整数除以整数会自动取整数部分
//如果其中一个数是浮点数结果才会是浮点数
    }
    return 0;
}*/
//在屏幕上打印1-10的值
/*int main()
{
for(int i =1;i<=10;i++)
//for(循环变量的初始化；循环变量的条件判断；循环变量的调整)
//for(loop variable initialization; loop variable condition judgment; loop variable adjustment)
printf("%d\n",i);
return 0;
}*/
//计算1-100之间3的倍数的和
/*int main()
{
    int sum =0;
    for(int a =3;a<=99;a=a+3)
    sum+=a;
    printf("sum=%d\n",sum);
    return 0;
}*/
//do while
//在屏幕中打印1-10的值
/*int main()
{
    int i = 1;
    do
    {printf("%d\n",i);
    i=i+1;}
    while(i<=10);
//Attention! do while
//do must be followed by {}
//while();
    return 0;
}*/
//输入一个正整数，计算这个整数是几位数？
/*int main()
{
    int a;
    scanf("%d",&a);
    int i=0;
    do
    {a=a/10;
    i=i+1;
     }
    while(a);
    printf("%d\n",i);
// do while 需要注意到底哪些语句在循环里，哪些不在
//the format of for(  ;  ; )
    return 0;
}*/
//找出100-200之间的素数 并且打印在屏幕上
/*int main()
{
    for(int i=101;i<=199;i=i+2)
    {
        int flag =1;
        for(int j=2;j<=sqrt(i);j=j+2)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag)
        printf("%d\n",i);
    }

    return 0;
}*/
//注意flag的初始化值是有意义的 先要假定它为真，然后提出它为假的时候要满足什么条件。最后才能找到真正的质数
//而且flag的位置也要注意，它应该在循环之中，这样每次判断i是否为质数的循环都可以初始化一次 判断一次
//花括号的用法要注意

//go to 的用法
//goto容易陷入死循环 慎用
#include <stdio.h>

int main()
{
    goto A;  // 跳到 A，开始打印

B:
    printf("This is B.\n");
    goto C;

A:
    printf("This is A.\n");
    goto B;

C:
    printf("This is C.\n");

    return 0;
}
