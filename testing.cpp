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