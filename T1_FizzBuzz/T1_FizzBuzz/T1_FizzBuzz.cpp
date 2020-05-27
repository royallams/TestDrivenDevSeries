// T1_FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <gtest/gtest.h>




std::string FizzBuzz(int value)
{
    if (value%3 == 0)
        return "Fizz";
    if (value%5 == 0)
        return "Buzz";
    return std::to_string(value);
}


// Make a Utility function that can call all similar casee

void CheckFizzBuzz(int value, std::string name)
{
    std::string result = FizzBuzz(value);
    ASSERT_STREQ(name.c_str(), result.c_str());
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


//Replace the previous codes with new utility
TEST(MyTestExample, Return1With1PassedInNew)
{
    CheckFizzBuzz(1, "1");
}

//Replace the previous codes with new utility
TEST(MyTestExample, Return2With2PassedInNew)
{
    CheckFizzBuzz(2, "2");
}


//Case 4
// RED PHASE - FAILING UNIT TEST
//GREEN PHASE - MAke it kust work
// REFACTOR PHASE . 
TEST(MyTestExample, ReturnFizzWith3PassedIn)
{
    CheckFizzBuzz(3,"Fizz");
}


//Case 5
// RED PHASE - FAILING UNIT TEST
//GREEN PHASE - MAke it kust work
// REFACTOR PHASE . 
TEST(MyTestExample, ReturnBuzzWith5PassedIn)
{
    CheckFizzBuzz(5, "Buzz");
}

//Case 6
// RED PHASE - FAILING UNIT TEST
//GREEN PHASE - MAke it kust work
// REFACTOR PHASE . 
TEST(MyTestExample, ReturnFizzWith6PassedIn)
{
    CheckFizzBuzz(6, "Fizz");
}


//Case 7
// RED PHASE - FAILING UNIT TEST
//GREEN PHASE - MAke it kust work
// REFACTOR PHASE . 
TEST(MyTestExample, ReturnBuzzWith10PassedIn)
{
    CheckFizzBuzz(10, "Buzz");
}

