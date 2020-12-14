#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){

int i,j;
int num;
for (i=0;i<10;i++)
{
	printf("%d\n", i);
	for (j=0;j<10;j++)
	{
	printf("Enter any number to continue and 0 to exit\n");
	scanf("%d", &num);
	if(num==0) {
	goto end;
	}
printf("Outer loop\n");

}

}
end:
return 0;
}
