#include <gtest/gtest.h>
#include "../classes/BaseFraction.h"

TEST(MakeFraction, TestBaseFraction) {
    BaseFraction bf(12, 3456);
    EXPECT_EQ(12, bf.getWhole());
    EXPECT_EQ(3456, bf.getFractional());
}