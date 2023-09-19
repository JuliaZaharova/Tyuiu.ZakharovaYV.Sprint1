#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZakharovaYV.Sprint1.Task0.V4.Lib/Tyuiu.ZakharovaYV.Sprint1.Task0.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuZakharovaYVSprint1Task0V44Test
{
	TEST_CLASS(TyuiuZakharovaYVSprint1Task0V44Test)
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
			s = date->Rezalt(a, b);

			// Valid 
			Assert::AreEqual(6, s);
		}
	};
}
		
	

