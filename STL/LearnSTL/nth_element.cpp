#include "nth_element.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace NTH_ELEMENT{
	void test_all()
	{
		cout << "----------nth_element_test----------" << endl;

		test_nth_element();

		cout << endl;
	}
	
	void test_nth_element()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 15);
		vector<int> A;
		generate_n(back_inserter(A), 15, bind(dis, mt_engine));
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		nth_element(A.begin(), A.begin() + 2, A.end());

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}