#include <stdio.h>
#include "RightTriangle.h"

void main(int argc, char* argv[])
{
	struct RightTriangle A;
	A.height = 3;
	A.width = 4;

	printf("RightTriangle`s Area is %.2lf\n", RightTriangle_area(A));
}