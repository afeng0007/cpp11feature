struct A
{
	virtual void foo() final;
	void bar() final;
};

struct B final : A
{
	void foo();
};

struct C : B
{
	
};