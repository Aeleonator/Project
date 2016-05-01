#include "HelperFunctions.h"

bool isBetween(float num, float start, float end) {
	if (start < num && num < end)
		return true;
	return false;
}