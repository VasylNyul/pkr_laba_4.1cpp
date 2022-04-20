#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include "C:\Users\apple\source\repos\pkr_laba_4.1cpp\pkr_laba_4.1cpp\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace pkrUnitTest41c
{
	TEST_CLASS(pkrUnitTest41c)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* fname{ "t.txt" };
			int k = 0;
		
			ifstream fin(fname);
			int functionResult = k;

			Assert::AreEqual(0, functionResult);

		}
	};
}
