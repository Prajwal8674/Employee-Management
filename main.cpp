#include <iostream>
#include <string>

using namespace std;
int c=0;

void content()
{
cout<<endl<<"      =================="<<endl;
cout<<"        :: CONTENT "<<endl<<endl;
cout<<"        :: 1 : ADMIN "<<endl;
cout<<"        :: 2 : MANAGER "<<endl;
cout<<"        :: 3 : EMPLOYEE "<<endl;
cout<<"        :: 0 : EXIT "<<endl;
cout<<"      =================="<<endl<<endl;

}
void ContentAdmin()
{
    cout<<endl<<"      ===================="<<endl;
    cout<<"      : ADMIN CONTENT :"<<endl;
    cout<<"      ===================="<<endl<<endl;
    cout<<"        1: Add Record "<<endl;
    cout<<"        2: Display Record"<<endl;
    cout<<"        3: Display Record Particularly "<<endl;
    cout<<"        4: Update Record "<<endl;
    cout<<"        0: Exit "<<endl;
    cout<<"     ====================="<<endl<<endl;

}
void ContentManager()
{
    cout<<endl<<"      ===================="<<endl;
    cout<<"      : MANAGER CONTENT :"<<endl;
    cout<<"      ===================="<<endl;
    cout<<"        1: Display Record"<<endl;
    cout<<"        2: Display Record Particularly "<<endl;
    cout<<"        0: Exit "<<endl<<endl;
}
void ContentEmployee()
{
   cout<<endl<<"      ===================="<<endl;
    cout<<"      : EMPLOYEE CONTENT :"<<endl;
    cout<<"      ===================="<<endl;
    cout<<"        1: Display Record Particularly "<<endl;
    cout<<"        0: Exit "<<endl;
    cout<<"      =================================="<<endl<<endl;

}
void UpdateRecord()
{
        cout<<endl<<"      :: 1: ID          "<<endl;
        cout<<"      :: 2: FIRST NAME  "<<endl;
        cout<<"      :: 3: LAST NAME   "<<endl;
        cout<<"      :: 4: ADDRESS     "<<endl;
        cout<<"      :: 5: SALARY      "<<endl;
        cout<<"      :: 6: DOB         "<<endl;
        cout<<"      :: 7: DEPT        "<<endl<<endl;
        cout<<"      :: 0: Exit        "<<endl;
        cout<<"      ====================="<<endl<<endl;

}

class admin
{
public:
    int ID,salary,nsalary,emp;
    string address,surname,nsurname,dob,ndob,dept,ndept;
    string name,nname,naddress;
    void AddData()
    {
           cout<<":: Enter "<<emp++<<" Employee's ID   : ";
cin>>ID;
cout<<":: Enter Your First Name : ";
cin>>name;
cout<<":: Enter Your Last Name  : ";
cin>>surname;
cout<<":: Enter Your Address    : ";
cin>>address;
cout<<":: Enter Your Salary     : ";
cin>>salary;
cout<<":: Enter Date Of Birth   : ";
cin>>dob;
cout<<":: Enter The Department  : ";
cin>>dept;
cout<<endl;
    }
    void ShowData()
    {
        cout<<ends<<"=================="<<endl;
        cout<<ends<<":: ID         = "<<ID<<endl;
        cout<<ends<<":: NAME       = "<<name<<ends<<surname<<endl;
        cout<<ends<<":: ADDRESS    = "<<address<<endl;
        cout<<ends<<":: SALARY     = "<<salary<<endl;
        cout<<ends<<":: DOB        = "<<dob<<endl;
        cout<<ends<<":: DEPARTMENT = "<<dept<<endl<<endl;
        cout<<ends<<"=================="<<endl;
    }
    };

