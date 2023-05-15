#include<stdio.h>

void add(int a,int b){
	
	printf("sum : %d\n\n",a+b);
}
void min(int a,int b){
	
	printf("sum : %d\n\n",a+b);
}
int main(){
	
	int fn,sn;
	char sl;
	
	while(1){
		
		printf("Enter First Nuber : ");
		scanf("%d",&fn);
		
		printf("Enter Second Number : ");
		scanf("%d",&sn);
		
		printf("Make Your selestion +, -, *, /, \n");
		
		printf("Enter your selection : ");
		scanf(" %c",&sl);
		
		switch(sl){
			
			case '+':
				add(fn,sn);
				break;
		}
		switch(sl){
			
			case '-':
				min(fn,sn);
				break;
		}
		}
}
