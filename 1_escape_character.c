#include <stdio.h>
int main()
{
    printf("%c\n",'\'');
    // This will print a single quote character')
    printf("%s\n","\"");
    //`%c` represents a single character, and `%s` represents a string. A character is enclosed in single quotes, while a string is enclosed in double quotes.
    printf("c:\test\test.c");
    printf("c:\\test\\test.c");
    //The first '\' is the escape character of the '\' later
    //in a string a \0 is added automatically at the end
    //\t is a tab character
    printf("a\tbc\tdef\tqqqq\twwww\tx\n");
    /*count the intervals between the letters, the first letter included, 
    end before the next letter,
     "\t" ensures that the number is alawsys 8 or the multiple of 8*/
    printf("\a");
    //This is a bell character, which will make a sound when the program runs
    printf("xxx\b");
    //This is a backspace character
    //The cursor will move back one space
    //but the outcome effect will not show in the terminal because the program has ended
    printf("hello\r");
    //This is a carriage return character, 
    // the cursor will move to the beginning of the line
    //but the outcome effect will not show in the terminal because the program has ended
    getchar();
    printf("hello\?\?\?\n");
    //\?means to output a question mark
    printf("%c\n",'\130');
    //\130 represents the octal number 130, corresponding to the decimal number 88, if you look it up in the ASCII table, the corresponding character is X
    // 表示八进制数130，对应的十进制数是88，用ASCII码表查找，对应的字符是X
    //\ddd means the octal number ddd, the corresponding decimal number is ddd, and the character corresponding to it is obtained by looking up the ASCII table
    // \ddd表示八进制数ddd，对应的十进制数是ddd，用ASCII码表查找得到对应的字符
    printf("%c\n",'\x58');
    //\xhh represents the hexadecimal number hh, the corresponding decimal number is hh, and the character corresponding to it is obtained by looking up the ASCII table
    // \xhh表示十六进制数hh，对应的十进制数是hh，用ASCII码表查找得到对应的字符
    //58 represents the hexadecimal number 58, which is 88 in decimal, and the character corresponding to it is X
    printf("%d\n",strlen("c:\test\628\test.c"));
    //注意应该有14个字符，\t算一个字符，\62表示八进制数，而不是\628,因为八进制数最大是7
    //\ddd represents always one character, may be when it is converted into a decimal number, it is more than 3 digits
    //but when it is interpreted by ASCII, it is only one character
    int len = strlen("abcdef");
    printf("%d\n",len);
    //The length of the string is 6,
    //because /0 is the sign of the end of the string
    //but it is not counted in the length
    return 0;

}