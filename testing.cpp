#include <gtest/gtest.h>
#include "arry.h"

TEST(ArrayTest, ArrayCreate) { // При создании массива его размер должен быть нулевым
	Arry a;
	ASSERT_EQ(a.getSize(), 0) << "Size of empty array should be 0";
}

TEST(ArrayTest, ArraySetElem) { // Проверяем замену элементов
	Arry a;
	a.addElement(5);
	a.addElement(6);
	a.addElement(19);
	a.addElement(18);
	a.setElement(1, 4);
	//EXPECT_EQ(a.getElement(0), 7);
	ASSERT_EQ(a.getElement(1), 5);
	//ASSERT_EQ(a.getElement(2), 7);
}

TEST(ArrayTest, ArrayAddElem) { // Проверяем добавление элемента
	Arry a;
	a.addElement(42);
	ASSERT_EQ(a.getSize(), 1);
	ASSERT_EQ(a.getElement(0), 42);
}

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

/*
#include <iostream>
#include <fstream>
#include "arry.h"

void Printing_Out(Arry a) {
	for (size_t i = 0; i < a.getSize(); ++i) {
		std::cout << a.getElement(i) << " ";
	}
	std::cout << std::endl;
}

bool testArryCreate() { // При создании массива его размер должен быть нулевым
	Arry a;
	if (a.getSize() == 0) return true;
	return false;
}

bool testArryAddElem() { // Проверяем добавление элемента
	Arry a;
	a.addElement(42);
	a.addElement(24);
	//if (a.getSize() != 1) return false;
	if (a.getElement(0) != 42) return false;
	return true;
}

bool testArrySettingTheElem() { // Проверяем замену элементов
	Arry arr;
	arr.addElement(5);
	arr.addElement(6);
	arr.addElement(19);
	arr.addElement(18);
	arr.setElement(1, 4);
	if (arr.getElement(1) != 4) return false;
	//Printing_Out(arr);
	return true;
}

int main() {
	std::cout << "testArryCreate " << (testArryCreate() ? "OK" : "FAIL") << std::endl;
	std::cout << "testArryAddElem " << (testArryAddElem() ? "OK" : "FAIL") << std::endl;
	std::cout << "testArrySetElem " << (testArrySettingTheElem() ? "OK" : "FAIL") << std::endl;
	return 0;
}
*/