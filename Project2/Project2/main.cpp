#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <algorithm>

template<class T> void print_container(T container)
{
	for (const auto& value : container)
	{
		std::cout << " " << value;
	}
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set); // four one three two. ������� ������ ����� �������? :)

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector); // one, two, three, four
	return 0;
}