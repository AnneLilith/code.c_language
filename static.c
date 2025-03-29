#include <stdio.h>
extern int light;
int main() {
    printf("light in main: %d\n", light);
    register int n = 100;
    //寄存器变量的作用是告诉编译器，这个变量的访问频率很高，所以把它放在寄存器里，以提高访问速度。
    //因为硬盘和内存的访问速度远远低于CPU的运算速度，所以把变量放在寄存器里，可以提高程序的运行速度。
    return 0;
}

