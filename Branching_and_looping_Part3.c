//猜数字游戏
//rand（）生成的值是一个伪随机数，固定的种子相当于输入的变量x，带入函数计算得到的值是固定的，只是计算过程过于复杂，所以看上去结果比较随机
//如果要rand（）生成的值不固定，那么种子的值也不能固定，所以一般用程序运行的时间作为种子
#include <stdio.h>
#include <stdlib.h>
//用来输入rand函数等
#include <time.h>
//用来输入与时间戳有关的函数
/*int main ()
{
    srand((unsigned int)time(NULL));
    //void srand(unsigned int seed);生成种子的函数
    //time(NULL)返回当前的时间戳，单位是秒
    printf("%d\n",rand());
    //rand()函数生成一个随机数
    printf("%d\n",rand());
    printf("%d\n",rand());

    return 0;
}*/
//猜数字游戏100-150
int main()
{   beginning:
    printf("********************************\n");
    printf("Do you want to guess the number?\n");
    printf("**Enter 1 or 2 to make a choice*\n");
    printf("********************************\n");
    printf("********1.game start************\n");
    printf("***********2.exit***************\n");
    printf("********************************\n");
    int choice = 0;
    scanf("%d",&choice);
    //switch(scanf("%d",&choice))
    //错误！不可以用输入值作为判断条件，只要是非0，条件1会一直为真，应该用返回值的具体值作为条件
    switch(choice)
    {
    case 1 :
    {
        printf("Game start!\n");
        printf("Guess what's the right number?\n");
        printf("The number is between 100 and 150.\n");
        printf("You have 5 chances.\n");
        srand((unsigned int)time(NULL));
        int number=rand()%51+100;
        int guess=1;
        for(int chance=5;chance>0;chance--)
        {
            scanf("%d",&guess);
        if (guess==number)
        
            {
            printf("You are right!\n");
            goto beginning;
            break;
            }
        else if (guess<number)
            printf("it is bigger.\n");
        else
            printf("it is smaller.\n");
        
        if (chance>1)
        printf("You have %d chances.\n",chance-1);
        else
        {printf("Game over!The number is %d.\n",number);
        goto beginning;}
        
        }
    break;
    }
    case 2 :
    break;
    default:
    printf("please enter the legal number.\n");
    goto beginning;
    }
    return 0;
}
//建议用while（1）一直循环游戏 除非break不能退出，这样逻辑更清晰