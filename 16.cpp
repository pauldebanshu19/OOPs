#include<iostream>
using namespace std;

class complex
{
    private:
        int real,img;
    public:
        void input()
        {
            cout<<"Enter the real and imaginary part:";
            cin>>real>>img;
            
        }
        void display()
        {
            cout<<"( "<<real<<" + i ("<<img<<" ))"<<endl;
        }
        complex add(complex t)
        {
            complex tmp;
            tmp.real=real+t.real;
            tmp.img=img+t.img;
            return tmp;
        }
        complex sub(complex t)
        {
            complex tmp;
            tmp.real=real-t.real;
            tmp.img=img-t.img;
            return tmp;
        }
        
        complex mul(complex t)
        {
            complex tmp;
            tmp.real=(real*t.real)-(img*t.img);
            tmp.img=(real*t.img)+(t.real*img);
            return tmp;
        }
        
        complex div(complex t)
        {
            complex tmp;
            int denominator = t.real*t.real + t.img*t.img;
            tmp.real = (real*t.real + real*t.img) / denominator;
            tmp.img = (img*t.real - img*t.real) / denominator;
            return tmp;
        }
};

int main()
{
    complex c1,c2,c3;
    while (1)
    {
            
        int choice;
        
        cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        
        if(choice >=1 && choice <=4)
        {
            cout<<"\nEnter 1st Complex number:"<<endl;
            c1.input();
            cout<<"\nEnter 2nd Complex number:"<<endl;
            c2.input();
        }
        
        switch(choice)
        {
            case 1: c3=c1.add(c2);
                    cout<<"\nAfter addition the Complex number:";
                    c3.display();
                    break;
            case 2: c3=c1.sub(c2);
                    cout<<"\nAfter subtraction the Complex number:";
                    c3.display();
                    break;
            case 3: c3=c1.mul(c2);
                    cout<<"\nAfter Multiplication the Complex number:";
                    c3.display();
                    break;
            case 4: c3=c1.div(c2);
                    cout<<"\nAfter Division the Complex number:";
                    c3.display();
                    break;
            case 5: exit(0);
            default: cout<<"Wrong Choice.....";          
        }
    }
}