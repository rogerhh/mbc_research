#include <iostream>

#include "unit_test_framework.h"
#include "../src/DataPoint.hpp"
#include "../src/MBCFunctions.hpp"

using namespace std;
using namespace MBC;

TEST(create_table)
{
    get_sunrise_sunset_time("08/29/18", 45, -82);
}

TEST(print_data)
{
}

TEST_MAIN();
