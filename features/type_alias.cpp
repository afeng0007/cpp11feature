#include <string>
#include <ios>
#include <type_traits>

using flags = std::ios_base::fmtflags;

flags fl = std::ios_base::dec;

using func = void (*) (int, int);

void example(int, int){}

func f = example;

template<class T>
using ptr = T*;

ptr<int> x;

template<class CharT>
using myString = std::basic_string<CharT, std::char_traits<CharT>>;
myString<char> str;

template<typename T>
struct Container {using value_type = T;};

template<typename Container>
void g(const Container& c){typename Container::value_type n;}

template<typename T>
using Invoke = typename T::type;

template<typename T>
using Invoke = typename T::type;
template<typename Condition>
using EnableIf = Invoke<std::enable_if<Condition::value>>;
int fpoly_only(T t){return 1;}

struct S
{
	virtual ~S(){}
};

int main()
{
	Container<int> c;
	g(c);
	S s;
	fpoly_only(s);
}