#include "UnitTest.h"

UnitTest::UnitTest()
{

}

int UnitTest::run()
{
    TestMathOperation testMathOperation;
    return QTest::qExec(&testMathOperation);
}

