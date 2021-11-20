#include <stdio.h>
#include "RightTriangle.h"

void main(int argc, char* argv[])
{
	struct RightTriangle a;
	a.height = 3;
	a.width = 4;

	printf("RightTriangle`s Area is %.2lf\n", RightTriangle_area(a));
}