#include "pch.h"
#include "CppUnitTest.h" 
#include "../PR5.4/PR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestS0)
        {
            double result = S0(1);
            double expected = 2;
            double epsilon = 0.0001;

            Assert::AreEqual(result, expected, epsilon);
        }

        TEST_METHOD(TestS1)
        {
            double result = S1(1, 1);
            double expected = 2;
            double epsilon = 0.0001;

            Assert::AreEqual(result, expected, epsilon);
        }

        TEST_METHOD(TestS2)
        {
            double result = S2(1, 1);
            double expected = 2;
            double epsilon = 0.0001;

            Assert::AreEqual(result, expected, epsilon);
        }

        TEST_METHOD(TestS3)
        {
            double result = S3(1, 1, 0.0);
            double expected = 2;
            double epsilon = 0.0001;

            Assert::AreEqual(result, expected, epsilon);
        }

        TEST_METHOD(TestS4)
        {
            double result = S4(1, 1, 0.0);
            double expected = 2;
            double epsilon = 0.0001;

            Assert::AreEqual(result, expected, epsilon);
        }
    };
}


