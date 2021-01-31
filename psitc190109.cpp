 #include <iostream>
#include <iomanip>



using namespace std;
enum Loud { printer=1,phone=2,table=3};;;
int main()
{
long double amount,totalCost,costofprinter=130,costofphone=190,costoftable=200,balance;
 const double vat=0.12;

    cout<<"                                             WELCOME TO OFOSUA'S SHOPPING SPREE"<<endl;
    cout << " Please enter your name" << endl;
    string name;
    int option;
    cin>> name;
    cout<<" Please enter your ID type" <<endl;
    string ID ;
    cin>> ID ;
     cout<< " There are 3 items available; "<<endl;

     cout<< "1.printer"<<endl;
    cout<<"2. phone"<<endl;
    cout<<"3. table"<<endl;




cout<<" PLEASE SELECT YOUR ITEM OF PURCHASE"<<endl;
cout<< " Please choose 1,2 or 3"<<endl;
    option;
    cin>>option;


 if(option == printer)

    {
        cout<<"printer was selected"<<endl;
        cout<<" Cost of printer=$ 130"<<endl;


 cout<<" PLEASE ENTER THE QUANTITY OF THIS ITEM YOU WISH TO BUY"<<endl;
        int quantity;
        cin>>quantity;
        const double vat=0.12;

        double totalCost;
        totalCost =(costofprinter*quantity)+ vat;

        cout<< "Your total amount is $ "<<totalCost<<endl;
        cout<<" Enter your payIn amount "<<endl;
        int amount;
        cin>>amount;
        if (amount>totalCost)
        {
            balance=amount-totalCost;
            cout<<" This is your remaining money $ "<<balance<<endl;
        }
        else
        {
            cout<< " You don't have enough to buy this item "<<endl;

          }


    cout<<"                RECEIPT                     "<<endl;
    cout<< " Name of Customer: "<<name<<endl;
    cout<<"You ID: " << ID<<endl;
    cout<<" Item bought: printer"<<endl;
    cout<<" Quantity bought : "<<quantity<<endl;
    cout<< " Total cost is $ "<<totalCost<<endl;
    cout<<" Balance : "<<balance<<endl;
    cout<<" Thanks for shopping with us "<<endl;
    }


        else  if( option==phone)

        {
            cout<<"phone was selected"<<endl;
        cout<<" Cost of phone=$ 190"<<endl;


         cout<<" PLEASE ENTER THE QUANTITY OF THIS ITEM YOU WISH TO BUY"<<endl;
        int quantity;
        cin>>quantity;
        double totalcost;
        totalCost=(costofphone*quantity)+vat;
        cout<<" Enter your payIn amount "<<endl;
        cin>>amount;
        if (amount>totalCost)
        {
            balance=amount-totalCost;
        }
        else
        {
           cout<< " You don't have enough to buy this item "<<endl;

        }

          cout<<"                RECEIPT                     "<<endl;
    cout<< " Name of Customer: "<<name<<endl;
    cout<<"You ID: " << ID<<endl;
    cout<<" Item bought: phone"<<endl;
    cout<<" Quantity bought : "<<quantity<<endl;
    cout<< " Total cost is $ "<<totalCost<<endl;
    cout<<" Balance : "<<balance<<endl;
    cout<<" Thanks for shopping with us "<<endl;

        }

    else if( option==table)
    {
          cout<<"table was selected"<<endl;
        cout<<" Cost of table=$ 200"<<endl;


 cout<<" PLEASE ENTER THE QUANTITY OF THIS ITEM YOU WISH TO BUY"<<endl;
        int quantity;
        cin>>quantity;
        double totalCost;
        totalCost=(costoftable*quantity)+vat;

        cout<<" Enter your payIn amount "<<endl;
        cin>>amount;
        if (amount>totalCost)
        {
            balance=amount-totalCost;
        }
        else
            {
            cout<< " You don't have enough yo buy this item "<<endl;
        }


          cout<<"                RECEIPT                     "<<endl;
    cout<< " Name of Customer: "<<name<<endl;
    cout<<"You ID: " << ID<<endl;
    cout<<" Item bought: table"<<endl;
    cout<<" Quantity bought : "<<quantity<<endl;
    cout<< " Total cost is $ "<<totalCost<<endl;
    cout<<" Balance : "<<balance<<endl;
    cout<<" Thanks for shopping with us "<<endl;


    }






    return 0;
}
