#include<stdio.h>

int factorial(int n){
	if(n<=1){
		return 0;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int num = 5;
	int res = factorial(5);
	printf("Res of fact is:%d\n", res);
	return 0;
}
