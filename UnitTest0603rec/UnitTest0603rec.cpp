#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_03rec/Lab_06_03rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0603rec
{
	TEST_CLASS(UnitTest0603rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0;
			int a[5] = { 3, 6, 8, 2, 5 };
			int sum = 138;
			int n = 5;
			k = SumKv(a, n, 0, 0);
			Assert::AreEqual(k, sum);
		}

		TEST_METHOD(TestMethod2)
		{
			double k = 0;
			double r[5] = { 3, 6, 8, 2, 5 };
			double sum = 138;
			int n = 5;
			k = SumKvT(r, n, 0., 0.);
			Assert::AreEqual(k, sum);
		}
	};
}