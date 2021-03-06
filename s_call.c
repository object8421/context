/* @(#)s_call.c
 */

#include <unistd.h>
#include <errno.h>
#include <stdio.h>

void called()
{
	return;
}

int main(int argc, char *argv[])
{
	int i, n;
	pid_t pid;

	if (argc < 2) {
		printf("s_call times.\n");
		return -1;
	}
	n = atoi(argv[1]);

	for (i = 0; i < n; i++) {
		called();
	}
	
	return 0;
}
