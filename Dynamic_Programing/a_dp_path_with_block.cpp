#include <iostream>

    // public int countDP(int [][] arrA){
    //     int result [][] = arrA;

      


    //     return result[arrA.length-1][arrA.length-1];
    // }

int main() {

    int result [3][3] = {{1,1,1},{1,1,1},{1,-1,1}};
 
    for (int i = 1; i <3; i++) 
    {
        for (int j = 1; j <3; j++) 
        {
            if(result[i][j]!=-1)
            {
                result[i][j]=0;
                if(result[i-1][j]>0)
                {
                    result[i][j]+=result[i-1][j];
                }
                if(result[i][j-1]>0)
                {
                    result[i][j]+=result[i][j-1];
                }
            }
        }
    }
    for (int i = 0; i <3; i++) 
    {
        for (int j = 0; j <3; j++) 
        {
            std::cout<< result[i][j] <<" ";
        }
        std::cout<<std::endl;
    }
    // NoOfPathObstruction noOfPaths = new NoOfPathObstruction();
    // System.out.println("No Of Path (Recursion):- " +noOfPaths.count(arrA,0,0));
    // System.out.psrintln("No Of Path (DP):- " +noOfPaths.countDP(arrA));
    std::cout<< "result ="<<result[2][2]<<std::endl;
}
