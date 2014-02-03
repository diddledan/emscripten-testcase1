#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

int main(int argc, char **argv) {
	Bit64u test = ((Bit64u)(1) << 32) / (1024*1024);
	if (test != (Bit64u)4096) {
		printf("TEST FAILED: value of 'test' (%ld) is not 4096:\n", test);
		return 1;
	}
	
	printf("test passed");
	return 0;
}