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
