#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "PhoneNumber.hpp"
class Phone_Test : public testing::Test
{
public:
    Phone_t PhoneClass;
    // Sets up the test fixture.
    void SetUp() override
    {
        // You can do set-up work for each test here.
    }

    // Tears down the test fixture.
    void TearDown() override
    {
    }
};

TEST_F(Phone_Test, SetAddressTest)
{
    EXPECT_EQ(PhoneClass.GetPhoneNumber(), "UNKNOWN");
}
TEST_F(Phone_Test, SetAddressEmptyTest)
{
    PhoneClass.SetPhoneNumber("London");
    EXPECT_EQ(PhoneClass.GetPhoneNumber(), "London");
}
TEST_F(Phone_Test, Address_Test_SetAddressTwoArgumentsConstructor_Test)
{
    Phone_t PhoneClass2("Paris", "France", "Current Location");
    EXPECT_NE(PhoneClass2.GetPhoneNumber(), "London");
}
TEST_F(Phone_Test, SetAddressEmptyFuncTest)
{

    ASSERT_ANY_THROW(PhoneClass.SetPhoneNumber(""));    
}