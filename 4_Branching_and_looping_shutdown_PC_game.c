//写一个关机程序
//功能：
//程序运行起来后，电脑就倒计时1分钟关机
//如果在1分钟内输入：我是猪，就取消关机
//不输入的话，1分钟后就关机
//
#include <stdio.h>
#include <stdlib.h>
//used for sleep function and system function
#include <string.h>
//used for string functions, like strcmp,to compare whether two strings are equal
/*int main ()
{
    char input[20]={0};
    //attention a string is required, not a number.
    system("shutdown -s -t 60");
    again:
    printf("Input “我是猪”, otherwise I will shut dowm your laptop!\n");
    scanf("%s",input);
    if (strcmp("我是猪",input)==0)
    {system("shutdown -a");
    printf("You save your laptop!\n");}
    else
    {printf("Are you sure you want to shut down your laptop?\n");
    goto again;}
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char input[50] = {0};
    system("shutdown -s -t 60"); // 倒计时1分钟关机

again:
    printf("请输入“我是猪”，否则电脑将在1分钟后关机：\n");

    // 使用fgets读取整行
    fgets(input, sizeof(input), stdin);
//stdin是标准输入流，fgets函数会读取一行输入，包括空格和换行符
    // 去掉换行符，否则strcmp比较会失败
    input[strcspn(input, "\n")] = 0;
//strcspn函数返回字符串中第一个换行符的位置
    if (strcmp("我是猪", input) == 0)
    {
        system("shutdown -a");
        printf("你成功拯救了你的电脑！\n");
    }
    else
    {
        printf("你确定要让电脑关机吗？再试一次吧。\n");
        goto again;
    }

    return 0;
}

