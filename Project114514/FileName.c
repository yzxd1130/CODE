#include <stdio.h>

int main(void)

{
	long c = 6000;
	printf(" %ld min", (c / 60));
	printf(" %ld sec", (c % 60));
	
	return 0;
}



