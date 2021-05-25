#include <iostream>
#include "gtest/gtest.h"
#include "functi.h"

using namespace std;

TEST(out, output) {
   const char* str = "Вадим";

    testing::internal::CaptureStdout();
    trans(str, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Vadim");

    const char* str_1 = "Погода классная";

    testing::internal::CaptureStdout();
    trans(str_1, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Pogoda klassnaya");

    const char* str_2 = "Я хочу кушать";

    testing::internal::CaptureStdout();
    trans(str_2, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Ya hochu kushat'");

    const char* str_3 = "Как дела на работе";

    testing::internal::CaptureStdout();
    trans(str_3, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Kak dela na rabote");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
