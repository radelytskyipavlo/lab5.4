#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N=3;
			int K = 16;
			double tolerance = 0.0001;
			Assert::AreEqual(P0(N), P1(N, N), tolerance);
			Assert::AreEqual(P0(N), P2(N, 25), tolerance);
			Assert::AreEqual(P0(N), P3(N, N, 1), tolerance);
			Assert::AreEqual(P0(N), P4(N, 10, 1), tolerance);
		}
	};
}
