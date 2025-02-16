#include <iostream>
using namespace std;

int main() 
{
    float num1, num2, result;
    while(1)
    {
     int choice;
    
     cout <<"\nMenu-driven Calculator\n";
     cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit"<<endl;
     cout << "Enter your choice: ";
     cin >> choice;
    
     if(choice >=1 && choice <=4)
     {
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
     }
    
     switch(choice) 
     {
        case 1: result = num1 + num2; 
                break;
        case 2: result = num1 - num2; 
                break;
        case 3: result = num1 * num2; 
                break;
        case 4: result = num1 / num2; 
                break;
        case 5: exit(0);        
        default: cout << "Invalid choice"; 
     }
    
     cout << "Result: " << result;
    }
}
