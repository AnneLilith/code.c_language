# include <stdio.h>
int main ()
{
    //NOTE 1
    int age;
    printf("please input your age:\n");
    scanf("%d",&age);
    //%d\n,\n is not necessary in scanf
    if (age <18)
    printf("adolescent\n");
    else if(18<= age && age <= 45)
    //in c language, you can not write as 18< age<45
    printf("young adult\n");
    else if(age<=60)
    printf("middle age\n");
    else if(age<=90)
    printf("old\n");
    else
    printf("vieillard\n");
    //NOTE 2
    //exp1?exp2:exp3
    //exp1 is true, exp2 is executed
    //exp1 is false, exp3 is executed
    //how to find the bigger number?
    int b;
    int c;
    printf("please input two numbers.\n");
    scanf("%d %d",&b,&c);
    int t=(b>c?b:c);
    printf("%d\n",t);
    //NOTE 3
    //!=,&&,||
    //!= is not equal,&& is and,|| is or
    //输入一个年份 判断是否是闰年
    //1.能被4整除但不能被100整除
    //2.能被400整除
    int year;
    printf("please input a year:\n");
    scanf("%d",&year);
    if (!year%4&&year%100)
    printf("闰年\n");
    else if(!year%400)
    printf("闰年\n");
    else
    printf("非闰年\n");
    //NOTE 4
    //短路求值
    int i = 0, m = 0, n = 2, o = 3, p = 4;
    i = m++ && ++n && p++;
    printf("m = %d\nn = %d\no = %d\np = %d\n", m, n, o, p);
    return 0;
}