#include<stdio.h>

void main () {

	int a = 8;
	int ans;

	ans = a++ + a++ + a++;

	printf("%d \n", a );
	printf("%d \n", ans );

}

