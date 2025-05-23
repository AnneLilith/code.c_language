# include <stdio.h>
# include <stdlib.h>  // ✅ 提供 srand() 和 rand()
# include <time.h>
# include <unistd.h>
# include "6_gamemine.h"
void menu()
{
    printf("*****************************\n");
    printf("Do you want to play the game?\n");
    printf("*******1.Game start!*********\n");
    printf("***********0.Exit************\n");
    printf("*****************************\n");
}
void game()
{
char mine[ROWS][COLS];
char show[ROWS][COLS];
InitBoard(show,ROWS,COLS,'*');
InitBoard(mine,ROWS,COLS,'0');
DisplayBoard(show,ROW,COL);
SetMine(mine,ROW,COL);
FindMine(show,mine,ROW,COL);
}
int main()
{
    int input;
    srand((unsigned int)time(NULL));
// ✅ 1. 只初始化一次随机种子，更有“连续性”
//    - 调用 srand(time(NULL)) 是设置随机数的起点（种子）
//    - 设置一次后，rand() 每次调用都会给出不同的结果
// ✅ 2. 如果放在循环里，容易重复
//    - time(NULL) 以“秒”为单位
//    - 同一秒内多次设置种子，起点一样，rand() 结果也就一样！
//    - 会导致扫雷地雷每局位置都差不多甚至完全一样！
//一个随机数起点比每轮游戏都找个随机数起点好
    do
    {
        menu();
        //NULL一定要大写才可以被识别
        printf("Make your choice using a number!\n");
        char buffer[100]; // 创建一个字符串数组用于存用户输入

    printf("Enter a number: ");
    fgets(buffer, sizeof(buffer), stdin); // 从输入读取一整行，存入 buffer
//fgets(file gets string)它会读取一整行，直到遇到换行符 \n 或读满为止。
//它会保留换行符 \n，这是和 scanf() 的一个重要区别！
//最后会自动加上 \0 作为字符串的结束标志。
//stdin：代表“标准输入”，也就是键盘输入
    if (sscanf(buffer, "%d", &input) != 1) {
        printf("Invalid input! Please enter a number.\n");
        sleep(3);
        continue;
    }

        switch(input)
        {
            case 1:
            game();
            break;
            case 0: 
            printf("Exit the game.\n");
            break;
            default:
            printf("The number you entered is illegal.\n");
            sleep(3);
            //出现The number you entered is illegal.\n"马上进入了新的循环 
            // 这个过程太快以至于我以为没有这句话 可以加sleep语句让这句话停留一会儿
            continue;
        }
    }
    while(input !=0);
    return 0;
}
/*switch (expression) {
    case constant1:
        // 当 expression == constant1 时执行的代码
        break; // 跳出 switch 语句
    case constant2:
        // 当 expression == constant2 时执行的代码
        break;
    ...
    default:
        // 当 expression 不匹配任何 case 时执行的代码
        break;
}*/
//不同的case后面没有大括号 加了影响理解 