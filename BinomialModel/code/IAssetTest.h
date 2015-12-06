#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

namespace trainingbm {
    class IAssetTest : public CppUnit::TestFixture {
    public:
        IAssetTest();
        void testConstructor();
        void testDrift();
        void testVolatility();
        void testSpot();
    
    };
    
} //namespace trainingbm {
