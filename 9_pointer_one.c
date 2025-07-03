#include <stdio.h>
//
// Created by 熊欣羽 on 17/06/2025.
//
int my_strlen(char*s)
{
    char*p=s;
    //字符串“abc”可以看作一连串水果摊， 有水果摊“a“，“b"，“c“和"\0",char*s="abc",说明一个叫s的房间里面放了这串水果摊里第一个摊位的地址
    //char*p=s意思是把s房间里装的地址复制了一份装进p房间
    //在解引用的时候，p是指针变量的名字/装有地址信息*p才是地址的具体内容
    //但是char*p=s不是解引用操作 而是声明操作，*p有*的作用是说我建了一个房间p用来存地址
    while (*p!='\0')
        p++;
return p-s;
}
int main() {
    int a=10;
    printf("%p\n",&a);
    //注意取地址是%p！！
    int *pa=&a;
    printf("%d\n",*pa);
    //这个时候是解引用阶段 表示的是地址指向的值
    //*pa声明变量的时候只是表示它是个指针变量 解引用也就是使用的时候 用它是用来表示地址指向的值
    *pa=20;
    //对a的内容进行修改 和a=20是一个效果
    printf("%d\n",*pa);
    printf("%zu\n",sizeof(char*));
    printf("%zu\n",sizeof(int*));
    printf("%zu\n",sizeof(short*));
    printf("%zu\n",sizeof(double*));
    //sizeof里面可以放各种类型的数据 计算结果是size—t类型数据 占位符应该是zu
    //在64位系统下 指针变量都占8个字节
    int n = 0x11223344;
    //这是一个16进制的数字
    int * pi=&n;
    *pi=0;
    int m=0x11223343;
    char *pc=(char*)&m;
    //(char*)强制类型转换
    *pc=0;
    //*pi 指向的是 n 的内容，因为是整形指针变量，所以有权限把 n 存储的16进制数字的8个字节内容都改了，让n变成0
    //*pc 指向的是 m 的内容，但它没有权限把整个 m 都改掉，只能改第一个字节,m会变成改了第一个字节的一个16进制数
    int b=20;
    int* pb=&b;
    char* pbm=(char*)&b;
    printf("%p\n",&b);
    printf("%p\n",pb);
    printf("%p\n",pb+1);
    printf("%p\n",pbm);
    printf("%p\n",pbm+1);
    //pb 是：指针变量 pb+1 地址移动一个int单位，也就是4个字节
    //*pb 是：解引用表达式*pb+1是指针变量解引用后b的值20+1
    //char*类型指针变量加1，地址跳过一个字节，int*类型指针变量加1，地址跳过4个字节
    void* po=&b;
    //void类型的指针变量是一个通用指针 但是它不能进行运算和解引用操作 *po=10;是不对的
    //指针+-整数
   int arrm[10]={0,1,2,3,4,5,6,7,8,9};
    int*arrmp=&arrm[0];
    int num=sizeof(arrm)/sizeof(arrm[0]);
    for (int i=0;i<num;i++)
    {
        printf("%d ",*(arrmp+i));
        //注意这一条！！
    }
    //指针-指针
    printf("%d\n",my_strlen("abc"));
    //指针的关系运算
  int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=&arr1[0];
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    while (p<arr1+sz) {
        printf("%d\n",*p);
        p++;
    }

    return 0;
}
