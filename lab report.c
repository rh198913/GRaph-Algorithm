#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//百钱买百鸡问题，蛮力算法解决
/* int main()
{
    int i,j; 
    float k;
    for(i = 0;i<=20;i++)
    {
        for(j= 0;j<=33;j++)
        {
           k=100-i-j;
           if(5*i + 3*j + k/3 == 100) 
                printf("cook= %d,hen = %d,chiken= %f\n",i,j,k);
        }
    }
    return 0;
} */
/* //嫌疑人问题
int main(int argc, char* argv[])
{
	char a[10];
	int count=0,num;
	for(int A=0;A<=1;A++){
		for(int B=0;B<=1;B++){
			for(int C=0;C<=1;C++){ 
				for(int D=0;D<=1;D++){
					for(int E=0;E<=1;E++){
						for(int F=0;F<=1;F++){
							count=0;
							if(A==1||B==1)  count++;
							if((A==1&&E==1)||(A==1&&F==1)||(E==1&&F==1))  count++;
							if(!(A==1&&D==1))  count++;
							if((B==1&&C==1)||(B==0&&C==0))  count++;
							if((C==1&&D==0)||(C==0&&D==1))  count++;
							if((D==1)||(D==0&&E==0))  count++;
							if(count==6)
							{
								num=0;
								if(A==1){
									a[num]='A';
									num++;}
								if(B==1){
									a[num]='B';
									num++;}						
								if(C==1){
									a[num]='C';
                                    num++;}
								if(D==1){
									a[num]='D';
									num++;}
								if(E==1){
                                    a[num]='E';
									num++;}
                					if(F==1){
									a[num]='F';
									num++;}
							}
						}
					}
				}
			}
		}
	}
	for(int i=0;i<num;i++){
		if(i<num-1)
			printf("%c ",a[i]);
		else
			printf("%c",a[i]);
	}
	return 0;
} */
//解数字谜
int main()
{
    int A,F,D,D0;
    for(A=3;A<10;A++){
        for(D0=1;D0<10;D0++){
            D=D0*100000+D0*10000+D0*1000+D0*100+D0*10+D0;//构造D
            if(D%A==0){
                F=D/A;//得到被乘数F;
                if(F/10000==A && (F/10)%10==A){
                    if((F/1000)%10==F%10)
                        printf("%d--%d\n",F,D);
                }
            }
        }
    }
}
//俄式算法，思想偶数(m*n = n/2 * 2m) 奇数((n-1)2+2m + m)
 /* int russia(int n,int m)//非递归算法
{
	int sum = 0; 
	int a = 0;
	if(n == 1)
	    return m;
	while(n != 1)
	{
		if(n%2 == 0){
			n = n/2;
	  	    m *= 2;
		printf("%d %d\n",n,m);
		}
		else{
			n = (n-1)/2;
            a += m;//a用来储存奇数时m的值
			m = m * 2;//m再乘以2
		    printf("%d %d\n",n,m);
		}
	}
    
	sum = m + a;
	//当while循环结束时，n存的为奇数时的值+ m的值，得到sum 
	return sum;	
}
int main()
{
	int m,n;
	int mul;
	printf("请输入两个数:");
	scanf("%d,%d",&n,&m);//注，键盘输入格式需要一致，不然程序会出现错误
	mul = russia(n,m);
    printf("最后结果是:%d\n",mul);
}  */
/*
 int russia(int n,int m)//递归算法
{
	if(n == 1)//=用作赋值运算，==用作比较
	    return m;//如果此处为等号，就会将1赋值给n最后输出m的值为65
	if(n % 2 == 0)
		return russia(n/2,m*2);
	else{
		return russia(n-1)/2,m*2 + m;
	}
}
int main()
{
	int n,m,a;
	printf("请输入两个需要相乘的数：");
	scanf("%d%d",&n,&m);
	a = russia( n,m);
	printf("最后结果是:%d\n",a);
    return 0;
}
*/
//金字塔
void pyamind(int n){
	int i,j;
	for(i = 1;i <= n;i++){
		for(j= 1;j<= n-i;j++){
			printf(" ");
		}
		for(j = 1;j<=i ;j++){
			printf("%d ",i);
		}
		printf("\n");
	}

}
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	pyamind(n);
	return 0;
}


 
