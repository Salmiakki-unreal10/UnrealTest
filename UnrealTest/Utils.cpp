#include <math.h>
#include <float.h>
#include "Utils.h"

bool IsFloatEqual(float Num1, float Num2)
{
	return fabsf(Num1 - Num2) <= 0.001f;
}