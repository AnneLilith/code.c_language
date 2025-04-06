# include <stdio.h>
int main()
{
int x = 6/4;
float y=6/4;
printf("%d\n",x);
printf("%f\n",y);
//x=1, y=1.000000
//because 6 and 4 are both int, so the outcome only takes the integer part, 
// even if the result is float
int a = 6/4.0;
float b = 6/4.0;
printf("%d\n",a);
printf("%f\n",b);
//a=1, b=1.500000
//结果和除数/被除数数据类型有关，也受到结果本身数据类型限制，
int score =5;
score=(score/20)*100;
//score=0, because score/20 is 0, so the result is 0
int score1 =5;
score1=(score1/20.0)*100;
//score1=25.000000, because score/20.0 is 0.25, so the result is 25
//score1 is an int, but score1/20.0 is a float
//运算过程可以是浮点数 结果要求整数再改成整数类型
int c =6%4;
//c=2, because 6%4 is 2, this operator only takes the integer part
//% is the remainder operator, which is used to calculate the remainder of two integers
printf("%d\n",-11%5);
printf("%d\n",11%-5);
printf("%d\n",-11%-5);
//the outcome is -1, 1, -1
//the result of the remainder operator is the same sign as the first number
int d = 10;
d+=3;
//d=13, d=d+3
d-=2;
//d=11, d=d-2
d*=2;
//d=22, d=d*2
int e = 12;
e++;
//e=13, e=e+1
e--;
//e=12, e=e-1
int f = ++e;
//f=13, f=++e, e=13
//f=++e means first add 1 to e, then assign the value of e to f
int g =e++;
//g=13, g=e++, e=14
//g=e++ means first assign the value of e to g, then add 1 to e
int h=(int) 3.14;
//(int) forcefully convert 3.14 to int
printf("%s says it is %d o'clock.\n","Anna",12);
//%s is a string, %d is an int
//if the number of the parameters is not equal to the number of the format specifiers,
//the outcome will have some random characters
printf("%5d\n",123);
//%5d means the number is right aligned, and the total width is 5
printf("%-5d\n",123);
//%-5d means the number is left aligned, and the total width is 5
printf("%12f\n",123.45);
//%12f means the number is right aligned, and the total width is 12
//with 6 decimal places by default, 2 spaces before the decimal point, so in total 12
printf("%+d\n",12);
printf("%+d\n",-12);
//%+d ensures there always be a sign before the number
printf("%.3f\n",123.4);
//%.3f means the number is right aligned, and the total width is 6
printf("%8.3f\n",123.4);
//%8.3f means the total width is 8, and the decimal part is 3
printf("%*.*f\n",6,2,123.456);
//%*.*f means the total width is 6, and the decimal part is 2
printf("%.5s\n","hello world");
//%.5s means the string is right aligned, and the total width is 5
//so the outcome is hello
int performance=0;
printf("what is your score?\n");
scanf("%d\n",&performance);
printf("your score is %d\n",performance);
//&performance is the address of performance
//when user input a number, scanf will ignore the space and enter
int s=5;
int w=6;
float z=7.0;
int r = scanf("%d %d %f",&s,&w,&z);
printf("%d\n",r);
//r=3, because there are 3 variables to be input
char name[5];
printf("what is your name?\n");
//💡 问题 1：我只输入了 4 个字母，为什么会默认带一个结尾符号？
//在 C 语言中，字符串是以 \0（空字符）结尾的字符数组。
//即使你只输入了 abcd，C 会自动在它后面加上一个隐藏的结尾字符 \0，来表示“字符串到这里结束”。
scanf("%s",name);
//✅ 数组名是地址，不用再加 &；数字变量要手动加 & 告诉 scanf 变量的位置。
printf("your name is %s\n",name);
//❗为什么输入更多字符时还是能显示？
//因为 scanf("%s", name); 不会限制输入长度，它会继续往内存里写，哪怕超出了 name[5] 的范围！
//也就是说，它越界写入了内存，把数组外面的内容也写了进去，然后 printf 又照着 %s 一直打印，直到遇到第一个 \0 为止。
//🧠 举个比喻：
//你给了 name 只够放 5 个字母的小盒子，但 scanf 不管盒子大小，只要你手里有更多字符，它就“硬塞”进去，塞爆了还继续往别的盒子里放。
//正确的写法是 scanf("%4s", name);，这样就限制了最多只能输入 4 个字母，最后一个位置留给 \0。
char bag[5];
scanf(" %c",&bag);
//%c means to input a character, but it will not ignore the space and enter
// %c means to input a character, but it will ignore the space and enter
//for other types of variables, 
// it will ignore the space and enter by default, just in the opposite of %c
int year =0;
int month =0;
int day=0;
printf("please input your birthday:\n");
scanf("%d*%c%d*%c%d",&year,&month,&day)
printf("this is yourbirthday:%d %d %d.\n",year,month,day);
//%d*%c%d*%c%d means to input a date, but the format is not fixed
//* is a wildcard, anything after it will be ignored
//%c means to input a character, *%c means to ignore this character
return 0;
}
