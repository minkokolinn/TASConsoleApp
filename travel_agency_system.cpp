#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<unistd.h>
#include<cstdio>
#include<windows.h>
#include<ctime>
#include<iomanip>
using namespace std;
//method for program
void intro();
void signin();
void register_staff();
void homemenu(); 
void make_trip_plan();
void make_normal_trip_plan();
void make_package_trip_plan();
void view_trip_plan();
void view_normal_trip_plan();
void view_package_trip_plan();
void delete_trip_plan();
void delete_normal_trip_plan();
void delete_package_trip_plan();

void create_trip();
void create_normal_trip();
void create_package_trip();
void view_trip();
void view_all_trip();
void search_normal_trip();
void search_package_trip();
void delete_trip();
void delete_normal_trip();
void delete_package_trip();

void register_traveller();
void view_traveller();
void view_all_traveller();
void search_tvl_id();
void search_tvl_name();
void delete_traveller();

void income_system();
void discount_plan();
void lucky_draw();
void about_help();
void exit_program();
void money_exchange();
void call_website();
//
void line();
void star();
void processing();
int get_count_of_traveller(string TVL_id_para);
void calculate_money_exchange(string postfix,string country,double amount);
int main(){
	system("Color B");
	cout<<"Press 'Enter' to start!!!";
	getch();
	intro();

}
void intro(){
	system("cls");
	cout<<"\n\n\t\t\t\t\t";
	for(int i=0;i<26;i++){
		Sleep(30);
		cout<<"*";
	}
	Sleep(200);
	cout<<"\n\t\t\t\t\t     "<<"|||Hello User|||"<<"\n";
	Sleep(200);
	cout<<"\t\t\t\t\t--------------------------\n";
	Sleep(400);
	cout<<"\t\t\t\tWelcome from Travel Agency Management System\n";
	Sleep(200);
	cout<<"\t\t\t\t\t--------------------------\n";
	cout<<"\t\t\t------------------------------------------------------------\n\n";
	Sleep(500);
	cout<<"\t\t\tThis program is created from the corner of an agency staff\n";
	cout<<"\t\t\t------------------------------------------------------------\n\n";
	Sleep(400);
	cout<<"\t\t\tFirstly, please 'register' or 'sign in' to use the program\n\t\t\t\t\t    ________________\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB Create an admin \xDB\xDB\xDB\xDB\n";
	cout<<"\t\t\t\t\t    ________________\n\n";
	Sleep(400);
	cout<<"\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n";
	cout<<"\t\t\t\xDB\xDB\xDB [1] Sign in with existing admin account               \xDB\xDB\xDB\n\n";
	cout<<"\t\t\t\xDB\xDB\xDB [2] Create the new admin account <Register the staff> \xDB\xDB\xDB\n\n";
	cout<<"\t\t\t\xDB\xDB\xDB * Press any key to exit * \xDB\xDB\xDB\n\n";
	cout<<"\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n";
	cout<<"\n\t\t\t(Answer by typing the menu number!!!)\n\t\t\tEnter your choice : ";
	switch(getch()){
		case '1':
			Sleep(500);
			signin();
			break;
		case '2':
			register_staff();
			break;
		default:
			exit_program();
			break;
	}
}
void signin(){
	string staff_name;
	string staff_phone;
	string staff_gmail;
	string staff_pass;
	
	string staff_name_read;
	string staff_pass_read;
	ifstream staffread("staff.txt");
	cout<<"\n\n";
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SIGN IN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter your name		:  ";
	fflush(stdin);
	cin>>staff_name_read;
	fflush(stdin);
	cout<<"\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter your password	:  ";
	fflush(stdin);
	cin>>staff_pass_read;
	fflush(stdin);
	cout<<" \n";
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t\t\t";
	char check[20]="Checking.........";
	for(int i=0;i<20;i++){
		cout<<check[i];
		Sleep(80);
	}
	while(staffread>>staff_name>>staff_phone>>staff_gmail>>staff_pass){
		if(staff_name_read==staff_name && staff_pass_read==staff_pass){
			cout<<"\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
			cout<<"\n\t\t\t\t Good Job! Account Exist\n";
			Sleep(600);
			cout<<"\n\t\t\t\t Successful! \n";
			Sleep(600);
			cout<<"\n\t\t\t\t Now you can use this program! \n";
			cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
			cout<<"\n\t\t\t\tPress any key to continue....";
			getch();
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t\t\tLoading.....\n\n\t\t\t\t\t";
				for(int i=0;i<12;i++){
				cout<<"\xB2\xB2";
				Sleep(100);
			}
			homemenu();
			break;
		}
		
	}
	cout<<"\n\t\t\t\tWarning!!!\n\t\t\t\tIncorrect Username and Password\n\t\t\t\tInvalid Staff Account\n";
	cout<<"\n\t\t\t\t[1] Register the new account!!!";
	cout<<"\n\t\t\t\t[2] Try again";
	if(getch()=='1'){
		register_staff();
	}else{
		signin();
	}
}
void register_staff(){
	system("cls");
	Sleep(200);
	cout<<"\n\n\t\t\t\t";
	char abc[50]="Entering into the registration form.........";
	for(int i=0;i<40;i++){
		cout<<abc[i];
		Sleep(40);
	}
	step2_register_staff:
	string staff_name;
	string staff_phone;
	string staff_gmail;
	string staff_pass;
	string staff_cpass;
	cout<<endl<<endl<<endl<<endl;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 REGISTRATION FORM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n";
	cout<<"\n\t\t\t\t[Please do not use 'space' in all of your input]\n\t\t\t\t[instead of space, u can use 'underscores']\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter your name              :  ";
	fflush(stdin);
	cin>>staff_name;
	fflush(stdin);
	cout<<"\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter your phone number      :  ";
	fflush(stdin);
	cin>>staff_phone;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter your gmail             :  ";
	fflush(stdin);
	cin>>staff_gmail;
	fflush(stdin);
	cout<<" \n\n";
	step1_register_staff:
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Create your password         :  ";
	fflush(stdin);
	cin>>staff_pass;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter again confirm password :  ";
	fflush(stdin);
	cin>>staff_cpass;
	fflush(stdin);
	cout<<" \n";
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	string sure;
	cout<<"\t\t\t\tAre you sure to create this account ?[yes/no] : ";
	cin>>sure;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
	if(sure=="yes"){
		if(staff_pass==staff_cpass){
			Sleep(600);
			cout<<"\n\t\t\t\tGood Job!!Both of the passwords are same\n";
			ofstream staffreg("staff.txt",ios::app);
			staffreg<<staff_name<<' '<<staff_phone<<' '<<staff_gmail<<' '<<staff_pass<<endl;
			cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(120);
			}
			cout<<"\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
			cout<<"\n\t\t\t\t Congratulations! \n";
			Sleep(600);
			cout<<"\n\t\t\t\t Process Completed! \n";
			Sleep(600);
			cout<<"\n\t\t\t\t Your records are saved successfully! \n";
			cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
			cout<<"\n\t\t\t\tPress any key to continue....";
			getch();
			intro();
		}else{
			cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(100);
			}
			Sleep(200);
			cout<<"\n\n\t\t\t\tPassword and Confirm password are different!!!!\n\t\t\t\tThey must be same\n\t\t\t\tPlease try again!!!";
			cout<<"\n\n\t\t\t\tPress any key to correct the mistake";
			getch();
			cout<<"\n\n";
			goto step1_register_staff;
		}
	}else if(sure=="no"){
		cout<<"\n\t\t\t\tOK! U can try again\n";
		cout<<"\n\t\t\t\t[1] Create again!!!\n";
		cout<<"\n\t\t\t\t[2] Exit!!!\n\t\t\t\t";
		if(getch()=='1'){
			system("cls");
			goto step2_register_staff;
		}else if(getch()=='2'){
			system("cls");
			intro();
		}else{
			system("cls");
			intro();
		}
	}else{
		cout<<"\n\t\t\t\tError";
		cout<<"\n\n\t\t\t\tInvaid Input !!!!";
		getch();
		system("cls");
		goto step2_register_staff;
	}
}
void homemenu(){
	system("cls");
	Sleep(100);
	string home_menu_choice; 
	cout<<"\n\n\t\t\t\t\t\xDB\xB2\xB2\xB2\xB2\xB2\xB2 Welcome from Main Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n\n\n";
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] Make a new Trip Plan [by customer]\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] View Trip Plan of the agency\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Delete Trip Plan\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [4] Create a new Trip of agency\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [5] View Trip of agency\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [6] Delete Trip\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [7] Register a new traveller\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [8] View traveller's information\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [9] Delete the traveller information\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [10] Income of agency\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [11] Discount Plan\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [12] Lucky Draw Plan\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [13] About and Help\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [14] Exit\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [15] Back to Sign In Page [Log out]\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [16] Go To Website of agency(to see advertisements and events of company)\n\n";
	cout<<"\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [17] Money Exchange Service\n\n";
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t\t\t\t";
	char abc[20]="Enter you choice : ";
	for(int i=0;i<20;i++){
		cout<<abc[i];
		Sleep(50);
	}
	cin>>home_menu_choice;
	if(home_menu_choice=="1"){
		make_trip_plan();
		homemenu();
	}else if(home_menu_choice=="2"){
		view_trip_plan();
		homemenu();
	}else if(home_menu_choice=="3"){
		delete_trip_plan();
		homemenu();
	}else if(home_menu_choice=="4"){
		create_trip();
		homemenu();
	}else if(home_menu_choice=="5"){
		view_trip();
		homemenu();
	}else if(home_menu_choice=="6"){
		delete_trip();
		homemenu();
	}else if(home_menu_choice=="7"){
		register_traveller();
		homemenu();
	}else if(home_menu_choice=="8"){
		view_traveller();
		homemenu();
	}else if(home_menu_choice=="9"){
		delete_traveller();
		homemenu();
	}else if(home_menu_choice=="10"){
		income_system();
		homemenu();
	}else if(home_menu_choice=="11"){
		discount_plan();
		homemenu();
	}else if(home_menu_choice=="12"){
		lucky_draw();
		homemenu();
	}else if(home_menu_choice=="13"){
		about_help();
		homemenu();
	}else if(home_menu_choice=="14"){
		exit_program();
	}else if(home_menu_choice=="15"){
		intro();
	}else if(home_menu_choice=="16"){
		call_website();
	}else if(home_menu_choice=="17"){
		money_exchange();
	}else{
		cout<<"\n\n\t\t\t\t\tInvalid Input!!!\n";
		homemenu();
	}
}

//making a trip
void make_trip_plan(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME FROM MAKING TRIP PLAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [*] [TP]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] MAKE Normal Trip Plan\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] MAKE Package Trip Plan\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Back\n\n";
	cout<<"\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	step1_create_trip_plan:
	cout<<"\t\t\t\tEnter your choice :";
	switch(getch()){
		case '1':
			//normal trip
			make_normal_trip_plan();
			//
			break;
		case '2':
			//package trip
			make_package_trip_plan();
			//
			break;
		case '3':
			homemenu();
			break;
		default:
			cout<<"\n\n\t\t\t\tInvalid Input!!!!\n\t\t\t\t Please Try Again\n\n";
			goto step1_create_trip_plan;
			break;
	}
	getch();
}

