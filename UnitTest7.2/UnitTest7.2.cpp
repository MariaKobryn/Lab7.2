#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab7.2/Lab7.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72
{
	TEST_CLASS(UnitTest72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** M = new int* [2];
			for (int i = 0; i < 2; i++) 
				M[i] = new int[2];
			M[0][0] = 2;
			M[0][1] = 2;
			M[1][0] = -5;
			M[1][1] = 11;

			int t = GetSumMax(M, 2, 2);
			Assert::AreEqual(t, 11);
		}
	};
}
