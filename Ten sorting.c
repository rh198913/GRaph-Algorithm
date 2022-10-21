#include <stdlib.h>
//#include <windows.h>
#include <stdio.h>
#include <string.h>
//1，冒泡排序优化，判断每一躺是否交换过元素，若无，证明有序，提前结束

/* // 采用两层循环实现的方法。
// 参数arr是待排序数组的首地址，len是数组元素的个数。
void bubblesort1(int *arr,unsigned int len)
{
  if (len<2) return; // 数组小于2个元素不需要排序。

  int ii;     // 排序的趟数的计数器。
  int jj;     // 每趟排序的元素位置计数器。
  int itmp;   // 比较两个元素大小时交换位置用到的临时变量。
  int ifswap; // 每趟排序过程中是否交换过元素，0-未交换；1-有交换。

  // 44,3,38,5,47,15,36,26,27,2,46,4,19,50,48  
  for (ii=len-1;ii>0;ii--)  // 一共进行len-1趟比较。
  {
printf("ii=%d\n",ii);
    ifswap=0; // 初始化交换标志。
    for (jj=0;jj<ii;jj++)  // 每趟只需要比较0......ii之间的元素，ii之后的元素是已经排序好的。
    {
      if (arr[jj]>arr[jj+1])  // 如果前面的元素大于后面的元素，则交换它位的位置。
      {
        itmp=arr[jj+1];
        arr[jj+1]=arr[jj];
        arr[jj]=itmp;
        ifswap=1; // 设置交换标志。
      }
    }

    if (ifswap==0) return;
  }
}

// 采用递归实现的方法。
// 参数arr是待排序数组的首地址，len是数组元素的个数。
void bubblesort2(int *arr,unsigned int len)
{
  if (len<2) return; // 数组小于2个元素不需要排序。

printf("len=%d\n",len);

  int ii;       // 排序的元素位置计数器。
  int itmp;     // 比较两个元素大小时交换位置用到的临时变量。
  int ifswap=0; // 排序过程中是否交换过元素，0-未交换；1-有交换。

  for (ii=0;ii<len-1;ii++)  // 每趟只需要比较0......len-1之间的元素，len-1之后的元素是已经排序好的。
  {
    if (arr[ii]>arr[ii+1])  // 如果前面的元素大于后面的元素，则交换它位的位置。
    {
      itmp=arr[ii+1];
      arr[ii+1]=arr[ii];
      arr[ii]=itmp;
      ifswap=1; // 设置交换标志。
    }
  }

  if (ifswap==0) return;

  bubblesort2(arr,--len);
}

int main(int argc,char *argv[])
{
  int arr[]={44,3,38,5,47,15,36,26,27,2,46,4,19,50,48};
  int len=sizeof(arr)/sizeof(int);

  bubblesort2(arr,len);

  // 显示排序结果。
  int ii;//重置i，赋予新的意义，控制打印个数
  for (ii=0;ii<len;ii++) printf("%2d ",arr[ii]);

  printf("\n");

  // system("pause");  // widnows下的C启用本行代码。
  //system ("pause");
  return 0;
  //system ("pause");
} */
//2,选择排序，从头到尾扫描最小元素，与第一个交换
/* int main()
{
int arr[] = {15,2,6,9,8,5,3,7,4,1};

for (int i = 0;i<9;i++)//躺数
{
    for(int j = i+1;j <10 ; j++)//每一次都是最前面的元素和后面比较，1到10
    {
        if(arr[i] > arr[j])
        {
           int t = arr[i];
           arr[i] = arr[j];
           arr[j] = t;
        }
    }

    }
for(int i = 0;i<10;i++)
  {
    printf("%d\n",arr[i]);
        
  }
    return 0;
}
 */ 
