#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/RightTriangle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double RightTriangle_area(RightTriangle A)
{
	return (A.height * A.width) / 2.0;
}

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RightTriangle a;
			a.height = 3;
			a.width = 4;

			Assert::AreEqual(RightTriangle_area(a), 6.0);

			a.height = 4;
			a.width = 3;

			Assert::AreEqual(RightTriangle_area(a), 6.0);

			a.height = 5;
			a.width = 4;

			Assert::AreEqual(RightTriangle_area(a), 10.0);

			a.height = 4;
			a.width = 5;

			Assert::AreEqual(RightTriangle_area(a), 10.0);

			a.height = 7;
			a.width = 5;

			Assert::AreEqual(RightTriangle_area(a), 17.5);

			a.height = 5;
			a.width = 7;

			Assert::AreEqual(RightTriangle_area(a), 17.5);
		}
	};
}
