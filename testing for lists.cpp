#include <gtest/gtest.h>
#include "lis.h"

TEST(ListTest, ListCreate) { // ��� �������� ������� ��� ������ ������ ���� �������
	Lis a;
	ASSERT_EQ(a.getSize(), 0) << "Size of empty array should be 0";
}

TEST(ListTest, ListSetElem) { // ��������� ������ ���������
	Lis a;
	a.addElement(17);
	a.addElement(6);
	a.addElement(96);
	a.addElement(105);
	a.setCurrent(5);
	ASSERT_EQ(a.getCurrent(), 5);
}

TEST(ArrayTest, ListAddElem) { // ��������� ���������� ��������
	Lis a;
	a.addElement(42);
	ASSERT_EQ(a.getSize(), 1);
	ASSERT_EQ(a.getCurrent(), 42);
}

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}