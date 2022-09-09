/*流程控制的基本应用
If语句，判断条件是否成立 ，选择执行处理语句
for语句，条件成立时，利用计数器执行循环次数
while语句，条件成立时，循环执行处理语句， 主要用于键盘输入等无法判断次数的情况
braek语句，中止循环，使程序跳转至当前模块的结尾
continue语句，中止循环，使程序跳转至下一个循环的开始
*/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
//1,1到5的数求和
/* {
    int i,sum = 1;
    for(i = 1;i <= 5;i++)
    
        sum *= i;
    
    printf("5的阶乘是:%d\n",sum);
    return 0;

}
 */
//从数组中查找数值
/* {
    int arr[] = {7,8,9,4,5,8,7,6};
    int i,n = 0;
    for(i = 0;i<8;i++)//数组下标是从0开始的
        {
        if(arr[i]== 7){ //==是赋值运算，=是算数运算，
            n++;
        }
       
    }
    printf("七的个数是：%d\n",n);
    return 0;
} */
//数组高效求平均值
/* {
    int i ,sum = 0;
    int arr[] = {8,7,9,5,4,6,22,1};
    for(i = 0;i<8;i++){
        sum += arr[i];//此处是加数组的值，讲数组的值带进去所以不能写i
    }
    printf("平均值是：%3f\n",sum/8.0);//%f取浮点数
    return 0;
}
 */
//绘制柱状图





























































































//正反投币游戏 分为三个流程 1，扔硬m币，2，输入假设值 3，读取并判断对错

