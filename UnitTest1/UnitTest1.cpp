#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR 7.1 OOP\PR 7.1 OOP\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(searchmiel({ 2,4,1 }), 2);
		}
	};
}
