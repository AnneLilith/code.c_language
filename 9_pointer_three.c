#include <stdio.h>
// Created by 熊欣羽 on 05/07/2025.
//
int sz2(int arr[]) {
    int sz2=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",sz2);
    return sz2;
}
void bubble_sort(int arr[],int sz) {
    for (int i=0;i<sz-1;i++) {
        int flag=1;
        for (int j=0;j<sz-1-i;j++)
            //❗第 i 轮结束后，最右边 i 个元素已经排好序，不需要再比较了！
                //所以在第 i 轮的内层循环中，最多只需要比较到第 sz-1 - i个元素。
        {
            if (arr[j] > arr[j + 1]) {
                flag = 0;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if (flag==1) {
            break;
        }
    }
}
int main()
    {
    //指针数组模拟二级数组
    int arrone[5]={0,1,2,3,4};
    int arrtwo[5]={1,2,3,4,5};
    int arrthree[5]={2,3,4,5,6};
    int *parr[3]={arrone,arrtwo,arrthree};
    for (int i=0;i<3;i++) {
        for (int j=0;j<5;j++) {
            printf("%d ",parr[i][j]);
        }
    }

    int arr3[6]={6,7,8,3,5,1};
    int szm=sizeof(arr3)/sizeof(arr3[0]);
    bubble_sort(arr3,szm);
    for (int i=0;i<szm;i++) {
        printf("%d\n",arr3[i]);
    }
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("pointer of arr      :%p\n",arr);
    printf("pointer of arr+1    :%p\n",arr+1);
    printf("pointer of &arr[0]  :%p\n",&arr[0]);
    printf("pointer of &arr[0]+1:%p\n",&arr[0]+1);
    printf("pointer of &arr     :%p\n",&arr);
    printf("pointer of &arr+1   :%p\n",&arr+1);
    //arr相当于&arr[0]表示数组首元素地址，但是sizeof(arr)表示整个arr数组
    //&arr取的也是整个arr数组的地址
   /* int arr1[10]={0};
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    int *p=arr1;
    for (int i=0;i<sz;i++) {
        scanf("%d",p+i);
        //scanf的函数作用是我输一个值 并且告诉它存哪儿 所以%d对应的是我输入的值 不是对应后面的地址
        //所以后面需要写的是地址
    }
    for (int i=0;i<sz;i++) {
        printf("%d\n",*(p+i));
        //p[i] 的意思就是：
        //👉 “ 从指针 p 所指的地址开始，往后偏移 i 个元素，取出那个位置的值
        //相当于arr[i]相当于*（p+i）

    }
    //数组传入函数应该是指针而不是整个数组 所以输出的sz2也是数组中一个元素的大小
    //但是如果只输入一个元素 比如arr【3】这个是值传递 不是地址传递 改不了数组内容
    int arr2[10]={1,2,3,4,5,6,7,8,9,0};
    int sz1=sizeof(arr2)/sizeof(arr2[0]);
    printf("sz1=%d\n", sz1);
    printf("sz2=%d\n", sz2(arr2));
//二级指针
    int h=10;
    int *ph=&h;
    int **pph=&ph;*/
    return 0;
}
