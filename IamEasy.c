#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int result;
	for(int i=1; i<=10; i++){
		result = n * i;
        printf("%d\n", result);
	}
}