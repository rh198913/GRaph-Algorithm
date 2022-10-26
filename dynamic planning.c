#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*由于递归调用在执行过程中，调用大量的内存解不断的重复，所以设置动态规划来优化
动态规划和分治法不同的是，分治分成若干拍个子问题之后至顶向下的进行解决，后者至顶向上
运用的条件，子问题之间存在重叠问题
步骤：1，分析问题先分解成子问题
      2找出状态转移方程
      3讨论底层边界问题
      4数组迭代得出解
  */
 int  walkcout(int n){
    int ret = 0;
    if(n<=0)
        return 0;
    if(n == 1)
        return 1;
    if (n == 2)
        return 2;//无意义的情况 
//用一个数组存储走n个台阶的走法数
    int value[n+1];
    value[0] = 0;
    value[1] = 1;
    value[2] = 2;//后面要用到前面的结果 
    for(int i = 3;i<= n;i++)
    {
        value[i] = value[i-1] + value[i-2];//思想是至底向上，不存在重复
    }
    ret = value[n];//最后释放内存
    return ret;
}    
int main()
{
    for(int i = 3;i<=9;i++){
        printf("%d台阶共有%d种走法\n",i,walkcout(i));
    }
    system("pause");//停止程序的意思
    return 0;
}

