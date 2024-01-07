#include<iostream>
using namespace std;
int main()
{
    int choice;
    char ans;
    do
    {
        long double a,b,c;
    cout<<"Menu"<<  endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\nEnter the first number:";
        cin>>a;
        cout<<"\nEnter second number:";
        cin>>b;
        c=a+b;
        cout<<"\nResult:"<<c;
        break;
        case 2:
        cout<<"\nEnter the first number:";
        cin>>a;
        cout<<"\nEnter second number:";
        cin>>b;
        c=a-b;
        cout<<"\nResult:"<<c;
        break;
        case 3:
        cout<<"\nEnter the first number:";
        cin>>a;
        cout<<"\nEnter second number:";
        cin>>b;
        c=a*b;
        cout<<"\nResult:"<<c;
        break;
        case 4:
        cout<<"\nEnter the first number:";
        cin>>a;
        cout<<"\nEnter second number:";
        cin>>b;
        c=a/b;
        cout<<"\nResult:"<<c;
        break;
        default:
        cout<<"Invalid operation";
        break;

    }
    cout<<"\nDo you want to perform another operation(y/n)?";
    cin>>ans;
 }while(ans=='y'||ans=='Y');
   return 0;
    
}
