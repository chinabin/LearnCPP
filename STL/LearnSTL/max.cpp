#include "max.h"
#include <vector>
#include <string>
#include <iostream>


using namespace std;

namespace MAX{
	void test_all()
	{
		cout << "----------max_test----------" << endl;

		test_max();

		cout << endl;
	}
	
	void test_max()
	{
		cout << "larger of 1 and 9999: " << max(1, 9999) << '\n'
			<< "larger of 'a', and 'b': " << max('a', 'b') << '\n'
			<< "longest of \"foo\", \"bar\", and \"hello\": " <<
			max({ "foo", "bar", "hello" },
			[](const string& s1, const string& s2) {
			return s1.size() < s2.size();
		}) << '\n';
	}
}