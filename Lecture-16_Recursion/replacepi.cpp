#include<iostream>
using namespace std;
void replacepi(string str)
{
    if(str.size()==0)
    {
        return;
    }

    if(str[0]=='p'&&str[1]=='i')
    {
      cout<<"3.14";
      replacepi(str.substr(2));
    }
    else{
        cout<<str[0];
        replacepi(str.substr(1));
    }
}

int main()
{
  replacepi("pipppafppapi");
}