#include <iostream>

struct A
{
	double x;
};

const A* a = new A{0};

decltype(a->x) y;
decltype((a->x)) z = y;

template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u);

int main()
{
	int i = 33;
	decltype(i) j = i * 2;
	std::cout << "i = " << i << ","
			 << "j = " << j << '\n';
	auto f = [](int a, int b) -> int
	{
		return a * b;
	}

	decltype(f) g = f;
	i = f(2, 2);
	j = g(3, 3);
	std::cout << "i = " << i << ", "
			<< "j = " << j << '\n';
} 