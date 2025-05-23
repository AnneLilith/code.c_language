# include "6_gamemine.h"
# include <stdio.h>
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            board[i][j]= set;
        }
    }
}
//用来初始化棋盘，棋盘里面放满字符，使用的时候再决定具体放什么字符
//在初始化二维数组的时候，至少第二维必须写死，所以用全局变量ROWS/COLS先给棋盘占位，然后再通过初始化int rows灵活调整参数
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    printf("—---—-扫雷游戏-----\n");
    for(int i=0;i<=col;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
        for(int i=1;i<=row;i++)
        {
            printf("%d ",i);
            for(int j=1;j<=col;j++)
            {
            printf("%c ",board[i][j]);
            //注意 这里打印的是字符不是数字 所以是%c
            }
            printf("\n");
        }
}
//注意函数声明中数组的大小还是有意义的 不可以规定board[9][9],然后又传一个board[10][10]的数组进去
//布置雷
void SetMine(char board[ROWS][COLS],int row,int col)
//其实函数写成这样也没有关系void SetMine(char board[ROW][COL],int row,int col);
//就是说不传入有边界的大棋盘，因为这个函数不涉及越界访问，但是因为要保持程序设计整体的一致性，最好还是用有边界的大棋盘
{
    int count = EASY_COUNT ;
    while(count>0)
{
    int x=rand()%row+1;
    int y=rand()%col+1;
    if(board[x][y]=='0')
    {
        board[x][y]='1';
        //一个字符应该用单引号
        count--;
    }
}
}
int GetMineCount(char mine[ROWS][COLS],int x,int y)
//传入的棋盘叫什么名字都可以，但是因为这个函数要求雷的个数，所以最好用mine表示
{
    return(mine[x-1][y-1]+mine[x-1][y]+mine[x-1][y+1]+mine[x][y-1]+mine[x][y+1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]-8*'0');
}
//✳️ 在 C 语言中，char 是字符也是整数。
//🚀 一旦参与数学运算，就自动变成它的 ASCII 值。
void FindMine(char show[ROWS][COLS],char mine[ROWS][COLS],int row,int col)
{
   int win=0;
   int x=0;
   int y=0;
   while(win<row*col-EASY_COUNT)
   {
    printf("Please input the coordinates:\n");
    scanf("%d %d",&x,&y); 
    if(x>=1&&x<=row&&y>=1&&y<=col)
    {
        if(mine[x][y]=='1')
        {
            printf("Boom!You are dead!\n");
            DisplayBoard(mine,row,col);
            //踩到雷了，让玩家死前看看所有雷和安全区的分布
            break;
            //踩到雷了，应该退出循环
        }
        else
        {
            int count=GetMineCount(mine,x,y);
            show[x][y]=count+'0';
            DisplayBoard(show,row,col);
            printf("Successfully defused the mine!\n");
            win++;
        }
    }
    else
    {printf("Please input the legal corrdinates!\n");}
   }
   if(win==row*col-EASY_COUNT)
   {
    printf("You survived! Congratulations\n");
    DisplayBoard(mine,row,col);
   }
}