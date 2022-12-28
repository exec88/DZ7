#pragma once

class IntegerArray
{
private:
	int length_;
	int* data_;

public:
	IntegerArray() = default;
	IntegerArray(int length, int* data);
	IntegerArray(const IntegerArray& other);
	~IntegerArray();
	int getLength() const;
	void clears();								// удаление массива
	int& operator[](int index);					// получить значение по индексу
	void reallocate(int newLength);				// перераспределение массива с размером 'newLength'
	void resize(int newLength);					// изменение размера массива
	void insertBefore(int index, int value);	// вставить значение перед значением с индексом
	void remove(int index);				        // удаление значения с индексом из массива
	void insertBegin(int value);		        // вставить значение в начале массива
	void insertEnd(int value);		        // вставить значение в конце массива
	int searchIndex(int index);	         	// поиск значения по индексу
	void sortAscend();					        // сортировка по возрастанию
	void sortDescend();					        // сортировка по убыванию
};

