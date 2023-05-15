#include<stdio.h>

void add(int a){
	
	if(a%3==0 && a%5==0){
	
		printf("Success");
	}
	else{
	
		printf("Not success");
	}	
}

int main(){
	
	int i;
		
	printf("Enter a number => ");
	scanf("%d",&i);
	
	add(i);

	return 0;
}
