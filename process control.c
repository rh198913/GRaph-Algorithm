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
//绘制柱状图，一层表示列数，一层表示行数
/* {
    int a[] = {8,7,6,7,8};
    int i,j;
    for(i = 0;i < 5;i++){//外层表示行数
        for(j = 1;j<=a[i];j++)//内层循环的是数组里的*号的个数
            printf("*");
        printf("\n");//输出值回车换行
      }
    return 0;
} */
//合并字符串，找到前一字符串的最后一个字符\0（NULL空字符）逐步代入后一个字符串的数值
/* {
    int i=0,j=0;//记住要给ij赋初值，while循环才能才能使用
    char a[30] = "Taylor", b[] = "swift";
    printf("%s+%s = ",a,b);
    while(a[i] != '\0')//查找字符串a中的最后一个元素
        i++;
    while(b[j] != '\0')//逐一将b中的值代入a中
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';//查找（NULL值字符），如果结果不是\0,将无法显示结果
    printf("%s\n",a);
    return 0;
} 
 */
//倒序取值，将字符串倒序排序后再输出更高效
/* { 
    int i ,n;
    char a[] = {"taylor"};
    char b[10] = {0};//记得写出字符串的长度
    n = strlen(a);//获取字符串的最后一个字符  
    for(i= n-1;i>=0;i--)//最后一个字符n是\n,所以从n开始
        b[n-1-i] = a[i];//a[0] = b[4],a[1] = b[3]，即a字符保存到b字符
    b[n] = '\0';//在结尾添加空字符
    printf("%s\n倒数排序为\n%s\n",a,b);
    return 0;
   
} */
//读取文件“读取并显示文件中的一行字符串”循环执行直到最后一行为止
{
    FILE *fp;
    char s[256];
    int i=1;
    fp = fopen("case1.txt","r");
    if(fp == NULL)
        return 1;//如果程序打开失败，程序结束
    while(feof(fp) == 0){
        fgets(s,255,fp);
        printf("%03d:%s",i,s);
        i++;
    }
    fclose(fp);
    return 0;
  
}





























































































//正反投币游戏 分为三个流程 1，扔硬m币，2，输入假设值 3，读取并判断对错

