#include<gtest/gtest.h>

int add(int a, int b){
	return a+b;
}

TEST(AdditionTest,positiveNumbers){
	EXPECT_EQ(2,add(1,1));
	EXPECT_EQ(4,add(2,2));
	EXPECT_EQ(6,add(3,3));
}

int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}