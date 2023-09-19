#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZakharovaYV.Sprint1.Task0.V4.Lib/Tyuiu.ZakharovaYV.Sprint1.Task0.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0
{
	TEST_CLASS(UnitTest0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint1Task0V01* date = new Service();


			int a = 2;
			int b = 3;
			int s;

			//run 
			s = date-> Rezalt(a, b);

			// Valid 
			Assert::AreEqual(6,s);
		}
	};
}
