#include <vector>
#include <iostream>

/*int main() {
	std::vector<int> integer;
	std::cout << "capacity:"<< integer.capacity() << std::endl;
	int number;
	std::cin >> number;
	for (int i = 0; i < number; i++) {
		integer.push_back(0);
	}
	std::cout << "capacity:" << integer.capacity() << std::endl;
	system("pause");
	return 0;
}*/
//�� 5 ��������� size=capacity, ���� ���������� ������ ����������� size, �� ������� ����� ������ size �� 1, ����� �� 2, �� 3, �� 5... 


/*int main() {
	std::vector<int> integer;
	int number;
	std::cin >> number;
	integer.reserve(number);
	for (int i = 0; i < number; i++) {
		integer.push_back(0);
	}
	std::cout << "capacity1:" << integer.capacity() << std::endl;
	integer.push_back(0);
	std::cout << "capacity2:" << integer.capacity() << std::endl;
	system("pause");
	return 0;
}*/
//�� 5 ��������� size=capacity, ����� ����� ������ ��� �������� ������� ����� ������ size �� 1, �� 2 � ��.\


int main() {
	std::vector<int> integer;
	std::cout << "capacity1:" << integer.max_size() << std::endl;
	int number;
	std::cin >> number;
	for (int i = 0; i < number; i++) {
		integer.push_back(0);
	}
	std::cout << "capacity2:" << integer.capacity() << std::endl;
	system("pause");
	return 0;
}