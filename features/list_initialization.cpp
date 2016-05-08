#include <iostream>
#include <vector>
#include <map>
#include <string>

struct Foo
{
	std::vector<int> mem = {1, 2, 3};
	std::vector<int> mem2;
	Foo():mem2{-1, -2, -3}{}
};

std::pair<std::string, std::string> f(std::pair<std::string, std::string> p)
{
	return {p.second, p.first};
}

int main()
{
	int n0{};
	int n1{1};
	std::string s1{'a', 'b', 'c', 'd'};
	std::string s2{s1, 2, 2};
	std::string s3{0x61, 'a'};

	int n2 = {1};
	double d = double{1.2};
	std::map<int, std::string> m = {
		{1, "a"},
		{2, {'a', 'b', 'c'}},
		{3, s1}
	};

	std::cout << f({"hello", "world"}).first << '\n';

	const int (&ar)[2] = {1, 2};
	int&& r1 = {1};

	unsigned char uc1{10};

	Foo f;
	std::cout << n0 << ' ' << n1 << ' ' << n2 << '\n'
			<< s1 << ' ' << s2 << ' ' << s3 << '\n'

	for (auto p: m){
		std::cout << p.first << ' ' << p.second << '\n';
	}
	for (auto n: f.mem){
		std::cout << n << ' ';
	}
	for (auto n: f.mem2){
		std::cout << n << ' ';
	}
}