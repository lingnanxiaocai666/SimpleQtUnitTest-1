#include "TestMathOperation.h"

TestMathOperation::TestMathOperation()
{

}

void TestMathOperation::testAddition1()
{
    MathOperation mathOperation;
    QCOMPARE(mathOperation.addTwoNumber(2,3),5); //QCOMPARE( actual, expected) 
}

void TestMathOperation::testAddition2()
{
    MathOperation mathOperation;
	QCOMPARE(mathOperation.addTwoNumber(0,0),0); //QCOMPARE( actual, expected)
}

void TestMathOperation::testAddition3()
{
    MathOperation mathOperation;
    QCOMPARE(mathOperation.addTwoNumber(-1,1),0); //QCOMPARE( actual, expected)
}

void TestMathOperation::testAddition4()
{
    MathOperation mathOperation;
    QCOMPARE(mathOperation.addTwoNumber(2,-3),-1); //QCOMPARE( actual, expected)
}

void TestMathOperation::testAddition5()
{
    MathOperation mathOperation;
    QCOMPARE(mathOperation.addTwoNumber(-1,-1),-1); //QCOMPARE( actual, expected)
}

void TestMathOperation::testAddition6()
{
    MathOperation mathOperation;
	QCOMPARE(mathOperation.addTwoNumber(-2,-3),-5); //QCOMPARE( actual, expected)
}

void TestMathOperation::testAddition7()
{
    MathOperation mathOperation;
	QCOMPARE(mathOperation.addTwoNumber(-91231643619,126451761234),1659121745129); //QCOMPARE( actual, expected)
}