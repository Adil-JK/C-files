#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
	int x,y;
	for(x=0;x<9;x++){
		for(y=0;y<=9-x-1;y++){
			printf("*");
		}
		printf("\n");
	}
}