void make_normal_trip_plan(){
	processing();
	system("cls");
	//for attributes of normal trip plan
	string NTP_id;
	string NTP_TVL_id;
	string NTP_TVL_f_name;
	string NTP_TVL_l_name;
	string NTP_TVL_phone;
	string NTP_TVL_nrc;
	string NTP_NT_id;
	string NTP_NT_main_destination;
	string NTP_NT_duration;
	string NTP_NT_choose_schedule;
	int NTP_NT_total_price;
	//
	cout<<endl<<endl<<endl<<endl;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAKE NORMAL TRIP PLAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\n\t\t\t\t[Please do not use 'space' in all of your input]\n\t\t\t\t[instead of space, u can use 'underscores']\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 *[NTP]* \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Normal Trip Plan ID [e.g NTP_001]: ";
	fflush(stdin);
	cin>>NTP_id;	//collect NTP_id
	fflush(stdin);
	cout<<"\n\n";
	
	//for showing all traveller and collect its associated attributes
	string TVL_id;
	string TVL_first_name;
	string TVL_last_name;
	int TVL_age;
	string TVL_gmail;
	string TVL_nrc;
	string TVL_phone;
	int TVL_trip_times;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char b[80]="\tALL TRAVELLERS OF THE AGENCY ARE AS FOLLOWS";
	for(int i=0;i<60;i++){
		cout<<b[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream viewalltvl("traveller.txt");
	line();
	cout<<" "<<"ID"<<setw(25)<<"First Name"<<setw(18)<<"Last Name"<<setw(13)<<"Age"<<setw(20)<<"Gmail"<<setw(20)<<"NRC"<<setw(28)<<"Phone"<<endl;
	line();
	int count_traveller=0;
	while(viewalltvl>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		cout<<" "<<TVL_id<<setw(16)<<TVL_first_name<<setw(20)<<TVL_last_name<<setw(15)<<TVL_age<<setw(30)<<TVL_gmail<<setw(25)<<TVL_nrc<<setw(19)<<TVL_phone<<endl<<endl;
		count_traveller++;	
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Normal Trip : [ "<<count_traveller<<" ]\n";
	star();
	cout<<endl;
	string TVL_choose;
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Choose Yourself[Enter Traveller] [e.g TVL_001]: ";
	fflush(stdin);
	cin>>TVL_choose;	//choose a traveller
	fflush(stdin);
	cout<<"\n\n";
	
	Sleep(400);
	cout<<"\t\t\t\tYou worked with our agency [ "<<get_count_of_traveller(TVL_choose)<<" times ]..\n\n";
	Sleep(500);
	
	ifstream viewalltvl_2("traveller.txt");
	while(viewalltvl_2>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		if(TVL_choose==TVL_id){
			NTP_TVL_id=TVL_id;	//collect NTP_TVL_id
			NTP_TVL_f_name=TVL_first_name;	//collect NTP_TVL_FIRST NAME
			NTP_TVL_l_name=TVL_last_name;	//collect NTP_TVL_LAST NAME
			NTP_TVL_phone=TVL_phone;	//collect NTP_TVL_phone
			NTP_TVL_nrc=TVL_nrc;	//collect NTP_TVL_NRC
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your traveller ID is : "<<NTP_TVL_id<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your First Name is : "<<NTP_TVL_f_name<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Last Name is : "<<NTP_TVL_l_name<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Phone No is : "<<NTP_TVL_phone<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Nrc is : "<<NTP_TVL_nrc<<endl<<endl;
			Sleep(300);
		}
	}
	//
	//for showing normal trip and collect its related attribues
	string NT_id;
	string NT_destination;
	string NT_duration;
	string NT_schedule1;
	string NT_schedule2;
	string NT_schedule3;
	int NT_price;
	cout<<endl<<endl;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char a[80]="\tALL NORMAL TRIPS OF THE AGENCY ARE AS FOLLOWS";
	for(int i=0;i<60;i++){
		cout<<a[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream readnormaltrip("normaltrip.txt");
	line();
	cout<<" "<<"Normal Trip ID"<<setw(20)<<"Destination Place"<<setw(15)<<"Duration"<<setw(20)<<"Schedule (1)"<<setw(20)<<"Schedule (2)"<<setw(20)<<"Schedule (3)"<<setw(21)<<"Price for trip"<<endl;
	line();
	int count_normal=0;
	while(readnormaltrip>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
		cout<<" "<<NT_id<<setw(26)<<NT_destination<<setw(16)<<NT_duration<<setw(22)<<NT_schedule1<<setw(20)<<NT_schedule2<<setw(20)<<NT_schedule3<<setw(19)<<NT_price<<endl<<endl;
		count_normal++;	
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Normal Trip : [ "<<count_normal<<" ]\n";
	star();
	cout<<endl;
	string NT_choose;
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Choose Your Normal Trip[Enter Trip ID] [e.g NT_001]: ";
	fflush(stdin);
	cin>>NT_choose;	//choose a normal trip
	fflush(stdin);
	cout<<"\n\n";
	ifstream readnormaltrip_1("normaltrip.txt");
	while(readnormaltrip_1>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
		if(NT_choose==NT_id){
			NTP_NT_id=NT_id;	//collect NTP_NT_id
			NTP_NT_main_destination=NT_destination;	//collect NTP_NT_DESTINATION
			NTP_NT_duration=NT_duration;	//collect NTP_NT_DURATION
			//choose normal trip schedule
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Choose Your Normal Trip Schedule....... \n\n";
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [a] FIRST SCHEDULE - "<<NT_schedule1<<endl;
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [b] SECOND SCHEDULE - "<<NT_schedule2<<endl;
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [c] THIRD SCHEDULE - "<<NT_schedule3<<endl<<endl;
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Which schedule do u want to choose : ";
			string choose_normal_trip_schedule;
			cin>>choose_normal_trip_schedule;
			if(choose_normal_trip_schedule=="a"){
				NTP_NT_choose_schedule=NT_schedule1;
			}else if(choose_normal_trip_schedule=="b"){
				NTP_NT_choose_schedule=NT_schedule2;
			}else if(choose_normal_trip_schedule=="c"){
				NTP_NT_choose_schedule=NT_schedule3;
			}else{
				NTP_NT_choose_schedule=NT_schedule1;
			}
			//
			cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Normal Trip ID is : "<<NTP_NT_id<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Main destination is : "<<NTP_NT_main_destination<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your trip duration is : "<<NTP_NT_duration<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Chosen Schedule is : "<<NTP_NT_choose_schedule<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Trip Price[original] is : "<<NT_price<<endl<<endl;
			Sleep(300);
		}
	}
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";	
	string choice_yesno;
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Are u sure to go to this trip ?[yes/no] :";
	cin>>choice_yesno;
	if(choice_yesno=="yes"){
		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(100);
			}
		//for adding 1 to traveller trip times
//		int trip_time_of_NTP;
//		ifstream viewalltvl_3("traveller.txt");
//		while(viewalltvl_3>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
//			ofstream addtemp1("temp1.txt",ios::app);
//			if(TVL_choose==TVL_id){
//				trip_time_of_NTP=TVL_trip_times;
//				TVL_trip_times++;
//				addtemp1<<TVL_id<<' '<<TVL_first_name<<' '<<TVL_last_name<<' '<<TVL_age<<' '<<TVL_gmail<<' '<<TVL_nrc<<' '<<TVL_phone<<' '<<TVL_trip_times<<endl;
//			}else{
//				addtemp1<<TVL_id<<' '<<TVL_first_name<<' '<<TVL_last_name<<' '<<TVL_age<<' '<<TVL_gmail<<' '<<TVL_nrc<<' '<<TVL_phone<<' '<<TVL_trip_times<<endl;
//			}
//			addtemp1.close();
//		}
////		viewalltvl.close();
////		viewalltvl_2.close();
//		viewalltvl_3.close();
//		remove("traveller.txt");
//		rename("temp1.txt","traveller.txt");
		//
		//Calculating total price and discount
		Sleep(350);
		int original_price_NTP;
		ifstream readnormaltrip_2("normaltrip.txt");
		while(readnormaltrip_2>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price)
		{
			if(NT_choose==NT_id){
				original_price_NTP=NT_price;
			}
		}
		int discount_NTP;
		if(get_count_of_traveller(TVL_choose)>=3){
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Congratulation! You worked with our agency : [ "<<get_count_of_traveller(TVL_choose)<<" ]\n\n";
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have got 20% discount !!!!\n";
			discount_NTP=original_price_NTP*20/100;
		}else if(get_count_of_traveller(TVL_choose)>=5){
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Congratulation! You worked with our agency : [ "<<get_count_of_traveller(TVL_choose)<<" ]\n\n";
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have got 40% discount !!!!\n";
			discount_NTP=original_price_NTP*40/100;
		}else if(get_count_of_traveller(TVL_choose)>=9){
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Congratulation! You worked with our agency : [ "<<get_count_of_traveller(TVL_choose)<<" ]\n\n";
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have got 40% discount !!!!\n";
			discount_NTP=original_price_NTP*50/100;
		}else{
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have not got any discount !!!!\n";
			discount_NTP=0;
		}
		NTP_NT_total_price=original_price_NTP-discount_NTP;
		cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";	
		cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your total price<cost price> is : * [ "<<NTP_NT_total_price<<" ]*";
		//
		ofstream makenormaltripplan("normaltripplan.txt",ios::app);
		makenormaltripplan<<NTP_id<<' '<<NTP_TVL_id<<' '<<NTP_TVL_f_name<<' '<<NTP_TVL_l_name<<' '<<NTP_TVL_phone<<' '<<NTP_TVL_nrc<<' '<<NTP_NT_id<<' '<<NTP_NT_main_destination<<' '<<NTP_NT_duration<<' '<<NTP_NT_choose_schedule<<' '<<NTP_NT_total_price<<endl;
		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(100);
			}
		cout<<"\n\n\t\t\t\t Congratulation!\n\n\t\t\t\tThe record is saved successfully!!!\n\n\t\t\t\tThe voucher for customer is being produced.....\n\n";
	}else{
		cout<<"\n\n\t\t\t\tOk! U can try again \n\t\t\t\tPress any key to continue.....";
		getch();
		make_trip_plan();
	}
	cout<<"\n\n\t\t\t\tPress any key to continue.....";
	getch();
	make_trip_plan();
}

void make_package_trip_plan(){
	processing();
	system("cls");
	//for attributes of PACKAGE trip plan
	string PTP_id;
	string PTP_TVL_id;
	string PTP_TVL_f_name;
	string PTP_TVL_l_name;
	string PTP_TVL_phone;
	string PTP_TVL_nrc;
	string PTP_PT_id;
	string PTP_PT_main_destination;
	string PTP_PT_startdate;
	string PTP_PT_duration;
	int PTP_PT_total_price;
	//
	cout<<endl<<endl<<endl<<endl;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAKE PACKAGE TRIP PLAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\n\t\t\t\t[Please do not use 'space' in all of your input]\n\t\t\t\t[instead of space, u can use 'underscores']\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 *[PTP]* \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Package Trip Plan ID [e.g PTP_001]: ";
	fflush(stdin);
	cin>>PTP_id;	//collect PTP_id
	fflush(stdin);
	cout<<"\n\n";
	
	//for showing all traveller and collect its associated attributes
	string TVL_id;
	string TVL_first_name;
	string TVL_last_name;
	int TVL_age;
	string TVL_gmail;
	string TVL_nrc;
	string TVL_phone;
	int TVL_trip_times;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char b[80]="\tALL TRAVELLERS OF THE AGENCY ARE AS FOLLOWS";
	for(int i=0;i<60;i++){
		cout<<b[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream viewalltvl("traveller.txt");
	line();
	cout<<" "<<"ID"<<setw(25)<<"First Name"<<setw(18)<<"Last Name"<<setw(13)<<"Age"<<setw(20)<<"Gmail"<<setw(20)<<"NRC"<<setw(28)<<"Phone"<<endl;
	line();
	int count_traveller=0;
	while(viewalltvl>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		cout<<" "<<TVL_id<<setw(16)<<TVL_first_name<<setw(20)<<TVL_last_name<<setw(15)<<TVL_age<<setw(30)<<TVL_gmail<<setw(25)<<TVL_nrc<<setw(19)<<TVL_phone<<endl<<endl;
		count_traveller++;	
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Normal Trip : [ "<<count_traveller<<" ]\n";
	star();
	cout<<endl;
	string TVL_choose;
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Choose Yourself[Enter Traveller] [e.g TVL_001]: ";
	fflush(stdin);
	cin>>TVL_choose;	//choose a traveller
	fflush(stdin);
	cout<<"\n\n";
	
	Sleep(400);
	cout<<"\t\t\t\tYou worked with our agency [ "<<get_count_of_traveller(TVL_choose)<<" times ]..\n\n";
	Sleep(500);
	
	ifstream viewalltvl_2("traveller.txt");
	while(viewalltvl_2>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		if(TVL_choose==TVL_id){
			PTP_TVL_id=TVL_id;	//collect NTP_TVL_id
			PTP_TVL_f_name=TVL_first_name;	//collect NTP_TVL_FIRST NAME
			PTP_TVL_l_name=TVL_last_name;	//collect NTP_TVL_LAST NAME
			PTP_TVL_phone=TVL_phone;	//collect NTP_TVL_phone
			PTP_TVL_nrc=TVL_nrc;	//collect NTP_TVL_NRC
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your traveller ID is : "<<PTP_TVL_id<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your First Name is : "<<PTP_TVL_f_name<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Last Name is : "<<PTP_TVL_l_name<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Phone No is : "<<PTP_TVL_phone<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Nrc is : "<<PTP_TVL_nrc<<endl<<endl;
			Sleep(300);
		}
	}
	//
	//for showing PACKAGE trip and collect its related attribues
	string PT_id;
	string PT_main_destination;
	string PT_other_destinations;
	string PT_start_date;
	string PT_duration;
	string PT_hotel_services;
	int PT_hotel_charges;
	int PT_food_charges;
	int PT_additional_charges;
	int price;
	cout<<endl<<endl;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char a[80]="\t*ALL PACKAGE TRIPS OF THE AGENCY ARE AS FOLLOWS*";
	for(int i=0;i<60;i++){
		cout<<a[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream readpackagetrip("packagetrip.txt");
	line();
	cout<<" "<<"Package ID"<<setw(16)<<"Main Place"<<setw(25)<<"Other Places"<<setw(25)<<"Start Date"<<setw(14)<<"              Duration"<<setw(33)<<"Hotel and its charges"<<"                  Food charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Additional charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Price"<<endl;
	line();
	int count_package=0;
	while(readpackagetrip>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
		cout<<" "<<PT_id<<setw(18)<<PT_main_destination<<setw(28)<<PT_other_destinations<<setw(30)<<PT_start_date<<setw(18)<<PT_duration<<setw(25)<<PT_hotel_services<<' '<<PT_hotel_charges<<setw(20)<<PT_food_charges<<" + "<<PT_additional_charges<<" + "<<price<<endl<<endl;
		count_package++;	
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Package Trip : [ "<<count_package<<" ]\n";
	star();
	
	cout<<endl;
	string PT_choose;
	int result=0;
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Choose Your Package Trip[Enter Trip ID] [e.g PT_001]: ";
	fflush(stdin);
	cin>>PT_choose;	//choose a package trip
	fflush(stdin);
	cout<<"\n\n";
	ifstream readpackagetrip_1("packagetrip.txt");
	while(readpackagetrip_1>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
		if(PT_choose==PT_id){
			PTP_PT_id=PT_id;	//collect NTP_NT_id
			PTP_PT_main_destination=PT_main_destination;	//collect NTP_NT_DESTINATION
			PTP_PT_startdate=PT_start_date;
			PTP_PT_duration=PT_duration;
			cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Package Trip ID is : "<<PTP_PT_id<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your Main destination is : "<<PTP_PT_main_destination<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your trip start date is : "<<PTP_PT_startdate<<endl<<endl;
			Sleep(300);
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Trip Duration is : "<<PTP_PT_duration<<endl<<endl;
			Sleep(300);
			
			result=price+PT_additional_charges;
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Trip Original Price [price+additional charges] is : "<<result<<endl<<endl;
			Sleep(300);
			cout<<endl;
			string hs,fs;
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [Answer only yes or no]\n";
			cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Do u want to take hotel services[hotel charges : "<<PT_hotel_charges<<" ] = ";
			cin>>hs;
			if(hs=="yes"){
				result=result+PT_hotel_charges;
				Sleep(200);
				cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Now ! YOUR TOTAL COST [HOTEL CHARGES+PRICE+ADDTIONAL CHARGES] is : "<<result;
			}else{
				Sleep(200);
				cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Now ! YOUR TOTAL COST  is still : "<<result;
			}
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [Answer only yes or no]\n";
			cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Do u want to take food services[food charges : "<<PT_food_charges<<" ] = ";
			cin>>hs;
			if(hs=="yes"){
				result=result+PT_food_charges;
				Sleep(200);
				cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Now ! YOUR TOTAL COST [HOTEL CHARGES+PRICE+ADDTIONAL CHARGES+FOOD CHARGES] is : "<<result;
			}else{
				Sleep(200);
				cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Now ! YOUR TOTAL COST is still : "<<result;
			}
			Sleep(200);
		}
	}
	cout<<"\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";	
	string choice_yesno;
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Are u sure to go to this trip ?[yes/no] :";
	cin>>choice_yesno;
	if(choice_yesno=="yes"){
		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(100);
			}
		//for adding 1 to traveller trip times
//		int trip_time_of_PTP;
//		ifstream viewalltvl_3("traveller.txt");
//		while(viewalltvl_3>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
//			ofstream addtemp("temp.txt",ios::app);
//			if(TVL_choose==TVL_id){
//				trip_time_of_PTP=TVL_trip_times;
//				TVL_trip_times++;
//				addtemp<<TVL_id<<' '<<TVL_first_name<<' '<<TVL_last_name<<' '<<TVL_age<<' '<<TVL_gmail<<' '<<TVL_nrc<<' '<<TVL_phone<<' '<<TVL_trip_times<<endl;
//			}else{
//				addtemp<<TVL_id<<' '<<TVL_first_name<<' '<<TVL_last_name<<' '<<TVL_age<<' '<<TVL_gmail<<' '<<TVL_nrc<<' '<<TVL_phone<<' '<<TVL_trip_times<<endl;
//			}
//			addtemp.close();
//		}
////		viewalltvl.close();
////		viewalltvl_2.close();
//		viewalltvl_3.close();
//		remove("traveller.txt");
//		rename("temp.txt","traveller.txt");
		//
		//Calculating total price and discount
		Sleep(350);
		
		int discount_PTP;
		if(get_count_of_traveller(TVL_choose)>=3){
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Congratulation! You worked with our agency : [ "<<get_count_of_traveller(TVL_choose)<<" ]\n\n";
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have got 20% discount !!!!\n";
			discount_PTP=result*20/100;
		}else if(get_count_of_traveller(TVL_choose)>=5){
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Congratulation! You worked with our agency : [ "<<get_count_of_traveller(TVL_choose)<<" ]\n\n";
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have got 40% discount !!!!\n";
			discount_PTP=result*40/100;
		}else if(get_count_of_traveller(TVL_choose)>=9){
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Congratulation! You worked with our agency : [ "<<get_count_of_traveller(TVL_choose)<<" ]\n\n";
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have got 40% discount !!!!\n";
			discount_PTP=result*50/100;
		}else{
			cout<<"\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 So u have not got any discount !!!!\n";
			discount_PTP=0;
		}
		PTP_PT_total_price=result-discount_PTP;
		cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";	
		cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Your final total price<cost price> is : * [ "<<PTP_PT_total_price<<" ]*";
		//
		ofstream makepackagetripplan("packagetripplan.txt",ios::app);
		makepackagetripplan<<PTP_id<<' '<<PTP_TVL_id<<' '<<PTP_TVL_f_name<<' '<<PTP_TVL_l_name<<' '<<PTP_TVL_phone<<' '<<PTP_TVL_nrc<<' '<<PTP_PT_id<<' '<<PTP_PT_main_destination<<' '<<PTP_PT_startdate<<' '<<PTP_PT_duration<<' '<<PTP_PT_total_price<<endl;
		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(100);
			}
		cout<<"\n\n\t\t\t\t Congratulation!\n\n\t\t\t\tThe record is saved successfully!!!\n\n\t\t\t\tThe voucher for customer is being produced.....\n\n";
	}else{
		cout<<"\n\n\t\t\t\tOk! U can try again \n\t\t\t\tPress any key to continue.....";
		getch();
		make_trip_plan();
	}
	cout<<"\n\n\t\t\t\tPress any key to continue.....";
	getch();
	make_trip_plan();
}

void view_trip_plan(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME FROM Viewing TRIP PLAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] View Normal Trip Plan\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] View Package Trip Plan\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Back\n\n";
	cout<<"\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	step1_create_trip_plan:
	cout<<"\t\t\t\tEnter your choice :";
	switch(getch()){
		case '1':
			//normal trip plan
			view_normal_trip_plan();
			//
			break;
		case '2':
			//package trip
			view_package_trip_plan();
			//
			break;
		case '3':
			homemenu();
			break;
		default:
			cout<<"\n\n\t\t\t\tInvalid Input!!!!\n\t\t\t\t Please Try Again\n\n";
			goto step1_create_trip_plan;
			break;
	}
	getch();
}

void view_normal_trip_plan(){
	system("cls");
	string NTP_id;
	string NTP_TVL_id;
	string NTP_TVL_f_name;
	string NTP_TVL_l_name;
	string NTP_TVL_phone;
	string NTP_TVL_nrc;
	string NTP_NT_id;
	string NTP_NT_main_destination;
	string NTP_NT_duration;
	string NTP_NT_choose_schedule;
	int NTP_NT_total_price;
	string choice;
	cout<<"\n\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] View ALL Normal Trip Plan\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Search Normal Trip Plan [by ID][NTP_???]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Search Normal Trip Plan [by Traveller ID][TVL_???]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [4] Search Normal Trip Plan [by Normal Trip ID][NT_???]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [5] Back\n\n";
	cout<<"\t\t\t\tEnter your choice : ";
	cin>>choice;
	ifstream viewnormaltripplan("normaltripplan.txt");
	if(choice=="1"){
		system("cls");
		while(viewnormaltripplan>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
			cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip Plan ID : [ "<<NTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<NTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<NTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<NTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<NTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<NTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Normal Trip ID : [ "<<NTP_NT_id<<" ]\n\t\t\t";
					cout<<"Normal Trip Main Destination : [ "<<NTP_NT_main_destination<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NTP_NT_duration<<" ]\n\t\t\t";
					cout<<"Traveller Choosen schedule : [ "<<NTP_NT_choose_schedule<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(NTP)] : [ "<<NTP_NT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_normal_trip_plan();
	}else if(choice=="2"){
		system("cls");
		string search_NTP_id;
		cout<<"\n\n\t\t\t\tWhich normal trip plan do you want to find?\n\t\t\t\t[Please enter normal trip plan ID number(NTP_???)]\n\t\t\t\t";
		cin>>search_NTP_id;
		while(viewnormaltripplan>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
			if(search_NTP_id==NTP_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Normal Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip Plan ID : [ "<<NTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<NTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<NTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<NTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<NTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<NTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Normal Trip ID : [ "<<NTP_NT_id<<" ]\n\t\t\t";
					cout<<"Normal Trip Main Destination : [ "<<NTP_NT_main_destination<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NTP_NT_duration<<" ]\n\t\t\t";
					cout<<"Traveller Choosen schedule : [ "<<NTP_NT_choose_schedule<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(NTP)] : [ "<<NTP_NT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
			}
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_normal_trip_plan();
	}else if(choice=="3"){
		system("cls");
		string search_TVL_id;
		cout<<"\n\n\t\t\t\tWhich normal trip plan do you want to find?\n\t\t\t\t[Please enter traveller ID number(TVL_???)]\n\t\t\t\t";
		cin>>search_TVL_id;
		while(viewnormaltripplan>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
			if(search_TVL_id==NTP_TVL_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Normal Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip Plan ID : [ "<<NTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<NTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<NTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<NTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<NTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<NTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Normal Trip ID : [ "<<NTP_NT_id<<" ]\n\t\t\t";
					cout<<"Normal Trip Main Destination : [ "<<NTP_NT_main_destination<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NTP_NT_duration<<" ]\n\t\t\t";
					cout<<"Traveller Choosen schedule : [ "<<NTP_NT_choose_schedule<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(NTP)] : [ "<<NTP_NT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
			}
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_normal_trip_plan();
	}else if(choice=="4"){
		system("cls");
		string search_NT_id;
		cout<<"\n\n\t\t\t\tWhich normal trip plan do you want to find?\n\t\t\t\t[Please enter Normal Trip ID number(NT_???)]\n\t\t\t\t";
		cin>>search_NT_id;
		while(viewnormaltripplan>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
			if(search_NT_id==NTP_NT_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Normal Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip Plan ID : [ "<<NTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<NTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<NTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<NTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<NTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<NTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Normal Trip ID : [ "<<NTP_NT_id<<" ]\n\t\t\t";
					cout<<"Normal Trip Main Destination : [ "<<NTP_NT_main_destination<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NTP_NT_duration<<" ]\n\t\t\t";
					cout<<"Traveller Choosen schedule : [ "<<NTP_NT_choose_schedule<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(NTP)] : [ "<<NTP_NT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
			}
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_normal_trip_plan();
	}else if(choice=="5"){
		system("cls");
		view_trip_plan();
	}else{
		system("cls");
		view_normal_trip_plan();
	}
}

void view_package_trip_plan(){
	system("cls");
	string PTP_id;
	string PTP_TVL_id;
	string PTP_TVL_f_name;
	string PTP_TVL_l_name;
	string PTP_TVL_phone;
	string PTP_TVL_nrc;
	string PTP_PT_id;
	string PTP_PT_main_destination;
	string PTP_PT_startdate;
	string PTP_PT_duration;
	int PTP_PT_total_price;
	string choice;
	cout<<"\n\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] View ALL Package Trip Plan\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Search Package Trip Plan [by ID][PTP_???]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Search Package Trip Plan [by Traveller ID][TVL_???]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [4] Search Package Trip Plan [by Package Trip ID][PT_???]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [5] Back\n\n";
	cout<<"\t\t\t\tEnter your choice : ";
	cin>>choice;
	ifstream viewpackagetripplan("packagetripplan.txt");
	if(choice=="1"){
		system("cls");
		while(viewpackagetripplan>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
			cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tPackage Trip Plan ID : [ "<<PTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<PTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<PTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<PTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<PTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<PTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Package Trip ID : [ "<<PTP_PT_id<<" ]\n\t\t\t";
					cout<<"Package Trip Main Destination : [ "<<PTP_PT_main_destination<<" ]\n\t\t\t";
					cout<<"Package Trip Start Date : [ "<<PTP_PT_startdate<<" ]\n\t\t\t";
					cout<<"Package Trip Duration : [ "<<PTP_PT_duration<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(PTP)] : [ "<<PTP_PT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_package_trip_plan();
	}else if(choice=="2"){
		system("cls");
		string search_PTP_id;
		cout<<"\n\n\t\t\t\tWhich package trip plan do you want to find?\n\t\t\t\t[Please enter package trip plan ID number(PTP_???)]\n\t\t\t\t";
		cin>>search_PTP_id;
		while(viewpackagetripplan>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
			if(search_PTP_id==PTP_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tPackage Trip Plan ID : [ "<<PTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<PTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<PTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<PTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<PTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<PTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Package Trip ID : [ "<<PTP_PT_id<<" ]\n\t\t\t";
					cout<<"Package Trip Main Destination : [ "<<PTP_PT_main_destination<<" ]\n\t\t\t";
					cout<<"Package Trip Start Date : [ "<<PTP_PT_startdate<<" ]\n\t\t\t";
					cout<<"Package Trip Duration : [ "<<PTP_PT_duration<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(PTP)] : [ "<<PTP_PT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";	
			}
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_package_trip_plan();
	}else if(choice=="3"){
		system("cls");
		string search_TVL_id;
		cout<<"\n\n\t\t\t\tWhich package trip plan do you want to find?\n\t\t\t\t[Please enter traveller ID number(TVL_???)]\n\t\t\t\t";
		cin>>search_TVL_id;
		while(viewpackagetripplan>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
			if(search_TVL_id==PTP_TVL_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tPackage Trip Plan ID : [ "<<PTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<PTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<PTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<PTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<PTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<PTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Package Trip ID : [ "<<PTP_PT_id<<" ]\n\t\t\t";
					cout<<"Package Trip Main Destination : [ "<<PTP_PT_main_destination<<" ]\n\t\t\t";
					cout<<"Package Trip Start Date : [ "<<PTP_PT_startdate<<" ]\n\t\t\t";
					cout<<"Package Trip Duration : [ "<<PTP_PT_duration<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(PTP)] : [ "<<PTP_PT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";	
			}
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_package_trip_plan();
	}else if(choice=="4"){
		system("cls");
		string search_PT_id;
		cout<<"\n\n\t\t\t\tWhich package trip plan do you want to find?\n\t\t\t\t[Please enter package trip ID number(PT_???)]\n\t\t\t\t";
		cin>>search_PT_id;
		while(viewpackagetripplan>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
			if(search_PT_id==PTP_PT_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tPackage Trip Plan ID : [ "<<PTP_id<<" ]\n\t\t\t";
					cout<<"Traveller ID : [ "<<PTP_TVL_id<<" ]\n\t\t\t";
					cout<<"Traveller First Name : [ "<<PTP_TVL_f_name<<" ]\n\t\t\t";
					cout<<"Traveller Last Name : [ "<<PTP_TVL_l_name<<" ]\n\t\t\t";
					cout<<"Traveller Phone Number : [ "<<PTP_TVL_phone<<" ]\n\t\t\t";
					cout<<"Traveller NRC : [ "<<PTP_TVL_nrc<<" ]\n\t\t\t";
					cout<<"Package Trip ID : [ "<<PTP_PT_id<<" ]\n\t\t\t";
					cout<<"Package Trip Main Destination : [ "<<PTP_PT_main_destination<<" ]\n\t\t\t";
					cout<<"Package Trip Start Date : [ "<<PTP_PT_startdate<<" ]\n\t\t\t";
					cout<<"Package Trip Duration : [ "<<PTP_PT_duration<<" ]\n\t\t\t";
					cout<<"Cost [Total Price(PTP)] : [ "<<PTP_PT_total_price<<" ]\n\t\t\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";	
			}
		}
		cout<<"\n\npress any key to continue...";
		getch();
		view_package_trip_plan();
	}else if(choice=="5"){
		system("cls");
		view_trip_plan();
	}else{
		system("cls");
		view_package_trip_plan();
	}
}

void delete_trip_plan(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME FROM DELETE TRIP PLAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] Delete normal Trip plan \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Delete package Trip plan \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Back\n\n";
	cout<<"\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	step1_create_trip:
	cout<<"\t\t\t\tEnter your choice :";
	switch(getch()){
		case '1':
			//normal trip
			delete_normal_trip_plan();
			//
			break;
		case '2':
			//package trip
			delete_package_trip_plan();
			//
			break;
		case '3':
			homemenu();
			break;
		default:
			cout<<"\n\n\t\t\t\tInvalid Input!!!!\n\t\t\t\t Please Try Again\n\n";
			goto step1_create_trip;
			break;
	}
	getch();
}

void delete_normal_trip_plan(){
//	system("cls");
//	cout<<"\n\N\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SELECT PLAN TO DELETE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
//	Sleep(300);
//	string NTP_id;
//	string NTP_TVL_id;
//	string NTP_TVL_f_name;
//	string NTP_TVL_l_name;
//	string NTP_TVL_phone;
//	string NTP_TVL_nrc;
//	string NTP_NT_id;
//	string NTP_NT_main_destination;
//	string NTP_NT_duration;
//	string NTP_NT_choose_schedule;
//	int NTP_NT_total_price;
//	cout<<endl<<endl;
//	Sleep(400);
//	cout<<"__________________________________________________________\n\n";
//	char b[80]="\tALL NORMAL TRIPS Plan OF THE AGENCY ARE AS FOLLOWS";
//	for(int i=0;i<60;i++){
//		cout<<b[i];
//		Sleep(10);
//	}
//	Sleep(200);
//	cout<<"\n__________________________________________________________\n\n";
//	ifstream viewnormaltripplan("normaltripplan.txt");
//	int count_normal=0;
//	while(viewnormaltripplan>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
//			cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
//					cout<<"\t\t\tNormal Trip Plan ID : [ "<<NTP_id<<" ]\n\t\t\t";
//					cout<<"Traveller ID : [ "<<NTP_TVL_id<<" ]\n\t\t\t";
//					cout<<"Traveller First Name : [ "<<NTP_TVL_f_name<<" ]\n\t\t\t";
//					cout<<"Traveller Last Name : [ "<<NTP_TVL_l_name<<" ]\n\t\t\t";
//					cout<<"Traveller Phone Number : [ "<<NTP_TVL_phone<<" ]\n\t\t\t";
//					cout<<"Traveller NRC : [ "<<NTP_TVL_nrc<<" ]\n\t\t\t";
//					cout<<"Normal Trip ID : [ "<<NTP_NT_id<<" ]\n\t\t\t";
//					cout<<"Normal Trip Main Destination : [ "<<NTP_NT_main_destination<<" ]\n\t\t\t";
//					cout<<"Normal Trip Duration : [ "<<NTP_NT_duration<<" ]\n\t\t\t";
//					cout<<"Traveller Choosen schedule : [ "<<NTP_NT_choose_schedule<<" ]\n\t\t\t";
//					cout<<"Cost [Total Price(NTP)] : [ "<<NTP_NT_total_price<<" ]\n\t\t\t";
//					cout<<"-------------------------------------*----------------------------------------\n\n";
//					count_normal++;
//	}
//	line();
//	cout<<endl;
//	star();
//	cout<<setw(43)<<"Count of Normal Trip Plan : [ "<<count_normal<<" ]\n";
//	star();
//	cout<<endl<<endl;
//	//delete normal trip plan
//	int j;
//	cout<<"\t\t\t\t How many record do u want to delete?\n\t\t\t\t";
//	cin>>j;
//	string d_NTP_id;
//	for(int i=1;i<=j;i++){
//		cout<<"\n\n\t\t\t\t Which record do u want to delete[Enter record ID] : ";
//		cin>>d_NTP_id;
//		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
//			for(int i=0;i<16;i++){
//				cout<<"\xDB\xDB";
//				Sleep(100);
//			}
//		cout<<endl;
//		ifstream viewnormaltripplan_2("normaltripplan.txt");
//		while(viewnormaltripplan_2>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
//			ofstream addtemp("temp4.txt",ios::app);
//			if(d_NTP_id!=NTP_id){
//				addtemp<<NTP_id<<' '<<NTP_TVL_id<<' '<<NTP_TVL_f_name<<' '<<NTP_TVL_l_name<<' '<<NTP_TVL_phone<<' '<<NTP_TVL_nrc<<' '<<NTP_NT_id<<' '<<NTP_NT_main_destination<<' '<<NTP_NT_duration<<' '<<NTP_NT_choose_schedule<<' '<<NTP_NT_total_price<<endl;
//			}
//			addtemp.close();
//		}
//		viewnormaltripplan.close();
//		viewnormaltripplan_2.close();
//		remove("normaltripplan.txt");
//		rename("temp4.txt","normaltripplan.txt");
//		
//		cout<<"__________________________________________________________\n\n";
//		char b[80]="\tALL NORMAL TRIPS Plan OF THE AGENCY ARE AS FOLLOWS";
//		for(int i=0;i<60;i++){
//			cout<<b[i];
//			Sleep(10);
//		}
//		Sleep(200);
//		cout<<"\n__________________________________________________________\n\n";
//		ifstream viewnormaltripplan("normaltripplan.txt");
//		int count_normal=0;
//		while(viewnormaltripplan>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
//				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
//						cout<<"\t\t\tNormal Trip Plan ID : [ "<<NTP_id<<" ]\n\t\t\t";
//						cout<<"Traveller ID : [ "<<NTP_TVL_id<<" ]\n\t\t\t";
//						cout<<"Traveller First Name : [ "<<NTP_TVL_f_name<<" ]\n\t\t\t";
//						cout<<"Traveller Last Name : [ "<<NTP_TVL_l_name<<" ]\n\t\t\t";
//						cout<<"Traveller Phone Number : [ "<<NTP_TVL_phone<<" ]\n\t\t\t";
//						cout<<"Traveller NRC : [ "<<NTP_TVL_nrc<<" ]\n\t\t\t";
//						cout<<"Normal Trip ID : [ "<<NTP_NT_id<<" ]\n\t\t\t";
//						cout<<"Normal Trip Main Destination : [ "<<NTP_NT_main_destination<<" ]\n\t\t\t";
//						cout<<"Normal Trip Duration : [ "<<NTP_NT_duration<<" ]\n\t\t\t";
//						cout<<"Traveller Choosen schedule : [ "<<NTP_NT_choose_schedule<<" ]\n\t\t\t";
//						cout<<"Cost [Total Price(NTP)] : [ "<<NTP_NT_total_price<<" ]\n\t\t\t";
//						cout<<"-------------------------------------*----------------------------------------\n\n";
//						count_normal++;
//		}
//		line();
//		cout<<endl;
//		star();
//		cout<<setw(43)<<"Count of Normal Trip Plan : [ "<<count_normal<<" ]\n";
//		star();
//	}
//	
//	cout<<endl<<endl;
//	cout<<"press any key to exit.....";
//	getch();
//	delete_trip_plan();
	system("cls");
	cout<<"\n\n\t\t\t\t Opening normal trip plan file.....\n\n\t\t\t\t";
	for(int i=0;i<10;i++){
		cout<<"\xDB";
		Sleep(80);
		cout<<"\xB2";
	}
	string url="normaltripplan.txt";
	ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
	system("cls");
	cout<<"press any key to continue....";
	getch();
	delete_trip_plan();
}

void delete_package_trip_plan(){
//	system("cls");
//	cout<<"\n\N\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SELECT PLAN TO DELETE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
//	Sleep(300);
//	string PTP_id;
//	string PTP_TVL_id;
//	string PTP_TVL_f_name;
//	string PTP_TVL_l_name;
//	string PTP_TVL_phone;
//	string PTP_TVL_nrc;
//	string PTP_PT_id;
//	string PTP_PT_main_destination;
//	string PTP_PT_startdate;
//	string PTP_PT_duration;
//	int PTP_PT_total_price;
//	cout<<endl<<endl;
//	Sleep(400);
//	cout<<"__________________________________________________________\n\n";
//	char b[80]="\tALL PACKAGE TRIPS Plan OF THE AGENCY ARE AS FOLLOWS";
//	for(int i=0;i<60;i++){
//		cout<<b[i];
//		Sleep(10);
//	}
//	Sleep(200);
//	cout<<"\n__________________________________________________________\n\n";
//	ifstream viewpackagetripplan("packagetripplan.txt");
//	int count_package=0;
//	while(viewpackagetripplan>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
//			cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
//					cout<<"\t\t\tPackage Trip Plan ID : [ "<<PTP_id<<" ]\n\t\t\t";
//					cout<<"Traveller ID : [ "<<PTP_TVL_id<<" ]\n\t\t\t";
//					cout<<"Traveller First Name : [ "<<PTP_TVL_f_name<<" ]\n\t\t\t";
//					cout<<"Traveller Last Name : [ "<<PTP_TVL_l_name<<" ]\n\t\t\t";
//					cout<<"Traveller Phone Number : [ "<<PTP_TVL_phone<<" ]\n\t\t\t";
//					cout<<"Traveller NRC : [ "<<PTP_TVL_nrc<<" ]\n\t\t\t";
//					cout<<"Package Trip ID : [ "<<PTP_PT_id<<" ]\n\t\t\t";
//					cout<<"Package Trip Main Destination : [ "<<PTP_PT_main_destination<<" ]\n\t\t\t";
//					cout<<"Package Trip Start Date : [ "<<PTP_PT_startdate<<" ]\n\t\t\t";
//					cout<<"Package Trip Duration : [ "<<PTP_PT_duration<<" ]\n\t\t\t";
//					cout<<"Cost [Total Price(PTP)] : [ "<<PTP_PT_total_price<<" ]\n\t\t\t";
//					cout<<"-------------------------------------*----------------------------------------\n\n";
//				count_package++;
//	}
//	line();
//	cout<<endl;
//	star();
//	cout<<setw(43)<<"Count of PACKAGE Trip Plan : [ "<<count_package<<" ]\n";
//	star();
//	cout<<endl<<endl;
//	//delete normal trip plan
//	int j;
//	cout<<"\t\t\t\t How many record do u want to delete?\n\t\t\t\t";
//	cin>>j;
//	string d_PTP_id;
//	for(int i=1;i<=j;i++){
//		cout<<"\n\n\t\t\t\t Which record do u want to delete[Enter record ID] : ";
//		cin>>d_PTP_id;
//		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
//			for(int i=0;i<16;i++){
//				cout<<"\xDB\xDB";
//				Sleep(100);
//			}
//		cout<<endl;
//		ifstream viewpackagetripplan_1("packagetripplan.txt");
//		while(viewpackagetripplan_1>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
//			ofstream addtemp("temp5.txt",ios::app);
//			if(d_PTP_id!=PTP_id){
//				addtemp<<PTP_id<<' '<<PTP_TVL_id<<' '<<PTP_TVL_f_name<<' '<<PTP_TVL_l_name<<' '<<PTP_TVL_phone<<' '<<PTP_TVL_nrc<<' '<<PTP_PT_id<<' '<<PTP_PT_main_destination<<' '<<PTP_PT_startdate<<' '<<PTP_PT_duration<<' '<<PTP_PT_total_price<<endl;
//			}
//			addtemp.close();
//		}
//		viewpackagetripplan.close();
//		viewpackagetripplan_1.close();
//		remove("packagetripplan.txt");
//		rename("temp5.txt","packagetripplan.txt");
//		
//		cout<<"__________________________________________________________\n\n";
//		char b[80]="\tALL PACKAGE TRIPS Plan OF THE AGENCY ARE AS FOLLOWS";
//		for(int i=0;i<60;i++){
//			cout<<b[i];
//			Sleep(10);
//		}
//		Sleep(200);
//		
//		cout<<"\n__________________________________________________________\n\n";
//		ifstream viewpackagetripplan_3("packagetripplan.txt");
//		int count_package1=0;
//			while(viewpackagetripplan_3>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
//					cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip Plan found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
//							cout<<"\t\t\tPackage Trip Plan ID : [ "<<PTP_id<<" ]\n\t\t\t";
//							cout<<"Traveller ID : [ "<<PTP_TVL_id<<" ]\n\t\t\t";
//							cout<<"Traveller First Name : [ "<<PTP_TVL_f_name<<" ]\n\t\t\t";
//							cout<<"Traveller Last Name : [ "<<PTP_TVL_l_name<<" ]\n\t\t\t";
//							cout<<"Traveller Phone Number : [ "<<PTP_TVL_phone<<" ]\n\t\t\t";
//							cout<<"Traveller NRC : [ "<<PTP_TVL_nrc<<" ]\n\t\t\t";
//							cout<<"Package Trip ID : [ "<<PTP_PT_id<<" ]\n\t\t\t";
//							cout<<"Package Trip Main Destination : [ "<<PTP_PT_main_destination<<" ]\n\t\t\t";
//							cout<<"Package Trip Start Date : [ "<<PTP_PT_startdate<<" ]\n\t\t\t";
//							cout<<"Package Trip Duration : [ "<<PTP_PT_duration<<" ]\n\t\t\t";
//							cout<<"Cost [Total Price(PTP)] : [ "<<PTP_PT_total_price<<" ]\n\t\t\t";
//							cout<<"-------------------------------------*----------------------------------------\n\n";
//						count_package1++;
//			}
//			line();
//			cout<<endl;
//			star();
//			cout<<setw(43)<<"Count of PACKAGE Trip Plan : [ "<<count_package1<<" ]\n";
//			star();
//	}
//	
//	cout<<endl<<endl;
//	cout<<"press any key to exit.....";
//	getch();
//	delete_trip_plan();
	system("cls");
	cout<<"\n\n\t\t\t\t Opening package trip plan file.....\n\n\t\t\t\t";
	for(int i=0;i<10;i++){
		cout<<"\xDB";
		Sleep(80);
		cout<<"\xB2";
	}
	string url="packagetripplan.txt";
	ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
	system("cls");
	cout<<"press any key to continue....";
	getch();
	delete_trip_plan();
}

void create_trip(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME FROM CREATE TRIP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] Normal Trip\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Package Trip\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Back\n\n";
	cout<<"\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	step1_create_trip:
	cout<<"\t\t\t\tEnter your choice :";
	switch(getch()){
		case '1':
			//normal trip
			create_normal_trip();
			//
			break;
		case '2':
			//package trip
			create_package_trip();
			//
			break;
		case '3':
			homemenu();
			break;
		default:
			cout<<"\n\n\t\t\t\tInvalid Input!!!!\n\t\t\t\t Please Try Again\n\n";
			goto step1_create_trip;
			break;
	}
}
//create normal trip
void create_normal_trip(){
	system("cls");
	string NT_id;
	string NT_destination;
	string NT_duration;
	string NT_schedule1;
	string NT_schedule2;
	string NT_schedule3;
	int price;
	cout<<endl<<endl<<endl<<endl;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CREATE NORMAL TRIP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\n\t\t\t\t[Please do not use 'space' in all of your input]\n\t\t\t\t[instead of space, u can use 'underscores']\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Normal Trip ID [e.g NT_001]: ";
	fflush(stdin);
	cin>>NT_id;
	fflush(stdin);
	cout<<"\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Trip Destination [e.g Bagan]: ";
	fflush(stdin);
	cin>>NT_destination;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Trip Duration [e.g 6_hours]: ";
	fflush(stdin);
	cin>>NT_duration;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter first Schedule of trip [e.g 6:00AM_Tuesday]: ";
	fflush(stdin);
	cin>>NT_schedule1;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter second Schedule of trip [e.g 8:00PM_Thursday]: ";
	fflush(stdin);
	cin>>NT_schedule2;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter third Schedule of trip [e.g 9:00PM_Friday]: ";
	fflush(stdin);
	cin>>NT_schedule3;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Price(Trip cost) [e.g 30000]: ";
	fflush(stdin);
	cin>>price;
	fflush(stdin);
	cout<<" \n\n";
	string sure;
	cout<<"\t\t\t\tAre you sure to save this trip ?[yes/no] : ";
	cin>>sure;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
	if(sure=="yes"){
		ofstream createnormaltrip("normaltrip.txt",ios::app);
		createnormaltrip<<NT_id<<' '<<NT_destination<<' '<<NT_duration<<' '<<NT_schedule1<<' '<<NT_schedule2<<' '<<NT_schedule3<<' '<<price<<endl;
		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(100);
			}
		cout<<"\n\n\t\t\t\t Congratulation!\n\n\t\t\t\tThe record is saved successfully!!!\n\n";
		cout<<"\t\t\t\tPress any key to continue!!!";
		getch();
		create_trip();
	}else{
		system("cls");
		cout<<"Ok You Can Try Again";
		create_trip();
	}
}

//create package trip
void create_package_trip(){
	system("cls");
	string PT_id;
	string PT_main_destination;
	string PT_other_destinations;
	string PT_start_date;
	string PT_duration;
	string PT_hotel_services;
	int PT_hotel_charges;
	int PT_food_charges;
	int PT_additional_charges;
	int price;
	cout<<endl<<endl<<endl<<endl;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CREATE PACKAGE TRIP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\n\t\t\t\t[Please do not use 'space' in all of your input]\n\t\t\t\t[instead of space, u can use 'underscores']\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Package Trip ID [e.g PT_001]: ";
	fflush(stdin);
	cin>>PT_id;
	fflush(stdin);
	cout<<"\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Main Destination [e.g Mandaly]: ";
	fflush(stdin);
	cin>>PT_main_destination;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Other Destinations [e.g MandalayPalace_MountainPagoda_MountPopa]: ";
	fflush(stdin);
	cin>>PT_other_destinations;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Start date and time of trip [e.g 6:00AM_Tuesday_21/3/2019]: ";
	fflush(stdin);
	cin>>PT_start_date;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Duration of trip [e.g 5_days]: ";
	fflush(stdin);
	cin>>PT_duration;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Conntected hotel [e.g Golden_Palace_Hotel]: ";
	fflush(stdin);
	cin>>PT_hotel_services;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Hotel Charges(for hotel services) [e.g 100000]: ";
	fflush(stdin);
	cin>>PT_hotel_charges;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Food Charges(for food services) [e.g 50000]: ";
	fflush(stdin);
	cin>>PT_food_charges;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Additional Charges [e.g 30000]: ";
	fflush(stdin);
	cin>>PT_additional_charges;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter Price [e.g 80000]: ";
	fflush(stdin);
	cin>>price;
	fflush(stdin);
	cout<<" \n\n";
	string sure;
	cout<<"\t\t\t\tAre you sure to save this trip ?[yes/no] : ";
	cin>>sure;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
	if(sure=="yes"){
		ofstream createnormaltrip("packagetrip.txt",ios::app);
		createnormaltrip<<PT_id<<' '<<PT_main_destination<<' '<<PT_other_destinations<<' '<<PT_start_date<<' '<<PT_duration<<' '<<PT_hotel_services<<' '<<PT_hotel_charges<<' '<<PT_food_charges<<' '<<PT_additional_charges<<' '<<price<<endl;
		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(100);
			}
		cout<<"\n\n\t\t\t\t Congratulation!\n\n\t\t\t\tYou have been created a new package trip!!!\n\n";
		cout<<"\t\t\t\tPress any key to continue!!!";
		getch();
		create_trip();
	}else{
		system("cls");
		cout<<"Ok You Can Try Again";
		create_trip();
	}
}

void view_trip(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME FROM VIEW TRIP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] View All Trip\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Search Normal Trip\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Search Package\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [4] Back\n\n";
	cout<<"\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\tEnter your choice :";
	switch(getch()){
		case '1':
			//normal trip
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t\t\tProcessing\n\n\t\t\t\t\t";
				for(int i=0;i<12;i++){
				cout<<" . ";
				Sleep(200);
			}
			view_all_trip();
			//
			break;
		case '2':
			//find normal trip
			search_normal_trip();
			//
			break;
		case '3':
			//find package trip
			search_package_trip();
			break;
		case '4':
			homemenu();
			break;
		default:
			cout<<"\n\n\t\t\t\tInvalid Input!!!!\n\t\t\t\t Please Try Again\n\n";
			view_trip();
			break;
	}
}

//view all trip
void view_all_trip(){
	system("cls");
	//for normal trip all view
	string NT_id;
	string NT_destination;
	string NT_duration;
	string NT_schedule1;
	string NT_schedule2;
	string NT_schedule3;
	int NT_price;
	cout<<endl<<endl;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char b[80]="\tALL NORMAL TRIPS OF THE AGENCY ARE AS FOLLOWS";
	for(int i=0;i<60;i++){
		cout<<b[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream readnormaltrip("normaltrip.txt");
	line();
	cout<<" "<<"Normal Trip ID"<<setw(20)<<"Destination Place"<<setw(15)<<"Duration"<<setw(20)<<"Schedule (1)"<<setw(20)<<"Schedule (2)"<<setw(20)<<"Schedule (3)"<<setw(21)<<"Price for trip"<<endl;
	line();
	int count_normal=0;
	while(readnormaltrip>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
		cout<<" "<<NT_id<<setw(26)<<NT_destination<<setw(16)<<NT_duration<<setw(22)<<NT_schedule1<<setw(20)<<NT_schedule2<<setw(20)<<NT_schedule3<<setw(19)<<NT_price<<endl<<endl;
		count_normal++;	
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Normal Trip : [ "<<count_normal<<" ]\n";
	star();
	cout<<endl<<endl;
	//for package trip all view
	
	string PT_id;
	string PT_main_destination;
	string PT_other_destinations;
	string PT_start_date;
	string PT_duration;
	string PT_hotel_services;
	int PT_hotel_charges;
	int PT_food_charges;
	int PT_additional_charges;
	int price;
	cout<<endl<<endl;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char a[80]="\t*ALL PACKAGE TRIPS OF THE AGENCY ARE AS FOLLOWS*";
	for(int i=0;i<60;i++){
		cout<<a[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream readpackagetrip("packagetrip.txt");
	line();
	cout<<" "<<"Package ID"<<setw(16)<<"Main Place"<<setw(25)<<"Other Places"<<setw(25)<<"Start Date"<<setw(14)<<"              Duration"<<setw(33)<<"Hotel and its charges"<<"                  Food charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Additional charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Price"<<endl;
	line();
	int count_package=0;
	while(readpackagetrip>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
		cout<<" "<<PT_id<<setw(18)<<PT_main_destination<<setw(28)<<PT_other_destinations<<setw(30)<<PT_start_date<<setw(18)<<PT_duration<<setw(25)<<PT_hotel_services<<' '<<PT_hotel_charges<<setw(20)<<PT_food_charges<<" + "<<PT_additional_charges<<" + "<<price<<endl<<endl;
		count_package++;	
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Package Trip : [ "<<count_package<<" ]\n";
	star();
	
	cout<<"\n\tPress any key to back............";
	getch();
	view_trip();
}

//search_normal_trip
void search_normal_trip(){
	system("cls");
	string NT_id;
	string NT_destination;
	string NT_duration;
	string NT_schedule1;
	string NT_schedule2;
	string NT_schedule3;
	int NT_price;
	char choice;
	cout<<"\n\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] Search normal trip[by ID]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Search normal trip[by Destination]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Search normal trip[by price]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [4] Back\n\n";
	cout<<"\t\t\t\tEnter your choice : ";
	cin>>choice;
	ifstream searchNT("normaltrip.txt");
	if(choice=='1'){
		step1_read_NT:
			string NT_id_read;
			cout<<"\n\n\t\t\t\tWhich trip do you want to find?\n\t\t\t\t[Please enter trip ID number(NT_???)]\n\t\t\t\t";
			cin>>NT_id_read;
			while(searchNT>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
				if(NT_id_read==NT_id){
					cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip ID : [ "<<NT_id<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NT_destination<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NT_duration<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 1 : [ "<<NT_schedule1<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 2 : [ "<<NT_schedule2<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 3 : [ "<<NT_schedule3<<" ]\n\t\t\t";
					cout<<"Normal Trip Price : [ "<<NT_price<<" ]\n\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
				}	
			}
			cout<<"\t\t\tPress any key to continue....";
			getch();
			search_normal_trip();
	}else if(choice=='2'){
		string NT_destination_read;
		cout<<"\n\n\t\t\t\tWhich trip do you want to find?\n\t\t\t\t[Please enter trip destination]\n\t\t\t\t";
		cin>>NT_destination_read;
		while(searchNT>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
				if(NT_destination_read==NT_destination){
					cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip ID : [ "<<NT_id<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NT_destination<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NT_duration<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 1 : [ "<<NT_schedule1<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 2 : [ "<<NT_schedule2<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 3 : [ "<<NT_schedule3<<" ]\n\t\t\t";
					cout<<"Normal Trip Price : [ "<<NT_price<<" ]\n\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
				}	
			}
			cout<<"\t\t\tPress any key to continue....";
			getch();
			search_normal_trip();
	}else if(choice=='3'){
		int NT_price_read;
		cout<<"\n\n\t\t\t\tWhich trip do you want to find?\n\t\t\t\t[Please enter trip cost(if u know)]\n\t\t\t\t";
		cin>>NT_price_read;
		while(searchNT>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
				if(NT_price_read==NT_price){
					cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip ID : [ "<<NT_id<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NT_destination<<" ]\n\t\t\t";
					cout<<"Normal Trip Duration : [ "<<NT_duration<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 1 : [ "<<NT_schedule1<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 2 : [ "<<NT_schedule2<<" ]\n\t\t\t";
					cout<<"Normal Trip Schedule 3 : [ "<<NT_schedule3<<" ]\n\t\t\t";
					cout<<"Normal Trip Price : [ "<<NT_price<<" ]\n\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
				}	
			}
			cout<<"\t\t\tPress any key to continue....";
			getch();
			search_normal_trip();
	}else if(choice=='4'){
		system("cls");
		view_trip();
	}else{
		system("cls");
		view_trip();
	}
	
}

//for serarching package trip
void search_package_trip(){
	system("cls");
	string PT_id;
	string PT_main_destination;
	string PT_other_destinations;
	string PT_start_date;
	string PT_duration;
	string PT_hotel_services;
	int PT_hotel_charges;
	int PT_food_charges;
	int PT_additional_charges;
	int price;
	char choice;
	cout<<"\n\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] Search Package trip[by ID]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Search Package trip[by Main Destination]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Search package trip[by duration]\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [4] Back\n\n";
	cout<<"\t\t\t\tEnter your choice : ";
	cin>>choice;
	ifstream searchPT("packagetrip.txt");
	if(choice=='1'){
		string PT_id_read;
		cout<<"\n\n\t\t\t\tWhich package trip do you want to find?\n\t\t\t\t[Please enter trip ID number(PT_???)]\n\t\t\t\t";
		cin>>PT_id_read;
		while(searchPT>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
			if(PT_id_read==PT_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
				cout<<"\t\t\tNormal Trip ID : [ "<<PT_id<<" ]\n\t\t\t";
				cout<<"Trip Main Destination : [ "<<PT_main_destination<<" ]\n\t\t\t";
				cout<<"Other Places : [ "<<PT_other_destinations<<" ]\n\t\t\t";
				cout<<"Start Date: [ "<<PT_start_date<<" ]\n\t\t\t";
				cout<<"Package Trip Duration: [ "<<PT_duration<<" ]\n\t\t\t";
				cout<<"Connected Hotel[Hotel Service] : [ "<<PT_hotel_services<<" ]\n\t\t\t";
				cout<<"Hotel Service charges : [ "<<PT_hotel_charges<<" ]\n\t\t\t";
				cout<<"Food Service charges : [ "<<PT_food_charges<<" ]\n\t\t\t";
				cout<<"Additional charges : [ "<<PT_additional_charges<<" ]\n\t\t\t";
				cout<<"Main Price[Only for Trip] : [ "<<price<<" ]\n\t";
				cout<<"-------------------------------------*----------------------------------------\n\n";
				}	
			}
			cout<<"\t\t\tPress any key to continue....";
			getch();
			search_package_trip();
	}else if(choice=='2'){
		string PT_main_destination_read;
		cout<<"\n\n\t\t\t\tWhich package trip do you want to find?\n\t\t\t\t[Please enter trip main destination]\n\t\t\t\t";
		cin>>PT_main_destination_read;
		while(searchPT>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
				if(PT_main_destination_read==PT_main_destination){
					cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip ID : [ "<<PT_id<<" ]\n\t\t\t";
					cout<<"Trip Main Destination : [ "<<PT_main_destination<<" ]\n\t\t\t";
					cout<<"Other Places : [ "<<PT_other_destinations<<" ]\n\t\t\t";
					cout<<"Start Date: [ "<<PT_start_date<<" ]\n\t\t\t";
					cout<<"Package Trip Duration: [ "<<PT_duration<<" ]\n\t\t\t";
					cout<<"Connected Hotel[Hotel Service] : [ "<<PT_hotel_services<<" ]\n\t\t\t";
					cout<<"Hotel Service charges : [ "<<PT_hotel_charges<<" ]\n\t\t\t";
					cout<<"Food Service charges : [ "<<PT_food_charges<<" ]\n\t\t\t";
					cout<<"Additional charges : [ "<<PT_additional_charges<<" ]\n\t\t\t";
					cout<<"Main Price[Only for Trip] : [ "<<price<<" ]\n\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
				}	
			}
			cout<<"\t\t\tPress any key to continue....";
			getch();
			search_package_trip();
	}else if(choice=='3'){
		string PT_duration_read;
		cout<<"\n\n\t\t\t\tWhich trip do you want to find?\n\t\t\t\t[Please enter trip duration(if u know)]\n\t\t\t\t";
		cin>>PT_duration_read;
		while(searchPT>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
				if(PT_duration_read==PT_duration){
					cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Trip found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
					cout<<"\t\t\tNormal Trip ID : [ "<<PT_id<<" ]\n\t\t\t";
					cout<<"Trip Main Destination : [ "<<PT_main_destination<<" ]\n\t\t\t";
					cout<<"Other Places : [ "<<PT_other_destinations<<" ]\n\t\t\t";
					cout<<"Start Date: [ "<<PT_start_date<<" ]\n\t\t\t";
					cout<<"Package Trip Duration: [ "<<PT_duration<<" ]\n\t\t\t";
					cout<<"Connected Hotel[Hotel Service] : [ "<<PT_hotel_services<<" ]\n\t\t\t";
					cout<<"Hotel Service charges : [ "<<PT_hotel_charges<<" ]\n\t\t\t";
					cout<<"Food Service charges : [ "<<PT_food_charges<<" ]\n\t\t\t";
					cout<<"Additional charges : [ "<<PT_additional_charges<<" ]\n\t\t\t";
					cout<<"Main Price[Only for Trip] : [ "<<price<<" ]\n\t";
					cout<<"-------------------------------------*----------------------------------------\n\n";
				}	
			}
			cout<<"\t\t\tPress any key to continue....";
			getch();
			search_package_trip();
	}else if(choice=='4'){
		system("cls");
		view_trip();
	}else{
		system("cls");
		view_trip();
	}
}

void delete_trip(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME FROM DELETE TRIP \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] DELETE NORMAL Trip\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] DELETE PACKAGE Trip\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Back\n\n";
	cout<<"\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	step1_create_trip:
	cout<<"\t\t\t\tEnter your choice :";
	switch(getch()){
		case '1':
			//normal trip
			delete_normal_trip();
			//
			break;
		case '2':
			//package trip
			delete_package_trip();
			//
			break;
		case '3':
			homemenu();
			break;
		default:
			cout<<"\n\n\t\t\t\tInvalid Input!!!!\n\t\t\t\t Please Try Again\n\n";
			goto step1_create_trip;
			break;
	}
	getch();
}

void delete_normal_trip(){
//	system("cls");
//	cout<<"\n\N\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SELECT RECORD TO DELETE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
//	Sleep(300);
//	string NT_id;
//	string NT_destination;
//	string NT_duration;
//	string NT_schedule1;
//	string NT_schedule2;
//	string NT_schedule3;
//	int NT_price;
//	cout<<endl<<endl;
//	Sleep(400);
//	cout<<"__________________________________________________________\n\n";
//	char b[80]="\tALL NORMAL TRIPS OF THE AGENCY ARE AS FOLLOWS";
//	for(int i=0;i<60;i++){
//		cout<<b[i];
//		Sleep(10);
//	}
//	Sleep(200);
//	cout<<"\n__________________________________________________________\n\n";
//	ifstream readnormaltrip("normaltrip.txt");
//	line();
//	cout<<" "<<"Normal Trip ID"<<setw(20)<<"Destination Place"<<setw(15)<<"Duration"<<setw(20)<<"Schedule (1)"<<setw(20)<<"Schedule (2)"<<setw(20)<<"Schedule (3)"<<setw(21)<<"Price for trip"<<endl;
//	line();
//	int count_normal=0;
//	while(readnormaltrip>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
//		cout<<" "<<NT_id<<setw(26)<<NT_destination<<setw(16)<<NT_duration<<setw(22)<<NT_schedule1<<setw(20)<<NT_schedule2<<setw(20)<<NT_schedule3<<setw(19)<<NT_price<<endl<<endl;
//		count_normal++;	
//	}
//	line();
//	cout<<endl;
//	star();
//	cout<<setw(43)<<"Count of Normal Trip : [ "<<count_normal<<" ]\n";
//	star();
//	cout<<endl<<endl;
//	//delete normal trip
//	int j;
//	cout<<"\t\t\t\t How many record do u want to delete?\n\t\t\t\t";
//	cin>>j;
//	string d_NT_id;
//	for(int i=1;i<=j;i++){
//		cout<<"\n\n\t\t\t\t Which record do u want to delete[Enter record ID] : ";
//		cin>>d_NT_id;
//		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
//			for(int i=0;i<16;i++){
//				cout<<"\xDB\xDB";
//				Sleep(100);
//			}
//		cout<<endl;
//		ifstream readnormaltrip_2("normaltrip.txt");
//		while(readnormaltrip_2>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
//			ofstream addtemp("temp2.txt",ios::app);
//			if(d_NT_id!=NT_id){
//				addtemp<<NT_id<<' '<<NT_destination<<' '<<NT_duration<<' '<<NT_schedule1<<' '<<NT_schedule2<<' '<<NT_schedule3<<' '<<NT_price<<endl;
//			}
//			addtemp.close();
//		}
//		
//		readnormaltrip.close();
//		readnormaltrip_2.close();
//		remove("normaltrip.txt");
//		rename("temp2.txt","normaltrip.txt");
//		
//		cout<<"__________________________________________________________\n\n";
//		char b[80]="\tALL NORMAL TRIPS OF THE AGENCY ARE AS FOLLOWS";
//		for(int i=0;i<60;i++){
//			cout<<b[i];
//			Sleep(10);
//		}
//		Sleep(200);
//		cout<<"\n__________________________________________________________\n\n";
//		ifstream readnormaltrip("normaltrip.txt");
//		line();
//		cout<<" "<<"Normal Trip ID"<<setw(20)<<"Destination Place"<<setw(15)<<"Duration"<<setw(20)<<"Schedule (1)"<<setw(20)<<"Schedule (2)"<<setw(20)<<"Schedule (3)"<<setw(21)<<"Price for trip"<<endl;
//		line();
//		int count_normal=0;
//		while(readnormaltrip>>NT_id>>NT_destination>>NT_duration>>NT_schedule1>>NT_schedule2>>NT_schedule3>>NT_price){
//			cout<<" "<<NT_id<<setw(26)<<NT_destination<<setw(16)<<NT_duration<<setw(22)<<NT_schedule1<<setw(20)<<NT_schedule2<<setw(20)<<NT_schedule3<<setw(19)<<NT_price<<endl<<endl;
//			count_normal++;	
//		}
//		line();
//		cout<<endl;
//		star();
//		cout<<setw(43)<<"Count of Normal Trip : [ "<<count_normal<<" ]\n";
//		star();
//	}
//	
//	cout<<endl<<endl;
//	cout<<"press any key to exit.....";
//	getch();
//	delete_trip();
	system("cls");
	cout<<"\n\n\t\t\t\t Opening normal trip file.....\n\n\t\t\t\t";
	for(int i=0;i<10;i++){
		cout<<"\xDB";
		Sleep(80);
		cout<<"\xB2";
	}
	string url="normaltrip.txt";
	ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
	system("cls");
	cout<<"press any key to continue....";
	getch();
	delete_trip();
}

void delete_package_trip(){
//	system("cls");
//	cout<<"\n\N\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SELECT RECORD TO DELETE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
//	Sleep(300);
//	string PT_id;
//	string PT_main_destination;
//	string PT_other_destinations;
//	string PT_start_date;
//	string PT_duration;
//	string PT_hotel_services;
//	int PT_hotel_charges;
//	int PT_food_charges;
//	int PT_additional_charges;
//	int price;
//	cout<<endl<<endl;
//	Sleep(400);
//	cout<<"__________________________________________________________\n\n";
//	char a[80]="\t*ALL PACKAGE TRIPS OF THE AGENCY ARE AS FOLLOWS*";
//	for(int i=0;i<60;i++){
//		cout<<a[i];
//		Sleep(10);
//	}
//	Sleep(200);
//	cout<<"\n__________________________________________________________\n\n";
//	ifstream readpackagetrip("packagetrip.txt");
//	line();
//	cout<<" "<<"Package ID"<<setw(16)<<"Main Place"<<setw(25)<<"Other Places"<<setw(25)<<"Start Date"<<setw(14)<<"              Duration"<<setw(33)<<"Hotel and its charges"<<"                  Food charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Additional charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Price"<<endl;
//	line();
//	int count_package=0;
//	while(readpackagetrip>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
//		cout<<" "<<PT_id<<setw(18)<<PT_main_destination<<setw(28)<<PT_other_destinations<<setw(30)<<PT_start_date<<setw(18)<<PT_duration<<setw(25)<<PT_hotel_services<<' '<<PT_hotel_charges<<setw(20)<<PT_food_charges<<" + "<<PT_additional_charges<<" + "<<price<<endl<<endl;
//		count_package++;	
//	}
//	line();
//	cout<<endl;
//	star();
//	cout<<setw(43)<<"Count of Package Trip : [ "<<count_package<<" ]\n";
//	star();
//	cout<<endl<<endl;
//	//delete package trip
//	int j;
//	cout<<"\t\t\t\t How many record do u want to delete?\n\t\t\t\t";
//	cin>>j;
//	string d_PT_id;
//	for(int i=1;i<=j;i++){
//		cout<<"\n\n\t\t\t\t Which record do u want to delete[Enter record ID] : ";
//		cin>>d_PT_id;
//		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
//			for(int i=0;i<16;i++){
//				cout<<"\xDB\xDB";
//				Sleep(100);
//			}
//		cout<<endl;
//		ifstream readpackagetrip_2("packagetrip.txt");
//		while(readpackagetrip_2>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
//			ofstream addtemp("temp3.txt",ios::app);
//			if(d_PT_id!=PT_id){
//				addtemp<<PT_id<<' '<<PT_main_destination<<' '<<PT_other_destinations<<' '<<PT_start_date<<' '<<PT_duration<<' '<<PT_hotel_services<<' '<<PT_hotel_charges<<' '<<PT_food_charges<<' '<<PT_additional_charges<<' '<<price<<endl;
//			}
//			addtemp.close();
//		}
//		
//		readpackagetrip.close();
//		readpackagetrip_2.close();
//		remove("packagetrip.txt");
//		rename("temp3.txt","packagetrip.txt");
//		
//		cout<<"__________________________________________________________\n\n";
//		char a[80]="\t*ALL PACKAGE TRIPS OF THE AGENCY ARE AS FOLLOWS*";
//		for(int i=0;i<60;i++){
//			cout<<a[i];
//			Sleep(10);
//		}
//		Sleep(200);
//		cout<<"\n__________________________________________________________\n\n";
//		ifstream readpackagetrip("packagetrip.txt");
//		line();
//		cout<<" "<<"Package ID"<<setw(16)<<"Main Place"<<setw(25)<<"Other Places"<<setw(25)<<"Start Date"<<setw(14)<<"              Duration"<<setw(33)<<"Hotel and its charges"<<"                  Food charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Additional charges\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                               Price"<<endl;
//		line();
//		int count_package=0;
//		while(readpackagetrip>>PT_id>>PT_main_destination>>PT_other_destinations>>PT_start_date>>PT_duration>>PT_hotel_services>>PT_hotel_charges>>PT_food_charges>>PT_additional_charges>>price){
//			cout<<" "<<PT_id<<setw(18)<<PT_main_destination<<setw(28)<<PT_other_destinations<<setw(30)<<PT_start_date<<setw(18)<<PT_duration<<setw(25)<<PT_hotel_services<<' '<<PT_hotel_charges<<setw(20)<<PT_food_charges<<" + "<<PT_additional_charges<<" + "<<price<<endl<<endl;
//			count_package++;	
//		}
//		line();
//		cout<<endl;
//		star();
//		cout<<setw(43)<<"Count of Package Trip : [ "<<count_package<<" ]\n";
//		star();
//	}
//	
//	cout<<endl<<endl;
//	cout<<"press any key to exit.....";
//	getch();
//	delete_trip();
	system("cls");
	cout<<"\n\n\t\t\t\t Opening package trip file.....\n\n\t\t\t\t";
	for(int i=0;i<10;i++){
		cout<<"\xDB";
		Sleep(80);
		cout<<"\xB2";
	}
	string url="packagetrip.txt";
	ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
	system("cls");
	cout<<"press any key to continue....";
	getch();
	delete_trip();
}

void register_traveller(){
	system("cls");
	string TVL_id;
	string TVL_first_name;
	string TVL_last_name;
	int TVL_age;
	string TVL_gmail;
	string TVL_nrc;
	string TVL_phone;
	int TVL_trip_times=0;

	string customer_name_read;
	string customer_id_read;
	cout<<endl<<endl<<endl<<endl;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TRAVELLER REGISTRATION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n";
	cout<<"\n\t\t\t\t[Please do not use 'space' in all of your input]\n\t\t\t\t[instead of space, u can use 'underscores']\n\n";
	step1_register_traveller:
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter traveller's ID(eg.TVL_001)    :  ";
	fflush(stdin);
	cin>>TVL_id;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter traveller's first name        :  ";
	fflush(stdin);
	cin>>TVL_first_name;
	fflush(stdin);
	cout<<"\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter traveller's last name          :  ";
	fflush(stdin);
	cin>>TVL_last_name;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter traveller's age                 :  ";
	fflush(stdin);
	cin>>TVL_age;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter traveller's gmail               :  ";
	fflush(stdin);
	cin>>TVL_gmail;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter traveller's NRC                 :  ";
	fflush(stdin);
	cin>>TVL_nrc;
	fflush(stdin);
	cout<<" \n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 Enter traveller's phone no            :  ";
	fflush(stdin);
	cin>>TVL_phone;
	fflush(stdin);
	Sleep(300);
	cout<<" \n\n";cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 You are first traveller, so your travel time is 0........";
	cout<<" \n\n";
	string sure;
	cout<<"\t\t\t\tAre you sure to create this account ?[yes/no] : ";
	cin>>sure;
	cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
	if(sure=="yes"){
		ofstream tvlreg("traveller.txt",ios::app);
			tvlreg<<TVL_id<<' '<<TVL_first_name<<' '<<TVL_last_name<<' '<<TVL_age<<' '<<TVL_gmail<<' '<<TVL_nrc<<' '<<TVL_phone<<' '<<TVL_trip_times<<endl;
			cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
			for(int i=0;i<16;i++){
				cout<<"\xDB\xDB";
				Sleep(120);
			}
			cout<<"\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
			cout<<"\n\t\t\t\t Congratulations! \n";
			Sleep(600);
			cout<<"\n\t\t\t\t Process Completed! \n";
			Sleep(600);
			cout<<"\n\t\t\t\t Your informations are saved successfully! \n";
			cout<<"\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
			cout<<"\n\t\t\t\tPress any key to continue....";
			getch();
			homemenu();
	}
	else if(sure=="no"){
		homemenu();
	}else{
		homemenu();
	}
}

void view_traveller(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME FROM VIEW TRAVELLER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [1] View All traveller\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [2] Search Traveller id\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [3] Search Traveller Name\n\n";
	cout<<"\t\t\t\t\xDB\xDB\xDB\xDB\xB2 [4] Back\n\n";
	cout<<"\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\t\t\t\tEnter your choice :";
	switch(getch()){
		case '1':
			//normal trip
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t\t\tProcessing\n\n\t\t\t\t\t";
				for(int i=0;i<12;i++){
				cout<<" . ";
				Sleep(200);
			}
			view_all_traveller();
			//
			break;
		case '2':
			search_tvl_id();
			break;
		case '3':
			search_tvl_name();
			break;
		case '4':
			homemenu();
			break;
		default:
			cout<<"\n\n\t\t\t\tInvalid Input!!!!\n\t\t\t\t Please Try Again\n\n";
			view_traveller();
			break;
	}
	getch();
}
void view_all_traveller(){
	system("cls");
	string TVL_id;
	string TVL_first_name;
	string TVL_last_name;
	int TVL_age;
	string TVL_gmail;
	string TVL_nrc;
	string TVL_phone;
	int TVL_trip_times;
	cout<<endl<<endl;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char b[80]="\tALL TRAVELLERS OF THE AGENCY ARE AS FOLLOWS";
	for(int i=0;i<60;i++){
		cout<<b[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream viewalltvl("traveller.txt");
	line();
	cout<<" "<<"ID"<<setw(25)<<"First Name"<<setw(18)<<"Last Name"<<setw(13)<<"Age"<<setw(20)<<"Gmail"<<setw(20)<<"NRC"<<setw(28)<<"Phone"<<endl;
	line();
	int count_normal=0;
	while(viewalltvl>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		cout<<" "<<TVL_id<<setw(16)<<TVL_first_name<<setw(20)<<TVL_last_name<<setw(15)<<TVL_age<<setw(30)<<TVL_gmail<<setw(25)<<TVL_nrc<<setw(19)<<TVL_phone<<endl<<endl;
		count_normal++;	
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Normal Trip : [ "<<count_normal<<" ]\n";
	star();
	cout<<endl<<endl;
	cout<<"\t\t\tPress any key to continue....";
	getch();
	view_traveller();
}
void search_tvl_id(){
	system("cls");
	string TVL_id;
	string TVL_first_name;
	string TVL_last_name;
	int TVL_age;
	string TVL_gmail;
	string TVL_nrc;
	string TVL_phone;
	int TVL_trip_times;
	string search_id;
	cout<<"\n\n\t\t\t\tWhich traveller do you want to find?\n\t\t\t\t[Please enter traveller ID number(TVL_???)]\n\t\t\t\t";
		cin>>search_id;
		ifstream searchTVLid("traveller.txt");
		while(searchTVLid>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		if(TVL_id==search_id){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Traveller found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t\t";
				cout<<"ID: [ "<<TVL_id<<" ]\n\t\t\t";
				cout<<"First name: [ "<<TVL_first_name<<" ]\n\t\t\t";
				cout<<"Last name: [ "<<TVL_last_name<<" ]\n\t\t\t";
				cout<<"Age: [ "<<TVL_age<<" ]\n\t\t\t";
				cout<<"Gmail: [ "<<TVL_gmail<<" ]\n\t\t\t";
				cout<<"NRC: [ "<<TVL_nrc<<" ]\n\t\t\t";
				cout<<"Phone no: [ "<<TVL_phone<<" ]\n\t\t\t";
//				cout<<"Trip times: [ "<<TVL_trip_times<<" ]\n\t\t\t";
				cout<<"-------------------------------------*----------------------------------------\n\n";
			}
		}
		cout<<"\t\t\tPress any key to continue....";
		getch();
		view_traveller();
}
void search_tvl_name(){
	system("cls");
	string TVL_id;
	string TVL_first_name;
	string TVL_last_name;
	int TVL_age;
	string TVL_gmail;
	string TVL_nrc;
	string TVL_phone;
	int TVL_trip_times;
	string search_first_name;
	string search_last_name;
		cout<<"\n\n\t\t\t\tWhich traveller do you want to find?\n\t\t\t\t[Please enter first name]\n\t\t\t\t";
		cin>>search_first_name;
		cout<<"\t\t\t\t\n\t\t\t\t[Please enter traveller last name]\n\t\t\t\t";
		cin>>search_last_name;
		ifstream searchTVLid("traveller.txt");
		while(searchTVLid>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		if(TVL_first_name==search_first_name || TVL_last_name==search_last_name){
				cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Traveller found \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t\t";
				cout<<"First name: [ "<<TVL_first_name<<" ]\n\t\t\t";
				cout<<"Last name: [ "<<TVL_last_name<<" ]\n\t\t\t";
				cout<<"ID: [ "<<TVL_id<<" ]\n\t\t\t";
				cout<<"Age: [ "<<TVL_age<<" ]\n\t\t\t";
				cout<<"Gmail: [ "<<TVL_gmail<<" ]\n\t\t\t";
				cout<<"NRC: [ "<<TVL_nrc<<" ]\n\t\t\t";
				cout<<"Phone no: [ "<<TVL_phone<<" ]\n\t\t\t";
//				cout<<"Trip times: [ "<<TVL_trip_times<<" ]\n\t\t\t";
				cout<<"-------------------------------------*----------------------------------------\n\n";
			}
		}
		cout<<"\t\t\tPress any key to continue....";
		getch();
		view_traveller();
}

void delete_traveller(){
//	system("cls");
//	cout<<"\n\N\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SELECT RECORD TO DELETE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
//	Sleep(300);
//	string TVL_id;
//	string TVL_first_name;
//	string TVL_last_name;
//	int TVL_age;
//	string TVL_gmail;
//	string TVL_nrc;
//	string TVL_phone;
//	int TVL_trip_times;
//	cout<<endl<<endl;
//	Sleep(400);
//	cout<<"__________________________________________________________\n\n";
//	char b[80]="\tALL TRAVELLERS OF THE AGENCY ARE AS FOLLOWS";
//	for(int i=0;i<60;i++){
//		cout<<b[i];
//		Sleep(10);
//	}
//	Sleep(200);
//	cout<<"\n__________________________________________________________\n\n";
//	ifstream viewalltvl("traveller.txt");
//	line();
//	cout<<" "<<"ID"<<setw(25)<<"First Name"<<setw(18)<<"Last Name"<<setw(13)<<"Age"<<setw(20)<<"Gmail"<<setw(20)<<"NRC"<<setw(28)<<"Phone"<<setw(30)<<"Trip Time"<<endl;
//	line();
//	int count_normal=0;
//	while(viewalltvl>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
//		cout<<" "<<TVL_id<<setw(16)<<TVL_first_name<<setw(20)<<TVL_last_name<<setw(15)<<TVL_age<<setw(30)<<TVL_gmail<<setw(25)<<TVL_nrc<<setw(19)<<TVL_phone<<setw(20)<<TVL_trip_times<<endl<<endl;
//		count_normal++;	
//	}
//	line();
//	cout<<endl;
//	star();
//	cout<<setw(43)<<"Count of Traveller : [ "<<count_normal<<" ]\n";
//	star();
//	cout<<endl<<endl;
//	//delete traveller
//	int j;
//	cout<<"\t\t\t\t How many record do u want to delete?\n\t\t\t\t";
//	cin>>j;
//	string d_TVL_id;
//	for(int i=1;i<=j;i++){
//		cout<<"\n\n\t\t\t\t Which record do u want to delete[Enter record ID] : ";
//		cin>>d_TVL_id;
//		cout<<"\n\t\t\t\t\t\t Processing......\n\n\t\t\t\t\t";
//			for(int i=0;i<16;i++){
//				cout<<"\xDB\xDB";
//				Sleep(100);
//			}
//		cout<<endl;
//		ifstream viewalltvl_2("traveller.txt");
//		while(viewalltvl_2>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
//			ofstream addtemp("temp9.txt",ios::app);
//			if(d_TVL_id!=TVL_id){
//				addtemp<<TVL_id<<' '<<TVL_first_name<<' '<<TVL_last_name<<' '<<TVL_age<<' '<<TVL_gmail<<' '<<TVL_nrc<<' '<<TVL_phone<<' '<<TVL_trip_times<<endl;
//			}
//			addtemp.close();
//		}
//		
//		viewalltvl.close();
//		viewalltvl_2.close();
//		remove("traveller.txt");
//		rename("temp9.txt","traveller.txt");
//		
//		cout<<"__________________________________________________________\n\n";
//		char b[80]="\tALL TRAVELLERS OF THE AGENCY ARE AS FOLLOWS";
//		for(int i=0;i<60;i++){
//			cout<<b[i];
//			Sleep(10);
//		}
//		Sleep(200);
//		cout<<"\n__________________________________________________________\n\n";
//		ifstream viewalltvl("traveller.txt");
//		line();
//		cout<<" "<<"ID"<<setw(25)<<"First Name"<<setw(18)<<"Last Name"<<setw(13)<<"Age"<<setw(20)<<"Gmail"<<setw(20)<<"NRC"<<setw(28)<<"Phone"<<setw(30)<<"Trip Time"<<endl;
//		line();
//		int count_normal1=0;
//		while(viewalltvl>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
//			cout<<" "<<TVL_id<<setw(16)<<TVL_first_name<<setw(20)<<TVL_last_name<<setw(15)<<TVL_age<<setw(30)<<TVL_gmail<<setw(25)<<TVL_nrc<<setw(19)<<TVL_phone<<setw(20)<<TVL_trip_times<<endl<<endl;
//			count_normal1++;	
//		}
//		line();
//		cout<<endl;
//		star();
//		cout<<setw(43)<<"Count of Traveller : [ "<<count_normal1<<" ]\n";
//		star();
//	}
//	
//	cout<<endl<<endl;
//	cout<<"press any key to exit.....";
//	getch();
//	homemenu();
	system("cls");
	cout<<"\n\n\t\t\t\t Opening traveller file.....\n\n\t\t\t\t";
	for(int i=0;i<10;i++){
		cout<<"\xDB";
		Sleep(80);
		cout<<"\xB2";
	}
	string url="traveller.txt";
	ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
	system("cls");
	cout<<"press any key to continue....";
	getch();
	homemenu();
}

void income_system(){
	system("cls");
	processing();
	time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    cout<<"\n\n\t\t\t\tToday is ";
    cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";
    
    int total_income;
    //take all income of normal trip plan
    string NTP_id;
	string NTP_TVL_id;
	string NTP_TVL_f_name;
	string NTP_TVL_l_name;
	string NTP_TVL_phone;
	string NTP_TVL_nrc;
	string NTP_NT_id;
	string NTP_NT_main_destination;
	string NTP_NT_duration;
	string NTP_NT_choose_schedule;
	int NTP_NT_total_price;
    ifstream viewNTP("normaltripplan.txt");
    while(viewNTP>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
		total_income+=NTP_NT_total_price;
	}
	//take all income of pacage trip plan
	string PTP_id;
	string PTP_TVL_id;
	string PTP_TVL_f_name;
	string PTP_TVL_l_name;
	string PTP_TVL_phone;
	string PTP_TVL_nrc;
	string PTP_PT_id;
	string PTP_PT_main_destination;
	string PTP_PT_startdate;
	string PTP_PT_duration;
	int PTP_PT_total_price;
	ifstream viewPTP("packagetripplan.txt");
	while(viewPTP>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
		total_income+=PTP_PT_total_price;
	}
	cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	cout<<"\n\n\t\t\t\t Income of agency : "<<total_income;
	cout<<"\n\n\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	cout<<"\n\n\npress any key to exit.....";
	getch();
	homemenu();
}

void discount_plan(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t";
	cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n\t\t\t\t";
	cout<<"Discount System Information\n\n\t\t\t\t";
	cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	cout<<"\n\n-----------------------------------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\n\t\t\t\t Condition                        \t\t\t Discount Quantity";
	cout<<"\n\n-----------------------------------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\n\t\t\t\t more than or equal 3 trip times  \t\t\t 20% discount of total price";
	cout<<"\n\n\t\t\t\t more than or equal 5 trip times  \t\t\t 40% discount of total price";
	cout<<"\n\n\t\t\t\t more than or equal 9 trip times  \t\t\t 50% discount of total price";
	cout<<"\n\n-----------------------------------------------------------------------------------------------------------------------------------------------------";
	
	string TVL_id;
	string TVL_first_name;
	string TVL_last_name;
	int TVL_age;
	string TVL_gmail;
	string TVL_nrc;
	string TVL_phone;
	int TVL_trip_times;
	cout<<endl<<endl;
	Sleep(400);
	cout<<"__________________________________________________________\n\n";
	char b[80]="\tTRAVELLERS WHO GET DISCOUNT ARE";
	for(int i=0;i<40;i++){
		cout<<b[i];
		Sleep(10);
	}
	Sleep(200);
	cout<<"\n__________________________________________________________\n\n";
	ifstream viewalltvl("traveller.txt");
	line();
	cout<<" "<<"ID"<<setw(25)<<"First Name"<<setw(18)<<"Last Name"<<setw(13)<<"Age"<<setw(20)<<"Gmail"<<setw(20)<<"NRC"<<setw(28)<<"Phone"<<setw(30)<<"Trip Time"<<endl;
	line();
	int count_normal=0;
	while(viewalltvl>>TVL_id>>TVL_first_name>>TVL_last_name>>TVL_age>>TVL_gmail>>TVL_nrc>>TVL_phone>>TVL_trip_times){
		if(get_count_of_traveller(TVL_id)>=3){
			cout<<" "<<TVL_id<<setw(16)<<TVL_first_name<<setw(20)<<TVL_last_name<<setw(15)<<TVL_age<<setw(30)<<TVL_gmail<<setw(25)<<TVL_nrc<<setw(19)<<TVL_phone<<setw(20)<<get_count_of_traveller(TVL_id)<<endl<<endl;
			count_normal++;
		}
	}
	line();
	cout<<endl;
	star();
	cout<<setw(43)<<"Count of Traveller : [ "<<count_normal<<" ]\n";
	star();
	cout<<endl<<endl;
	cout<<"\t\t\tPress any key to continue....";
	getch();
	homemenu();
}

void lucky_draw(){
	system("cls");
	
	cout<<"__________________________________________________________________________________________________________________________\n";
	cout<<"\t\tRules for Lucky Draw Program\n\n\t\tWhen u travelled with our agency three times or more, u can participate in Lucky Draw\n";
	cout<<"__________________________________________________________________________________________________________________________\n";
	
	string traveller_id;
	cout<<"\n\n\t\t\tEnter your Traveller ID....";
	cin>>traveller_id;
	
	if(get_count_of_traveller(traveller_id)>=3){
		
		cout<<"\n\n\t\t\tU have been travelled with our agency [ "<<get_count_of_traveller(traveller_id)<<" ]\n";
		cout<<"\n\t\t\tOK, U have chance to take part in this program\n\n";
		star();
		cout<<"\t\t";
		char word[10]="Welcome";
		for(int j=0;j<10;j++){
			cout<<word[j];
			Sleep(40);
		}
		cout<<" ";
		char word1[8]="From";
		for(int j=0;j<8;j++){
			cout<<word1[j];
			Sleep(40);
		}
		cout<<" ";
		char word2[8]="Lucky";
		for(int j=0;j<8;j++){
			cout<<word2[j];
			Sleep(40);
		}
		cout<<" ";
		char word3[6]="draw";
		for(int j=0;j<6;j++){
			cout<<word3[j];
			Sleep(40);
		}
		cout<<" ";
		char word4[30]="program..................";
		for(int j=0;j<30;j++){
			cout<<word4[j];
			Sleep(40);
		}
		Sleep(100);
		cout<<endl<<endl;
		star();
		
		string things[]={"iPhone 10s Max","Sony TV","BMW Car","Scientific Calculator","Luxus Car",
		"Headphone","Samsung note 10","Samsung note 9","Beat Speaker","Baggage"};
		Sleep(300);
		cout<<"\n\n\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Lucky Draw Items are \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n";
		for(int k=0;k<10;k++){
	//		cout<<"["+i+"]";
			cout<<"\t\t\t\t"<<things[k]<<endl<<endl;
			Sleep(100);
		}
		cout<<"\n\n\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n";
		Sleep(300);
		cout<<"\n\n\t\t\t\t Press 's' key to start program.....";
		if(getch()=='s'){
			Sleep(500);
			cout<<"\n\n\t\t\t\t Hey Customer! Good Luck.....\n\n\n\t\t\t\t";
			for(int i=0;i<10;i++){
				cout<<" . ";
				Sleep(500);
			}
			int drawlots;
			srand(time(0));
			for(int i=0;i<1;i++)
			{
				drawlots=(rand()%13);
			}
			string url;
			if(drawlots<=9){
				if(drawlots==0){
					url="p1.png";
				}else if(drawlots==1){
					url="p2.jpg";
				}else if(drawlots==2){
					url="p3.jpg";
				}else if(drawlots==3){
					url="p4.jpg";
				}else if(drawlots==4){
					url="p5.jpg";
				}else if(drawlots==5){
					url="p6.jpg";
				}else if(drawlots==6){
					url="p7.jpg";
				}else if(drawlots==7){
					url="p8.jpg";
				}else if(drawlots==8){
					url="p9.jpg";
				}else{
					url="p10.jpg";
				}
				ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
				cout<<"\n\n\n\t\t\t\t Congratulation! U have got --------------->"<<things[drawlots];
				cout<<"\n\n\n\t\t\t\t Press any key to continue....";
				getch();
				homemenu();
			}else{
				cout<<"\n\n\n\t\t\t\t Sorry! Thank u for Everything...........\n\n\t\t\t\t I wanna see you again.....";
				cout<<"\n\n\n\t\t\t\t Press any key to back....";
				getch();
				homemenu();
			}
		}else{
			Sleep(200);
			cout<<"\n\n\t\t Hey customer, U are wrong.....";
			Sleep(1000);
			lucky_draw();
		}
	}else{
		cout<<"\n\n\t\t\tU have been travelled with our agency [ "<<get_count_of_traveller(traveller_id)<<" ]\n";
		cout<<"\n\n\t\t\tSorry! U have no chance to take part...";
		Sleep(1300);
		homemenu();
	}
}

void about_help(){
	system("cls");
	for(int a=0;a<=20;a++){
		cout<<"\xB2";
		Sleep(20);
	}
	cout<<"   About and helps of the travel agency management system   ";
	for(int a=0;a<=20;a++){
		cout<<"\xB2";
		Sleep(20);
	}
	cout<<"\n\n";
	cout<<"\t\tOur travel agency management systrem provides\n[1]\t\tEasy Booking\n[2]\t\tGreat Customer Service,etc.................................";
	cout<<"\n We provide these menus for the travel agency management.";
	cout<<"\n\n\n";
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Main Function of our program \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";

		cout<<"\n\n";

	cout<<" 1-> Make a trip plan for your travelling....";
	cout<<"\n\n";
		
	cout<<" 2-> View Trip Plan of the agency";
		cout<<"\n\n";
		
	cout<<" 3-> Delete Trip Plan";
		cout<<"\n\n";
		

	cout<<" 4-> Create a new Trip of agency";
		cout<<"\n\n";	
	
	cout<<" 5-> View Trip of agency";
		cout<<"\n\n";
		
	cout<<" 6-> Delete Trip";
	cout<<"\n\n";
	
	cout<<" 7-> Register a new traveller(register youself)";
	cout<<"\n\n";
	
	cout<<" 8-> View traveller's information";
	cout<<"\n\n";
	
	cout<<" 9-> Delete the traveller information";
	cout<<"\n\n";
	
	cout<<" 10-> Income of agency";
	cout<<"\n\n";
	
	cout<<" 11-> Discount Plan";
	cout<<"\n\n";
	
	cout<<" 12-> Lucky Draw Plan";
	cout<<"\n\n";
	
	cout<<" 13-> About and Help";
	
	cout<<"\n\n";
	cout<<" 14-> Exit";
	cout<<"\n\n";
	
	cout<<" 15-> Back to Sign In Page [Log out]";
	cout<<"\n\n";
	cout<<"Press any key to exit........................";
	if(getch()){
		system("cls");
		homemenu();
	}
}

void exit_program(){
	exit(1);
}

void call_website(){
	system("cls");
	cout<<"\n\n\t\t\t\t Calling Website.....\n\n\t\t\t\t";
	for(int i=0;i<10;i++){
		cout<<"\xDB";
		Sleep(80);
		cout<<"\xB2";
	}
	string url="travel_agency_mkkl.html";
	ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
	system("cls");
	cout<<"press any key to continue....";
	getch();
	homemenu();
}

void money_exchange(){
	processing();
	system("cls");
	Sleep(500);
	cout<<endl<<"\t\t";
	for(int i=0;i<30;i++){
		cout<<"\xDB";
		Sleep(20);
	}
	cout<<endl<<endl<<"\t\t";
	cout<<"\xDB\xDB\xDB\xDB\xDB\xDB CURRENCY EXCHANGE \xDB\xDB\xDB\xDB\xDB"<<endl<<endl<<"\t\t";
	for(int i=0;i<30;i++){
		cout<<"\xDB";
		Sleep(20);
	}
	Sleep(400);
	cout<<"\n\t\t------------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t|            Country                |            Other currency                |            Myanmar Kyat[MMK]                |";
	cout<<"\n\t\t------------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t|        [1] Singapore              |                1 SSD                     |               1085.88 MMK                   |";
	
	cout<<"\n\t\t|        [2] United State(America)  |                1 USD                     |               1507    MMK                   |";
	
	cout<<"\n\t\t|        [3] France                 |                1 Euro                    |               1675.48 MMK                   |";
	
	cout<<"\n\t\t|        [4] Thailand               |                1 Baht                    |                 49.24 MMK                   |";
	
	cout<<"\n\t\t|        [5] United Kingdom         |                1 Pound                   |               1844.27 MMK                   |";
	
	cout<<"\n\t\t|        [6] India                  |                1 Rupee                   |                 20.95 MMK                   |";
	
	cout<<"\n\t\t|        [7] China                  |                1 Yuan                    |                210.95 MMK                   |";
	
	cout<<"\n\t\t|        [8] South Korea            |                1 Won                     |                  1.24 MMK                   |";
	
	cout<<"\n\t\t|        [9] Australia              |                1 ASD                     |               1019.22 MMK                   |";
	
	cout<<"\n\t\t|        [10] Malaysia              |                1 Ringgit                 |                358.60 MMK                   |";
	
	cout<<"\n\t\t|        [11] Japan                 |                1 Yan                     |                 14.24 MMK                   |";
	cout<<"\n\t\t-----------------------------------------------------------------------------------------------------------------------------";

	step1_me:
	cout<<endl<<endl<<endl<<"\t\t\t";
	string choose_me;
	cout<<"Choose one you want to exchange[e.g 1 or 2 or something]\n\t\t\t";
	cout<<"Press 'e' key to exit\n\n\t\t\t";
	cin>>choose_me;
	if(choose_me=="1"){
		calculate_money_exchange("SSD","Singapore",1085.88);
	}
	else if(choose_me=="2"){
		calculate_money_exchange("USD","United State of America(USA)",1507);
	}
	else if(choose_me=="3"){
		calculate_money_exchange("Euro","France",1675.48);
	}
	else if(choose_me=="4"){
		calculate_money_exchange("Baht","Thailand",49.24);
	}
	else if(choose_me=="5"){
		calculate_money_exchange("Pound","United Kingdom",1844.27);
	}
	else if(choose_me=="6"){
		calculate_money_exchange("Rupee","India",20.95);
	}
	else if(choose_me=="7"){
		calculate_money_exchange("Yuan","China",210.95);
	}
	else if(choose_me=="8"){
		calculate_money_exchange("Won","South Korea",1.24);
	}
	else if(choose_me=="9"){
		calculate_money_exchange("ASD","Australia",1019.22);
	}
	else if(choose_me=="10"){
		calculate_money_exchange("Ringgit","Malaysia",358.60);
	}
	else if(choose_me=="11"){
		calculate_money_exchange("Yen","Japan",14.24);
	}
	else if(choose_me=="e"){
		system("cls");
		homemenu();
	}else{
		cout<<"\n\n\t\t Wrong press! Try again\n\n";
		goto step1_me;
	}
	
	string choose_do_or_not;
	cout<<"\n\n\t\t\t Do u want to do it again! [yes/no] :";
	cin>>choose_do_or_not;
	while(choose_do_or_not=="yes"){
		goto step1_me;
	}
	homemenu();
}

void calculate_money_exchange(string postfix,string country,double amount){
	double need_amount,result_money_exchange;
	cout<<"\n\n\t\t\tFor [ "<<country<<" ] , how many [ "<<postfix<<" ] do u want to exchange?\n\t\t\t[Enter only the currency amount you needs]\n\n\t\t\t";
	cin>>need_amount;
	cout<<"\n\n\t\t\t";
	char cal[20]="Calculating.......";
	
	for(int i=0;i<20;i++){
		cout<<cal[i];
		Sleep(100);
	}
	result_money_exchange=need_amount*amount;
	cout<<"\n\n\n\t\t\t----------------------------------------------------";
	cout<<"\n\t\t\t To gain "<<need_amount<<" "<<postfix<<" , you must pay Myanmar Kyat [ "<<result_money_exchange<<" MMK] to the agency!";
	cout<<"\n\t\t\t Total Cost : [ "<<result_money_exchange<<" MMK]";
	cout<<"\n\n\t\t\t----------------------------------------------------\n\n";
}

void line(){
    for(int i=1;i<85;i++)
		cout<<"--";
     cout<<"\n";
}

void star(){
    for(int i=1;i<80;i++)
	cout<<"**";
    cout<<"\n";
}

void processing(){
	system("cls");
	cout<<"\n\n\n\t\t\t\t\t";
	char abc[20]="Processing......";
	for(int i=0;i<20;i++){
		cout<<abc[i];
		Sleep(90);
	}
	system("cls");
}


int get_count_of_traveller(string TVL_id_para){
	int result_count=0;
	
	//count for normal trip plan
	string NTP_id;
	string NTP_TVL_id;
	string NTP_TVL_f_name;
	string NTP_TVL_l_name;
	string NTP_TVL_phone;
	string NTP_TVL_nrc;
	string NTP_NT_id;
	string NTP_NT_main_destination;
	string NTP_NT_duration;
	string NTP_NT_choose_schedule;
	int NTP_NT_total_price;
	
	ifstream viewnormaltripplan("normaltripplan.txt");
	while(viewnormaltripplan>>NTP_id>>NTP_TVL_id>>NTP_TVL_f_name>>NTP_TVL_l_name>>NTP_TVL_phone>>NTP_TVL_nrc>>NTP_NT_id>>NTP_NT_main_destination>>NTP_NT_duration>>NTP_NT_choose_schedule>>NTP_NT_total_price){
		if(NTP_TVL_id==TVL_id_para){
			result_count++;
		}
	}
	//
	
	//count for package trip plan
	string PTP_id;
	string PTP_TVL_id;
	string PTP_TVL_f_name;
	string PTP_TVL_l_name;
	string PTP_TVL_phone;
	string PTP_TVL_nrc;
	string PTP_PT_id;
	string PTP_PT_main_destination;
	string PTP_PT_startdate;
	string PTP_PT_duration;
	int PTP_PT_total_price;
	ifstream viewpackagetripplan("packagetripplan.txt");
	while(viewpackagetripplan>>PTP_id>>PTP_TVL_id>>PTP_TVL_f_name>>PTP_TVL_l_name>>PTP_TVL_phone>>PTP_TVL_nrc>>PTP_PT_id>>PTP_PT_main_destination>>PTP_PT_startdate>>PTP_PT_duration>>PTP_PT_total_price){
		if(PTP_TVL_id==TVL_id_para){
			result_count++;
		}
	}
	//
	
	return result_count;
}
