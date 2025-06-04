# include <stdio.h>
int main () {
    //原 → 补：取反加1
    //补 → 原：再取反加1
    //逻辑对称不用烦，转换方向不必换
    /*int num = 10;
    int n = num << 1;
    //左移操作符
    int m=num>>1;
    //右移操作符
    //但是不可以移动负数位
    printf("%d\n",num);
    printf("%d\n",n);
    printf("%d\n",m);
    int num1 =-3;
    int num2 =5;
    //正数的原码 = 反码 = 补码
    //5的补码和原码一样
    //负数的补码 = 对正数原码取反 + 1
    //-3的补码就是3的补码
    printf("%d\n", num1 & num2);
    //按位与
    //// 1. 按位与（&） - 都是1才是1
    // 00000110
    // &00000011
    // =00000010 -> 2
    printf("%d\n", num1 | num2);
    //按位或
    //  // 2. 按位或（|） - 有1就是1
    // 00000110
    // |00000011
    // =00000111 -> 7
    printf("%d\n", num1 ^ num2);
    //按位异或
    //// 3. 按位异或（^） - 相同为0，不同为1
    // 00000110
    // ^00000011
    // =00000101 -> 5
    printf("%d\n", ~0);
    //对0进行按位取反
    //包括符号位
    //a^a=0
    //a^0=a
    //a^b^a=b
    //a^a^b=b*/
    //不能创建临时变量 实现两个整数的交换
    /*int a=10;
    int b=20;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);*/
    //计算一个整数存在内存中二进制1的个数
   /* int num=-1;
    int count=0;
    for (int i=0;i<32;i++) {
        if (num&(1<<i))
            count++;
    }
    printf("%d\n",count);
    return 0;*/
    //把13的二进制代码的第五位修改为1 然后修改为0
    /*int num=13;
    num=num|(1<<4);
    printf("%d\n",num);
    num=num&~(1<<4);
    printf("%d\n",num);*/
    //逗号表达式
    int a=1;
    int b=2;
    int c=(a>b,b=a+10,a=b+1);
    printf("%d\n",c);
    int d=5;
    if (a = b + 1, c = a / 2, d > 0);
    //相当于a=b+1;
    //c=a/2;
    //if (d>0)
    //两种写法意思相同

} //
// Created by 熊欣羽 on 04/06/2025.
//
