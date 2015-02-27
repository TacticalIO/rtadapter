#include "app.h"
#include <stdio.h>

void Tio::App::init() {
	printf("init %s\n", name.c_str());
}

void Tio::App::start() {
	printf("start %s\n", name.c_str());
}

void Tio::App::stop() {
	printf("stop %s\n", name.c_str());
}

void Tio::App::pause() {
	printf("pause %s\n", name.c_str());
}

void Tio::App::resume() {
	printf("resume %s\n", name.c_str());
}