#include "search_n.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace SEARCH_N{
	void test_all()
	{
		cout << "----------search_n_test----------" << endl;

		test_search_n();

		cout << endl;
	}
	
	void test_search_n()
	{
		string s1{ "100110000111" };
		auto ret1 = search_n(s1.begin(), s1.end(), 4, '0');
		cout << distance(s1.begin(), ret1) << endl;

		string s2{ "123456789abcdefghijklmnopqrstuvwxyz" };
		auto ret2 = search_n(s2.begin(), s2.end(), 15, 'p', [](char a, char b){
			// cout << a << " " << b << endl; // 注释代码挺有意思的
			if (a >= 'a'
				&& a <= 'z')
			{
				return true;
			}
			return false;
		});
		cout << distance(s2.begin(), ret2) << endl;
	}
}