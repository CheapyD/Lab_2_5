#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2_5/Triad.cpp"
#include "../Lab_2_5/Triangle.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest25
{
	TEST_CLASS(Labtest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad triad(-20.0, 12.0, 0.5);
			Assert::AreEqual(triad.Sum(), -7.5);
		}

		TEST_METHOD(TestMethod2)
		{
			Triangle T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}
	};
}
