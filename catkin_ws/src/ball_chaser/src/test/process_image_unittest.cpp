//#include "../process_image.cpp"
#include <gtest/gtest.h>

TEST(BasicTestSuite, operationsTest){
    EXPECT_EQ(1, 0+1);
    EXPECT_EQ(-2, -1-1);
    EXPECT_EQ(10, 2*5);
    
    EXPECT_NE(-1, 1);
}

TEST(BasicTestSuite, booleanTests){
  EXPECT_TRUE(true);
  EXPECT_FALSE(!true);
}

TEST(BasicTestSuite, notEqualTests){
  EXPECT_NE(-1, 1);
  EXPECT_NE(1.4, 'a');
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  //ros::init(argc, argv, "tester");
  //ros::NodeHandler nh;
  return RUN_ALL_TESTS();
}