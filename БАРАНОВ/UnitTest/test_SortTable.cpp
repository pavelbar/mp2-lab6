#pragma comment(lib, "GoogleTest.lib")
#include "TSort.h"
#include <gtest.h>

//add
TEST(Tsort, cant_add_to_full_sort_table)//add
{
	Tsort v(2);
	v.add("test1", "a");
	v.add("test2", "b");
	ASSERT_ANY_THROW(v.add("test3", "c"));
}

TEST(Tsort, can_add_to_sort_table)//add
{
	Tsort v(2);
	v.add("test1", "a");
	ASSERT_NO_THROW(v.add("test2", "b"));
}

TEST(Tsort, method_add_work_properlye_for_first_arg_sort_table)//add
{
	Tsort v(2);
	v.add("test1", "a");
	string result = "test1";
	EXPECT_EQ(result, v.get_argOne_Of_Line_N(0));
}

TEST(Tsort, method_add_work_properlye_for_second_arg_sort_table)//add
{
	Tsort v(2);
	v.add("test1", "a");
	string result = "a";
	EXPECT_EQ(result, v.get_argTwo_Of_Line_N(0));
}

TEST(Tsort, sort_add_work_properlye_for_s_sort_table_for_first_arg)//add
{
	Tsort v(5);
	v.add("test2", "b");
	v.add("test1", "a");
	string result = "test1";
	EXPECT_EQ(result, v.get_argOne_Of_Line_N(0));
}


TEST(Tsort, sort_add_work_properlye_for_s_sort_table_for_second_arg)//add
{
	Tsort v(5);
		v.add("test2", "b");
		v.add("test1", "a");
		string result = "a";
		EXPECT_EQ(result, v.get_argTwo_Of_Line_N(0));
}

//---