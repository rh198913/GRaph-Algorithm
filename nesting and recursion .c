#include <stdio.h>
#include <string.h>
//lib文件是二进制的，如果要调用需要pragma comment导入
//函数不能嵌套定义，但是可以嵌套调用，即有机组合
//函数定义是创造一个函数，函数声明是告知函数参数类型，返回类型，一般放在头顶
//链式访问，把一个函数的返回值作为另一个函数的参数
//递归两个必要条件：1，存在限制条件，满足递归不再继续 2，每次递归越来越接近限制条件，避免死循环，一定要写终止条件
/* int main()
{
    int len = strlen("taylor");
    printf("%d\n",len);//printf返回的是打印在屏幕上字符的个数
    //链式访问
    printf("%d\n",strlen("taylor"));//省略掉返回len，直接将strlen("taylor"）做为printf函数的参数
    return 0;
} */
/*
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
}*/
//编写函数不允许创建临时变量，求字符串的长度,模拟实现strlen
/*
my_strlen(char* str)//字符的地址
{
    int count = 0;//此处引用了变量
    while(*str != '\0')//判断是否是最后一个字符
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    char arr[] = "taylor";
    printf("%d\n",my_strlen(arr));
    return 0;
}
*/
/*此处为本题大事化小的思路，无变量
//my_strlen(char* str)//字符的地址
{
    if(*str != '\0')
        return 1 + my_strlen(str+1);//str+1表长度示下一个字符串的 + 左1是总长度。
    else
        return 0;
}
/* my_strlen("abc")
1+my_strlen("bc")
1+1+my_strlen("c")
1+1+1+my_strlen("")
1+1+1+0 */*/
//编写一个阶层函数
/*int Fac(int n)//一般为阶层函数，需要自己定义
{
    if(n <= 1)
        return 1;
    else
        return n * Fac(n - 1);
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = Fac(n);
    printf ("%d\n",ret);
    return 0;
}*/
//计算1/1-1/2+1/3_1/4.....1/99-u1/100
/* int main()//原始方法
{
    int i = 0;
    double sum = 0.0;
    for(i = 1;i<=100;i++)
    {
        if(i%2 == 0)
            sum -= 1.0/i;//奇偶数判断 
        else
            sum += 1.0/i;
    }
    printf("%f\n",sum);
    return 0;
} */
//计算1/1-1/2+1/3_1/4.....1/99-u1/100
int main()//进阶方法
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;//定义一个变量
    for(i = 1;i<=100;i++)
    {
        sum += flag*1.0/i;//分母的来源，以及使用浮点数定义
        flag = -flag;//下一次循环的时候变成-flag，依次循环变成1-11-11-1....
    }
    printf("%f\n",sum);
    return 0;
}

























































//正反投币游戏 分为三个流程 1，扔硬m币，2，输入假设值 3，读取并判断对错

