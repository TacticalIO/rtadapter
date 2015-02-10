#include <stdio.h>

void init(char* name) {
	printf("init %s\n", name);
}

void start(char* name) {
	printf("start %s\n", name);
}

void stop(char* name) {
	printf("stop %s\n", name);
}

void pause(char* name) {
	printf("pause %s\n", name);
}

void resume(char* name) {
	printf("resume %s\n", name);
}