#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// With arguments and return value
/*int sum(int a, int b){
	return a+b;
}

main (){
	int a = 5; int b = 10;
	int c;
	c = sum(a,b);
	printf("The sum of %d and %d is %d", a, b, c);
	return 0;
}*/


// With arguments and without return value
/*void printstar(int n){
	int i;
	for (i=0;i<n;i++){
		printf("%c", '*');
	}
}

main (){
	printstar(8);
	return 0;
}*/

// Without arguments and with return value
/*int takenumber(){
	int i;
	printf("Enter a number: ");
	scanf("%d", &i);
	return i;
}

main(){
	int x;
	x = takenumber();
	printf("The number entered is %d", x);
	return 0;
}*/

// Without arguments and without return value
void myname(){
	printf("My name is Adil");
}

main(){
	myname();
	return 0;
}
