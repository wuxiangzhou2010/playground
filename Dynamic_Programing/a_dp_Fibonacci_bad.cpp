/*
http://algorithms.tutorialhorizon.com/introduction-to-dynamic-programming-fibonacci-series/
*/


#include <iostream>

int fibRecur(int x)
{
	if (x == 0)
	{
		return 0;
	}
	if (x == 1)
	{
		return 1;
	}
	else
	{
		int f = fibRecur(x - 1) + fibRecur(x - 2);

		return f;
	}
}


int main()
{
	std::cout << "result =" << fibRecur(40) << std::endl;
}

/*

~# clang++ a_dp.cpp -g3;time ./a.out
result =102334155

real    0m1.767s
user    0m1.760s
sys     0m0.004s

*/
