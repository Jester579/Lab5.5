#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Q(int m, int n);
			int m = 2;
			int n = 2;

			Assert::AreEqual(m,n);
		}
	};
}
