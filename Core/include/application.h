#pragma once

#include <loader.h>

class Application {
public:
	void run();

private:
	void load();
	void init();
	void exec();
	void close();
};