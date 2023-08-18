/*Develop a program that simulates a movie ticket booking system.
Allow users to view movie listings, select seats, make bookings,
and calculate the total cost. Consider implementing seat
availability and seat selection validation.*/

#include<iostream>
using namespace std;
class Movie_book
{
    public:
    int arr[10][10];
    int n=1,count=0;
    int book,Total_cost=0;

    void movie_list()
    {
        cout<<"\n**************************************************************"<<endl;
        cout<<"\t\tGangadhar Tokies"<<endl;
        cout<<"\n\t\t1)Gadar 2"<<endl;
        cout<<"\t\t2)OMG 2"<<endl;
        cout<<"\t\t3)KGF Chapter 2"<<endl;
        cout<<"\t\t4)Jailer"<<endl;
        cout<<"\n***************************************************************"<<endl;
    }

    void select_seats()
    {
        n=1;
        int row=0,col=0;
        cout<<"\n***************************************************************"<<endl;
        cout<<"\t\t\t****Gangadhar Tokies****\n\n"<<endl;
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                arr[i][j]=n;
                cout<<arr[i][j]<<"\t";
                n++;
            }
            
            cout<<"\n";
        }
        cout<<"\n**************************************************************"<<endl;
        cout<<"\nEnter how many seats you want to book : "<<endl;
        cin>>book;
        count=0;
        for(int i=0;i<book;i++)
        {
            cout<<"\nEnter the row and column number to book : "<<endl;
            cin>>row>>col;
            
            if(arr[row][col]==0)
            {
                cout<<"\nSeat Already Booked."<<endl;
            }
            else
            {
                arr[row][col]=0;
                count++;
                cout<<"\nYour seat booked successfully."<<endl;
            }
            
        }
        n=1;
        cout<<"\n\t\t\t****Gangadhar Tokies****\n\n"<<endl;
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                cout<<arr[i][j]<<"\t";
                n++;
            }
                
            cout<<"\n";
        }
        Movie_book:Bill();
    }

    void Bill()
    {
        Total_cost=count*100;
        cout<<"\n\t\t\tTotal cost Rs. "<<Total_cost<<endl;;
    }
    
   
};

int main()
{
    Movie_book mb;
    int choice=0,n=0;
    do
    {
        cout<<"\n*************************************************************"<<endl;
        cout<<"\nGangadhar Tokies"<<endl;
        cout<<"\n1)Check Movie List\n2)Book Seats\n3)exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
            case 1:
                mb.movie_list();
                break;
            
            case 2:
                mb.select_seats();
                break;
            
            case 3:
                cout<<"\nThank You\n";
                cout<<"!!!!!!!!! VISIT AGAIN !!!!!!!!"<<endl;
                choice=0;
                break;

            default:
                cout<<"Entered wrong choice.";
                break;
        }
    } while (choice!=0);
    
    return 0;
}