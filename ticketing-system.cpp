#include<iostream>
#include<fstream>
#include<ctime>
#include<string>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <algorithm>
using namespace std;

class book
{
	public:
		string id,name,phone,add;
		void menu();
		void insert();
		void printSection();
		void display();
		void Seats();
		void bookSeats();
		void checkSeats();
		void showBooking();
		void modify();
		void search();
		void delet();
		void s_search();
};

//global constants
const int B_VIPRows = 10;
const int B_VIPColumns = 15;
const int B_upperRows = 10;
const int B_upperColumns = 15;
const int B_lowerRows = 10;
const int B_lowerColumns = 15;
const int J_VIPRows = 10;
const int J_VIPColumns = 15;
const int J_upperRows = 10;
const int J_upperColumns = 15;
const int J_lowerRows = 10;
const int J_lowerColumns = 15;
const int M_VIPRows = 10;
const int M_VIPColumns = 15;
const int M_upperRows = 10;
const int M_upperColumns = 15;
const int M_lowerRows = 10;
const int M_lowerColumns = 15;
const double VIPPrice = 800.00;
const double lowerPrice = 500.00;
const double upperPrice = 300.00;

//global variables
double price();
double totalPrice;
int section;

time_t now = time (0);
char* dt = ctime(&now);

char sect[10]={'A','B','C','D','E','F','G','H','I','J'};
int B_VIPSeats [B_VIPRows][B_VIPColumns] = {0};
int B_lowerSeats [B_lowerRows][B_lowerColumns] = {0};
int B_upperSeats [B_upperRows][B_upperColumns] = {0};
int J_VIPSeats [J_VIPRows][J_VIPColumns] = {0};
int J_lowerSeats [J_lowerRows][J_lowerColumns] = {0};
int J_upperSeats [J_upperRows][J_upperColumns] = {0};
int M_VIPSeats [M_VIPRows][M_VIPColumns] = {0};
int M_lowerSeats [M_lowerRows][M_lowerColumns] = {0};
int M_upperSeats [M_upperRows][M_upperColumns] = {0};
int B_col,B_row,J_col,J_row,M_col,M_row;

