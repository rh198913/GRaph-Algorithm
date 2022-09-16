#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//int main()
//函数的定义，函数就像一个可以按照指示对程序员输入的值进行处理，再输出，一个函数可以被多次调用
//传输给函数的值叫做自变量（参数），输出的值叫做返回值，一个函数可以有多个参数，但返回值只有一个
//用法，将多次重复执行的处理定义为函数，通过调用可以使程序简洁易懂
//定义函数，用源语言描述函数功能的操作称为
//函数调用，需要定义一个与函数返回值数据类型相同的变量，用来保存函数的返回结果
//无返回值 设置成void型
//main（）函数，表示程序入口的特殊函数
//函数体中定义的变量叫做局部变量，其作用域仅为函数体内部;体外为全局变量，可以被之后定义的所有函数引用
//递归，即函数调用函数体本身，
/* int addnum(int a,int b)//此处不添加（）,变量ab用来接收参数值
{
    int x;
    x = a + b;//大括号里面写处理Y语句
    return (x);//终止函数，返回计算结果
}
 */
//函数调用计算1到5之间整数和
/* int calc(int,int);
int main()
{
    int c;
    c = calc(1,5);//动态的计算函数，可以加减乘除运算
    printf("%d\n",c);
    return 0;
} 
int calc(int a,int b)
{
    int i ,n = 0;
    for(i = a;i <= b;i++)
        n += i;
    return n;
}
 */
//递归调用求n的阶层
/*

    long fac(int n){
        int result = 0;
        if(n == 0){
            result = 1;//递归的终止条件   
        } 
        else{
            result = n*fac(n-1);//递归的调用条件
        }
        return  result;
    }
    int main()//主函数写如何递归函数
    {
        int n = 0;
        scanf("%d",&n);
        int result = fac(n);//fac为阶层函数
        printf("%1d",result);
        return 0;
    }
    */
//接收一个整形值（无符号），按照顺序打印它的每一位。例如：1234 打印1 2 3 4
/*
void print(int n)//设置一个函数来接收需要的数值
{
    if(n>9)
    {
        print(n/10);//除以10得到整数
    }
    printf("%d \n",n%10);//模10得到输出的数

}
int main()
{
    unsigned int num = 0;
    scanf("%d",&num);//1234
    print(num);//把需要的数值打在屏幕上
    //print(1234)拆开每一位直到只有一位数
    //print(123)4
    //print(12)34
    //print(1)234
    return 0;
}
*/
//编写一个函数来比较两个数的大小
/* int get_max(int x,int y)//函数的定义
{
    int z = 0;
    if(x > y)
        z = x;
    else
        z = y;
    return z;
}
int main()
{
    int a = 20;
    int b = 30;
    //此处是函数的调用
    int max = get_max(a,b);//把ab的值传给max函数比较大小
    printf("%d\n",max);
    return 0 ;
} */
/*
//写一个函数，可以交换两个数之间的值
 void  get_change(int*px,int*py)//函数不需要返回
{
    int z = 0 ;
    z = *px;
    *px = *py;
    *py = z;  
}
int main()
{
    //int x = 20;//生成四个字节的空间
    //int* pa = &a;//pa就是一个指针变量
    //* pa = 10;//*pa就是a 打印输出10
    int x = 20;
    int y = 30;
    get_change(&x,&y);
    printf("%d\n%d\n",x,y);
    return 0;
    //如果不用指针的话调用失败，因为调用函数时又重新创建了空间
}*/
//请输出1-100所有的素数
/* is_prime(int n)//
{ 
    int j = 0;//素数是2到n-1的数
    for(j = 2;j < n;j++)
    {
        if(n % j == 0)
        return 0;//如果能被其他值整除，那就不是素数
    }
    return 1;
}
int main()
{
   int i;
   int count = 0;
   for(i = 2;i<=100;i++) 
   {
       if(is_prime(i) == 1)//判断i是否为素数
       {
           count++;
           printf("%d\n",i); 
       }  
}
printf("质数个数为：%d\n",count);
return 0;
} */
//写一个函数打印1000 -2000闰年的年数
/* int is_leap(int n)
{
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))//最简单的写发生是直接返回这串关系
        return 1;//两种情况都可，所以用或，判断关系用逻辑运算符
    else
        return 0;
}
int main()
{
    int i = 0;
    int count = 0;
    for(i= 1000;i<=2000;i++)
    {
        if(is_leap(i) == 1)//调用的时候记住代入函数的值i
        {
            count++;
            printf("%d",i);
        }
    }
    printf("%d\n",count);
    return 0;
// } */
//写一个函数，实现整型有序数组的二分法查找
int binary_search(int arr[],int key,int sz)
{
    int left = 0;
    int right = sz-1;
    int mid = (left + right) / 2;
    while(left <= right )//可能是等于的情况，必须建立left<right的有序数组中才能执行 
    {
        if(arr[mid]> key)//值在左边
        {
            right  = mid -1;    
        }else if(arr[mid]< key)//值在右边
        {
            left = mid + 1;
        }else
        {
            return mid;//最后得到结果
        }
    }
    return -1;//找不到的情况
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 8;//找8这个数字
    int sz = sizeof(arr) / sizeof(arr[0]);//数组的长度为数组总长度/一个元素的大小40/4
    //找到了就返回找到位置的下标,z找不到返回-1
    int ret = binary_search(arr,key,sz);
    if(-1 == ret)
    {
        printf("没有找到8的值\n");
    }else
    {
    printf("找到了，下标是：%d\n",ret);
    }
    return 0;
}





