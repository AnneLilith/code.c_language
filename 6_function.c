#include <stdio.h>
/*int add(int x,int y)
{
    int c= x+y;
    return c;
}
int main()
{
    int a=5;
    int b=6;
    printf("add(5,6)=%d\n",add(5,6));
    printf("%d %d",a,b);
    return 0;
}*/
/*void set_arr(int arr[],int azz)
{
for(int i=0;i<azz;i++)
{
    arr[i]=-1;
}
}
void print_arr(int arr[],int azz)
{
    for(int i=0;i<azz;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arrab[10]={0,1,2,3,4,5,6,7,8,9};
    int azz=sizeof(arrab)/sizeof(arrab[0]);
    set_arr(arrab,azz);
//定义（初始化）的时候这样用int arrab[10];表示需要这么大的空间存放数组。
// 后边引用一整个数组的时候就用arrab就行，如果还用arrab[10]表示的是下标为10的元素
    print_arr(arrab,azz);
    return 0;
}*/
/*int leap_year(int x);
int main()
{
    int y;
    scanf("%d",&y);
    int r= leap_year(y);
    if(r)
    printf("leap year.\n");
    else
    printf("not a leap year.\n");
    return 0;
}
int leap_year(int x)
{
    if(x%400==0||(x%4==0&&x%100!=0))
    return 1;
    else
    return 0;
}*/

void test() {
    // static 修饰局部变量
    static int i = 0; // 只在第一次调用时初始化为 0
    i++;              // 每次调用时，i 的值会累加
    printf("%d ", i); // 输出当前的 i 值
}

int main() {
    int i = 0; // 定义一个局部变量 i
    for (i = 0; i < 5; i++) {
        test(); // 调用 test() 函数
    }
    return 0;
}