#include "TestMathOperation.h"

TestMathOperation::TestMathOperation()
{

}

void TestMathOperation::testAddition()
{
    MathOperation mathOperation;
    QCOMPARE(mathOperation.addTwoNumber(2,3),5); //QCOMPARE( actual, expected)
    QCOMPARE(mathOperation.addTwoNumber(0,0),0); //QCOMPARE( actual, expected)
    QCOMPARE(mathOperation.addTwoNumber(-1,1),0); //QCOMPARE( actual, expected)
    QCOMPARE(mathOperation.addTwoNumber(2,-3),-1); //QCOMPARE( actual, expected)
}

