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
