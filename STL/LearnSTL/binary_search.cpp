#include "binary_search.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace BINARY_SEARCH{
	void test_all()
	{
		cout << "----------binary_search_test----------" << endl;

		test_binary_search1();
		test_binary_search2();

		cout << endl;
	}
	
	void test_binary_search1()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 4);
		vector<int> A;
		generate_n(back_inserter(A), 10, bind(dis, mt_engine));

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		sort(A.begin(), A.end());

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		cout << "search for 3: " << binary_search(A.begin(), A.end(), 3) << endl;
	}

	void test_binary_search2()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
		vector<int> A;
		generate_n(back_inserter(A), 15, bind(dis, mt_engine));

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		sort(A.begin(), A.end());

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		cout << "search for 3: " << binary_search(A.begin(), A.end(), 3, [](int a, int b){
			return a < b;
		}) << endl;
	}
}