//int a=3 占据4个字节 每个字节有8个比特位 a的存储内容就是32个比特位的二进制的3，由第一个或者最后一个字节在哪儿决定a的地址，这个地址是不固定需要查询得到的
//32 位下：int 4字节，指针 4 字节，最大寻址 2³² 字节（4GB）
//64 位下：int 4字节，指针 8 字节，最大寻址 2⁶⁴ 字节（理论值）
//64位只是允许更多地址的存在 就像把电话号码从10位改成13位一样 指针从4个字节改成8个可以存更多地址
    #include <stdio.h>
    struct stu {
    int age;
    char name[20];
    char id[20];
    char sex[5];
};//
struct stu s1;
//注意不要忘记结尾的；
//struct stu s1;这一句初始化了一个变量s1
struct stu {
    int age;
    char name[20];
    char id[20];
    char sex[5];
} s2;
//或者这样写也可以 定义数据类型的同时初始化了一个变量
struct van {
    int x;
    int y;
};
 struct van p1={10,20};
printf("%d %d\n",p1.x,p1.y);
//这个地方是指定成员初始化
//如果不指定也可以 就按成员顺序默认
//注意初始化和引用的格式和点的位置是不一样的
struct node {
    int data;
    struct van p;
    struct node* next;
};
struct node n1={4,{10,20},null};

// Created by 熊欣羽 on 08/06/2025.
//
