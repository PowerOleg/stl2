#include <iostream>
#include <vector>
#include <algorithm>

void print(const std::vector<int>& vec)
{
	
	for (const int& value : vec)
	{
		std::cout << " " << value;
	}
	std::cout << std::endl;
}

int main(int argc, char** argv)
{

	std::vector<int> numbers = { 1, 1, 2, 5, 6, 1, 2, 4 };
	printf("[IN]: ");
	print(numbers);
	std::sort(numbers.begin(), numbers.end());
	auto last = std::unique(numbers.begin(), numbers.end());
	numbers.erase(last, numbers.end());

	std::cout << "[OUT]: ";
	print(numbers);
	return 0;
}