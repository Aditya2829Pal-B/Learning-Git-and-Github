#include<bits/stdc++.h>
using namespace std;

// lets revise C++

// lets revise the class syntax in C++
class student{
    public:
    string name;
    int age;
    string subject;
    int marks;
    friend void print(student s);


};
int main(){
    //  if i want to give long string input we use getline()
    string str;
getline(cin, str);
    cout<<str;
    return 0;
}

