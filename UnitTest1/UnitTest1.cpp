#include "pch.h"
#include "CppUnitTest.h"
#include "..\PR5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// ��������� �������, �� �� ������ ���������
double S(double x, double eps, int& n, double s);
double A(double x, int n, double a);

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        // ����������� ���� ��� ������� S
        TEST_METHOD(TestS)
        {
            double eps = 0.0001;
            int n = 0;
            double result = S(2.0, eps, n, 0.0);
            Assert::IsTrue(result > 0);  // ������� ����: �� ��������� ����� ����
        }

        // ����������� ���� ��� ������� A
        TEST_METHOD(TestA)
        {
            double result = A(2.0, 1, 1.0);
            Assert::IsTrue(result > 0);  // ������� ����: �� ��������� ����� ����
        }
    };
}
