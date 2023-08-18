/*Develop a program that counts the number of words in a given
text file. Prompt the user to enter the file name and display the
total word count.*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string file_name;
    char ch=0;
    int count=0;
    fstream fout;

    cout<<"Enter the file name : "<<endl;
    cin>>file_name;
    fout.open(file_name);
    if(fout.is_open())
    {
        while(!fout.eof())
        {
            fout.get(ch);
            if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
            {
                count++;
            }
        }
        cout<<"\nTotal number of word = "<<count-1<<endl;
    }
    else
    {
        cout<<"File is not open."<<endl;
    }
    fout.close();
    return 0;
}
