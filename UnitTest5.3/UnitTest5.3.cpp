#include "pch.h"
#include "CppUnitTest.h"
#include "../laba_5.3/laba 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLAB53
{
	TEST_CLASS(UnitTestLAB53)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double test;
			test = p(1);
			double g = abs(test - 0.403278);

			Assert::IsTrue(g < 1e-5);
		}
	};
}
