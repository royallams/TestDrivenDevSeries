// T1_FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <gtest/gtest.h>




std::string FizzBuzz(int value)
{
    return std::to_string(value);
}



//Case 1
// RED PHASE - FAILING UNIT TEST
//GREEN PHASE - MAke it kust work
// REFACTOR PHASE . 
TEST(MyTestExample, CanCallFIzzBuzzFunc)
{
    std::string result = FizzBuzz(1);
}



//Case 2
// RED PHASE - FAILING UNIT TEST
//GREEN PHASE - MAke it kust work
// REFACTOR PHASE . 
TEST(MyTestExample, Return1With1PassedIn)
{
    std::string result = FizzBuzz(1);
    ASSERT_STREQ("1", result.c_str()); 
}
 
 
//Case 3
// RED PHASE - FAILING UNIT TEST
//GREEN PHASE - MAke it kust work
// REFACTOR PHASE . 
TEST(MyTestExample, Return2With2PassedIn)
{
    std::string result = FizzBuzz(2);
    ASSERT_STREQ("2", result.c_str());
}


