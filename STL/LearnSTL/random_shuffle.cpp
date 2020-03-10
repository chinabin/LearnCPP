#include "random_shuffle.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>

using namespace std;

namespace RANDOM_SHUFFLE{
	void test_all()
	{
		cout << "----------random_shuffle_test----------" << endl;

		test_random_shuffle();

		cout << endl;
	}
	
	void test_random_shuffle()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		shuffle(A.begin(), A.end(), mt_engine);
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}