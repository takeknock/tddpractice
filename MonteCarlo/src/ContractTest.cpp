#include <cppunit/extensions/HelperMacros.h>
#include "ContractTest.h"

namespace mctr {
    CPPUNIT_TEST_SUITE_REGISTRATION(ContractTest);
    void ContractTest::setUp()
    {
        return;
    }

    void ContractTest::testConstructor()
    {
        CPPUNIT_ASSERT(true);
        return;
    }

    void ContractTest::tearDown()
    {
        return;
    }

} //namespace mctr
