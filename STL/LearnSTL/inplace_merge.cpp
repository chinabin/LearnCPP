#include "inplace_merge.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace INPLACE_MERGE{
	void test_all()
	{
		cout << "----------inplace_merge_test----------" << endl;

		test_inplace_merge();

		cout << endl;
	}

	template<class Iter>
	void merge_sort(Iter first, Iter last)
	{
		if (last - first > 1) {
			Iter middle = first + (last - first) / 2;
			merge_sort(first, middle);
			merge_sort(middle, last);
			std::inplace_merge(first, middle, last);
		}
	}
	
	void test_inplace_merge()
	{
		std::vector<int> v{ 8, 2, -2, 0, 11, 11, 1, 7, 3 };
		merge_sort(v.begin(), v.end());
		for (auto n : v) {
			std::cout << n << ' ';
		}
		std::cout << '\n';
	}
}