/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

#include<iostream>
using namespace std;

class Calulator
{
    public:
    float iNo1=0,iNo2=0;

    void getData()
    {
        cout<<"\nEnter the First Number : ";
        cin>>iNo1;
        cout<<"\nEnter the Second Number : ";
        cin>>iNo2;
    }
    void addition()
    {
        Calulator:getData();
        cout<<"\nAddition "<<endl;
        cout<<iNo1<<" + "<<iNo2<<" = "<<iNo1+iNo2<<endl;
    }

    void substraction()
    {
        Calulator:getData();
        cout<<"\nSubstraction "<<endl;
        cout<<iNo1<<" - "<<iNo2<<" = "<<iNo1-iNo2<<endl;
    }

    void multiplication()
    {
        Calulator:getData();
        cout<<"\nMultiplication "<<endl;
        cout<<iNo1<<" * "<<iNo2<<" = "<<iNo1*iNo2<<endl;
    }

    void division()
    {
        Calulator:getData();
        cout<<"\nDivision "<<endl;
        cout<<iNo1<<" / "<<iNo2<<" = "<<iNo1/iNo2<<endl;
    }
};

int main()
{
    int choice=0;

    Calulator cal;
    do
    {
        cout<<"\n\n**** Simple Calculator ****"<<endl;
        cout<<"1)Addition\n2)Substraction\n3)Multiplication\n4)Division\n0)exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cal.addition();
                break;
            
            case 2:
                cal.substraction();
                break;

            case 3:
                cal.multiplication();
                break;

            case 4:
                cal.division();
                break;

            case 0:
                cout<<"\nThank you !! \n Exit";
                break;

            default:
                cout<<"\nEntered Wrong Choice !!"<<endl;
                break;
        }
    } while (choice!=0);
    
    return 0;

}