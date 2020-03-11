#include "stable_sort.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace STABLE_SORT{
	struct Employee
	{
		int age;
		string name;  // Does not participate in comparisons
	};

	bool operator<(const Employee & lhs, const Employee & rhs)
	{
		return lhs.age < rhs.age;
	}

	void test_all()
	{
		cout << "----------stable_sort_test----------" << endl;

		test_stable_sort();

		cout << endl;
	}
	
	void test_stable_sort()
	{
		std::vector<Employee> A =
		{
			{ 18, "Zaphod" },
			{ 32, "Arthur" },
			{ 18, "Ford" },
		};

		for_each(A.begin(), A.end(), [](const Employee& a){
			cout << a.age << ", " << a.name << endl;
		});
		cout << endl;

		std::stable_sort(A.begin(), A.end());

		for_each(A.begin(), A.end(), [](const Employee& a){
			cout << a.age << ", " << a.name << endl;
		});
		cout << endl;
	}
}