#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
    #include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
    TEST_CLASS(RectangleTests)
    {
    public:

        //Task 1
        TEST_METHOD(GetPerimeter_5x6_Returns22)
        {
            int l = 5, w = 6;
            int p = getPerimeter(&l, &w);
            Assert::AreEqual(22, p);
        }

        TEST_METHOD(GetArea_3x4_Returns12)
        {
            int l = 3, w = 4;
            int a = getArea(&l, &w);
            Assert::AreEqual(12, a);
        }

        //Task 2:
		//setLength
        TEST_METHOD(SetLength_Valid50_SetsLength)
        {
            int length = 1;
            setLength(50, &length);
            Assert::AreEqual(50, length);
        }

        TEST_METHOD(SetLength_ValidMin1_SetsLength)
        {
            int length = 10;
            setLength(1, &length);
            Assert::AreEqual(1, length);
        }

        TEST_METHOD(SetLength_InvalidZero_DoesNotChange)
        {
            int length = 5;
            setLength(0, &length); // 0 is invalid; should not change length
            Assert::AreEqual(5, length);
        }

        //setWidth
        TEST_METHOD(SetWidth_Valid20_SetsWidth)
        {
            int width = 1;
            setWidth(20, &width);
            Assert::AreEqual(20, width);
        }

        TEST_METHOD(SetWidth_ValidMax99_SetsWidth)
        {
            int width = 10;
            setWidth(99, &width);
            Assert::AreEqual(99, width);
        }

        TEST_METHOD(SetWidth_100_DoesNotChange)
        {
            int width = 5;
            setWidth(100, &width); // 100 is invalid; should not change
            Assert::AreEqual(5, width);
        }
	};
}
