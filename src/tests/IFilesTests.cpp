#include "gtest/gtest.h"

#include "FilesMock.h"

TEST(IFiles, Init)
{
    EXPECT_NO_THROW(IFiles_ptr f = new FilesMock());
}