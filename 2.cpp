#include <iostream>
using namespace std;

bool isPrime(int n) 
{
    if (n <= 1) 
    return false;
    for (int i = 2; i <= n/2; i++) 
    {
        if (n % i == 0) 
        return false;
    }
    return true;
}

int main() 
{
    int start, end;
    cout << "Enter two numbers (intervals): ";
    cin >> start >> end;
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) 
    {
        if (isPrime(i)) cout << i << " ";
    }
    return 0;
}