//linear search
int linearSearch(string array[], int n, string x) 
{
  for (int i = 0; i < n; i++)
    	if (array[i] == x)
      	return i;
  return -1;
}
void book ::s_search()
{
	int ans,res;
	system ("cls");
	string arr[] = { "A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "A10", "A11", "A12", "A13", "A14", "A15",
   					"B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B10", "B11", "B12", "B13", "B14", "B15",
					"C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C12", "C13", "C14", "C15",
					"D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "D10", "D11", "D12", "D13", "D14", "D15",
					"E1", "E2", "E3", "E4", "E5", "E6", "E7", "E8", "E9", "E10", "E11", "E12", "E13", "E14", "E15",
					"F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "F11", "F12", "F13", "F14", "F15",
					"G1", "G2", "G3", "G4", "G5", "G6", "G7", "G8", "G9", "G10", "G11", "G12", "G13", "G14", "G15",
					"H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "H10", "H11", "H12", "H13", "H14", "H15",
					"I1", "I2", "I3", "I4", "I5", "I6", "I7", "I8", "I9", "I10", "I11", "I12", "I13", "I14", "I15",
					"J1", "J2", "J3", "J4", "J5", "J6", "J7", "J8", "J9", "J10", "J11", "J12", "JG13", "J14", "J15"};
	string x;
		cout << "\n\t\t =========================================================" << endl;
		cout << "\t\t Which seat section do you want to do the search position? " << endl;
		cout << "\t\t =========================================================" << endl;
		cout << "\t\t      [1] VIP Section" << endl;
		cout << "\t\t      [2] Lower Section" << endl;
		cout << "\t\t      [3] Upper Section" << endl;
		cout << "\t\t =========================================================" << endl;
		cout << "\t\t Enter your choice: ";
		cin >> ans;
		cout << endl;

		if (ans == 1)
		{
		system("CLS");
		cout << "\n\t			     =======================" << endl;
		cout << "\t			     | 	   VIP Section	   |" << endl;
		cout << "\t			     =======================" << endl;
		cout << endl;
		cout << " 		----------------------------------------------------------------------"<< endl;
		cout << "\t\t [A1][A2][A3][A4][A5] [A6][A7][A8][A9][A10] [A11][A12][A13][A14][A15]" << endl;
		cout << "\t\t [B1][B2][B3][B4][B5] [B6][B7][B8][B9][B10] [B11][B12][B13][B14][B15]" << endl;
		cout << "\t\t [C1][C2][C3][C4][C5] [C6][C7][C8][C9][C10] [C11][C12][C13][C14][C15]" << endl;
		cout << "\t\t [D1][D2][D3][D4][D5] [D6][D7][D8][D9][D10] [D11][D12][D13][D14][D15]" << endl;
		cout << "\t\t [E1][E2][E3][E4][E5] [E6][E7][E8][E9][E10] [E11][E12][E13][E14][E15]" << endl;
		cout << "\t\t [F1][F2][F3][F4][F5] [F6][F7][F8][F9][F10] [F11][F12][F13][F14][F15]" << endl;
		cout << "\t\t [G1][G2][G3][G4][G5] [G6][G7][G8][G9][G10] [G11][G12][G13][G14][G15]" << endl;  
		cout << "\t\t [H1][H2][H3][H4][H5] [H6][H7][H8][H9][H10] [H11][H12][H13][H14][H15]" << endl; 
		cout << "\t\t [I1][I2][I3][I4][I5] [I6][I7][I8][I9][I10] [I11][I12][I13][I14][I15]" << endl; 
		cout << "\t\t [J1][J2][J3][J4][J5] [J6][J7][J8][J9][J10] [J11][J12][J13][J14][J15]" << endl; 
		cout << " 		----------------------------------------------------------------------"<< endl << endl; 
		cout << " Note: The count starts from 0 to 149." << endl<< endl;
    	cout << " Enter the seat position to be search: ";
    	cin >> x;
    	cout << endl;
 		int n = sizeof(arr) / sizeof(arr[0]);
    	int result = linearSearch(arr, n, x);
    	
    	if (result == -1)
        	cout << (" Seat Position not present");
    	else
        	cout << (" Seat Position found at spot: ") << result;
		}
		else if (ans == 2)
		{
		system("CLS");
		cout << "\n\t			     =======================" << endl;
		cout << "\t			     | 	  Lower Section	  |" << endl;
		cout << "\t			     =======================" << endl;
		cout << endl;
		cout << " 		----------------------------------------------------------------------"<< endl;
		cout << "\t\t [A1][A2][A3][A4][A5] [A6][A7][A8][A9][A10] [A11][A12][A13][A14][A15]" << endl;
		cout << "\t\t [B1][B2][B3][B4][B5] [B6][B7][B8][B9][B10] [B11][B12][B13][B14][B15]" << endl;
		cout << "\t\t [C1][C2][C3][C4][C5] [C6][C7][C8][C9][C10] [C11][C12][C13][C14][C15]" << endl;
		cout << "\t\t [D1][D2][D3][D4][D5] [D6][D7][D8][D9][D10] [D11][D12][D13][D14][D15]" << endl;
		cout << "\t\t [E1][E2][E3][E4][E5] [E6][E7][E8][E9][E10] [E11][E12][E13][E14][E15]" << endl;
		cout << "\t\t [F1][F2][F3][F4][F5] [F6][F7][F8][F9][F10] [F11][F12][F13][F14][F15]" << endl;
		cout << "\t\t [G1][G2][G3][G4][G5] [G6][G7][G8][G9][G10] [G11][G12][G13][G14][G15]" << endl;  
		cout << "\t\t [H1][H2][H3][H4][H5] [H6][H7][H8][H9][H10] [H11][H12][H13][H14][H15]" << endl; 
		cout << "\t\t [I1][I2][I3][I4][I5] [I6][I7][I8][I9][I10] [I11][I12][I13][I14][I15]" << endl; 
		cout << "\t\t [J1][J2][J3][J4][J5] [J6][J7][J8][J9][J10] [J11][J12][J13][J14][J15]" << endl; 
		cout << " 		----------------------------------------------------------------------"<< endl << endl; 
		cout << " Note: The count starts from 0 to 149." << endl<< endl;
    	cout << " Enter the seat position to be search: ";
    	cin >> x;
    	cout << endl;
 		int n = sizeof(arr) / sizeof(arr[0]);;
    	int result = linearSearch(arr, n, x);
    	if (result == -1)
        	cout << (" Seat Position not present");
    	else
        	cout << (" Seat Position found at spot: ") << result;
		}
		else if (ans == 3)
		{
		system("CLS");
		cout << "\n\t			     =======================" << endl;
		cout << "\t			     | 	  Upper Section	   |" << endl;
		cout << "\t			     =======================" << endl;
		cout << endl;
		cout << " 		----------------------------------------------------------------------"<< endl;
		cout << "\t\t [A1][A2][A3][A4][A5] [A6][A7][A8][A9][A10] [A11][A12][A13][A14][A15]" << endl;
		cout << "\t\t [B1][B2][B3][B4][B5] [B6][B7][B8][B9][B10] [B11][B12][B13][B14][B15]" << endl;
		cout << "\t\t [C1][C2][C3][C4][C5] [C6][C7][C8][C9][C10] [C11][C12][C13][C14][C15]" << endl;
		cout << "\t\t [D1][D2][D3][D4][D5] [D6][D7][D8][D9][D10] [D11][D12][D13][D14][D15]" << endl;
		cout << "\t\t [E1][E2][E3][E4][E5] [E6][E7][E8][E9][E10] [E11][E12][E13][E14][E15]" << endl;
		cout << "\t\t [F1][F2][F3][F4][F5] [F6][F7][F8][F9][F10] [F11][F12][F13][F14][F15]" << endl;
		cout << "\t\t [G1][G2][G3][G4][G5] [G6][G7][G8][G9][G10] [G11][G12][G13][G14][G15]" << endl;  
		cout << "\t\t [H1][H2][H3][H4][H5] [H6][H7][H8][H9][H10] [H11][H12][H13][H14][H15]" << endl; 
		cout << "\t\t [I1][I2][I3][I4][I5] [I6][I7][I8][I9][I10] [I11][I12][I13][I14][I15]" << endl; 
		cout << "\t\t [J1][J2][J3][J4][J5] [J6][J7][J8][J9][J10] [J11][J12][J13][J14][J15]" << endl; 
		cout << " 		----------------------------------------------------------------------"<< endl << endl; 
		cout << " Note: The count starts from 0 to 149." << endl<< endl;
    	cout << " Enter the seat position to be search: ";
    	cin >> x;
    	cout << endl;
 		int n = sizeof(arr) / sizeof(arr[0]);
    	int result = linearSearch(arr, n, x);
    	if (result == -1)
        	cout << (" Seat Position not present");
    	else
        	cout << (" Seat Position found at spot: ") << result;
		}
		else 
		{
			cout<<"\n\t\t\t Invalid choice...Please Try Again..";
		}
		cout << endl;
		cout << "\t\t\t ";
		system("pause");
}

