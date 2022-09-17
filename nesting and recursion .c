#include <stdio.h>
#include <string.h>
//lib文件是二进制的，如果要调用需要pragma comment导入
//函数不能嵌套定义，但是可以嵌套调用，即有机组合
//函数定义是创造一个函数，函数声明是告知函数参数类型，返回类型，一般放在头顶
//链式访问，把一个函数的返回值作为另一个函数的参数
//递归两个必要条件：1，存在限制条件，满足递归不再继续 2，每次递归越来越接近限制条件
/* int main()
{
    int len = strlen("taylor");
    printf("%d\n",len);//printf返回的是打印在屏幕上字符的个数
    //链式访问
    printf("%d\n",strlen("taylor"));//省略掉返回len，直接将strlen("taylor"）做为printf函数的参数
    return 0;
} */
//接收一个整形值（无符号），按照顺序打印它的每一位。例如：1234 打印1 2 3 4
void print(int n)//函数可以打印参数部分数字的每一位
{//print函数，是需求输出的一系列参数
    if(n>9)
    {
        print(n/10);//除以10得到123,%10之后得到3，以此内推下去
    }
    printf("%d \n",n%10);//模10得到输出的数
}
int main()
{
    unsigned int num = 0;//无符号整数，要求定义的整数一定是正整数
    scanf("%d",&num);//1234
    print(num);//把需要的数值打在屏幕上
    //print(1234)拆开每一位直到只有一位数
    //print(123)4
    //print(12)34
    //print(1)234
    return 0;
}























































//正反投币游戏 分为三个流程 1，扔硬m币，2，输入假设值 3，读取并判断对错

