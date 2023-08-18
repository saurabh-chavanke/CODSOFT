/*Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades*/

#include<iostream>
#include<vector>
using namespace std;

class Student_Grade_System
{
    public:

    vector<string>names;
    vector<int>grades;
    
    string name;
    int grade=0;
    int total=0;
    double average=0;
    int max=0,min=0;

    void Data(int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Enter the name of student "<<i+1<<" : ";
            cin>>name;

            cout<<"Enter the grade of student "<<i+1<<" : ";
            cin>>grade;

            names.push_back(name);
            grades.push_back(grade);
        }

        max=grades[0];
        min=grades[0];

        for(int i=0;i<grades.size();i++)
        {
            if(grades[i]>max)
            {
                max=grades[i];
            }

            else if (grades[i]<min)
            {
                min=grades[i];
            }

            total += grades[i];

        }
        average=total/grades.size();


        cout<<"The average grade is "<<average<<endl;
        cout<<"The highest grade is "<<max<<endl;
        cout<<"The lowest grade is "<<min<<endl;

    }
};

int main()
{
    int n=0;
    cout<<"Enter the number of students : ";
    cin>>n;

    Student_Grade_System stud;
    stud.Data(n);

    return 0;

}