int main()
{
    admin a[100];

    int ch=0,ch2=0,ch3=0,ch4=0,i,cnt=1,part,part2,part3,x=0,edit;



    cout<<"   |================================================|"<<endl;
    cout<<"   |   :: WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ::  |"<<endl;
    cout<<"   |================================================|"<<endl;
    content();
  enter:  cout<<"Enter Your Choice : ";
    cin>>ch;
    if(ch==1)
    {
         cout<<"===================="<<endl;
       cout<<":: You Are Admin Now "<<endl;
    cout<<"===================="<<endl;
        ContentAdmin();
  admin:cout<<":: Enter Your Choice Sir : "<<endl<<":: ";
        cin>>ch2;
        cout<<"=========================="<<endl<<endl;
        switch(ch2)
        {
        case 0:
            cout<<"THANK YOU"<<endl;
            content();
            goto enter ;
            break;
        case 1:
             cout<<":: Enter How Many Employees Record You Want To Add :";
             cin>>c;
             for(i=0;i<c;i++)
            {
                a[i].AddData();
            }
             cout<<"====================="<<endl;
             cout<<":: Anything Else ? "<<endl;
             cout<<"====================="<<endl;
             ContentAdmin();
             goto admin;
            break;
        case 2:
                    cout<<"The Record You Added Showing Below :"<<endl<<endl;
                    for(i=0;i<c;i++)
                    {
                       cout<<ends<<"Employee No "<<cnt++ <<endl<<endl;
                       a[i].ShowData();
                    }
                    ContentAdmin();
                    goto admin;
            break;
        case 3:
        ID:     cout<<":: For See Employee Data Particularly "<<endl<<":: Enter The ID Of The Employee : ";
             cin>>part;

             for(i=0;i<c;i++)
             {
                if(part==a[i].ID)
                {
                    a[i].ShowData();
                }
                else{
                    x++;
                }
             }
              if(x==c)
                {
                  cout<<"Enter valid ID : "<<endl;
                  x=0;
                  goto ID;
                }
              cout<<"====================="<<endl;
             cout<<":: Anything Else ? "<<endl;
             cout<<"====================="<<endl;
             ContentAdmin();
             goto admin;
            break;

        case 4:
            UpdateRecord();

  int data;
  ID2:       cout<<":: What Data You Want To Edit : ";
              cin>>data;
               if(data==0)
         {
             cout<<"==============================="<<endl;
             cout<<"Everything Updated Successfully "<<endl;
             cout<<"THANK YOU !! "<<endl;
             cout<<"==============================="<<endl<<endl;

             ContentAdmin();
             goto admin;

         }
reenter :
        cout<<"============================================"<<endl;
        cout<<":: Enter ID Of The Employee For Edit Data : ";
        cin>>edit;
        cout<<"============================================"<<endl<<endl;
    if(data==1)
{
                cout<<"================================"<<endl;
                cout<<":: Sorry !! You Cannot Change ID"<<endl;
                cout<<"================================"<<endl;
                UpdateRecord();
                goto ID2;
}
    if(data==2)
    {
         for(i=0;i<=c;i++)
         {
            if(edit==a[i].ID)
         {
              cout<<"===================="<<endl;
              cout<<":: Old Name Is : "<<a[i].name<<endl;
              cout<<":: Enter New Name : ";
              cin>>a[i].nname;
              cout<<"===================="<<endl<<endl;

                a[i].name = a[i].nname;
                cout<<"============================="<<endl;
                cout<<":: Name Added Successfully ! "<<endl;
                cout<<":: Anything Else ? "<<endl;
                cout<<"============================="<<endl<<endl;
                UpdateRecord();
                goto ID2;
         }

         }
          if(edit!=a[i].ID)
        {
            cout<<":: Enter The Valid ID : "<<endl;
            goto reenter;
         }
         }
          if(data==3)
         {
         for(i=0;i<=c;i++)
         {
            if(edit==a[i].ID)
         {
                cout<<"===================="<<endl;
                cout<<":: Old Surname Is : "<<a[i].surname<<endl;
                cout<<":: Enter New Surname : ";
                cin>>a[i].nsurname;
                cout<<"===================="<<endl<<endl;
                a[i].surname = a[i].nsurname;
                cout<<":: Surname Added Successfully ! "<<endl;
                cout<<":: Anything Else ? "<<endl;
                UpdateRecord();
                goto ID2;
         }
         }
         if(edit!=a[i].ID)
        {
            cout<<":: Enter The Valid ID : "<<endl;
            goto reenter;
         }
         }
         if(data==4)
         {
         for(i=0;i<=c;i++)
         {
            if(edit==a[i].ID)
         {
                cout<<"===================="<<endl;
                cout<<":: Old Address Is : "<<a[i].address<<endl;
                cout<<":: Enter New Address : ";
                cin>>a[i].naddress;
                cout<<"===================="<<endl<<endl;

                a[i].address = a[i].naddress;
                cout<<":: Address Added Successfully ! "<<endl;
                cout<<":: Anything Else ? "<<endl;
                UpdateRecord();
                goto ID2;
         }

         }
         if(edit!=a[i].ID)
        {
            cout<<":: Enter The Valid ID : "<<endl;
            goto reenter;
         }
         }

          if(data==5)
         {
         for(i=0;i<=c;i++)
         {
            if(edit==a[i].ID)
         {
                cout<<"===================="<<endl;
                cout<<":: Old Salary Is : "<<a[i].salary<<endl;
                cout<<":: Enter New Salary : ";
                cin>>a[i].nsalary;
                cout<<"===================="<<endl<<endl;
                a[i].salary = a[i].nsalary;
                cout<<":: Salary Updated Successfully ! "<<endl;
                cout<<":: Anything Else ? "<<endl;
                UpdateRecord();
                goto ID2;
         }
         }
         if(edit!=a[i].ID)
        {
            cout<<":: Enter The Valid ID : "<<endl;
            goto reenter;
         }
         }
          if(data==6)
         {
         for(i=0;i<=c;i++)
         {
            if(edit==a[i].ID)
         {
                cout<<"===================="<<endl;
                cout<<":: Old Date Of Birth Is : "<<a[i].dob<<endl;
                cout<<":: Enter New Date Of Birth : ";
                cin>>a[i].ndob;
                cout<<"===================="<<endl<<endl;
                a[i].dob = a[i].ndob;
                cout<<":: Birth Date Updated Successfully ! "<<endl;
                cout<<":: Anything Else ? "<<endl;
                UpdateRecord();
                goto ID2;
         }

         }
          if(edit!=a[i].ID)
        {
            cout<<":: Enter The Valid ID : "<<endl;
            goto reenter;
         }
         }
          if(data==7)
         {
         for(i=0;i<=c;i++)
         {
            if(edit==a[i].ID)
         {
                cout<<"========================="<<endl<<endl;
                cout<<":: Old Department Is : "<<a[i].dept<<endl;
                cout<<":: Enter New Department : ";
                cin>>a[i].ndept;
                cout<<"========================="<<endl<<endl;
                a[i].dept = a[i].ndept;
                cout<<":: Surname Added Successfully ! "<<endl;
                cout<<":: Anything Else ? "<<endl;
                UpdateRecord();
                goto ID2;
         }

         }
          if(edit!=a[i].ID)
        {
            cout<<":: Enter The Valid ID : "<<endl;
            goto reenter;
         }
         }

    }
    }
    if(ch==2)
    {
        cout<<"======================"<<endl;
       cout<<":: You Are Manager Now "<<endl;
    cout<<"======================"<<endl;
        ContentManager();
     Manager:   cout<<"Enter your Choice Sir : ";
        cin>>ch3;
switch(ch3)
{
case 0:
    cout<<endl<<"THANK YOU !!"<<endl;
            content();
            goto enter ;
    break;
case 1:

 cout<<"The Record You Added Showing Below :"<<endl<<endl;
                    for(i=0;i<c;i++)
                    {
                       cout<<ends<<"Employee No "<<cnt++ <<endl<<endl;
                       a[i].ShowData();
                    }
                    ContentManager();
                    goto Manager;    break;
case 2:

   ID3:  cout<<":: For See Employee Data Particularly "<<endl<<":: Enter The ID Of The Employee : ";
             cin>>part2;
     for(i=0;i<c;i++)
             {
                if(part2==a[i].ID)
                {
                    a[i].ShowData();
                    x=0;
                }
                else
                {
                    x++;
                }
             }
              if(x==c)
                {
                  cout<<"Enter valid ID : "<<endl;
                  goto ID3 ;
                  x=0;
                }
     cout<<"====================="<<endl;
     cout<<":: Anything Else ? "<<endl;
    cout<<"====================="<<endl;
             ContentManager();
             goto Manager;
    break;

default:

    break;


}
    }
    if(ch==3)
    {

         cout<<"===================="<<endl;
       cout<<":: You Are Employee Now "<<endl;
    cout<<"===================="<<endl;
        ContentEmployee();
         employee:cout<<":: Enter Your Choice Sir : "<<endl<<":: ";
                cin>>ch4;


        switch(ch4)
        {
            case 1:
             ID4:  cout<<":: For See Employee Data Particularly "<<endl<<":: Enter The ID Of The Employee : ";
             cin>>part3;
     for(i=0;i<c;i++)
             {
                if(part3==a[i].ID)
                {
                    a[i].ShowData();
                    x=0;
                }
                else
                {
                    x++;
                }
             }
              if(x==c)
                {
                  cout<<"Enter valid ID : "<<endl;
                  goto ID4 ;
                  x=0;
                }
     cout<<"====================="<<endl;
     cout<<":: Anything Else ? "<<endl;
    cout<<"====================="<<endl;
             ContentEmployee();
             goto employee;
             break;

             case 0:
                cout<<"============="<<endl;
                cout<<"THANK YOU !!"<<endl;
                cout<<"============="<<endl;
                 content();
                 goto enter;
                 break;
        }
    }
    if(ch==0)
    {
        cout<<"============="<<endl;
        cout<<"THANK YOU !!"<<endl;
        cout<<"============="<<endl<<endl;

    }
    return 0;
}

