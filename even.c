#include<stdio.h> 
 
int main(void){ 
	int n=0,i=0; 
	printf("enter a natural number "); 
	scanf("%d",&n); 
	n=2*n; 
	for(i=1;i<=n;i++){ 
		if(i%2==0) 
		printf("%d ",i); 
	} 
	return 0; 
} 