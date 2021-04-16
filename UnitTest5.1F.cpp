#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1F/Fraction_Public.h"
#include "../Lab5.1F/Fraction_Public.cpp"
#include "../Lab5.1F/Pair.h"
#include "../Lab5.1F/Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51F
{
	TEST_CLASS(UnitTest51F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction_Public a(1, 5), b(1, 5);
			Assert::AreEqual(a == b, true);
		}
	};
}
