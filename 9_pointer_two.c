#include <stdio.h>
//# define NDEBUG
//NDEBUG即nodebug,这个宏加上说明不需要assert了，去掉说明还需要assert，处于调试阶段
# include <assert.h>
// Created by 熊欣羽 on 03/07/2025.
void swap(int *pam,int*pbm)
//在函数声明的时候 void swap（&a,&b) 是错的，因为函数声明后面需要跟类型+参数，&a是一个取地址表达式，是不合适的
{
    int temp=0;
    temp=*pam;
    *pam=*pbm;
    *pbm=temp;
}
int main() {
    int a=10;
    const int *pa=&a;
    //const修饰int，意思是*pa（指针指向的值）是常量整数
    int * const pu=&a;
    //const修饰的是pa，意思是指针是常量指针，常量指针的意思就是地址不能变
    const int * const pn = &a;
    //意思是常量指针指向的值是常量整数，两个都不可以变
    //一个变量的地址可以用多个指针变量来存
    //指针初始化
    int b=20;
    int *pb=&b;
    assert(pb!=NULL);
    //成立程序继续 不成立函数不能继续
    int *pm=NULL;
    //null需要大写
    int ma=56;
    int mb=65;
    int *pam=&ma;
    int *pbm=&mb;
    swap(&ma,&mb);
    printf("ma:%d\nmb:%d\n",ma,mb);
    //传地址说明要改变主函数中变量的值 传值说明不想改，只是想用到这些变量
    return 0;
}
//

