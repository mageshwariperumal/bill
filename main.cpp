#include <iostream>

using namespace std;

int main()
{
    char shopname[90];
    float cost,rs;
    int i,i1,choice,n,price,tprice,n1,found=0,j,choice1,a;
    string item[5]={"1.idly","2.poori","3.vada","4.sambar","5.pongal"};
    cout<<"\n************************************************\n";
    cout<<"\t\t\tMAGGIE RESTAURANT\t\t\t\n";
    cout<<"**************************************************\n";
    for(i=0;i<5;i++)
    {
        cout<<item[i]<<endl;
    }
    cout<<"**************************************************\n";
    cout<<"11.adding items\n";
    cout<<"12.removing the items";
    cout<<"\n********************\n";
    cout<<"\nenter the number of time loop running:";
    cin>>a;
    cout<<"\n*************************************************\n";
    for(i1=0;i1<a;i1++)
    {
    cout<<"\n********************\n";
    cout<<"\nenter the choice of case whether 11 or 12:";
    cin>>choice1;
    cout<<"\n**************************************************\n";
    switch(choice1)
    {
    case 11:
        printf("\nAdding the items");
    {
    cout<<"\nenter the number of items:";
    cin>>n;
    cout<<"\n**************************************************\n";
    for(i=0;i<n;i++)
    {
    cout<<"\nEnter the number of choice:\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"idly=50\n";
        cout<<"price=";
        price+=50;
        cout<<price;
        break;
    case 2:
        cout<<"poori=70\n";
        cout<<"price=";
        price+=70;
        cout<<price;
        break;
    case 3:
        cout<<"vada=40\n";
        cout<<"price=";
        price+=40;
        cout<<price;
        break;
    case 4:
        cout<<"sambar=80\n";
        cout<<"price=";
        price+=80;
        cout<<price;
        break;
    case 5:
        cout<<"pongal=60\n";
        cout<<"price=\n";
        price+=60;
        cout<<price;
        break;
    default:
        cout<<"not in choice";
        break;
    }
    tprice=price;
    cout<<"\ntotal price="<<tprice;
    }
    break;
    case 12:
    cout<<"1.idly\n";
    cout<<"2.poori\n";
    cout<<"3.vada\n";
    cout<<"4.sambar\n";
    cout<<"5.pongal\n";
    cout<<"\nEnter the item to delete enter choice from :";
    cin>>n1;
    switch(n1)
    {
case 1:
    price=price-50;
    cout<<"price updated";
    break;
case 2:
    price=price-70;
    cout<<"price updated";
     break;
case 3:
    price=price-40;
    cout<<"price updated";
    break;
case 4:
    price=price-80;
    cout<<"price updated";
    break;
case 5:
    price=price-60;
    cout<<"price updated";
    break;
default:
    cout<<"wrong choice";
    break;
    }
    }
    }
cout<<"\n**************************************************\n";
cout<<"\nupdated price="<<price;
cout<<"\n**************************************************\n";
    }

    return 0;
}

