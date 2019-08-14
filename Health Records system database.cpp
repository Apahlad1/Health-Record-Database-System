#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
//We set each entry to 20 characters max, we can always increase it
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
//here we have our leading classes which will be implemented later on
using namespace std;
class doctor;
class patient;
class hospital
{
public:
int counter=0;
};

//In this class, will display the doctors info and it will be store in to the database
class doctor:public hospital
{
public:
int docid=0;
struct doctor1 arr[10];
void add_doc_info()
{
int i,en;
cout<< "How Many Entries you want to add :";
cin>>en;
for(i=1;i<=en;i++)
{
cout<< "Enter Doctor’s ID :";
cin>>arr[docid].id;
cout<< "Enter Doctor’s Name :";
cin>>arr[docid].name;
cout<< "Enter Doctor’s Age :";
cin>>arr[docid].age;
cout<< " Enter Doctor’s Qualification :";
cin>>arr[docid].Q;
cout<< "Enter Doctor’s Specialization :";
cin>>arr[docid].special;
cout<< "Enter Doctor’s Experience :";
cin>>arr[docid].exp;
cout<< "Enter Doctor’s Address :";
cin>>arr[docid].city;
docid++;
counter++;
cout<<"\n";
cout<< "YOU HAVE SUCCESSFULLY COMPLETED THE ENTRIES FOR " <<i<<  "doctor successfully" << "\n";
cout<< "enter value for " << "  " << i+1 << "  " << "doctor" << "\n";
}
}
//this void function allows the user to search for the doctor by their ID #
void Display()
{
system("cls");
int n,i;
cout<< "\n Enter the doctor’s ID to display Record :";
cin>>n;
if(n==0)
{
cout<< "\n\n E R  R O  R " << "\n\n" ;
cout<<  "ERROR. Sorry but we could not find that entry, please go back and select another entry. " << "\n";
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
cout<<"\n\n";
cout<<"1.Doctor’s ID : " << arr[i].id  << "\n";
cout<<"2.Doctor’s Name :" <<arr[i].name<< "\n";
cout<<" 3.Doctor’s Age : " <<arr[i].age<< "\n";
cout<<" 4.Doctor’s Qualification :" <<arr[i].Q<< "\n";
cout<<"5.Doctor’s Specialization :" <<arr[i].special<< "\n";
cout<<"6.Doctor’s Experience :" <<arr[i].exp<< "\n";
cout<<"8.Doctor’s city :" <<arr[i].city<< "\n";
cout<< "\n Press Any KEY To choose another Option…. ";
}
else
{
cout<<" \n\n Sorry but we could not find that ID in our database system, please try again "<<endl;
cout<<  "\n Press Any KEY To choose another Option…. ";
}
}
getch();
}

 
//void doctor_detail provides the doctor's information like specialization, age, etc
void doctor_detail()
{
int i;
if(docid==0)
{
cout<<"  \n\n\n E   R   R   O   R " << "\n\n";
cout<<"ERROR. Sorry but we could not find that entry, please go back and select another entry. " << "\n";
}
else{
cout<<"********************************************************************************" << "\n";
cout<<" \t \t \t Information and details of all Doctors on record \n";
cout<<"********************************************************************************"<<"\n \n";

cout<<" ID  " << " \t \t "  << " specialization" << " \t \t " << " Qualification" << " \t \t" << " Age ";
cout<<"\n \n";

for(i=0;i<docid;i++)
{
cout<<arr[i].id<< "\t \t" <<arr[i].special << "\t \t \t" << arr[i].Q << "\t \t \t" <<arr[i].age<< "\n";
}
cout<< "\n Press Any KEY To choose another Option…. ";
}
getch();
}
void tot_no_of_doc() //The system is able to provide the total amount of doctors in the hospital
{
system("cls");
int i=counter;
cout<< "Total Doctor’s in Hospital : " <<i<< "\n";
cout<<"\n Press Any KEY To choose another Option…. ";
getch();
}
};

class patient:public hospital //here we are ready to add in the patients details
{
public:
int docid1=0;
struct patient1 arr[10];
void add_pat_info();
void Display();
void patient_report();
void patient_detail();
void tot_no_of_pat();
void gen_pat_report();
};

