#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;

struct doctor1
{
    int id;
    char name[20],Q[20],age[20],exp[20],city[20],special[20];
};
struct patient1
{
    int id1;
    char name[20],age[20],city[20],dis[20],room[20],sym[20],con[20],date[20],charg[20],bill[20];
};

class hospital
{
    public:
    int id,id1=0;
    int counter= 0 ;
};

class doctor : public hospital
{
    public:
    int docid = 0;
    doctor1 arr[10]; //object of structue doctor1
    void add_doc_info()
    {
        int i,en;
        cout<<"How Many Entries you want to add: ";
        cin>>en;
        for(i=1;i<=en;i++)
        {
        cout<<"Enter Doctor's ID                :";
        cin>>arr[docid].id;
        cout<<"Enter Doctor's Name              :";
        cin>>arr[docid].name;
        cout<<"Enter Doctor's Age               :";
        cin>>arr[docid].age;
        cout<<"Enter Doctor's Qualification     :";
        cin>>arr[docid].Q;
        cout<<"Enter Doctor's Specialization    :";
        cin>>arr[docid].special;
        cout<<"Enter Doctor's Experience        :";
        cin>>arr[docid].exp;
        cout<<"Enter Doctor's city              :";
        cin>>arr[docid].city;
        docid++;
        counter++;
    	cout<<"\n";
        cout<<"You filled all Entries of "<<i<<" doctor successfully"<<"\n";
        cout<<"Enter value for "<<i+1<<" doctor"<<"\n";
        }
    }
    void Display()
    {
        system("cls");
        int n,i;
        cout<<"Enter the doctor's ID  to display Record: ";
        cin>>n;
        if(n==0)
        {
            cout<<"\n\n                      OOPS!!!!             "<<"\n\n";
            cout<<"Note:-   No Record To Display Plz Go Back And Enter Some Entries..."<<"\n";
        }
        else
        {
            int status=0;
            for(i=0;i<docid;i++)
            {
                if(arr[i].id==n)
                {
                    status=1;
                    break;
                }
            }
            if(status)
            {
                system("cls");
                cout<<"1.Doctor's ID                 :"<<arr[i].id<<"\n\n";
                cout<<"2.Doctor's Name               :"<<arr[i].name<<"\n\n";
                cout<<"3.Doctor's Age                :"<<arr[i].age<<"\n\n";
                cout<<"4.Doctor's Qualification      :"<<arr[i].Q<<"\n\n";
                cout<<"5.Doctor's Specialization     :"<<arr[i].special<<"\n\n";
                cout<<"6.Doctor's Experience         :"<<arr[i].exp<<"\n\n";
                cout<<"8.Doctor's city               :"<<arr[i].city<<"\n\n";
                cout<<"\nPress Any KEY To choose another Option...";
            }
            else
            {
                cout<<"\n\nNo such ID in database "<<endl;
                cout<<"\nPress Any KEY To choose another Option...";
            }
        }
         getch();
    }


    void doctor_detail()
    {
        int i;
        if(docid==0)
        {
            cout<<"\n\n\n                                  OOPS!!!!             "<<"\n\n";
           cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries..."<<"\n";
        }
        else
		{
        cout<<"********************************************************************************"<<"\n";
        cout<<"\t \t \t  Details Of All The Doctors In The Hospital \n";
        cout<<"********************************************************************************"<<"\n \n";

        cout<<"ID"<<"\t \t"<<"specialization"<<"\t \t"<<"Qualification"<<"\t \t"<<"Age";
        cout<<"\n \n";

        for(i=0;i<docid;i++)
         {
        cout<<arr[i].id<<"\t \t"<<arr[i].special<<"\t \t \t"<<arr[i].Q<<"\t  \t \t"<<arr[i].age<<"\n";
         }
         cout<<"\nPress Any Button To choose another Option...";
        }
        getch();
    }
    void tot_no_of_doc()
    {
        system("cls");
        int i=counter;
        cout<<"Total Doctor's in Hospital: "<<i<<"\n";
        cout<<"\nPress Any Button To choose another Option...";
        getch();
    }
};

