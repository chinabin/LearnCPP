#include "search.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace SEARCH{
	void test_all()
	{
		cout << "----------search_test----------" << endl;

		test_search();

		cout << endl;
	}

	void test_search()
	{
		string s1{ "this is a test string ifif" };
		string k1_1{ "test" }, k1_2{ "hehe" }, k1_3;
		auto ret1 = search(s1.begin(), s1.end(), k1_1.begin(), k1_1.end());
		cout << distance(s1.begin(), ret1) << endl;
		ret1 = search(s1.begin(), s1.end(), k1_2.begin(), k1_2.end());
		cout << distance(s1.begin(), ret1) << " = " << distance(s1.begin(), s1.end()) << endl;
		ret1 = search(s1.begin(), s1.end(), k1_3.begin(), k1_3.end());
		cout << distance(s1.begin(), ret1) << " = " << distance(s1.begin(), s1.begin()) << endl;

		auto ret2 = search(s1.begin(), s1.end(), k1_2.begin(), k1_2.end(), [](char a, char b){
			// cout << a << " " << b << endl; //这行注释去掉挺有意思的
			if (a - b == 1)
			{
				return true;
			}
			return false;
		});
		cout << distance(s1.begin(), ret2) << endl;
	}
}