#include <gtest/gtest.h>
#include "arry.h"

TEST(ListTest, ListCreate) { // При создании массива его размер должен быть нулевым
	list a;
	ASSERT_EQ(a.getSize(), 0) << "Size of empty array should be 0";
}

TEST(ListTest, ListSetElem) { // Проверяем замену элементов
	list a;
	a.addElement(5);
	a.addElement(6);
	a.addElement(19);
	a.addElement(18);
	a.setElement(1, 4);
	//EXPECT_EQ(a.getElement(0), 7);
	ASSERT_EQ(a.getElement(1), 5);
	//ASSERT_EQ(a.getElement(2), 7);
}

TEST(ArrayTest, ListAddElem) { // Проверяем добавление элемента
	list a;
	a.addElement(42);
	ASSERT_EQ(a.getSize(), 1);
	ASSERT_EQ(a.getElement(0), 42);
}

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}