class patient : public hospital
{
   public:
   int docid1=0;
   patient1 arr[10];
   void add_pat_info();
   void  Display();
   void patient_report();
   void patient_detail();
   void tot_no_of_pat();
   void gen_pat_report();
};

 void patient :: add_pat_info()
   {
        int i,en;
        cout<<"How Many Entries you want to add: ";
        cin>>en;
        for(i=1;i<=en;i++)
        {
        cout<<"1.Enter Patient's ID                                 :";
        cin>>arr[docid1].id1;
        cout<<"2.Enter patient's Name                               :";
        cin>>arr[docid1].name;
        cout<<"3.Enter patient's Age                                :";
        cin>>arr[docid1].age;
        cout<<"4.Enter patient's Disease                            :";
        cin>>arr[docid1].dis;
        cout<<"5.Enter patient's Symptoms                           :";
        cin>>arr[docid1].sym;
        cout<<"6.Enter Patient's Room No.                           :";
        cin>>arr[docid1].room;
        cout<<"7.Enter Patient's condition Before Admit             :";
        cin>>arr[docid1].con;
        cout<<"8.Enter Patient's ADMIT Date                         :";
        cin>>arr[docid1].date;
        cout<<"9.Enter Patient's Room Charge                        :";
        cin>>arr[docid1].charg;
        cout<<"10.Enter Patient's Medicine charge                   :";
        cin>>arr[docid1].bill;
        docid1++;
        counter++;
        cout<<"\n";
        cout<<"You filled all Entries of "<<i<<" patient successfully"<<"\n";
        cout<<"Enter value for "<<i+1<<" patient"<<"\n";
        }
   }

   void patient :: Display()
   {
        system("cls");
        int n,i;
        cout<<"\nEnter the Patient's ID to display info: ";
        cin>>n;
        if(n==0)
        {
            cout<<"\n\n                      OOPS!!!!             "<<"\n \n";
            cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries..."<<"\n";
            cout<<"\nPress Any KEY To choose another Option...";
        }
        else
        {
            int status=0;
            for(i=0;i<docid1;i++)
            {
                if(arr[i].id1==n)
                {
                    status=1;
                    break;
                }
            }
            if(status==1)
            {
            cout<<"1.Patient's ID                                      :"<<arr[i].id1<<"\n";
            cout<<"2.Patient's Name                                    :"<<arr[i].name<<"\n";
            cout<<"3.Patient's Age                                     :"<<arr[i].age<<"\n";
            cout<<"4.Patient's  Disease                                :"<<arr[i].dis<<"\n";
            cout<<"5.Patient's Symptoms                                :"<<arr[i].sym<<"\n";
            cout<<"6.Patient's Room No.                                :"<<arr[i].room<<"\n";
            cout<<"7.Patient's condition Before Admit                  :"<<arr[i].con<<"\n";
            cout<<"8.Patient's ADMIT Date                              :"<<arr[i].date<<"\n";
            cout<<"9.Patient's Room Charge                             :"<<arr[i].charg<<"\n";
            cout<<"10.Patient's Medicine charge                        :"<<arr[i].bill<<"\n";
            cout<<"\nPress Any KEY To choose another Option...";
           }
           else{
                cout<<" \n\n No such ID in database "<<endl;
                cout<<" \n Press Any KEY To choose another Option...";
             }
        }
    getch();
 }

 void patient :: patient_report()
  {
            system("cls");
            int i,n;
            cout<<"\nEnter the Patient's ID to Display  Report: ";
            cin>>n;
            int status=0;
            for(i=0;i<docid1;i++)
            {
                if(arr[i].id1==n)
                {
                    status=1;
                    break;
                }
            }
            if(status)
            {
               cout<<"------------------------------------------"<<endl;
               cout<<"Patient's Report"<<"\n";
               cout<<"------------------------------------------"<<endl<<endl;
               cout<<"1. Patient's Name: "<<arr[i].name<<"\n";
               cout<<"2. Patient's Age: "<<arr[i].age<<"\n";
               cout<<"3. Patient symptoms: "<<arr[i].sym<<"\n";
               cout<<"4. Patient Disease: "<<arr[i].dis<<"\n";
               cout<<"5. Patient Admit Date: "<<arr[i].date<<"\n";
               cout<<"6. Patient condition At The Time Of Discharge: "<<arr[i].con<<"\n";
               cout<<"Press Any Key To Go Back...";
            }
            else{
                cout<<" \n\n No such ID in database "<<endl;
                cout<<" \n Press Any KEY To choose another Option...";
             }

               getch();
        }

     void patient :: patient_detail()
     {
         int i;
          if(docid1==0)
          {
           cout<<" \n\n\n\n\n                                  OOPS!!!!             "<<"\n\n\n";
           cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries...... "<<"\n";
          }
        else{
        cout<<"********************************************************************************"<<"\n";
        cout<<"\t \t \t  Details Of All The Pateint In The Hospital \n";
        cout<<"********************************************************************************"<<"\n \n";
        cout<<"ID"<<"\t \t"<<"illness"<<"\t \t"<<"ADMITTED Date"<<"\t \t"<<"Age";
        cout<<"\n \n";
        for(i=0;i<docid1;i++)
         {
          cout<<arr[i].id1<<"\t \t"<<arr[i].dis<<"\t \t \t"<<arr[i].date<<"\t  \t \t"<<arr[i].age<<"\n";
         }
         cout<<" \n Press Any KEY To choose another Option.... ";
        }
        getch();
     }

     void patient :: tot_no_of_pat()
     {
        system("cls");
        int i=counter;
        cout<<"Total Patients in Hospital    :   "<<i<<"\n";
        cout<<"\nPress Any KEY To choose another Option.... ";
        getch();
     }