//桶排序  先遍历所有数，分为几桶，确定其范围，每个桶进行单独排序 
//快速排序，选定一个中心轴，小的在左，大的在右，重复操作，直到左右下标相遇
/* void QuickSort(int *arr,int low,int high){
		if(low<high){//不加这个条件会死循环 
		int i=low;
		int j=high;
		int key=arr[low];
		while(i<j){
			while(i<j&&arr[j]>=key)
				j--;
			if(i<j) 
				arr[i++]=arr[j];//先赋值在自增 
			while(i<j&&arr[i]<key)
				i++;
			if(i<j)
				arr[j--]=arr[i];//先赋值在自增				
		}
		arr[i]=key;
		QuickSort(arr,low,i-1);//给左边排序 
		QuickSort(arr,i+1,high);//给右边排序 
	   }
	}
	int main(){
		int a[11]={25,1,12,25,10,10,34,900,23,12,80};
		QuickSort(a,0,10);
		int i;
		for(i=0;i<11;i++){
			printf("%d ",a[i]);
		}
		return 0;
	} */
  //归并排序，将有序的子序列合并得到新的序列，归并是合并
  /* void merge(int *arr,int left ,int mid ,int right)
  {//写一个外循环来合并数组
  int i = left;
  int j = mid;
  int index = 0;//现在把值写入新数组下标这里
  int *temp = (int*)malloc((right - left)*4);//建立一个辅助数组

  while (i < mid && j < right)
  {
    if(arr[i] < arr[j])
    {
         temp [index]= arr[i];
         i++;
    }else{
      temp [index]= arr[j];
         j++;
    }
    index++;
  }//剩余部分
  while(i < mid)
  {
    temp [index]= arr[i];
    index++;
    i++;
  }
  while(j < right)
  {
    temp [index]= arr[j];
    index++;
    j++;
  }

for (int i = 0;i<index ; i++)
{
  arr[left + i] = temp[i];
}
free(temp);

  void mergeSort(int *arr,int left ,int right)
  {
    if (right - left <= 1)
    {
      return;
    }
    int mid = (left + right)/2;
    mergeSort(arr, left ,mid);//传值递归了，再合并
    mergeSort(arr,mid ,right);
    //此处传一个二叉树深度优先遍历，用（deque替代list做广度优先遍历视频）
    merge( arr,left , mid, right); 
  }
  }
  int main()
  {
    int*arr1 = (int*)malloc(4*4);
    arr1[0] = 10;
    arr1[1] = 104;
    arr1[2] = 5;
    arr1[3] = 1;
    mergeSort(arr1,0,4);
    printf("%d\n",arr1);
    return 0;
  } */
  //对于未排序数列，在已排序中从后向前扫描，在插入到合适的位置
  /* int main()//直接插入排序
  {
    int insert[9]={1,8,15,24,-4,20,65,88,44};
    int itmp = 0;
    int i,j;
    for(i = 1;i < 9;i++)
    {
      itmp = insert[i];//给待插入的项赋值
      if(insert[i] < insert[i-1]){
        for(j = i-1;j>=0 && insert[j] > itmp;j--)
          {
            insert[j+1] = insert[j];// -4 -4
            insert[j] = itmp; //-4 24
          } 
       }
       for(int i = 0;i<9;i++)//打印输出
       {
          printf("%d",insert[i]);
      }
      printf("\n");
    }
    return 0;
  } */
  //折半插入排序
  //思想，将数列分成有序和无序数组，定义一个left right mid 变量，用二分法的
  //格式将有序数组进行排列，默认arr[0]为有序，arr[1]-arr[i-1]为无序
  void binary_insert(int arr[],int len)
{
  int itmp = 0;
  int left;
  int right;
  int mid;
  int i,j;
  for(i = 1;i<len-1;i++){//0到i-1为有序序列
    arr[i] = itmp;
    left = 0;right = i-1;
    mid = (left + right)/2;
    while(left < right){
      if(itmp<mid)
        right = mid -1;
      if(itmp > mid)
        left = mid + 1;
     
    }
    for(j = i-1;j>0 && j>itmp;j--){
      arr[j] = arr[j+1];
      itmp = arr[j]; 
    }
  } 
}
int main()
{
  int arr[9] = {1,8,15,24,-4,20,65,88,44};
  int len=sizeof(arr)/sizeof(int);
  binary_insert(arr,len);
  for(int i = 0;i<9;i++){
    printf("%d",arr[i]);
  }
  printf("\n");
  return 0;
}
  


  