void patient :: add_pat_info()//we can add however many patient entries
{
int i,en;
cout<< " How Many Entries you want to add :" ;
cin>>en;
for(i=1;i<=en;i++)
{
cout<< " 1.Enter Patient ID :";
cin>>arr[docid1].id1;
cout<<" 2. Enter patient Name :";
cin>>arr[docid1].name;
cout<<" 3. Enter patient Age :";
cin>>arr[docid1].age;
cout<<" 4. Enter patient Disease :";
cin>>arr[docid1].dis;
cout<<" 5. Enter patient Symptoms :";
cin>>arr[docid1].sym;
cout<<" 6. Enter Patient Room No. :";
cin>>arr[docid1].room;
cout<<" 7. Enter Patient Condition Before Admit :";
cin>>arr[docid1].con;
cout<<" 8. Enter Patient ADMIT Date :";
cin>>arr[docid1].date;
cout<<" 9. Enter Patient Room of Charge :";
cin>>arr[docid1].charg;
cout<<" 10. Enter Patient  Medicine Prescription :";
cin>>arr[docid1].bill;
docid1++;
counter++;
cout<<"n";
cout<< " You have sucessfully completed the entries of " <<i<< " patient successfully" << "\n";
cout<< "enter value for " << " " <<i+1<< " " << " patient " << "\n" ;
}
}

void patient :: Display()//we cna search for patient details, and if not, there will be error
{
system("cls");
int n,i;
cout<< "\n Enter the Patient’s ID to display their details :";
cin>>n;
if(n==0)
{
cout<<"\n\n E  R   R  O   R! "<< "\n \n";
cout<<"ERROR. Sorry but we could not find that entry, please go back and select another entry." << "\n";
cout<< " \n Press Any KEY To choose another Option…. ";
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
cout<<" 1.Patients ID :" << arr[i].id1 << "\n";
cout<<"2.Patients Name :" <<arr[i].name<< "\n";
cout<<"3.Patients Age :" <<arr[i].age<< "\n";
cout<<" 4.Patients Disease :" <<arr[i].dis<<"\n";
cout<<"5.Patients Symptoms :"<<arr[i].sym<< "\n";
cout<<"6.Patients Room No. :" <<arr[i].room<<"\n";
cout<<"7.Patients condition Before Admit :"<<arr[i].con<<"\n";
cout<<"8.Patients ADMIT Date :"<<arr[i].date<<"\n";
cout<<"9.Patients Room Charge :"<<arr[i].charg<<"\n";
cout<<"10.Patients Medicine charge :"<<arr[i].bill<<"\n";
cout<<" \n Press Any KEY To choose another Option…. ";
}
else{
cout<< "\n\n Sorry but we could not find that ID in our database system " <<endl;
cout<<" \n Press Any KEY To choose another Option…. ";
}
}
getch();
}

void patient :: patient_report()//patient's current health report are displayed along with details
{
system("cls");
int i,n;
cout<< "\n Enter the Patient’s ID to Display Report :";
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
cout<<"\n\n *** Patients Report *** " << "\n \n";
cout<< "1. Patients Name " <<arr[i].name<< "\n";
cout<< "2. Patients Age "<<arr[i].age<< "\n";
cout<< "3. Patient symptoms " <<arr[i].sym<< "\n";
cout<< "4. Patient Disease "<<arr[i].dis<<"\n";
cout<< "5. Patient Admit Date" << arr[i].date << "\n";
cout<< "6. Patient condition At The Time Of Discharge "<<arr[i].con<<"\n";
cout<<"Press Any Key To Go Back….";
}
else{
cout<<" \n\n No such ID in database "<<endl;
cout<<" \n Press Any KEY To choose another Option…. ";
}

getch();
}

