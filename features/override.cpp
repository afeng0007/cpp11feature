struct A
{
	virtual void foo();
	void bar();
};

struct B : A
{
	void foo() const override;
	void foo() override;
	void bar() override;
};

