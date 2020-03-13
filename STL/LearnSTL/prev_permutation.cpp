#include "prev_permutation.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace PREV_PERMUTATION{
	void test_all()
	{
		cout << "----------prev_permutation_test----------" << endl;

		test_prev_permutation();

		cout << endl;
	}
	
	void test_prev_permutation()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
		vector<int> A;
		generate_n(back_inserter(A), 3, bind(dis, mt_engine));
		vector<int> B(A.begin(), A.end());

		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
		sort(A.begin(), A.end());

		cout << endl;
		while (prev_permutation(A.begin(), A.end()))
		{
			for_each(A.begin(), A.end(), [](int a){
				cout << "   " << a << " ";
			});
			cout << endl;
		}
		cout << "->";
		for_each(A.begin(), A.end(), [](int a){
			cout << "   " << a << " ";
		});
		cout << endl;

		cout << endl;
		while (prev_permutation(B.begin(), B.end()))
		{
			for_each(B.begin(), B.end(), [](int a){
				cout << "   " << a << " ";
			});
			cout << endl;
		}
		cout << "->";
		for_each(A.begin(), A.end(), [](int a){
			cout << "   " << a << " ";
		});
		cout << endl;
	}
}