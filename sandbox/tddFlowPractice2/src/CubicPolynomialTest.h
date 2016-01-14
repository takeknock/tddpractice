#ifndef CUBICPOLYNOMIALTEST_H_INCLUDED
#define CUBICPOLYNOMIALTEST_H_INCLUDED

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

namespace pln {
    class CubicPolynomialTest : public CPPUNIT_NS::TestFixture {
    public:
        CPPUNIT_TEST_SUITE(CubicPolynomialTest);
        CPPUNIT_TEST(testConstructor);
        CPPUNIT_TEST(testOperatorImpl);
        CPPUNIT_TEST(testGetDiscriminantImpl);
        CPPUNIT_TEST_SUITE_END();
    
    public:
        void setUp();
        void testConstructor();
        void testOperatorImpl();
        void testGetDiscriminantImpl();
        void tearDown();
    
    };
    
} // namespace pln
#endif // CUBICPOLYNOMIALTEST_H_INCLUDED
