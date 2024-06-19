#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "Address.hpp"
class Address_Test : public testing::Test
{
public:
    Address_t AddressClass;
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

TEST_F(Address_Test, SetAddressTest)
{
    EXPECT_EQ(AddressClass.GetAddress(), "UNKNOWN");
}
TEST_F(Address_Test, SetAddressEmptyTest)
{
    AddressClass.SetAddress("London");
    EXPECT_EQ(AddressClass.GetAddress(), "London");
}
TEST_F(Address_Test, Address_Test_SetAddressTwoArgumentsConstructor_Test)
{
    Address_t AddressClass2("Paris", "France", "Current Location");
    EXPECT_NE(AddressClass2.GetAddress(), "London");
}
TEST_F(Address_Test, SetAddressEmptyFuncTest)
{

    ASSERT_ANY_THROW(AddressClass.SetAddress(""));    
}