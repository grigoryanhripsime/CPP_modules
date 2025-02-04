#include <MutantStack.hpp>
#include <vector>

int main()
{
	MutantStack<int> mutant;
	for (int i = 0; i < 10; i++)
		mutant.push(i * 10);
	MutantStack<int>::reverse_iterator it = mutant.rbegin();
	while (it != mutant.rend())
	{
		std::cout<<*it<<" ";
		++it;
	}
	std::cout<<std::endl;

	MutantStack<int>::iterator it2 = mutant.begin();
	while (it2 != mutant.end())
	{
		std::cout<<*it2<<" ";
		++it2;
	}
	std::cout<<std::endl;
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

// int main()
// {
// 	std::vector<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << *(mstack.end() - 1) << std::endl;

// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	mstack.push_back(0);

// 	std::vector<int>::iterator it = mstack.begin();
// 	std::vector<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;

// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	// std::stack<int> s(mstack);
// 	return 0;
// }