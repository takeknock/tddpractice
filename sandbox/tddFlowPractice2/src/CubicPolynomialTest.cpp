#include "CubicPolynomialTest.h"
#include "CubicPolynomial.h"

namespace pln {
    CPPUNIT_TEST_SUITE_REGISTRATION(CubicPolynomialTest);
    
    void CubicPolynomialTest::setUp()
    {
    }
    
    void CubicPolynomialTest::testConstructor()
    {
        const double a = 1.0;
        const double b = 2.0;
        const double c = 3.0;
        const double d = 4.0;

        pln::CubicPolynomial fc(a, b, c, d);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(a, fc._a, 10e-8);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(b, fc._b, 10e-8);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(c, fc._c, 10e-8);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(d, fc._d, 10e-8);
        
        
    }
    
    void CubicPolynomialTest::testOperatorImpl()
    {
    
    }
    
    void CubicPolynomialTest::testGetDiscriminantImpl()
    {
    
    }
    
    void CubicPolynomialTest::tearDown()
    {
    }
} // namespace pln {
