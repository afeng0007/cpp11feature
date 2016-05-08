#include <string>
#include <iostream>
#include <iomanip>
#include <utility>

struct A
{
	std::string s;
	A() : s("test"){}
	A(const A& o) : s(o.s){std::cout << "move failed"}
	A(A&& o) noexcept : s(std::move(o.s)){}
};

A f(A a)
{
	return a;
}

struct B : A
{
	std::string s2;
	int n;
};

struct C : B
{
	~C(){}
};

struct D : B
{
	D(){}
	~D(){}
	D(D&& ) = default;
};

int main()
{
	std::cout << "Trying to move A\n";
	A a1 = f(A());
	A a2 = std::move(a1);

	std::cout << "Trying to move B\n";
	B b1;
	std::cout << "Before move, b1.s=" << std::quoted(b1.s) << '\n';
	B b2 = std::move(b1);
	std::cout << "After move, b1.s = " << std::quoted(b1.s) << '\n';

	std::cout << "Trying to move C\n";
	C c1;
	C c2 = std::move(c1);

	std::cout << "Trying to move D\n";
	D d1;
	D d2 = std::move(d1);
}