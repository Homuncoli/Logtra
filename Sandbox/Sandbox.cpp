#include "Logtra.h"

#include <fstream>

int main() {
	Logtra::Logger logger("Debug 1");

	LGA_USE_LOGGER(logger);

	LGA_SUCCESS("Success");
	LGA_LOG("Log");
	LGA_WARNING("Warning");
	LGA_ERROR("Error");
	LGA_CRITICAL("Critical");

	return 0;
}