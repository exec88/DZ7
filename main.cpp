#include "IntegerArray.h"
#include "BadLength.h"
#include "BadRange.h"
#include <iostream>

const int SIZE = 10;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	try
	{
		cout << "Случайный массив: " << endl;
		int* array = new int[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			array[i] = (int)rand();
			cout << array[i] << " ";
		}
		cout << endl << endl;

		IntegerArray object(SIZE, array);

		delete[] array;

		cout << "Новый контейнер 'object': " << endl;
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl;
		cout << "Размер Контейнера = " << object.getLength() << endl << endl;

		IntegerArray objectCopy(object);
		cout << "Контейнер 'object_Copy' созданый копирование контейнера 'object' : " << endl;
		for (int i = 0; i < objectCopy.getLength(); i++)
		{
			cout << objectCopy[i] << " ";
		}
		cout << endl;
		cout << "Размер Контейнера = " << objectCopy.getLength() << endl << endl;

		cout << "Вставить номер = -5 в начало 'object': " << endl;
		object.insertBegin(-5);
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl;
		cout << "Размер Контейнера = " << object.getLength() << endl << endl;

		cout << "Вставить номер = 27 в конец 'object': " << endl;
		object.insertEnd(27);
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl;
		cout << "Размер Контейнера = " << object.getLength() << endl << endl;
		
		cout << "Вставить номер = 17 перед числом с индексом = 11: " << endl;
		object.insertBefore(11, 17);
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl;
		cout << "Размер Контейнера = " << object.getLength() << endl << endl;
		
		cout << "Удалить элемент позиции с индексом = -11: " << endl;
		object.remove(-11);
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl;
		cout << "Размер Контейнера = " << object.getLength() << endl << endl;
		
		cout << "Поиск номера с индексом = 0" << endl;
		cout << "index = 0, value = " << object.searchIndex(0) << endl << endl;
		
		cout << "Сортировка 'object' по возрастанию: " << endl;
		object.sortAscend();
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl << endl;

		cout << "Сортировка 'object' по уменьшению элементов: " << endl;
		object.sortDescend();
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl << endl;
		
		cout << "Перераспределение массива с размером 'newLength' = 5: " << endl;
		object.reallocate(5);
		
		cout << "Стереть 'object': " << endl;
		object.clears();
		for (int i = 0; i < object.getLength(); i++)
		{
			cout << object[i] << " ";
		}
		cout << endl;
		cout << "Размер Контейнера = " << object.getLength() << endl;
	}
	catch (BadLength& ex)
	{
		cout << "bad length = " << ex.getLength() << endl;
 	}
	catch (BadRange& ex)
	{
		cout << "bad index = " << ex.getIndex() << endl;
	}
	catch (const char* ex)
	{
		cout << ex << endl;
	}
	catch (...)
	{

	}

	return 0;
}