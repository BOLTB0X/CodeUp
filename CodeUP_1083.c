﻿#include <stdio.h>

int main() {
	
	int a,i;

	scanf("%d",&a);
	for (i = 1; i <= a; i++)
	{
		if(i%3!=0)
			printf("%d ", i);
		else if (i%3==0) {
			printf("X ");
		}
	}
}
