#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "Contact.hpp"
class ContactClass_Test : public testing::Test
{
public:
    Contact_t Contcat;
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

TEST_F(ContactClass_Test, TEST_CASE_1)
{
    // EXPECT_EQ(PhoneClass.GetPhoneNumber(), "UNKNOWN");
}
TEST_F(ContactClass_Test, TEST_CASE_2)
{
    // PhoneClass.SetPhoneNumber("London");
    // EXPECT_EQ(PhoneClass.GetPhoneNumber(), "London");
}
TEST_F(ContactClass_Test, TEST_CASE_3)
{
    // Contact_t PhoneClass2("Paris", "France", "Current Location");
    // EXPECT_NE(PhoneClass2.GetPhoneNumber(), "London");
}
TEST_F(ContactClass_Test, TEST_CASE_4)
{

    // ASSERT_ANY_THROW(PhoneClass.SetPhoneNumber(""));    
}