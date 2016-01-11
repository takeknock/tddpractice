#include "BlackScholesTest.h"
#include "BlackScholes.h"

#include <cppunit/extensions/HelperMacros.h>

CPPUNIT_TEST_SUITE_REGISTRATION(BlackScholesTest);

void BlackScholesTest::setUp()
{
}

void BlackScholesTest::testCreateOnePath()
{
    //return type is Path type ?
    const double drift = 0.11;
    const double volatility = 0.2;
    mctr::BlackScholes model(drift, volatility);

    mctr::TimeGrid timeGrid(10);
    mctr::Path path(timeGrid);
    //std::cout << typeid(path) << std::endl;
    //std::cout << typeid(model.createOnePath(timeGrid)) << std::endl;
    //CPPUNIT_ASSERT_EQUAL(typeid(path), typeid(model.createOnePath(timeGrid)));

}


void BlackScholesTest::tearDown()
{
}

