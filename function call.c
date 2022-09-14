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



