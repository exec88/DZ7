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
	void clears();								// �������� �������
	int& operator[](int index);					// �������� �������� �� �������
	void reallocate(int newLength);				// ����������������� ������� � �������� 'newLength'
	void resize(int newLength);					// ��������� ������� �������
	void insertBefore(int index, int value);	// �������� �������� ����� ��������� � ��������
	void remove(int index);				        // �������� �������� � �������� �� �������
	void insertBegin(int value);		        // �������� �������� � ������ �������
	void insertEnd(int value);		        // �������� �������� � ����� �������
	int searchIndex(int index);	         	// ����� �������� �� �������
	void sortAscend();					        // ���������� �� �����������
	void sortDescend();					        // ���������� �� ��������
};

