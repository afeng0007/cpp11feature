#include <utility>
#include <iostream>

struct Default {int foo()const{return 1;}};

struct NoDefault
{
	NoDefault(const NoDefault&){}
	int foo()const{return 1;}
};

int main()
{
	decltype(Default().foo()) n1 = 1;
	decltype(std::declval<NoDefault>().foo()) n2 = n1;
	std::cout << "n1 = " << n1 << '\n'
			<< "n2 = " << n2 << '\n';
}