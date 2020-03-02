#include <vector>
#include <iostream>

int main() {
	std::vector<int> integer;
	integer.reserve(2);
	std::cout << integer.capacity();
	integer.insert(integer.end(), { 1,2,3 });
	std::cout << integer.capacity();
	system("pause");
	return 0;

}
