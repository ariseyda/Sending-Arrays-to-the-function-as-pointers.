#include<stdio.h>

//Sending Arrays to the function as pointers.

void max(int *p[],int size);

int main(){
	
	int i;
	int array[5];
	
	printf("Please enter the elements of the array:");
	
	for(i=0;i<5;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<5;i++){
		printf("%d ",array[i]);
	}

	maks(array,5);
	
	
	return 0;
}

void maks(int *p,int size){
	
	int i;
	int maximum=p[0];
	
	for(i=1;i<size;i++){
		if(p[i]>maximum){
			maximum=p[i];
		}
	}
	printf("\nThe largest element of the array:%d",maximum);
	
}


