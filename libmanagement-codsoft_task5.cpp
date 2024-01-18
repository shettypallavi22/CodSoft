#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct  lib
{
     string title;
    string author;
    long long ISBN;
    bool isavail;
};


class book{
    
public:
    vector<lib> a;
    
    void adding()
    {
         string title;
         string author;
     long long ISBN;
     cout<<"\nEnter the book title:";
     cin>>title;
     cout<<"\nEnter the book author:";
     cin>>author;
     cout<<"\nEnter the book ISBN:";
     cin>>ISBN;
     a.push_back({title,author,ISBN,true});
    }
void searchbook()
{
     string search; 
     cout<<"\nEnter the book name to search:";
     cin>>search;

    for(const auto &it:a)
    {
       if(it.title==search||it.author==search||to_string(it.ISBN)==search)
       {
        cout<<"\nTHE BOOK IS FOUND \n TITLE:"<<it.title<<"\n by AUTHOR :"<<it.title<<"\n with ISBN: "<<it.ISBN;
        return;
       }
       
    }
     cout<<"\nBook not found"<<endl;
}
void display()
{
    for(const auto &it:a)
    {
        cout<<"Title: "<<it.title<<", Author: "<<it.author<<", ISBN: "<<it.ISBN;
        if(it.isavail)
        {
        cout<<" is available"<<endl;
    }
    else{
        cout<<" is not available"<<endl;
    
    }
    }
   

}
void checkout()
{
    long long ISBN;
    cout<<"\nEnter ISBN for checkout: ";
    cin>>ISBN;
for(auto &it:a)
{
    if(it.ISBN==ISBN && it.isavail)
    {
        it.isavail=false;
        cout<<"Book is successfully checked out."<<endl;
        return;
    }
}
cout<<"Book is not available"<<endl;
}
void returnbook()

{

    long long ISBN;
    cout<<"\nEnter ISBN for returning: ";
    cin>>ISBN;
    for(auto &it:a)
{
    if(it.ISBN==ISBN &&  !it.isavail)
    {
        it.isavail=true;
        cout<<"\nBook is successfully returned."<<endl;
        return;
    }
}
cout<<"Book not found or is available."<<endl;
}

void finecalculation()
{
    double fine;
    int overdue;
    cout<<"\nEnter the days the book is overdue:";
    cin>>overdue;
    if(overdue>=1)
    {
        cout<<"\nThe fine for the book issued is ";
        fine=overdue*8;
        cout<<fine;
    }
}
};
int main()
{
    book b;
    int choice;
   do
    {
    cout<<"\nMENU"<<endl;
    cout<<"1.Add book"<<endl;
    cout<<"2.Search book"<<endl;
    cout<<"3.Checkout book"<<endl;
    cout<<"4.Return book"<<endl;
    cout<<"5.Fine calculation"<<endl;
    cout<<"6.Display"<<endl;
    cout<<"7.EXIT"<<endl;
    cout<<"\nEnter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        b.adding();
        break;

        case 2:b.searchbook();
        break;
        case 3:b.checkout();
        break;
        case 4:b.returnbook();
        break;
        case 5:b.finecalculation();
        break;
        case 6:b.display();
        break;
        
    }
}while(choice!=7);
return 0;

}
