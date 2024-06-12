TEST(power, InFileStream)
{
  int number = 2;
  int deg = 3;
  
  int result = power(number, deg);
  
  EXPECT_EQ(result, 8);
}


