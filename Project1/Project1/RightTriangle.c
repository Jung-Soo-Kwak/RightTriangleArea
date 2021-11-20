#pragma once

#include "RightTriangle.h"

double RightTriangle_area(struct RightTriangle A)
{
	return (A.height * A.width) / 2.0;
}