void book::menu()
{
	menustart:
	int choice;
	char x;
	int person;
	system("cls");
	cout << endl;
	cout << "\t\t\t************************************"<<endl;
	cout << "\t\t\t        EVENT TICKETING SYSTEM    "<<endl;
	cout << "\t\t\t************************************"<<endl;
	cout << "\t\t\t...................................." << endl;
	cout << "\t\t\tThe local time is: " << endl;
	cout << "\t\t\t" << dt;
	cout << "\t\t\t...................................." << endl;
	cout << "\t\t\t [1] Booking Ticket"<<endl;
	cout << "\t\t\t [2] View Booked Ticket"<<endl;
	cout << "\t\t\t [3] Modify Customer's information"<<endl;
	cout << "\t\t\t [4] Search Customer's information"<<endl;
	cout << "\t\t\t [5] Cancel  Booked Ticket"<<endl;
	cout << "\t\t\t [6] Search Seat Position"<<endl;
	cout << "\t\t\t [7] Exit"<<endl;

	cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\tChoose Option:[1|2|3|4|5|6|7]"<<endl;
	cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\tEnter Your Option: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert();
    		cout<<"\n\t\t\t Book Again?(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display();
		break;
	case 3:
		modify();
		break;
	case 4:
		search();
		break;
	case 5:
		delet();
		break;
	case 6:
		s_search();
		break;
	case 7:
		exit(0);

	default:
		cout<<"\n\t\t\t Invalid choice...Please Try Again..";
	}
	getch();
	goto menustart;
}
void book::insert()
{
	char ok;
	int person;
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Add Customer Details---------------------------------------------------"<<endl;
	cout<<"\t\t\tBooking ID: ";
	cin>>id;
	cout<<"\t\t\tEnter customer's name: ";
	cin>>name;
	cout<<"\t\t\tEnter phone number: ";
	cin>>phone;
	cout<<"\t\t\tEnter email address: ";
	cin>>add;
	
	do{
	system("cls");
	printSection();
	cout << "Please select seat section: ";
	cin  >> section;
		if (section > 12 || section < 1)
		{
			cout << "Invalid input. Try again";
			cout << endl;
			system ("pause");
			printSection();
			cout << "Please select seat section: ";
			cin  >> section;	
		}
	}
	while (section > 9 || section < 1);
	switch (section)
	
	
	double price();
	do {
	cout <<"Please enter customer's desired number of ticket: ";
	cin >> person;
		if (person < 1)	
		{
			cout << "Invalid input. Try again";
			cout << endl;
			cout << "Please select seat section: ";
			cin  >> person;	
		}
	}
	while (person < 1)	;
	totalPrice  =(price( )*person);	
	
	Seats();
	bookSeats();
	cout<<endl;
	
	showBooking();
	cout << "\t\t\t ";
	system("pause");
	
	
	file.open("CustomerRecord.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15) <<std::left<<std::setw(15)<< add << "\n";
	file.close();
}
void book::display()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n                              Customer Details                                          \n"<<endl;
	file.open("CustomerRecord.txt",ios::in);

			cout << "=====================================================================================\n";
			cout <<" Booking ID |    Name    |       Phone Number       |          Email address        | "<<endl;
			cout <<"-------------------------------------------------------------------------------------\n" ;
		file >> id >> name >> phone  >> add;
		while(!file.eof())
		{
			cout  << "     " << id <<"\t\t" << name << "\t\t" << phone << "\t\t"<< add << "\n";
			file >> id >> name >> phone >> add;
		}
		cout << " \n\n=====================================================================================";

	file.close();
}
void book::modify()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n\t\t\t-------------------------Customer Modify Details-------------------------"<<endl;
	file.open("CustomerRecord.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo Data is present..,";
		file.close();
	}
	else
	{
		cout<<"\n\t\t\t Enter the ID of Customer: ";
		cin>>participant_id;
		cout<<"\n\t\t\t-------------------------------------------------------------------------"<<endl;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> name >> phone >> add;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< add << "\n";
			}
			else
			{
				cout<<"\t\t\tBooking ID: ";
				cin>>id;
				cout<<"\t\t\tEnter customer's' name: ";
				cin>>name;
				cout<<"\t\t\tEnter phone number: ";
				cin>>phone;
				cout<<"\t\t\tEnter email address: ";
				cin>>add;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15) << add << "\n";
				found++;
			}
			file >> id >> name >> phone >> add;

		}
		file1.close();
		file.close();
		remove("CustomerRecord.txt");
		rename("Record.txt","CustomerRecord.txt");
	}
}
void book::search()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("CustomerRecord.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Customer's Information------------------------"<<endl;
		cout<<"\n\t\t\tNo Data is Preasent...";
	}
	else
	{
		string participant_id;
		cout<<"\n--------------------------Customer's Information------------------------"<<endl;
		cout<<"\nEnter the Booking ID of customer you want to search: ";
		cin>>participant_id;
		file >> id >> name >> phone >>  add;
		while(!file.eof())
		{
			if(participant_id==id)
			{
				system ("cls");
				cout << "===============================================================================\n";
				cout <<"Booking Id |    Name    |    Phone Number    |          Email address         | "<<endl;
				cout <<"-------------------------------------------------------------------------------\n" ;
				cout << "     " << id <<"\t\t" << name << "\t\t" << phone << "\t"<< add << "\n";
				cout << " \n\n===============================================================================";
				found++;
			}
			file >> id >> name >> phone >> add;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Customer ID Not Found...";
		}
		file.close();
	}
}
void book::delet()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Delete Customer Details-------------------------"<<endl;
	file.open("CustomerRecord.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo Data is present...";
		file.close();
	}
	else
	{
		cout<<"\n Enter Customer ID: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> name >> phone >> add;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15) <<std::left<<std::setw(15)<< add << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tSuccessfully Delete Data";
			}
			file >> id >> name >> phone >> add;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Customer ID not found...";
		}
		file1.close();
		file.close();
		remove("CustomerRecord.txt");
		rename("Record.txt","CustomerRecord.txt");
	}
}
void book :: printSection()
{

	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "					SEAT SECTIONS " << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "			The local time is: " << dt << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|	    Section		|	      Events		|	Showtime	|"	<< endl;
	cout << "|---------------------------------------------------------------------------------------|"	<< endl;
	cout << "|	[1] VIP section		|	Bini Meet & Greet	|	7:00 pm		|"	<< endl;
	cout << "|	[2] Lower section	|	Bini Meet & Greet	|	7:00 pm		|"	<< endl;
	cout << "|	[3] Upper section	|	Bini Meet & Greet	|	7:00 pm		|"	<< endl;
	cout << "|---------------------------------------------------------------------------------------|"	<< endl;
	cout << "|	[4] VIP section		|	Jaiga Fan Meeting	|	8:00 pm		|"	<< endl;
	cout << "|	[5] Lower section	|	Jaiga Fan Meeting	|	8:00 pm		|"	<< endl;
	cout << "|	[6] Upper section	|	Jaiga Fan Meeting	|	8:00 pm		|"	<< endl;
	cout << "|---------------------------------------------------------------------------------------|"	<< endl;
	cout << "|	[7] VIP section		|	Muni-muni Concert	|	7:00 pm		|"	<< endl;
	cout << "|	[8] Lower section	|	Muni-muni Concert	|	7:00 pm		|"	<< endl;
	cout << "|	[9] Upper section	|	Muni-muni Concert	|	7:00 pm		|"	<< endl;
	cout << "-----------------------------------------------------------------------------------------" << endl<< endl;
	cout << ">> VIP section: P" << VIPPrice << " per person" << endl;
	cout << ">> Lower section: P" << lowerPrice << " per person" << endl;
	cout << ">> Upper section: P" << upperPrice << " per person" << endl;

	cout << endl;	
}
double price()
{
	double per;
	
	if (section == 1 || section == 4 || section == 7 )
	{
		per = VIPPrice;
		system ("CLS");
	}
	else if (section == 2 || section == 5 || section == 8 )
	{
		per = lowerPrice;
		system ("CLS");
	}
	else if (section == 3 || section == 6 || section == 9 )
	{
		per = upperPrice;
		system ("CLS");
	}
	return per;
}

