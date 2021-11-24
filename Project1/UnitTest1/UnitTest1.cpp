#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/RightTriangle.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
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