void patient :: gen_pat_report()
{
            system("cls");
            int i,n;
            cout<<"\nEnter the Patient's ID to Display Bill: ";
            cin>>n;
            int status=0;
            for(i=0;i<docid1;i++)
            {
                if(arr[i].id1==n)
                {
                    status=1;
                    break;
                }
            }
            if(status)
            {
               cout<<"------------------------------------------"<<endl;
               cout<<"Patient's Report"<<"\n";
               cout<<"------------------------------------------"<<endl<<endl;
               cout<<"1. Patient's Medicine Charge: "<<arr[i].bill<<"\n";
               cout<<"2. Patient's Room Charge: "<<arr[i].charg<<"\n";
               cout<<"Press Any Key To Go Back...";
            }

            else{
                cout<<"\n\nNo such ID in database "<<endl;
                cout<<"\nPress Any KEY To choose another Option...";
             }
             getch();


	
}


int main()
{
	system("color 71");
    bool repeat= true;
    int ch1,ch2,ch3,ch4;
    doctor d;
    patient p;
    xyz:

system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                WELCOME TO                                             |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                          HOSPITAL MANAGEMENT SYSTEM                                   |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                 Muhammad Ahmad Saleem                 |@@\n";
	cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
 	cout << "Press any key to continue";
  	getch();
  	system("cls");
    cout<<"------------------------------------------"<<endl;
    cout<<"Welcome to the Hospital Management System"<<endl;
    cout<<"------------------------------------------"<<endl<<endl;
    cout<<"1. Menu"<<"\n\n";;
    cout<<"2. Exit"<<"\n\n";
    cout<<"Enter Your Choice: ";
    cin>>ch1;

    if(ch1==1)
    {
         xyz2:
         system("cls");
         cout<<"1.Enter into Doctor's DataBase"<<endl<<endl;
         cout<<"2.Enter into Patient's DataBase"<<endl<<endl;
         cout<<"3.Generate Patient's Report"<<endl<<endl;
         cout<<"4.Generate Patient's Bill"<<endl<<endl;
         cout<<"5.EXIT"<<"\n\n";
         cout<<"Enter Your choice: ";
         cin>>ch2;
         while(repeat==true)
          {
           system("cls");
           switch(ch2)
           case 1:
            {
               cout<<"------------------------------------------"<<endl;
               cout<<"Welcome To Doctor's DataBase"<<"\n";
               cout<<"------------------------------------------"<<endl<<endl;
               cout<<"1. Add New Doctor's Information"<<endl<<endl;
               cout<<"2. Display Doctor's Information"<<endl<<endl;
               cout<<"3. Detail OF ALL The Doctors In The Hospital"<<endl<<endl;
               cout<<"4. Total Number of Doctor's  in Hospital"<<endl<<endl;
               cout<<"5. EXIT"<<"\n\n";
               cout<<"Please Enter your choice :";
               cin>>ch3;
               switch(ch3)
               {
                  case 1:
                   system("cls");
                   d.add_doc_info();
                   break;
                   case 2:
                       d.Display();
                       cout<<"\n";
                    break;

                   case 3:
                       system("cls");
                       d.doctor_detail();
                       break;

                   case 4:
                       d.tot_no_of_doc();
                    break;

                    case 5:
                        goto xyz2;
                        break;

                   default:
                    cout<<"Invalid Input";
                }
                break;
        case 2:
               system("cls");
               cout<<"------------------------------------------"<<endl;
               cout<<"Welcome To Patient's DataBase"<<endl;
			   cout<<"------------------------------------------"<<endl<<endl;
               cout<<"1. Add New Patient's Information"<<endl<<endl;
               cout<<"2. Display Patient's Information"<<endl<<endl;
               cout<<"3. Detail OF ALL The Patient In The Hospital"<<endl<<endl;
               cout<<"4. Total Number of Patient's in Hospital"<<endl<<endl;
               cout<<"5. EXIT"<<"\n\n";
               cout<<"Enter your choice: ";
               cin>>ch4;
               switch(ch4)
               {
                  case 1:
                   system("cls");
                   p.add_pat_info();
                   break;
                   case 2:
                       p.Display();
                       cout<<"\n";
                    break;

                   case 3:
                       system("cls");
                       p.patient_detail();
                       break;

                   case 4:
                       p.tot_no_of_pat();
                    break;

                    case 5:
                        goto xyz2;
                        break;

                   default:
                    cout<<"invalid";
                    break;
                }
            break;
            case 3:

            p.patient_report();
            goto xyz2;
            break;
            case 4:
                p.gen_pat_report();
                goto xyz2;
            break;
            case 5:
                goto xyz;
                break;

  }
 }
 }
 else if(ch1==2)
 {
 	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                          HOSPITAL MANAGEMENT SYSTEM                                   |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                 Muhammad Ahmad Saleem                 |@@\n";
	cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
 	
 	

     return 0;
 }
 else
 {
     cout<<"Wrong Input"<<endl;
 }
 return 0;
}