void patient:: patient_detail()//patients recent blood tests / ekg / xray scan
{
int i;
if(docid1==0)
{
cout<<" \n\n\n\n\n E  R   R    O    R "  <<" \n\n\n";
cout<<"ERROR. Sorry but we could not find that entry, please go back and select another entry." << "\n";
}
else{
cout<<"********************************************************************************"<<"\n";
cout<<"\t \t \t Details Of All The Patients \n";
cout<<"********************************************************************************"<<"\n \n";
cout<<"ID" << "\t \t" << " illness " <<  " \t \t "  << " ADMITTED Date " << "\t \t" << "Age";
cout<<"n \n";
for(i=0;i<docid1;i++)
{
cout<<arr[i].id1<<"\t \t" <<arr[i].dis << "\t \t \t" << arr[i].date << "\t \t \t" <<arr[i].age<<"\n";
}
cout<<" \n Press Any KEY To choose another Option…. ";
}
getch();
}

void patient :: tot_no_of_pat() //this can generate the amount the patients recorded in the sys. 
{
system("cls");
int i=counter;
cout<<"Total Patients in Hospital : " <<i<< "\n";
cout<<" \n Press Any KEY To choose another Option…. ";
getch();
}

void patient :: gen_pat_report()//generates the patient's bill for the visit and room charge
{
system("cls");
int i,n;
cout<<"\n Enter the Patient’s ID to Display Bill :";
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
cout<<"\n\n *** Patient’s Report *** " << "\n \n";
cout<< "1. Patient’s Medicine Charge " <<arr[i].bill<<"\n";
cout<< "2. Patient’s Room Charge " <<arr[i].charg<<"\n";
cout<<"\n Press Any KEY To choose another Option…. ";
}

else{
cout<<" \n\n No such ID in database " <<endl;
cout<<" \n Press Any KEY To choose another Option…. ";
}
getch();

}

 

int main() // here in our main functon is the main menu we will see at start
{

bool repeat= true;
int ch1,ch2,ch3,ch4;
doctor d;
patient p;
xyz:
system("cls");
cout<<"\n\n";
cout<<" *** WELCOME TO Medical Fusion - Making every doctor visit easy and seemless! *** " << "\n\n\n";
cout<<" 1. Menu : " << "\n\n";;
cout<<" 2. Exit : " << "\n\n\n\n";
cout<<"Enter Your Choice :";
cin>>ch1;
cout<<"\n\n\n";

if(ch1==1)//this is the menu when we first start the program,
{//it can allow the user to access doctor database, patient database, 
									//generate bills and patient report
xyz2:
system("cls");
cout<<"\n\n";
cout<<" 1. Enter into Doctor DataBase " <<endl;
cout<<" 2. Enter into Patient DataBase " <<endl;
cout<<" 3. Generate Patient Report " <<endl;
cout<<" 4. Generate Patient Bill " <<endl;
cout<<" 5. EXIT " << "\n";
cout<<"Please Enter Your choice :" << " ";
cin>>ch2;
while(repeat==true)
{
system("cls");
switch(ch2)
case 1:
{
cout<<"\n\n"; //if case 1 is selected, this will bring up the doctor database menu
cout<<" *** Welcome To Doctor’s database Central *** "<< "\n \n \n\n";

cout<< " \t 1. Add New Doctor Information "<<endl;
cout<< " \t 2. Display Doctor Information "<<endl;
cout<< " \t 3. Detail OF ALL The Doctors In The Hospital "<<endl;
cout<< " \t 4. Total Number of Doctors in Hospital "<<endl;
cout<< " \t 5. EXIT " << "\n";

cout<<"Please Enter your choice :"<<"  " ;
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
cout<<"invalid";
}
break;
case 2:
cout<<"\n\n"; //if case 2, this will bring up the patients database menu
cout<< " *** Welcome To Patients Database Central *** " << "\n \n";

cout<< ". Add New Patient’s Information "<<endl;
cout<< "2. Display Patient’s Information " <<endl;
cout<< "3. Detail OF ALL The Patient In The Hospital "<<endl;
cout<< "4. Total Number of Patients in Hospital " <<endl;
cout<< "5. EXIT " << "\n" ;

cout<<"Please Enter your choice :"<< "   ";
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
cout<< "invalid" << endl;
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
return 0;
}
else
{
cout<< " Wrong Input " << endl;
}
return 0;
}
