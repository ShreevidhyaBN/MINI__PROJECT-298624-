#include "unity.h"
#include "tic.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_tictactoe_invalid_move(void)
{
  TEST_ASSERT_EQUAL(0, mainc(10));
  TEST_ASSERT_EQUAL(0, mainc(0));
}


int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_tictactoe_invalid_move);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}