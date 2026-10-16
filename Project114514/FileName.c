#include <stdio.h>

int main(void)

{
	long c = 1145;
	

	printf("%ldsec=%ldmin%ldsec", c, c / 60, c % 60);
	
	return 0;
}



