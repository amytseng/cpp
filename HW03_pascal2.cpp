#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <boost/algorithm/string.hpp>
#include <tuple>
#include <iostream>
#include <map>
#include <functional>


void PrintStars (int k)
{
	int Flag (1);
	for (;k>0;k--)
	{

		for (int j(k);j>0;j--)
		{
			std::cout << "*" ;

		}
		if (Flag == 0)
		{
			std::cout << 1 << "\n" ;
		}
		else 
		{
			std::cout << "\n" ;
		}
		Flag = 0;
	}
	std::cout << 1 << "\n" ;
}


std::vector<std::string> MakeStarVector (int k)
{
std::vector<std::string> StarVector;

    int Flag (1);
	std::string TempString = "" ;
    for (;k>0;k--)
    {
		TempString = "" ;
        for (int j(k);j>0;j--)
        {
            TempString += "*" ;
        }
        if (Flag == 0 )
        {
        	TempString += "1" ;   
			StarVector.push_back(TempString);
        }
        else 
        {
			StarVector.push_back(TempString);
        }
        Flag = 0;
   
	 }
    StarVector.push_back("1");
//  std::cout << StarVector[5];
return StarVector;
}




std::vector<std::string> MakeSpaceVector (int i)
{
std::vector<std::string> SpaceVector;

    int k = i-1  ;
    int Flag (1);
    std::string TempString = "" ;
    for (;k>0;k--)
    {
        TempString = "" ;
        for (int j(k);j>0;j--)
        {
            TempString += "*" ;
        }
        if (Flag == 0 )
        {
        //    TempString += "1" ;   
            SpaceVector.push_back(TempString);
        }
        else 
        {
            SpaceVector.push_back(TempString);
        }
        Flag = 0;
   
     }
//    StarVector.push_back("1");
//  std::cout << StarVector[5];
//std::cout << SpaceVector.size() << "\n";  
return SpaceVector;
}





int FuncSum (int k)
{
	int Sum(0) ;
	for (int in = 1 ; in <= k ; in++ )	
	{
		Sum = Sum + in ;
	}	
	return Sum;
}

//std::vector<int> PascalV
//{

//}


int pascal(int N1 , int N2)
{
	if (N1 == 0 || N2 == 1 || N2 > N1 ) 
	{
    return 1;
  	} 
	else 
	{
    return pascal( N1 - 1, N2 - 1 ) + pascal( N1 - 1, N2 );
  	}

//std::cout << "pascal( " << N1 << "," << N2 << " ) = " ;
}

int MakePascalSize (int k)
{
//	std::cout << "MakePascalSize : " << FuncSum(k) << "\n" ;  
	return FuncSum(k);
}

std::vector<int> MakePascalVector (int k)
{
	std::vector<int> PV ;
	for (int i = 0 ; i <= k  ; i++ )
	{
		if ( i == 0 ) 
		{
			PV.push_back(pascal(0,0));
		}
		else
		{
			for ( int s = 1 ; s-i < 2 ; s++) 
			{
			//	std::cout <<"pascal("<< i << "," << s << " ) = " << pascal(i,s) << "\n";
				PV.push_back(pascal(s,i));
			}
		}
	}
return PV;
}



void PrintPascalTriangle (std::vector<std::string> SpaceVector , int k)
{
	for (int i = 0 ; i < k-1 ; i++)
	{
	std::cout << SpaceVector[i] << " ";
	for (int y = 1 ; y <= i+1 ; y++ )
	{
		std::cout << pascal(i,y) << " ";
	}
	std::cout << "\n" ;
	}
}

int main ()
{
	int k(0);
	std::cout << "please enter an int : \n";
	std::cin >> k ;
	std::cout << "you enter " << k << " \n"; 
//	PrintStars(k);
//	std::cout << "The Sum of 1 ~ " << k <<" is "<< FuncSum(k) <<"\n";
//	MakeStarVector(k);
//MakeSpaceVector(5);
//std::cout << MakeSpaceVector(10)[1];
//PascalTriangle( MakeSpaceVector(10) , 10);
//std::cout << PascalTriangle[3][4] ;
//	std::cout << MakePascalVector(5).size() << "\n";
//	std::cout << MakeStarVector(3).size() << "\n";
//	std::cout << MakePascalSize(3) << "\n";
//	std::cout << FuncSum(3) ;
//std::cout << MakeSpaceVector(3)[3] << "\n" ;
//std::cout << MakePascalVector(3)[0] << "\n" ;

PrintPascalTriangle (MakeSpaceVector(k+1) , k+1 );
std::cout << MakePascalVector(k+1)[8] << "\n" ;
//MakePascalVector(3);
//MakePascalVector(3);
//std::cout << "\n" << pascal(4,3) ;
//std::cout << pascal(2,3);
return 0;

}
