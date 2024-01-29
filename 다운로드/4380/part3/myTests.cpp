#include <gtest/gtest.h>
#include "myUtils.h"

TEST(ConvTen2TwoTest, ZeroValue) {
    unsigned int decimal = 0;
    std::string expected = "0";
    std::string result = convTen2Two(decimal);
    EXPECT_EQ(result, expected);
}

TEST(ConvTen2TwoTest, NonZeroValue) {
    unsigned int decimal = 42; // 변경된 숫자
    std::string expected = "101010"; // 변경된 예상 결과
    std::string result = convTen2Two(decimal);
    EXPECT_EQ(result, expected);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
