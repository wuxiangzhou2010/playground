#include <iostream>
#define AMOUNT  2100
int main() 
{
		int coins[3] = { 1, 8, 3 };
		const int amount = AMOUNT;
		
		std::cout<<amount<<std::endl;

		long coinReq[AMOUNT] = {0}; // this will store the optimal solution
											// for all the values -- from 0 to
											// given amount.
		int CC[3] = {0}; // resets for every smaller problems
											// and minimum in it is the optimal
											// solution for the smaller problem.
		coinReq[0] = 0; // 0 coins are required to make the change for 0
		// now solve for all the amounts
		for (int amt = 1; amt <= amount; amt++) 
		{
			for (int j = 0; j < 3; j++) 
			{
				CC[j] = -1;
			}
			// Now try taking every coin one at a time and fill the solution in
			// the CC[]
			for (int j = 0; j < 3; j++) 
			{
				if (coins[j] <= amt)
				{ // check if coin value is less than
										// amount
					CC[j] = coinReq[amt - coins[j]] + 1; // if available,
																// select the
																// coin and add
																// 1 to solution
																// of
																// (amount-coin
					// value)
				}
			}
			//Now solutions for amt using all the coins is stored in CC[]
//			take out the minimum (optimal) and store in coinReq[amt]
			
			// std::cout<<amount<<std::endl;
			coinReq[amt]=-1;
			for(int j=0;j<3;j++)
			{
				if(CC[j]>0 && (coinReq[amt]==-1 || coinReq[amt]>CC[j]))
				{
					coinReq[amt]=CC[j];
				}
			}
			// std::cout<<amount<<std::endl;
		}
		
		std::cout<<amount<<std::endl;
		//return the optimal solution for amount
		//return coinReq[amount];
		for(int i = 0;i<amount+1;++i)
		{
			std::cout<<coinReq[i]<<" ";
		}
		std::cout<<std::endl;

		std::cout<<"(Dynamic Programming) Minimum Coins required to make change for "
			<< amount << " are: " << coinReq[amount]
			<<std::endl;
	}