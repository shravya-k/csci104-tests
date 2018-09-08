#include <gtest/gtest.h>
#include <selection_sort.h>
#include <selection_sort_utils.h>

/* 	AUTHOR: JONATHAN HOLTMANN
		EMAIL: holtmann@usc.edu
		DESCIPTION: The following contains extra test cases for the CSCI 104
								homework assignment nr. 2/
*/

TEST(SelSortJTest, SameElementManyTimesMin) {
	std::vector<int> contents({-1,1,1,3,5,6,7,15,5,5,5,1,4,6,7,1,20,20,21,99});

	Item * list = makeList(contents);
	int min = findMin(list)->getValue();

	EXPECT_EQ(-1, min);

	deleteList(list);
}

TEST(SelSortJTest, FirstElementMinSort) {
	std::vector<int> contents({-91, 5, 4, 3});
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTest, LastElementMinSort) {
	std::vector<int> contents({3, 5, 4, -91});
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTest, ThreeEqualValuesSort) {
	std::vector<int> contents({5,5,5});
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTest, ThreeEqualNegativeValuesSort) {
	std::vector<int> contents({-5,-5,-5});
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTest, ReversedListSort) {
	std::vector<int> contents({10,9,8,7,6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,-7,-8});
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTest, EmptyListMin)
{
	EXPECT_EQ(nullptr, findMin(nullptr));
}

TEST(SelSortJTestStress, TenThousandElementMin) {
	std::vector<int> contents;
	for (int i = -5000; i <= 5000; i++) {
		contents.push_back(i);
	}

	Item * list = makeList(contents);
	int min = findMin(list)->getValue();

	EXPECT_EQ(-5000, min);

	deleteList(list);
}

TEST(SelSortJTestStress, HundredThousandElementMin) {
	std::vector<int> contents;
	for (int i = -50000; i <= 50000; i++) {
		contents.push_back(i);
	}

	Item * list = makeList(contents);
	int min = findMin(list)->getValue();

	EXPECT_EQ(-50000, min);

	deleteList(list);
}

TEST(SelSortJTestStress, MillionElementMin) {
	std::vector<int> contents;
	for (int i = -500000; i <= 500000; i++) {
		contents.push_back(i);
	}

	Item * list = makeList(contents);
	int min = findMin(list)->getValue();

	EXPECT_EQ(-500000, min);

	deleteList(list);
}

TEST(SelSortJTestStress, HundredListSort) {
	std::vector<int> contents;
	for (int i = -50; i > 50; i++) {
		contents.push_back(i);
	}
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTestStress, ThousandListSort) {
	std::vector<int> contents;
	for (int i = -500; i > 500; i++) {
		contents.push_back(i);
	}
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTestStress, TenThousandListSort) {
	std::vector<int> contents;
	for (int i = -5000; i > -5000; i++) {
		contents.push_back(i);
	}
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTestStress, HundredThousandListSort) {
	std::vector<int> contents;
	for (int i = -50000; i > -50000; i++) {
		contents.push_back(i);
	}
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}

TEST(SelSortJTestStress, MillionListSort) {
	std::vector<int> contents;
	for (int i = -500000; i > -500000; i++) {
		contents.push_back(i);
	}
	Item * list = makeList(contents);
	list = LLSelectionSort(list);

	ASSERT_TRUE(checkValidPointers(list, contents.size()));
	ASSERT_TRUE(checkSameValues(list, contents));
	ASSERT_TRUE(checkIsSorted(list));

	deleteList(list);
}
