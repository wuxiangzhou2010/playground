/*
http://algorithms.tutorialhorizon.com/introduction-to-dynamic-programming-fibonacci-series/
*/
# include<iostream>

int fibDP(int x)
{
	int *fib= new int[x + 1];

	fib[0]	= 0;
	fib[1]	= 1;

	for (int i = 2; i < x + 1; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int temp = fib[x];
	delete [] fib;
	return temp;
}


int main(int argc, char const *argv[])
{
	std::cout<<"result ="<< fibDP(40)<<std::endl;
	return 0;
}

/*
~# clang++ a_dp_1.cpp -g3;time ./a.out
result =102334155

real    0m0.005s
user    0m0.000s
sys     0m0.004s
*/

