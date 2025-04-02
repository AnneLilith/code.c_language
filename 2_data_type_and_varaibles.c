# include <stdbool.h>
# include <stdio.h>
int main()
{
    _Bool islike = true;
    bool siaimer = false;
    //two types of boolean variables
    if (islike)
    //1 is true, 0 is false
    // islike is a boolean variable, which can only be 0 or 1
    //The `if` statement by default executes the part where the condition is true, while `else` handles the case where the condition is false.
    printf("I like c language.\n");
    else
    printf("I don't like c language.\n");
int a =100;
printf("%zd\n",sizeof(a));
printf("%zd\n",sizeof(int));
printf("%zd\n",sizeof(3+5));
printf("%zd\n",sizeof 3+5);
//expression without parentheses can also be used,but the outcome is different,
//sizeof(3+5) is 4, but sizeof 3+5 is 4+5=9
//because sizeof(3+5) calulates the size of int,it doesn't calculate the size of 8,but 
// it notices it is the sum of two int, but sizeof 3+5 calulates the size of 3 first, which is 4, then adds 5
//sizeof calulates the size of a variable, data type, or expression in bytes.
//%zu is used to print the size of an unsigned int variable
//%zd is used to print the size of a signed int variable
printf("%zd\n",sizeof(3+3.5));
//when int and float are added, the result is float,so the size is 8
printf("size of bool:%zu\n",sizeof(bool));
printf("size of int:%zu\n",sizeof(int));
printf("size of character:%zu\n",sizeof(char));
printf("size of short:%zu\n",sizeof(short));
printf("size of long:%zu\n",sizeof(long));
printf("size of long long:%zu\n",sizeof(long long));
printf("size of double:%zu\n",sizeof(double));
printf("size of long double:%zu\n",sizeof(long double));
//size of long>=size of int=4
short b =2;
int c=3;
printf("%d\n",sizeof(b=c+4));
//sizeof(b=c+4) is 2, because b is short, so the result is short,
//the expression within sizeof is not executed, it just calculates the size of b
    return 0;
//signed int =int
}