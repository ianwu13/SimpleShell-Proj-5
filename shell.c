#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "commands.h"

#define MAXSIZE 256
int fd = 0;		// file descriptor

int main(int argc, char *argv[])
{
	while(1) {
		char cmd[MAXSIZE];
		char *arg1 = NULL;
		char *arg2 = NULL;

		printf("shell")
		fgets(cmd, MAXSIZE, stdin);
		cmd[strlen(cmd) - 1] = '\0'		// remove trailing newline

		// implement strtok, split into cmd, arg1, arg2, etc

		if (strncmp(cmd, "cd", MAXSIZE) == 0) {
			// cd(arg1);
		}
		else if (strncmp(cmd, "path", MAXSIZE) == 0) {
			// path(arg2);
		}
		else if (strncmp(cmd, "quit", MAXSIZE) == 0) {
			// quit();
		}
		else {
			// find argument in /bin
		}
	}
}