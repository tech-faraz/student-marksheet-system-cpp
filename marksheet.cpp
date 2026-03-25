#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main ()
{
	system("color 4e");
    Start:
    	system("cls");
    	string na;
	char b,major,p,ch;
	int y,r;
		string s[6] = {"Mathematics", "English", "Physics", "Chemistry", "Urdu","Islamiat"};
		string sub[6]={"Biology", "English", "Botonay", "Chemistry", "Zoology","Physics"};
		string su[6]={"Economics", "English", "Mathematics", "Islamiat", "Urdu","Sindhi"};
    int m[6];
    int a=100;
    double t=600, obt= 0;
    double per;
    

	cout<<"\n\n";
	cout<<"_______________________________________________________________________________________________________________________"<<endl;
   cout << "======================================================================================================================" << endl;
    cout  << endl;
    cout<<"                                                 REPORT CARD  OF INTER CLASS                             "<<endl;
    cout<<endl;
    cout << "======================================================================================================================" << endl;

    cout<<" --------------------------------Enter your name ---------------------------------"<<endl;
    cin>>na;
    cout<<endl;
    cout<<"Enter your Roll NO : "<<endl;
    cin>>r;
    cout<<endl;
	cout << "Enter major (E for pre-eng, M for pre-medical, C for E-Commerce): ";
    cin >> major;
    
    system("cls");
    cout << "\t\t------------------------------------Enter the marks of 8 subjects: -----------------------------" << endl;
    cout<<endl;
    if(major=='E'||major=='e')
    {
        for (int i = 0; i < 6; i++) 
	   {
        cout <<"Enter Marks of Subject" << " "<<s[i] << ": ";
        cin >> m[i];
        if(m[i]>100)
        {
        	cout<<" -------------------------------------------INVALID MARKS-------------------------------- "<<endl;
        	cout<<endl;
        	cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 		system("cls");
	 	goto Start;
	 }
        	exit(0);
		}
        obt += m[i];
        cout<<endl;
       }
   }
    if(major=='M'||major=='m')
    {
        for (int i = 0; i < 6; i++) 
	   {
        cout <<"Enter Marks of Subject" << " "<<sub[i] << ": ";
        cin >>m[i];
        if(m[i]>100)
        {
        	cout<<" -------------------------------------------INVALID MARKS-------------------------------- "<<endl;
        	cout<<endl;
        	cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 		system("cls");
	 	goto Start;
	 }
        	exit(0);
		}
        obt += m[i];
        cout<<endl;
       }
   }
   
    if(major=='C'||major=='c')
    {
        for (int i = 0; i < 6; i++) 
	   {
        cout <<"Enter Marks of Subject" << " "<<su[i] << ": ";
        cin >> m[i];
        if(m[i]>100)
        {
        	cout<<" -------------------------------------------INVALID MARKS-------------------------------- "<<endl;
        	cout<<endl;
        	cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 		system("cls");
	 	goto Start;
	 }
        	exit(0);
		}
        obt += m[i];
        cout<<endl;
       }
   }
    per=(obt/t)*100;
	system("cls");
	cout<< " The total marks is : "<<t<<endl;
	cout<<endl;
    cout << "The total marks obtained is: " << obt  << endl;
    cout<<endl;
    cout<<"The percentage of your marks is : "<<per<<endl;
    cout<<endl;
	cout<<"\t\t-------------And your major is "<<major<<endl;
	if((major=='E'||major=='e') && per>=80 && per<=100)
	{
		system("color 5e");
	cout<<"You Choose Departments from this List "<<endl;
  cout<<"\t\t___________________________"<<endl;
  cout<<"\t\t|   |                     |"<<endl;
  cout<<"\t\t| NO|  DEPARTMENTS        |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 1.| Computer Science    |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 2.| Software Engineering|"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 3.| Business Management |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 4.| Civil Engineering   |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 5.| Phsical Education   |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 6.| BS-Mathematics      |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 7.| Electrical Enginee  |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  
  cout<<"Enter Number For Chose Department"<<endl;
 	cin>>y;
 	switch(y)
 	{
 		case 1:
 			system("cls");
 			cout<<"\t\t-------------You Choose Computer Science Department--------- "<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Computer Science Department-----------"<<endl;
 			break;
 			
 			case 2:
 			system("cls");
 			cout<<"\t\t-----------You Choose Software Engineering Department----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Software Engineering Department----------"<<endl;
 			break;
 			
 			case 3:
 			system("cls");
 			cout<<"\t\t-----------You Choose Business Management Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Business Management Department-------------"<<endl;
 			break;
 			
 			case 4:
 			system("cls");
 			cout<<"\t\t-----------You Choose Civil Engineering Department-------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Civil Engineering Department------------"<<endl;
 			break;
 			
 			case 5:
 			system("cls");
 			cout<<"\t\t-----------You Choose Phsical Education Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Phsical Education Department-------------"<<endl;
 			break;
 			
 			case 6:
 			system("cls");
 			cout<<"\t\t-----------You Choose BS-Mathematics Department----------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to BS-Mathematics Department-----------------"<<endl;
 			break;
 			
 			case 7:
 			system("cls");
 			cout<<"\t\t-----------You Choose Electrical Engineering Department----------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Electrical Engineering Department-----------------"<<endl;
 			break;
 			
 			default :
		 	system("cls");
		 	cout<<endl;
		 	cout<<endl;
		 cout<<"\t\t------------------Invalid Choice--------------------"<<endl;
		 cout<<endl;
		 cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
		 	exit(0);
	 }
} 
   else if((major=='E'||major=='e') && per>=60 )
	{
		system("color 6e");
	cout<<"You Choose Departments from this List "<<endl;
  cout<<"\t\t___________________________"<<endl;
  cout<<"\t\t|   |                     |"<<endl;
  cout<<"\t\t| NO|  DEPARTMENTS        |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 1.| Phsical Education   |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 2.| BS-Mathematics      |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 3.| Business Management |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 4.| Civil Engineering   |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"Enter Number For Chose Department"<<endl;
 	cin>>y;
 	switch(y)
 	{
 		case 1:
 			system("cls");
 			cout<<"\t\t-------------You Choose Phsical Education Department--------- "<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Phsical Education Department-----------"<<endl;
 			break;
 			
 			case 2:
 			system("cls");
 			cout<<"\t\t-----------You Choose BS-Mathematics  Department----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to BS-Mathematics Department----------"<<endl;
 			break;
 			
 			case 3:
 			system("cls");
 			cout<<"\t\t-----------You Choose Business Management Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Business Management Department-------------"<<endl;
 			break;
 			
 			case 4:
 			system("cls");
 			cout<<"\t\t-----------You Choose Civil Engineering Department-------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Civil Engineering Department------------"<<endl;
 			break;
 			
 			default :
		 	system("cls");
		 cout<<endl;
		 	cout<<endl;
		 cout<<"\t\t------------------Invalid Choice--------------------"<<endl;
		 cout<<endl;
		 cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
	 exit(0);
		 	
	}
  
} 

  else if((major=='M' || major=='m') && per>=80)
	 {
	 	system("color 1e");
	 	cout<<"You Chose Departments from this List "<<endl;
  cout<<"\t\t___________________________"<<endl;
  cout<<"\t\t|   |                     |"<<endl;
  cout<<"\t\t| NO|  DEPARTMENTS        |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 1.| Computer Science    |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 2.| Biological sciences |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 3.| Business Management |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 4.| D. Pharmacy         |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 5.| BS. Biotechnology   |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 6.| BSC. Zoology        |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 7.| BS. Nursing         |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  
  cout<<"Enter Number For Chose Department"<<endl;
 	cin>>y;
 	switch(y)
 	{
 		case 1:
 			system("cls");
 			cout<<"\t\t-------------You Choose Computer Science Department--------- "<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Computer Science Department-----------"<<endl;
 			break;
 			
 			case 2:
 			system("cls");
 			cout<<"\t\t-----------You Choose Biological sciences department----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Biological sciences Department----------"<<endl;
 			break;
 			
 			case 3:
 			system("cls");
 			cout<<"\t\t-----------You Choose Business Management Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Business Management Department-------------"<<endl;
 			break;
 			
 			case 4:
 			system("cls");
 			cout<<"\t\t-----------You Choose D. Pharmacy department-------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to D. Pharmacy Department------------"<<endl;
 			break;
 			
 			case 5:
 			system("cls");
 			cout<<"\t\t-----------You Choose BS. Biotechnology Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to BS. Biotechnology Department-------------"<<endl;
 			break;
 			
 			case 6:
 			system("cls");
 			cout<<"\t\t-----------You Choose BSC Zoology Department----------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to BSC Zoology Department-----------------"<<endl;
 			break;
 			
 			case 7:
 			system("cls");
 			cout<<"\t\t-----------You Choose BS Nursing Department----------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to BS Nursing Department-----------------"<<endl;
 			break;
 			
 			default :
		 	system("cls");
		 cout<<endl;
		 	cout<<endl;
		 cout<<"\t\t------------------Invalid Choice--------------------"<<endl;
		 cout<<endl;
		 cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
		 	exit(0);
	 }
	 }
	 else if((major=='M' || major=='m') && per>=60)
	 {
	 	system("color 8e");
	 	cout<<"You Chose Departments from this List "<<endl;
  cout<<"\t\t___________________________"<<endl;
  cout<<"\t\t|   |                     |"<<endl;
  cout<<"\t\t| NO|  DEPARTMENTS        |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 1.| BS. Nursing         |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 2.| Biological sciences |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 3.| Business Management |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 4.| D. Pharmacy         |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 5.| BS. Biotechnology   |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  
  cout<<"Enter Number For Chose Department"<<endl;
 	cin>>y;
 	switch(y)
 	{
 		case 1:
 			system("cls");
 			cout<<"\t\t-------------You Choose  BS. Nursing Department--------- "<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to BS. Nursing Department-----------"<<endl;
 			break;
 			
 			case 2:
 			system("cls");
 			cout<<"\t\t-----------You Choose Biological sciences Department----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Biological sciences Department----------"<<endl;
 			break;
 			
 			case 3:
 			system("cls");
 			cout<<"\t\t-----------You Choose Business Management Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Business Management Department-------------"<<endl;
 			break;
 			
 			case 4:
 			system("cls");
 			cout<<"\t\t-----------You Choose D. Pharmacy Department-------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to D. Pharmacy Department------------"<<endl;
 			break;
 			
 			case 5:
 			system("cls");
 			cout<<"\t\t-----------You Choose BS. Biotechnology Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to BS. Biotechnology Department-------------"<<endl;
 			break;
 			
 			default :
		 	system("cls");
		 cout<<endl;
		 	cout<<endl;
		 cout<<"\t\t------------------Invalid Choice--------------------"<<endl;
		 cout<<endl;
		 cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
		 	exit(0);
		 }
}
  
	 
	 else if((major=='C' || major=='c') && per>=70)
	 {
	 	system("color 9e");
	 	cout<<"You Choose Departments from this List "<<endl;
  cout<<"\t\t___________________________"<<endl;
  cout<<"\t\t|   |                     |"<<endl;
  cout<<"\t\t| NO|  DEPARTMENTS        |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 1.| Chartered Acc       |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 2.| Economics           |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 3.| Statistics          |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 4.| Lawyer              |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 5.| B.Com Marketing     |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  
  cout<<"Enter Number For Chose Department"<<endl;
 	cin>>y;
 	switch(y)
 	{
 		case 1:
 			system("cls");
 			cout<<"\t\t-------------You Choose Chartered Acc Department--------- "<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Chartered Acc  Department-----------"<<endl;
 			break;
 			
 			case 2:
 			system("cls");
 			cout<<"\t\t-----------You Choose to Economics Department----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Economics Department----------"<<endl;
 			break;
 			
 			case 3:
 			system("cls");
 			cout<<"\t\t-----------You Choose Statistics Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Statistics Department-------------"<<endl;
 			break;
 			
 			case 4:
 			system("cls");
 			cout<<"\t\t-----------You Choose Lawyer Department-------------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Lawyer Department------------"<<endl;
 			break;
 			
 			case 5:
 			system("cls");
 			cout<<"\t\t-----------You Choose B.Com Marketing Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to B.Com Marketing Department-------------"<<endl;
 			break;
 			default :
		 	system("cls");
		 cout<<endl;
		 	cout<<endl;
		 cout<<"\t\t------------------Invalid Choice--------------------"<<endl;
     cout<<endl;
		 cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
		 	exit(0);
		 }
 	
	 }
	 else if((major=='C' || major=='c') && per>=50)
	 {
	 	system("color 3e");
	 	cout<<"You Choose Departments from this List "<<endl;
  cout<<"\t\t___________________________"<<endl;
  cout<<"\t\t|   |                     |"<<endl;
  cout<<"\t\t| NO|  DEPARTMENTS        |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 1.| Chartered Acc       |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 2.| Economics           |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  cout<<"\t\t| 3.| Statistics          |"<<endl;
  cout<<"\t\t|___|_____________________|"<<endl;
  
  cout<<"Enter Number For Chose Department"<<endl;
 	cin>>y;
 	switch(y)
 	{
 		case 1:
 			system("cls");
 			cout<<"\t\t-------------Wellcome to Chartered Acc Department--------- "<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Chartered Acc Department-----------"<<endl;
 			break;
 			
 			case 2:
 			system("cls");
 			cout<<"\t\t-----------You Choose Economics Department----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Economics Department----------"<<endl;
 			break;
 			
 			case 3:
 			system("cls");
 			cout<<"\t\t-----------You Choose Statistics Department-----------"<<endl;
 			cout<<endl;
 			cout<<"\t\t-----------Wellcome to Statistics  Department-------------"<<endl;
 			break;
 			
 			default :
		 	system("cls");
		 cout<<endl;
		 	cout<<endl;
		 cout<<"\t\t------------------Invalid Choice--------------------"<<endl;
        cout<<endl;
		 cout<<"Do you Want to Contineou Program y/n"<<endl;

		 
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
		 	exit(0);
		 }
	 }
	 
	 else 
	 {
	 	cout<<endl;
	 	cout<<endl;
	 	cout << "--------Not eligible for any program with this score or major----------------"<<endl;
	 	cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
	 	exit(0);
	 }
	 cout<<endl;
	 cout<<endl;
	 
	 cout<<" Do you want to Print Report Card y/n"<<endl;
	 cin>>p;
	 if(p=='Y'|| p=='y')
	 {
	 	if(major=='E'||major=='e')
	 	{
	cout<<"\t\t__________________________________________________________________________"<<endl;
    cout<<"\t\t|                                                                        |"<<endl;
	cout<<"\t\t|             GOVT : Superior Sciece Collage Khairpur Mir's              |"<<endl;
	cout<<"\t\t|________________________________________________________________________|"<<endl;
	cout<<"\t\t|      |                                                                 |"<<endl;
	cout<<"\t\t| NAME |"<<na<<setw(61)<<"                                               |"<<endl;
	cout<<"\t\t|______|_________________________________________________________________| "<<endl;
	cout<<"\t\t| RONO |"<<r<<setw(63)<<"                                                |"<<endl;
	cout<<"\t\t|______|_________________________________________________________________|"<<endl;
	cout<<"\t\t|      |                          |                 |                    |"<<endl;
	cout<<"\t\t| SNO  |    SUBJECTS              |     Total Marks |     Obtained Marks | "  <<endl;         
	cout<<"\t\t|______|__________________________|_________________|____________________|" <<endl;                                                        
	cout<<"\t\t|  1.  |"<<s[0] <<setw(16)    << "|"<<a<<setw(15)<<"|"<<m[0]<<setw(19)<<"|"  <<endl;                            
	cout<<"\t\t|______|__________________________|_________________|____________________|"  <<endl;                                                       
	cout<<"\t\t|  2.  |"<<s[1]<<setw(20)<<      "|"<<a<<setw(15)<<"|"<<m[1]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  3.  |"<<s[2]<<setw(20)      <<"|"<<a<<setw(15)<<"|"<<m[2]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  4.  |"<<s[3]<<setw(18)<<      "|"<<a<<setw(15)<<"|"<<m[3]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  5.  |"<<s[4]<<setw(23)<<"      |"<<a<<setw(15)<<"|"<<m[4]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  6.  |"<<s[5]<<setw(19) <<"     |"<<a<<setw(15)<<"|"<<m[5]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t| Total Marks |"<<t<<"            | Obtained Marks  |"<< obt <<"  "<<  "|Percentage|"<<" "<<per<<" "<<"|" <<endl;                                                        
	cout<<"\t\t|_____________|_______________|_________________|________________|_______|"  <<endl;                     
    cout<<"\t\t|  Department |                                   | Major  |"<<major<<"  |                                " <<endl;                                                        
	cout<<"\t\t|_____________|___________________________________|______________________|"  <<endl;                     
                                                                                                                  
}
	 else if(major=='M'||major=='m')
	 {
	cout<<"\t\t__________________________________________________________________________"<<endl;
    cout<<"\t\t|                                                                        |"<<endl;
	cout<<"\t\t|             GOVT : Superior Sciece Collage Khairpur Mir's              |"<<endl;
	cout<<"\t\t|________________________________________________________________________|"<<endl;
	cout<<"\t\t|      |                                                                 |"<<endl;
	cout<<"\t\t| NAME |"<<na<<setw(61)<<"                                               |"<<endl;
	cout<<"\t\t|______|_________________________________________________________________| "<<endl;
	cout<<"\t\t| RONO |"<<r<<setw(63)<<"                                                |"<<endl;
	cout<<"\t\t|______|_________________________________________________________________|"<<endl;
	cout<<"\t\t|      |                          |                 |                    |"<<endl;
	cout<<"\t\t| SNO  |    SUBJECTS              |     Total Marks |     Obtained Marks | "  <<endl;         
	cout<<"\t\t|______|__________________________|_________________|____________________|" <<endl;                                                        
	cout<<"\t\t|  1.  |"<<s[0] <<setw(16)    << "|"<<a<<setw(15)<<"|"<<m[0]<<setw(19)<<"|"  <<endl;                            
	cout<<"\t\t|______|__________________________|_________________|____________________|"  <<endl;                                                       
	cout<<"\t\t|  2.  |"<<s[1]<<setw(20)<<      "|"<<a<<setw(15)<<"|"<<m[1]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  3.  |"<<s[2]<<setw(20)      <<"|"<<a<<setw(15)<<"|"<<m[2]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  4.  |"<<s[3]<<setw(18)<<      "|"<<a<<setw(15)<<"|"<<m[3]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  5.  |"<<s[4]<<setw(23)<<"      |"<<a<<setw(15)<<"|"<<m[4]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  6.  |"<<s[5]<<setw(19) <<"     |"<<a<<setw(15)<<"|"<<m[5]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t| Total Marks |"<<t<<"            | Obtained Marks  |"<< obt <<"  "<<  "|Percentage|"<<" "<<per<<" "<<"|" <<endl;                                                        
	cout<<"\t\t|_____________|_______________|_________________|________________|_______|"  <<endl;                     
    cout<<"\t\t|  Department |                                   | Major  |"<<major<<"  |                                " <<endl;                                                        
	cout<<"\t\t|_____________|___________________________________|______________________|"  <<endl;                     
                                         
}
    else if(major=='C'||major=='c')
    {
   	cout<<"\t\t__________________________________________________________________________"<<endl;
    cout<<"\t\t|                                                                        |"<<endl;
	cout<<"\t\t|             GOVT : Superior Sciece Collage Khairpur Mir's              |"<<endl;
	cout<<"\t\t|________________________________________________________________________|"<<endl;
	cout<<"\t\t|      |                                                                 |"<<endl;
	cout<<"\t\t| NAME |"<<na<<setw(61)<<"                                               |"<<endl;
	cout<<"\t\t|______|_________________________________________________________________| "<<endl;
	cout<<"\t\t| RONO |"<<r<<setw(62)<<"                                                |"<<endl;
	cout<<"\t\t|______|_________________________________________________________________|"<<endl;
	cout<<"\t\t|      |                          |                 |                    |"<<endl;
	cout<<"\t\t| SNO  |    SUBJECTS              |     Total Marks |     Obtained Marks | "  <<endl;         
	cout<<"\t\t|______|__________________________|_________________|____________________|" <<endl;                                                        
	cout<<"\t\t|  1.  |"<<s[0] <<setw(16)    << "|"<<a<<setw(15)<<"|"<<m[0]<<setw(19)<<"|"  <<endl;                            
	cout<<"\t\t|______|__________________________|_________________|____________________|"  <<endl;                                                       
	cout<<"\t\t|  2.  |"<<s[1]<<setw(20)<<      "|"<<a<<setw(15)<<"|"<<m[1]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  3.  |"<<s[2]<<setw(20)      <<"|"<<a<<setw(15)<<"|"<<m[2]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  4.  |"<<s[3]<<setw(18)<<      "|"<<a<<setw(15)<<"|"<<m[3]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  5.  |"<<s[4]<<setw(23)<<"      |"<<a<<setw(15)<<"|"<<m[4]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t|  6.  |"<<s[5]<<setw(19) <<"     |"<<a<<setw(15)<<"|"<<m[5]<<setw(19)<<"|" <<endl;                                                        
	cout<<"\t\t|______|__________________________|_________________|____________________| "  <<endl;                     
    cout<<"\t\t| Total Marks |"<<t<<"            | Obtained Marks  |"<< obt <<"  "<<  "|Percentage|"<<" "<<per<<" "<<"|" <<endl;                                                        
	cout<<"\t\t|_____________|_______________|_________________|________________|_______|"  <<endl;                     
    cout<<"\t\t|  Department |                                   | Major  |"<<major<<"  |" <<endl;                                                        
	cout<<"\t\t|_____________|___________________________________|______________________|"  <<endl;                     
                                         
    	
    	
	}
	 	
	 }
	 
	 cout<<"Do you Want to Contineou Program y/n"<<endl;
     cin>>ch;
     if(ch=='Y'||ch=='y')
	 {
	 	goto Start;
	 }
  return 0;
  }
  
