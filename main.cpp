#include <iostream>
#include <string>

using namespace std;

// خوارزميات وحل المشاكل واجبات ال while loop

/**
int main()
{
	int N ;
	int i = 1 ;
	cout << "enter valve of N : " ;
	cin >> N ;
	while(N >= i)
	{
		cout << i << endl ;
		i++ ;
	}
}
**/

/**

int main()
{
	int N ;
	
	cout << "enter valve of N : " ;
	cin >> N ;
	
	while(N >= 1)
	{
		cout << N << endl;
		N--;
	}
}
**/

/**
int main()
{
	int N ;

	cout << "enter valve of N : " ;
	cin >> N ;
	int i = N ;
	int sum = 0 ;
	while(i >= 1)
	{
		if(i%2 != 0)
		{
			sum+=i ;
		}
		i--;
	}
	cout << sum ;
}
**/

/**
int main()
{
	int N ;

	cout << "enter valve of N : " ;
	cin >> N ;
	int i = N ;
	int sum = 0 ;
	while(i >= 1)
	{
		if(i%2 == 0)
		{
			sum+=i ;
		}
		i--;
	}
	cout << sum ;
}
**/

/**
int main()
{
	int N ;

	cout << "enter valve of N : " ;
	cin >> N ;
	int i = N ;
	int sum = 1 ;
	while(i >= 1)
	{
		sum*=i ;
		i-- ;
	}
	
	cout << sum ;
}
**/

/**

int main()
{
	int Num , power;
	cout << "enter number : " ;
	cin >> Num;
	cout << "enter power : " ;
	cin >> power;
	int i = power;
	int sum = 1 ;
	while(i >= 1)
	{
		sum*=Num ;
		i-- ;
	}
	
	cout << sum ;
	
}
**/

/*
int main()
{
	int num ;
	cout << "enter number : " ;
	cin >> num ;
	int sum = 0 ;
	while(num != -99)
	{
		sum+=num ;
		cout << "again , enter number : " ;
    	cin >> num ;
	}
	cout << sum << endl;
	
}
*/

/*

int main()
{
	int i = 65 ;
	while(i <= 90)
	{
		cout << (char)i << endl;
		i++ ;
	}
}

*/

/**

int main()
{
	int user_pass = 9910;
	int password;
	int num = 0;
	while (num <= 3)
	{
		cout << "please enter password : ";
		cin >> password;
		if (password == user_pass)
		{
			cout << "correct password ";
			break;
		}
		else
		{
			cout << "wrong password, try again \n" ;
			num++;
			continue;
		}
		
		
	}
}
**/

/**

int in_range(int from, int to)
{
	int num;
	
	do
	{
		cout << "enter number between " << from << " and " << to << " : " ;
		cin >> num;

	} while (num < from || num > to);
	return num ;
}

int main()
{
	in_range(1, 10);
}
**/

/**

int main()
{
	int arr[10] = {10 , 20 , 58 , 75 ,75 , 67 ,84 , 65 , 88 , 90} ;
	
	for(int i = 1 ; i > 0 ; i++)
	{
		if(arr[i] == 20)
		{
			cout << arr[i] ;
			break;
		}
		
	}
}

**/

int main()
{
	int num;
	int sum = 0;


	for (int i = 1; i <= 5; i++)
	{
		cout << "enter number: ";
		cin >> num;
		
		if (num >= 50)
		{
			continue;
		}

		sum += num;
		
		
	}
	cout << sum;
}
