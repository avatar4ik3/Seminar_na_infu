#include "stdafx.h"
#include "CppUnitTest.h"
#include"../Semi/matriza.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(name_test) {
			int bl = 2;
			bl -= 1;
			Assert::AreEqual(1, bl);
		}

	};
}