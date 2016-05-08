#include <cassert>
[[noreturn]] void f(){
	throw "error";
}

[[ noreturn ]] void q(int i){
	if (i > 0){
		throw "positive";
	}
}

void f(int n){
	void g(), h(), i();
	switch (n)
	{
	case 1:
	case 2:
		g();
		[[fallthrough]];
		break;
	case 3:
		h();
	case 4:
		i();
		[[fallthrough]];
	}
}

struct [[nodiscard]] error_info{};

error_info enable_missible_safety_mode();
void launch_missiles();
void test_missiles(){
	enable_missible_safety_mode();
	launch_missiles();
}

error_info& foo();

void f1(){
	foo();
}

[[maybe_unused]] void f([[maybe_unused]] bool thing1, 
	[[maybe_unused]] bool thing2)
{
	[[maybe_unused]] bool b = thing1 && thing2;
	assert(b);
}