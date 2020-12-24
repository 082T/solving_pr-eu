#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


void countpossibilities(cpp_int* count, int max, int current, int sum) {

	if (sum == max) {
		*count = *count + 1;
		return;
	}
	if (sum > max) return;


	countpossibilities(count, max, 200, sum+200);
	if (current <= 100)
	{
		countpossibilities(count, max, 100, sum+100);
	}
	if (current <= 50)
	{
		countpossibilities(count, max, 50, sum+50);
	}
	if (current <= 20)
	{
		countpossibilities(count, max, 20, sum+20);
	}
	if (current <= 10)
	{
		countpossibilities(count, max, 10, sum+10);
	}
	if (current <= 5)
	{
		countpossibilities(count, max, 5, sum+5);
	}
	if (current <= 2)
	{
		countpossibilities(count, max, 2, sum+2);
	}
	if (current <= 1)
	{
		countpossibilities(count, max, 1, sum+1);
	}

	return;
}

int main()
{

	cpp_int count = 0;

	countpossibilities(&count, 200, 0, 0);

	std::cout << count;


	return 0;
}


