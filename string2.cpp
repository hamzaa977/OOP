#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="hamza";
    cout<<"the size of string is "<<sizeof(a)<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"the length of string is : "<<a.length()<<endl;
    cout<<"----------------------------------"<<endl;
    string b="sajjad";
    cout<<"after appending it would be like : "<<a.append(b)<<endl;
    cout<<"----------------------------------"<<endl;

    return 0;

}