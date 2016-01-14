#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>

#include <iostream>
#include <boost/shared_ptr.hpp>

#include "IPolynomial.h"
#include "CubicPolynomial.h"
#include "SquarePolynomial.h"
#include "IsExistLocalPoints.h"


int main()
{
    // for unit tests
    CPPUNIT_NS::TestResult controller;

    CPPUNIT_NS::TestResultCollector result;
    controller.addListener(&result);

    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener(&progress);

    CPPUNIT_NS::TestRunner runner;
    runner.addTest(CppUnit::TestFactoryRegistry::getRegistry().makeTest());
    runner.run(controller);

    CPPUNIT_NS::CompilerOutputter outputter(&result, CPPUNIT_NS::stdCOut());
    outputter.write();


    // 1. use pointer
    boost::shared_ptr<pln::IPolynomial> pf(new pln::CubicPolynomial(1.0, 1.0, 2.0, 3.0));
    std::cout << (*pf)(1.0) << std::endl;

    // 2. use reference
    pln::CubicPolynomial c(1.0, 2.0, 3.0, 4.0);
    pln::IPolynomial& f = c;
    std::cout << f(1.0) << std::endl;

    // check the existing of local points.
    pln::IsExistLocalPoints checkLocalPoint;
    checkLocalPoint(f);

    return 0;
}



