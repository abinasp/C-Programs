#include<stdio.h>

int main(){
	int n,r,sum=0;
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	while(n>9){
		sum=0;
			while(n>0){
				r=n%10;
				sum=sum+r;
				n=n/10;
			}	
		//printf("%d\n",sum);
		n=sum;
	}
	printf("%d",sum);
	return 0;
}