void book :: Seats()
{
	if (section == 1 || section == 4 || section == 7 )
	{
		system ("CLS");

		cout << "\n\t					VIP Section\n\n\n";
		
		cout << "\t\t [A1][A2][A3][A4][A5] [A6][A7][A8][A9][A10] [A11][A12][A13][A14][A15]" << endl;
		cout << "\t\t [B1][B2][B3][B4][B5] [B6][B7][B8][B9][B10] [B11][B12][B13][B14][B15]" << endl;
		cout << "\t\t [C1][C2][C3][C4][C5] [C6][C7][C8][C9][C10] [C11][C12][C13][C14][C15]" << endl;
		cout << "\t\t [D1][D2][D3][D4][D5] [D6][D7][D8][D9][D10] [D11][D12][D13][D14][D15]" << endl;
		cout << "\t\t [E1][E2][E3][E4][E5] [E6][E7][E8][E9][E10] [E11][E12][E13][E14][E15]" << endl;
		cout << "\t\t [F1][F2][F3][F4][F5] [F6][F7][F8][F9][F10] [F11][F12][F13][F14][F15]" << endl;
		cout << "\t\t [G1][G2][G3][G4][G5] [G6][G7][G8][G9][G10] [G11][G12][G13][G14][G15]" << endl;  
		cout << "\t\t [H1][H2][H3][H4][H5] [H6][H7][H8][H9][H10] [H11][H12][H13][H14][H15]" << endl; 
		cout << "\t\t [I1][I2][I3][I4][I5] [I6][I7][I8][I9][I10] [I11][I12][I13][I14][I15]" << endl; 
		cout << "\t\t [J1][J2][J3][J4][J5] [J6][J7][J8][J9][J10] [J11][J12][J13][J14][J15]" << endl << endl; 
		cout <<	"		----------------------------------------------------------------------" << endl;
		cout << "\n					Booked seat are marked by 'X'" <<endl << endl;
		cout <<	"		----------------------------------------------------------------------" << endl;
	}
	
	else if (section == 2 || section == 5 || section == 8 )
	{
		system ("CLS");

		cout << "\n\t					Lower Section\n\n\n" ;
		
		cout << "\t\t [A1][A2][A3][A4][A5] [A6][A7][A8][A9][A10] [A11][A12][A13][A14][A15]" << endl;
		cout << "\t\t [B1][B2][B3][B4][B5] [B6][B7][B8][B9][B10] [B11][B12][B13][B14][B15]" << endl;
		cout << "\t\t [C1][C2][C3][C4][C5] [C6][C7][C8][C9][C10] [C11][C12][C13][C14][C15]" << endl;
		cout << "\t\t [D1][D2][D3][D4][D5] [D6][D7][D8][D9][D10] [D11][D12][D13][D14][D15]" << endl;
		cout << "\t\t [E1][E2][E3][E4][E5] [E6][E7][E8][E9][E10] [E11][E12][E13][E14][E15]" << endl;
		cout << "\t\t [F1][F2][F3][F4][F5] [F6][F7][F8][F9][F10] [F11][F12][F13][F14][F15]" << endl;
		cout << "\t\t [G1][G2][G3][G4][G5] [G6][G7][G8][G9][G10] [G11][G12][G13][G14][G15]" << endl;  
		cout << "\t\t [H1][H2][H3][H4][H5] [H6][H7][H8][H9][H10] [H11][H12][H13][H14][H15]" << endl; 
		cout << "\t\t [I1][I2][I3][I4][I5] [I6][I7][I8][I9][I10] [I11][I12][I13][I14][I15]" << endl; 
		cout << "\t\t [J1][J2][J3][J4][J5] [J6][J7][J8][J9][J10] [J11][J12][J13][J14][J15]" << endl << endl; 
		cout <<	"		----------------------------------------------------------------------" << endl;
		cout << "\n					Booked seat are marked by 'X'" <<endl << endl;
		cout <<	"		----------------------------------------------------------------------" << endl;
	}
	
	else if (section == 3 || section == 6 || section == 9 )
	{
		system ("CLS");

		cout << "\n\t					Upper Section\n\n\n";
		
		cout << "\t\t [A1][A2][A3][A4][A5] [A6][A7][A8][A9][A10] [A11][A12][A13][A14][A15]" << endl;
		cout << "\t\t [B1][B2][B3][B4][B5] [B6][B7][B8][B9][B10] [B11][B12][B13][B14][B15]" << endl;
		cout << "\t\t [C1][C2][C3][C4][C5] [C6][C7][C8][C9][C10] [C11][C12][C13][C14][C15]" << endl;
		cout << "\t\t [D1][D2][D3][D4][D5] [D6][D7][D8][D9][D10] [D11][D12][D13][D14][D15]" << endl;
		cout << "\t\t [E1][E2][E3][E4][E5] [E6][E7][E8][E9][E10] [E11][E12][E13][E14][E15]" << endl;
		cout << "\t\t [F1][F2][F3][F4][F5] [F6][F7][F8][F9][F10] [F11][F12][F13][F14][F15]" << endl;
		cout << "\t\t [G1][G2][G3][G4][G5] [G6][G7][G8][G9][G10] [G11][G12][G13][G14][G15]" << endl;  
		cout << "\t\t [H1][H2][H3][H4][H5] [H6][H7][H8][H9][H10] [H11][H12][H13][H14][H15]" << endl; 
		cout << "\t\t [I1][I2][I3][I4][I5] [I6][I7][I8][I9][I10] [I11][I12][I13][I14][I15]" << endl; 
		cout << "\t\t [J1][J2][J3][J4][J5] [J6][J7][J8][J9][J10] [J11][J12][J13][J14][J15]" << endl << endl; 
		cout <<	"		----------------------------------------------------------------------" << endl;
		cout << "\n					Booked seat are marked by 'X'" <<endl << endl;
		cout <<	"		----------------------------------------------------------------------" << endl;
	}
}
void book :: bookSeats()
{
	int i, j;
	bool choice = 1;
	if (section == 1 )
	{
		for ( i=0; i<B_VIPRows; i++ )
		{
			for ( j=0; j<B_VIPColumns; j++ )
			{	
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> B_row;
					cout << endl;
					if (B_row > 10 || B_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (B_row > 10 || B_row < 1);
			
				
				do{
						cout << " Please Select Column Number(1-15): ";
					cin >> B_col;
					cout << endl;
					if (B_col > 15 || B_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (B_col > 15 || B_col < 1);
				
				while (B_VIPSeats[B_row - 1][B_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> B_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> B_col;
					cout << endl;
				}
				
				cout << " Seat: " << sect[B_row - 1] << B_col << endl;
				if (B_VIPSeats[B_row - 1] [B_col - 1] == 0)
				{
					B_VIPSeats[B_row - 1] [B_col - 1] = 1;
				}
				checkSeats();
				cout << endl << endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl ;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}
	else if (section == 4 )
	{
		for ( i=0; i<J_VIPRows; i++ )
		{
			for ( j=0; j<J_VIPColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> J_row;
					cout << endl;
					if (J_row > 10 || J_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (J_row > 10 || J_row < 1);
			
				
				do{
					cout << " Please Select Column Number(1-15): ";
					cin >> J_col;
					cout << endl;
					if (J_col > 15 || J_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (J_col > 15 || J_col < 1);
	
				while (J_VIPSeats[J_row - 1][J_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> J_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> J_col;
					cout << endl;
				}
				cout << " Seat: " << sect[J_row - 1] << J_col << endl;
				if (J_VIPSeats[J_row - 1] [J_col - 1] == 0)
				{
					J_VIPSeats[J_row - 1] [J_col - 1] = 1;
				}
				checkSeats();
				cout << endl << endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl ;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}
	else if (section == 7 )
	{
		for ( i=0; i<M_VIPRows; i++ )
		{
			for ( j=0; j<M_VIPColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> M_row;
					cout << endl;
					if (M_row > 10 || M_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (M_row > 10 || M_row < 1);
			
				
				do{
					cout << " Please Select Column Number(1-15): ";
					cin >> M_col;
					cout << endl;
					if (M_col > 15 || M_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (M_col > 15 || M_col < 1);
				
				while (M_VIPSeats[M_row - 1][M_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> M_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> M_col;
					cout << endl;
				}
				
				cout << " Seat: " << sect[M_row - 1] << M_col << endl;
				if (M_VIPSeats[M_row - 1] [M_col - 1] == 0)
				{
					M_VIPSeats[M_row - 1] [M_col - 1] = 1;
				}
				checkSeats();
				cout << endl << endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl ;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}
	else if (section == 3)
	{
		for ( i=0; i<B_upperRows; i++ )
		{
			for ( j=0; j<B_upperColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> B_row;
					cout << endl;
					if (B_row > 10 || B_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (B_row > 10 || B_row < 1);
			
				
				do{
						cout << " Please Select Column Number(1-15): ";
					cin >> B_col;
					cout << endl;
					if (B_col > 15 || B_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (B_col > 15 || B_col < 1);
				
				while (B_upperSeats[B_row - 1][B_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> B_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> B_col;
					cout << endl;
				}
				
				cout << " Seat: " << sect[B_row - 1] << B_col << endl;
				if (B_upperSeats[B_row - 1] [B_col - 1] == 0)
				{
					B_upperSeats[B_row - 1] [B_col - 1] = 1;
				}
				checkSeats();
				cout << endl << endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl ;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}
	else if (section == 6 )
	{
		for ( i=0; i<J_upperRows; i++ )
		{
			for ( j=0; j<J_upperColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> J_row;
					cout << endl;
					if (J_row > 10 || J_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (J_row > 10 || J_row < 1);
			
				
				do{
					cout << " Please Select Column Number(1-15): ";
					cin >> J_col;
					cout << endl;
					if (J_col > 15 || J_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (J_col > 15 || J_col < 1);
				
				while (J_upperSeats[J_row - 1][J_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> J_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> J_col;
					cout << endl;
				}
				
				cout << " Seat: " << sect[J_row - 1] << J_col << endl;
				if (J_upperSeats[J_row - 1] [J_col - 1] == 0)
				{
					J_upperSeats[J_row - 1] [J_col - 1] = 1;
				}
				checkSeats();
				cout << endl << endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl ;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}else if ( section == 9 )
	{
		for ( i=0; i<M_upperRows; i++ )
		{
			for ( j=0; j<M_upperColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> M_row;
					cout << endl;
					if (M_row > 10 || M_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (M_row > 10 || M_row < 1);
			
				
				do{
					cout << " Please Select Column Number(1-15): ";
					cin >> M_col;
					cout << endl;
					if (M_col > 15 || M_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (M_col > 15 || M_col < 1);
				
				while (M_upperSeats[M_row - 1][M_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> M_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> M_col;
					cout << endl;
				}
				cout << " Seat: " << sect[M_row - 1] << M_col << endl;
				if (M_upperSeats[M_row - 1] [M_col - 1] == 0)
				{
					M_upperSeats[M_row - 1] [M_col - 1] = 1;
				}
				checkSeats();
				cout << endl << endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl ;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}
	else if (section == 2 )
	{
		for ( i=0; i<B_lowerRows; i++ )
		{
			for ( j=0; j<B_lowerColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> B_row;
					cout << endl;
					if (B_row > 10 || B_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (B_row > 10 || B_row < 1);
			
				
				do{
						cout << " Please Select Column Number(1-15): ";
					cin >> B_col;
					cout << endl;
					if (B_col > 15 || B_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (B_col > 15 || B_col < 1);
	
				while (B_lowerSeats[B_row - 1][B_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> B_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> B_col;
					cout << endl;	
				}
				
				cout << " Seat: " << sect[B_row - 1] << B_col << endl;
				if (B_lowerSeats[B_row - 1] [B_col - 1] == 0)
				{
					B_lowerSeats[B_row - 1] [B_col - 1] = 1;
				}
				checkSeats();
				cout << endl<< endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}else if ( section == 5 )
	{
		for ( i=0; i<J_lowerRows; i++ )
		{
			for ( j=0; j<J_lowerColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> J_row;
					cout << endl;
					if (J_row > 10 || J_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (J_row > 10 || J_row < 1);
			
				
				do{
					cout << " Please Select Column Number(1-15): ";
					cin >> J_col;
					cout << endl;
					if (J_col > 15 || J_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (J_col > 15 || J_col < 1);
				
				while (J_lowerSeats[J_row - 1][J_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> J_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> J_col;
					cout << endl;
				}
				cout << " Seat: " << sect[J_row - 1] << J_col << endl;
				if (J_lowerSeats[J_row - 1] [J_col - 1] == 0)
				{
					J_lowerSeats[J_row - 1] [J_col - 1] = 1;
				}
				checkSeats();
				cout << endl<< endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}else if ( section == 8 )
	{
		for ( i=0; i<M_lowerRows; i++ )
		{
			for ( j=0; j<M_lowerColumns; j++ )
			{
				do{
					cout << "\n Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> M_row;
					cout << endl;
					if (M_row > 10 || M_row < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (M_row > 10 || M_row < 1);
			
				
				do{
					cout << " Please Select Column Number(1-15): ";
					cin >> M_col;
					cout << endl;
					if (M_col > 15 || M_col < 1)
					{
						cout << "Invalid input. Try again"<< endl;
					}
				}while (M_col > 15 || M_col < 1);
				
				while (M_lowerSeats[M_row - 1][M_col - 1] == 1)
				{
					checkSeats();
					cout << endl;
					cout << " Sorry this seat is already taken \n Please choose another seat" << endl << endl;
					cout << " Guide for Row Number: [A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10]" << endl;
					cout << " Please Select Row Number(1-10): ";
					cin >> M_row;
					cout << endl;
					cout << " Please Select Column Number(1-15): ";
					cin >> M_col;
					cout << endl;
				}
				
				cout << " Seat: " << sect[M_row - 1] << M_col << endl;
				if (M_lowerSeats[M_row - 1] [M_col - 1] == 0)
				{
					M_lowerSeats[M_row - 1] [M_col - 1] = 1;
				}
				checkSeats();
				cout << endl<< endl;
				cout << " Note: This is based on customer's desired number of ticket." << endl;
				cout << " ................." << endl;
				cout << " Press '1' for yes" << endl;
				cout << " Press '0' for no" << endl;
				cout << " ................." << endl;
				cout << " Buy another ticket?: ";
				cin >> choice;
				cout << endl;
				if (choice == 0)
					return;
			}
		}
	}
}

void book :: checkSeats()
{
	int i, j;	
	if (section == 1 )
	{
		cout << "\n					VIP Section\n\n";
		for ( i=0; i<B_VIPRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<B_VIPColumns; j++ )
			{
				if (B_VIPSeats[i][j] == 1)
					cout << "[ X]";
				else
				{
					cout << "[" << sect[i] << j+1 << "]";
				}
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << endl; 
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
	else if (section == 4)
		{
		cout << "\n					VIP Section\n\n";
		for ( i=0; i<J_VIPRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<J_VIPColumns; j++ )
			{
				if (J_VIPSeats[i][j] == 1)
					cout << "[ X]";
				else
				{
					cout << "[" << sect[i] << j+1 << "]";
				}
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << endl; 
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
	else if (section == 7 )
		{
		cout << "\n					VIP Section\n\n";
		for ( i=0; i<M_VIPRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<M_VIPColumns; j++ )
			{
				if (M_VIPSeats[i][j] == 1)
					cout << "[ X]";
				else
				{
					cout << "[" << sect[i] << j+1 << "]";
				}
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << endl; 
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
	else if (section == 3 )
	{
		cout << "\n					Upper Section" << endl << endl;
		for ( i=0; i<B_upperRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<B_upperColumns; j++ )
			{
				if (B_upperSeats[i][j] == 1)
					cout << "[ X]";
				else
				{
					cout << "[" << sect[i] << j+1 << "]";
				}	
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << std::endl; 
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
		else if (section == 6 )
	{
		cout << "\n					Upper Section" << endl << endl;
		for ( i=0; i<J_upperRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<J_upperColumns; j++ )
			{
				if (J_upperSeats[i][j] == 1)
					cout << "[ X]";
				else
				{
					cout << "[" << sect[i] << j+1 << "]";
				}
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << std::endl; 
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
		else if (section == 9 )
	{
		cout << "\n					Upper Section" << endl << endl;
		for ( i=0; i<M_upperRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<M_upperColumns; j++ )
			{
				if (M_upperSeats[i][j] == 1)
					cout << "[ X]";
				else
				{
					cout << "[" << sect[i] << j+1 << "]";
				}
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << std::endl; 
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
	else if (section == 2)
	{
		cout << "\n					Lower Section" << endl << endl;
		for ( i=0; i<B_lowerRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<B_lowerColumns; j++ )
			{
				if (B_lowerSeats[i][j] == 1)
				cout << "[ X]";
				else 
				{
					cout << "[" << sect[i] << j+1 << "]";
				}	
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << std::endl; 
		cout << "\n 	----------------------------------------------------------------------------------" <<endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
	else if (section == 5)
	{
		cout << "\n					Lower Section" << endl << endl;
		for ( i=0; i<J_lowerRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<J_lowerColumns; j++ )
			{
				if (J_lowerSeats[i][j] == 1)
				cout << "[ X]";
				else 
				{
					cout << "[" << sect[i] << j+1 << "]";
				}	
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << std::endl; 
		cout << "\n 	----------------------------------------------------------------------------------" <<endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
	else if (section == 8)
	{
		cout << "\n					Lower Section" << endl << endl;
		for ( i=0; i<M_lowerRows; i++ )
		{
			cout << "\t";
			for ( j=0; j<M_lowerColumns; j++ )
			{
				if (M_lowerSeats[i][j] == 1)
				cout << "[ X]";
				else 
				{
					cout << "[" << sect[i] << j+1 << "]";
				}
			}
			cout << endl;
		}
		cout << "\n 			   ***You've successfully booked a seat***" << std::endl; 
		cout << "\n 	----------------------------------------------------------------------------------" <<endl;
		cout << "\n				Booked seat are marked by 'X'" << std::endl;
		cout << "\n 	----------------------------------------------------------------------------------" << endl;
	}
}
void book :: showBooking()
{
	int i, j;
	system("CLS");
	
	cout << "                      \n                         ******************************************************" << endl;
	cout << "                               ===========================================" << endl;
	cout << "                              	       RECEIPT OF BOOKING TICKETS             "                              << endl;
	cout << "                               ===========================================" << endl;
	cout << "                                  Event		   :";
		
	if ( section == 1 || section == 2 || section == 3)
	{
		cout << "Bini Meet & Greet         " <<endl;
	}
	else if ( section == 4 || section == 5 || section == 6)
	{
		cout << "Jaiga Fan Meeting               " <<endl;
	}
	else if ( section == 7 || section == 8 || section == 9)
	{
		cout << "Muni-muni concert                    " <<endl;
	}
	cout << "                                  Customer's name  :" << name <<endl;
	cout << "                                  Phone number	   :" << phone <<endl;
	cout << "                                  Email address    :" << add <<endl;
	cout << "                                  Event Section    :" << section <<endl;
	cout << "                                  Seat Category    :";
	if(section == 1 )
	{
		cout << "VIP Section" << endl;
		cout << "                                  Seat No.	   :";	
		for (i=0; i<B_VIPRows; i++)
		{
			for ( j=0; j<B_VIPColumns; j++ )
			{
				if (B_VIPSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if(section == 4 )
	{
		cout << "VIP Section" << endl;
		cout << "                                  Seat No.	   :";	
		for (i=0; i<J_VIPRows; i++)
		{
			for ( j=0; j<J_VIPColumns; j++ )
			{
				if (J_VIPSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if(section == 7 )
	{
		cout << "VIP Section" << endl;
		cout << "                                  Seat No.	   :";	
		for (i=0; i<M_VIPRows; i++)
		{
			for ( j=0; j<M_VIPColumns; j++ )
			{
				if (M_VIPSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if(section == 3 )
	{
		cout << "Upper Section" << endl;
		cout << "                                  Seat No.	   :";	
		for (i=0; i<B_upperRows; i++)
		{
			for ( j=0; j<B_upperColumns; j++ )
			{
				if (B_upperSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if(section == 6)
	{
		cout << "Upper Section" << endl;
		cout << "                                  Seat No.	   :";	
		for (i=0; i<J_upperRows; i++)
		{
			for ( j=0; j<J_upperColumns; j++ )
			{
				if (J_upperSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if(section == 9)
	{
		cout << "Upper Section" << endl;
		cout << "                                  Seat No.	   :";	
		for (i=0; i<M_upperRows; i++)
		{
			for ( j=0; j<M_upperColumns; j++ )
			{
				if (M_upperSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if (section == 2)
	{
		cout << "Lower Section" <<endl;
		cout << "                                  Seat No.	   :";
		for (i=0; i<B_lowerRows; i++)
		{
			for ( j=0; j<B_lowerColumns; j++ )
			{
				if (B_lowerSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if (section == 5)
	{
		cout << "Lower Section" <<endl;
		cout << "                                  Seat No.	   :";
		for (i=0; i<J_lowerRows; i++)
		{
			for ( j=0; j<J_lowerColumns; j++ )
			{
				if (J_lowerSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	else if (section == 8)
	{
		cout << "Lower Section" <<endl;
		cout << "                                  Seat No.	   :";
		for (i=0; i<M_lowerRows; i++)
		{
			for ( j=0; j<M_lowerColumns; j++ )
			{
				if (M_lowerSeats[i][j] == 1)
					cout << "[" << sect[i] << j+1 << "]";
			}
		}
	}
	cout << endl;
	cout << "                                  Total Price	   :";
	cout << "P " << totalPrice <<endl;
	cout << "                         ******************************************************" << endl << endl;
}
void exit()
{
	exit();
}
int main()
{
	book project;
	project.menu();
	return 0;
}
