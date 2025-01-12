#pragma once

class Base
{
	private:
		Base();
		Base(const Base &other);
		Base &operator=(const Base &other);
	public:
		virtual ~Base();
		Base *generate(void);
		void identify(Base* p);
		void identify(Base& p);
};