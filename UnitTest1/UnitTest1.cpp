#include "pch.h"
#include "CppUnitTest.h"
#include"..//classlab8.1.string/lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = "n2on4o";
			Assert::AreEqual(Count(str), 2);
		}
	};
}