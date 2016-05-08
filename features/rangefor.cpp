#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = {0, 1,2, 3, 4, 5, 6, 7, 8, 9};
	for (const int & i:v){
		std::cout << i << ' ';
	}
	std::cout << '\n';

	for (auto i: v){
		std::cout << i << ' ';
	}
	std::cout << '\n';

	for (auto&& i: v){
		std::cout << i << ' ';
	}
	std::cout << '\n';

	for (int n: {0, 1, 2, 3, 4, 6}){
		std::cout << n << ' ';
	}
	std::cout << '\n';

	int a[] = {0, 1, 2, 3, 4, 5};
	for (int n: a){
		std::cout << n << ' ';
	}
	std::cout << '\n';
}