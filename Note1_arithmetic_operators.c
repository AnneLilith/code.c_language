#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;// ++a：加给a+1，结果为6，用加完之后的结果给c赋值，因此：a = 6  c = 6
    //注意这里给a也加1了！！！
	b = ++c, c++, ++a, a++;
   // 这里先算b=++c, b得到的是++c后的结果，b是7
   // b=++c 和后边的整体构成逗号表达式，依次从左向右计算的。
   // 表达式结束时，c++和，++a,a++会给a+2，给c加1，此时c：8，a：8，b:7
	b += a++ + c; 
    //NOTE 1
    //先计算右边的表达式：
/*a++ + c
→ a++ 是 8（先用再加一）
→ c 是 8
→ 所以 a++ + c = 8 + 8 = 16

将结果加到 b 上：
b += 16
原来的 b 是 7
→ b 变成 7 + 16 = 23

别忘了 a++ 之后，a 自己要 +1：
a 原来是 8
→ a 变成 9*/
	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
    printf("%5d\n", 123456);
    //NOTE2
    //输出123456，宽度为5，右对齐
   //printf()允许限定占位符的最小宽度。%5d表示这个占位符的宽度至少为5位。如果不满5位，对应的值的前面会添加空格。如果超过5位，正常输出就行，5是最少输出5位。
   //scanf如果输入的数字超过了5位，scanf会把多余的部分丢弃，只保留5位
   //因为scanf是先空出内存空间，然后再把输入的内容放进去，所以如果输入的内容超过了内存空间，scanf会把多余的部分丢弃
   //printf是先有内容，然后再输出
   while(scanf("%d %d", &a, &b) != EOF)
    //EOF是一个宏，表示文件结束符，scanf会一直读取输入，直到遇到EOF为止
//这个语句很适用于循环读取输入，直到输入结束
   return 0;
}
//NOTE3
//注意：在scanf中，%d和%c的区别
//读取字符时不会跳过空格；读取字符串时会跳过前导空格，但遇到空格就停止读取。
//因为字符是输入什么存什么，空格也算一个字符，除非故意忽略
//字符串中文可能不明显，但是英文空格用以分隔单词，所以遇到空格停止是很有必要的，比如hello world

