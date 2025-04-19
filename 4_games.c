#include <stdio.h>
#include <math.h>
/*int main()
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
}*/
//求10个整数中的最大值
/*int main()
{
    int num[10];
    int max;
    int i;
    printf("please input 10 integers.\n");
    //注意看这一段是如何输入数组的！
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(i=0;i<10;i++)
    //注意如果是数组的话 第一个下标一定是0
    {
    if (num[i]>max)
    max=num[i];
    //注意这里取最大值的思路！我这里有10个苹果，凡是比我手中最大的苹果大的苹果，它就会成为最大的苹果！
    }
    printf("The biggest number among these 10 numbers is %d",max);
    return 0;
}*/
/*//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main()
{
    int i;
    int j;
    float new;
    float sumadd=0;
    float nouveau;
    float summinus=0;
    //如果设置一个变量 有必要确定初始化的值就需要确定，否则这个值是随机的，计算结果容易出错。
    float final;
    for(i=1;i<=99;i+=2)
    {
        new=1.0/i;
        //如果是new=1/i 两个整数相除，结果只会是整数，得不到浮点数
        //混合运算中 只要有一个是浮点数 结果就会是浮点数
        sumadd=sumadd+new;
    }
    for(j=2;j<=100;j+=2)
    {
        nouveau=1.0/j;
        summinus=summinus+nouveau;
    }
    final= sumadd-summinus;
    printf("the resault is %f\n",final);
    return 0;
}*/
//数9的个数
//数一下 1到 100 的所有整数中出现多少个数字9
/*int main()
{
    int number =0;
    for (int i=1;i<=100;i++)
    {
    if(i%10==9)
    number++;
    if(i/10==9)
    number++;
//注意我没有考虑到这一点，如何计算十位为9的数字个数！
    }
printf("There are %d integers between 1 and 100 which includes 9.\n",number);
    return 0;
}*/
//打印100到200之间的素数
/*int main()
{
    for(int i=3;i<=199;i=i+2)
    {
    int flag=1;
//这里必须要假设i是质数，因为后面的循环在找i不是prime的证据，穷举不得最后证明i是prime，逻辑才是通的
//否则就假设i不是prime，再找它是的证据，穷举不得说明它不是
    for(int j=2;j<=(int)sqrt(i);j++)
    {
        if(i%j==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("%d\n",i);
    //注意for(int j=2;j<=(int)sqrt(i);j++)在找不是的证据，if（flag）说明如果是怎么办，这两个在逻辑上是并列的，for（flag）应该在外层循环
    }
    return 0;
}*/
//打印1000年到2000年之间的闰年
//闰年规则：
//1. 年份能被 4 整除，但不能被 100 整除。
//2. 或者，年份能被 400 整除。

/*int main()
{
    int year=1000;
    for (year=1000;year<=2000;year++)
    {
        if(year%4==0&&year%100!=0)
        printf("%d\n",year);
        else if(year%400==0)
        printf("%d\n",year);
    }
    return 0;
}*/
/*给定两个数，求这两个数的最大公约数
例如：
输入：20 40 
输出：20*/
int main()
{
    int m=1;
    int n=1;
    int i=1;
    int min=1;
    int max=1;
    printf("Please input two integer:\n");
    scanf("%d %d",&m,&n);
    if(m>n)
    min=n;
    else
    min=m;
    for(i=1;i<=min;i++)
    {
        if (m%i==0&&n%i==0)
        {
            max=i;
//这一点我写得不对！！应该是每找到最大值i就更新
        }
    }
printf("The greatest common diviser is %d.\n",max);
    return 0;
}
//在 switch 语句中，break 是用来避免 fall-through 的；在循环结构中，break 主要用于在满足条件时提前退出循环
