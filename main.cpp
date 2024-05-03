#include <iostream>

using namespace std;

double add (double num1 , double num2)
{

}
double Minus (double num1 , double num2)
{

}
double multiply (double num1 , double num2)
{

}
double divide (double num1 , double num2)
{

}
double Modulus (double num1 , double num2)
{

}
double add_three ()
{

}
double minus_three ()
{

}

int main()
{
    while(true)
    {
        int Choice;
        cout << "Choose number of function you need\n1-Add two numbers \n2-minus two numbers\n3-multiply two numbers \n4-divide two numbers \n5-modulus number \n6-Add three number \n7-minus two numbers \n0-Exit\n" ;
        cout<<"Choice: ";
        cin>>Choice;
        if(Choice==1)
        {
            add();
        }
        else if(Choice==2)
        {
            Minus();
        }
        else if(Choice==3)
        {
            multiply();
        }
        else if(Choice==4)
        {
            divide();
        }
        else if(Choice==5)
        {

        }
        else if(Choice==6)
        {

        }
        else if(Choice==7)
        {

        }
        else if(Choice==0)
        {
            //Exit
            break;
        }
        else
        {
            cout<<"Wrong Choice";
        }
    }
    cout<<endl<<"Thanks for using calculator";
    return 0;
}
