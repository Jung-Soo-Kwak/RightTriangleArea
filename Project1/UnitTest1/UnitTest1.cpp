#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int height = 3;
			int width = 4;

			Assert::AreEqual((height * width) / 2.0, 6.0);

			height = 4;
			width = 3;

			Assert::AreEqual((height * width) / 2.0, 6.0);

			height = 5;
			width = 4;

			Assert::AreEqual((height * width) / 2.0, 10.0);

			height = 4;
			width = 5;

			Assert::AreEqual((height * width) / 2.0, 10.0);

			height = 7;
			width = 5;

			Assert::AreEqual((height * width) / 2.0, 17.5);

			height = 5;
			width = 7;

			Assert::AreEqual((height * width) / 2.0, 17.5);
		}
	};
}
