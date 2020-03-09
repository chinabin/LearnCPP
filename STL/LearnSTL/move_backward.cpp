#include "move_backward.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace MOVE_BACKWARD{
	void test_all()
	{
		cout << "----------move_backward_test----------" << endl;

		test_move_backward();

		cout << endl;
	}
	
	void test_move_backward()
	{
		std::vector<std::string> src{ "foo", "bar", "baz" };
		std::vector<std::string> dest(src.size());

		std::cout << "src: ";
		for (const auto &s : src)
		{
			std::cout << s << ' ';
		}
		std::cout << "\ndest: ";
		for (const auto &s : dest)
		{
			std::cout << s << ' ';
		}
		std::cout << '\n';

		std::move_backward(src.begin(), src.end(), dest.end());
		// std::move(src.begin(), src.end(), dest.begin());

		std::cout << "src: ";
		for (const auto &s : src)
		{
			std::cout << s << ' ';
		}
		std::cout << "\ndest: ";
		for (const auto &s : dest)
		{
			std::cout << s << ' ';
		}
		std::cout << '\n';
	}
}