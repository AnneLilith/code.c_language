#pragma once 
//是一种指令，通常放在头文件的顶部，用于避免头文件的多重包含（Multiple Inclusion）。它是编译器的一种特殊指令，用来告诉编译器在编译期间，只包含该头文件一次，即使它在多个源文件中被引用多次。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS (ROW + 2)
#define COLS (COL + 2)
#define EASY_COUNT 10
//const是常量修饰符，放在int前面说明该变量不能被修改
//#define ROW 9没有这个好，因为9在这里只是文本替换，没有变量类型，容易出错
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
int GetMineCount(char mine[ROWS][COLS],int x,int y);
void FindMine(char show[ROWS][COLS],char mine[ROWS][COLS],int row,int col);