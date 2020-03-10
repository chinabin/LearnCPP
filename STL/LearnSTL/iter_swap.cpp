#include "iter_swap.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace ITER_SWAP{
	void test_all()
	{
		cout << "----------iter_swap_test----------" << endl;

		test_iter_swap();

		cout << endl;
	}
	
	void test_iter_swap()
	{
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(0, 10);
		vector<int> v;
		generate_n(back_inserter(v), 10, bind(dist, gen));

		cout << "Before sort: ";
		for (auto e : v) std::cout << e << " ";

		for (auto i = v.begin(); i != v.end(); ++i)
			iter_swap(i, min_element(i, v.end()));

		cout << "\nAfter sort: ";
		for (auto e : v) std::cout << e << " ";
		cout << '\n';
	}
}