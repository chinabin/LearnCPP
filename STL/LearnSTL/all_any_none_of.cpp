#include "all_any_none_of.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

namespace ALL_ANY_NONE{
	void test_all()
	{
		cout << "----------all_any_none_test----------" << endl;
		test_all_of();
		test_any_of();
		test_none_of();
		cout << endl;
	}

	void test_all_of()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		all_of(A.begin(), A.end(), [](int a){
			return (a % 2) == 0;
		}) == true ?
			cout << "yes" << endl :
			cout << "no" << endl;
	}

	void test_any_of()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		any_of(A.begin(), A.end(), [](int a){
			return (a % 2) == 0;
		}) == true ?
			cout << "yes" << endl :
			cout << "no" << endl;
	}

	void test_none_of()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		none_of(A.begin(), A.end(), [](int a){
			return (a % 2) == 0;
		}) == true ?
			cout << "yes" << endl :
			cout << "no" << endl;
	}
}