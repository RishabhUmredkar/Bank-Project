#include <iostream>
#include <windows.h>


using namespace std;

 class Bank
{
private:
int bal,depAmout,witAmout,i;
string acc,name,mname,lname,add,city,pin,id,pass,id1,pass1,mobno;
public:
    void Menu()
    {
    cout<<"\n\t*****WELCOME TO BANK OF INDIA*****\n"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"**     1.Create an Account                **"<<endl;
    cout<<"**     2.Sign In/Login In                 **"<<endl;
    cout<<"**     3.Deposit Cash                     **"<<endl;
    cout<<"**     4.Withdraw Cash                    **"<<endl;
    cout<<"**     5.Mini Statement                   **"<<endl;
    cout<<"**     6.Loan Enquiry                     **"<<endl;
    cout<<"**     0.Exit                             **"<<endl;
    cout<<"********************************************"<<endl;
    cout<<endl;

    }
    void createAcc()
    {
        cout<<"\n ~~~~~Create An Account~~~~~\n"<<endl;
        cout<<"   Enter First Name     :";
        cin>>name;
        cout<<"\n   Enter Middle Name    :";
        cin>>mname;
        cout<<"\n   Enter Last Name      :";
        cin>>lname;
        cout<<"\n   Enter Address        :";
        cin>>add;
        cout<<"\n   Enter City           :";
        cin>>city;
        cout<<"\n   Enter Pin Number     :";
        cin>>pin;
        cout<<"\n   Enter Mobile Number  :";
        cin>>mobno;
        cout<<"\n   Enter Account Number :";
        cin>>acc;
        cout<<"\n   Enter Balance Amount :";
        cin>>bal;
        cout<<"\n   Create User id       :";
        cin>>id;
        cout<<"\n   Create Password      :";
        cin>>pass;
        cout<<endl;
        system("CLS");

        cout<<"\n\n\n\tCREATING AN ACCOUNT PLEASE WAIT ";
        for (i=0;i<3;i++)
        {
           cout<<(".");
           Sleep (2000);
        }

        cout<<endl<<"\n\n\n\tACCOUNT HAS BEEN CREATED SUCCESSFULLY!"<<endl;
        Sleep(1800);
        system("CLS");
    }
    void showAccDetail()
    {
        f:
            cout<<"\n ~~~~ Login In Your Account ~~~~"<<endl;
        cout<<endl;
        cout<<"Enter User ID  : ";
        cin>>id1;
        cout<<"Enter Password : ";
        cin>>pass1;
        cout<<"\n   Fetching your bank Account ";
        for(i=0;i<3;i++)
        {
            cout<<".";
            Sleep(500);
        }
        system("CLS");
        cout<<endl<<"\n Bank Account Fetched Successfully. "<<endl;
        if(id1==id && pass1==pass)
        {
        cout<<"\n ~~~~~Customer Details~~~~~\n"<<endl;
        cout<<endl<<"Account Holder Name : "<<name<<" "<<mname<<" "<<lname<<" "<<endl;
        cout<<"Account Number      : "<<acc<<endl;
        cout<<"Address of Holder   : "<<add<<", "<<city<<", "<<pin<<endl;
        cout<<"Mobile Number       : "<<mobno<<endl;
        cout<<"Balance Amount      : "<<bal<<endl;
        cout<<endl;
        cout<<"###########################################################\n"<<endl;
        }
        else
        {
            cout<<"Wrong ID and Password,Re-enter ID and Password."<<endl;
            cout<<endl;
            goto f;
        }
    }
    void Deposit()
    {
         f:
             cout<<"\n ~~~~~ Deposit Cash ~~~~~"<<endl;
        cout<<endl;
        cout<<"Enter User ID  : ";
        cin>>id1;
        cout<<"Enter Password : ";
        cin>>pass1;
        cout<<"\n\tWait A Moment";
        for(i=0;i<3;i++)
        {
            cout<<".";
            Sleep(800);
        }
        system("CLS");
        if(id1==id && pass1==pass)
        {
         cout<<endl<<" \t \t ***WELCOME*** \n"<<endl<<" \t"<<name<<" "<<mname<<" "<<lname<<" "<<endl;
         cout<<" \tAccount Number: "<<acc<<endl;
         cout<<"\n~~~~~CASH DEPOSIT~~~~~\n"<<endl;
         cout<<"Enter Amount: ";
         cin>>depAmout;
         bal=bal+depAmout;
         cout<<"Total Amount is: "<<bal<<endl;
         cout<<endl;
         cout<<" Transaction has been successful!!!"<<endl;
         cout<<"\n###########################################################\n"<<endl;
        }
        else
        {
            cout<<"Wrong ID and Password,Re-enter ID and Password."<<endl;
            cout<<endl;
            goto f;
        }
    }
    void Withdraw()
    {
         f:
             cout<<"\n ~~~~~ Withdraw Cash ~~~~~"<<endl;
        cout<<endl;
        cout<<"Enter User ID  : ";
        cin>>id1;
        cout<<"Enter Password : ";
        cin>>pass1;
        cout<<"\n\tWait A Moment";
        for(i=0;i<3;i++)
        {
            cout<<".";
            Sleep(800);
        }
        system("CLS");
        if(id1==id && pass1==pass)
        {
         cout<<endl<<" \t \t ***WELCOME*** \n"<<endl<<" \t"<<name<<" "<<mname<<" "<<lname<<" "<<endl;
         cout<<" \tAccount Number: "<<acc<<endl;
         cout<<"\n~~~~~CASH WITHDRAW~~~~~\n"<<endl;
         cout<<"Enter Amount: ";
         cin>>witAmout;
         bal=bal-witAmout;
         cout<<"Total Amount is: "<<bal<<endl;
         cout<<endl;
        cout<<" Transaction has been successful!!!"<<endl;
        cout<<"\n###########################################################\n"<<endl;
        }
        else
        {
            cout<<"Wrong ID and Password,Re-enter ID and Password."<<endl;
            cout<<endl;
            goto f;
        }

    }
    void Ministatement()
    {
         f:
             cout<<"\n ~~~~~ Mini Statement ~~~~~"<<endl;
        cout<<endl;
        cout<<"Enter User ID  : ";
        cin>>id1;
        cout<<"Enter Password : ";
        cin>>pass1;
        cout<<"\n\tWait A Moment";
        for(i=0;i<3;i++)
        {
            cout<<".";
            Sleep(800);
        }
        system("CLS");

        if(id1==id && pass1==pass)
        {
         cout<<endl<<" \t \t ***WELCOME*** \n"<<endl<<" \t"<<name<<" "<<mname<<" "<<lname<<" "<<endl;
         cout<<" \tAccount Number: "<<acc<<endl;
         cout<<"\n~~~~~MINI STATEMENT~~~~~\n"<<endl;
         cout<<"DEPOSIT AMOUNT       : "<<depAmout<<endl;
         cout<<"\nWITHDRAW AMOUNT      : "<<witAmout<<endl;
         cout<<"\nTOTAL BALANCE AMOUNT : "<<bal<<endl;
         cout<<endl;
          cout<<" Transaction has been successful!!!"<<endl;
         cout<<"\n###########################################################\n"<<endl;

        }
        else
        {
            cout<<"Wrong ID and Password,Re-enter ID and Password."<<endl;
            cout<<endl;
            goto f;
        }

    }
    void LoanEnquiry()
    {
         f:
             cout<<"\n ~~~~~ Loan Enquiry ~~~~~"<<endl;
        cout<<endl;
        cout<<"Enter User ID  : ";
        cin>>id1;
        cout<<"Enter Password : ";
        cin>>pass1;
        cout<<"\n\tWait A Moment";
        for(i=0;i<3;i++)
        {
            cout<<".";
            Sleep(800);
        }
        system("CLS");
        if(id1==id && pass1==pass)
        {
         cout<<"\n ~~~~~ MANAGER ~~~~~"<<endl;
         cout<<endl<<" \t \t ***WELCOME*** \n"<<endl<<" \t"<<name<<" "<<mname<<" "<<lname<<" "<<endl;
         cout<<" \tAccount Number: "<<acc<<endl;
         cout<<" \tAccount Balance: "<<bal<<endl;
         cout<<endl;
        Loaninfo();

        }
        else
        {
            cout<<"Wrong ID and Password,Re-enter ID and Password."<<endl;
            cout<<endl;
            goto f;
        }

    }

private:
    void Loaninfo()
    {
        int pre,choic,lamt,irt,yrs,tamt,mamt;
        string ltype;
        cout<<"\n WHAT CAN I HELP YOU?"<<endl;
        cout<<"\n  1. Loan Enquiry"<<endl;
        cout<<"  2. Take Loan "<<endl;
        cout<<"\nCHOICE YOUR PREFERENCE:";
        cin>>pre;

        if(pre==1)
        {
            x:
        cout<<"\n~~~~~|ENQUIRY|~~~~~\n"<<endl;
        cout<<" Which type of Loan you want?"<<endl;
        cout<<"\n  1.Home Loan     = 12  %"<<endl;
        cout<<"  2.Personal Loan = 16 %"<<endl;
        cout<<"  3.Gold Loan     = 9  %"<<endl;
        cout<<"\nSelect Your Loan Type:";
        cin>>choic;

        if(choic==1)
        {
           cout<<"\n You Have Select HOME LOAN!"<<endl;
           cout<<" Eligibility Criteria for Home loan is:"<<endl;
           cout<<"\n 1.Your age is above 21 Yrs."<<endl;
           cout<<" 2.Home loan are eligible for both Salaried and Self-Employed borrowers."<<endl;
           cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        }
        else if(choic==2)
        {
           cout<<"\n You Have Select PERSONAL LOAN!"<<endl;
           cout<<"\n Eligibility Criteria for Home loan is:"<<endl;
           cout<<" 1.The age should between 21 to 60 Years."<<endl;
           cout<<" 2.Individuals who have had a job for at least 2 Years."<<endl;
           cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        }
        else if(choic==3)
        {
           cout<<"\nYou Have Select GOLD LOAN!"<<endl;
           cout<<" Eligibility Criteria for Gold loan is:"<<endl;
           cout<<"\n 1.Your Age should be between 18 to 65 Years."<<endl;
           cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        }
        else
        {
            cout<<"\nInvalid Input..Select Below Options!"<<endl;
            goto x;
        }
        }

        else if(pre==2)
        {
            n:
        cout<<"\n~~~~~|TAKE LOAN|~~~~~\n"<<endl;
        cout<<" Which type of Loan you want?"<<endl;
        cout<<" 1.Home Loan     = 9  %"<<endl;
        cout<<" 2.Personal Loan = 18 %"<<endl;
        cout<<" 3.Gold Loan     = 12 %"<<endl;
        cout<<endl;
        cout<<"\nEnter type of Loan:";
        cin>>ltype;
        cout<<"\nEnter rate of Interest:";
        cin>>irt;
        cout<<"\nEnter Loan Amount:";
        cin>>lamt;
        cout<<"\nEnter Time Duration:";
        cin>>yrs;

        tamt=lamt+((yrs*lamt*irt)/100.00);
        mamt=tamt/(yrs*12);
        cout<<endl;
        cout<<"Loan type:"<<ltype<<endl;
        cout<<"\nTotal Amount be paid:"<<tamt<<endl;
        cout<<"\nTotal Interest:"<<tamt-lamt<<endl;
        cout<<"\nMonthly amount be paid :"<<mamt<<endl;
        cout<<endl;
        }
        else
        {
          cout<<"\nInvalid Input..Select Below Options!"<<endl;
            goto n;
        }
        cout<<endl;
    }

};

int main()
{

    int ch,a=1;
    Bank b1;
    while(a)
    {
        b1.Menu();
        cout<<"Enter Your Choice: ";
        cin>>ch;
        system("CLS");
        switch(ch)
        {
        case 1:
            b1.createAcc();
            break;
        case 2:
            b1.showAccDetail();
            break;
        case 3:
            b1.Deposit();
            break;
        case 4:
            b1.Withdraw();
            break;
        case 5:
            b1.Ministatement();
            break;
        case 6:
            b1.LoanEnquiry();
            break;
        case 0:
            a=0;
            cout<<"\n Thank You for using our system... Visit again!"<<endl;
            break;
        default:
            cout<<"Invalid Input.. Select above option"<<endl;
cout<<endl;
        }
    }
    return 0;
}
