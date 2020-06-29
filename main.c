#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main (int argc, char *argv[]) {
	int c;
	c = sum(1, 2);
	printf("The sum of 1 and 2 is %d\n", c);
	printf("테스트용 문장\n");
	exit(0);
}

