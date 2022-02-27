#include<bits/stdc++.h>
using namespace std;
int main(){
	int quant;
	int choice;
	//intialized quantity of hotel item to zero
	int Qrooms=0,Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0,Qchicken=0;
	//items that has been sold declared as
	int Srooms=0,Spasta=0, Sburger=0, Snoodles=0, Sshake=0,Schicken=0;
	//Totalprice of each item
	int Total_rooms=0,Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0,Total_chicken=0;
	
	
	cout<<"\n\t Quantity of item we have";
	cout<<"\n Rooms Available: ";
	cin>>Qrooms;
	cout<<"Quantity of Pasta : " ;	
	cin>>Qpasta;
	cout<<"Quantity of Burger : " ;	
	cin>>Qburger;
	cout<<"Quantity of Noodles : " ;	
	cin>>Qnoodles;
	cout<<"Quantity of Shake : " ;	
	cin>>Qshake;
	cout<<"Quantity of Chicken_Roll : " ;	
	cin>>Qchicken;
	m:
	cout<<"\n\t\t Please select from the menu option ";
	cout<<"\n\n1) Rooms";
	cout<<"\n\n2) Pasta";
	cout<<"\n\n3) Burger";
	cout<<"\n\n4) Noodles";
	cout<<"\n\n5) Shake";
	cout<<"\n\n6) Chicken-Roll";
	cout<<"\n\n7) Information Regarding Sales And Collection ";
	cout<<"\n\n1) Exit";
	
	cout<<"\n\n Please Enter Your CHoice!!";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want:";
			cin>>quant;
			if (Qrooms - Srooms >= quant ){
				Srooms = Srooms + quant;
				Total_rooms= Total_rooms + quant*1200;//1200 price of each room
				cout<<"\n\n\t\t"<< quant<<" room/rooms have been alloted to you!";
				break;
			}
			else{
				cout <<"\n\tOnly "<<Qrooms-Srooms<<"  Rooms reamaing in Hotel ";
				break;
			}
			case 2:
			cout<<"\n\n Enter Pasta Quantity : ";
			cin>> quant;
			if (Qpasta - Spasta >= quant ){
				Spasta = Spasta + quant;
				Total_pasta= Total_pasta + quant*250;//250 price of pasta
				cout<<"\n\n\t\t"<< quant<<" pasta is the Order";
				break;
			}
			else{
				cout <<"\n\tOnly "<<Qpasta-Spasta<<"  Pasta reamaing in Hotel ";
				break;
			}
			case 3:
			cout<<"\n\n Enter Burger Quantity : ";
			cin>> quant;
			if (Qburger - Sburger >= quant ){
				Sburger = Sburger + quant;
				Total_burger= Total_burger + quant*120;//120 price of burger 
				cout<<"\n\n\t\t"<< quant<<" Burger is the Order";
				break;
			}
			else{
				cout <<"\n\tOnly "<<Qburger-Sburger<<"   Burgers reamaing in Hotel ";
				break;
			}
			case 4:
			cout<<"\n\n Enter Noodles Quantity : ";
			cin>> quant;
			if (Qnoodles - Snoodles >= quant ){
				Snoodles = Snoodles + quant;
				Total_noodles= Total_noodles + quant*140;//140 price of berger 
				cout<<"\n\n\t\t"<< quant<<" Noodle is the Order!";
				break;
			}
			else{
				cout <<"\n\tOnly "<<Qnoodles-Snoodles<<"Noodles  reamaing in Hotel ";
				break;
			}
			case 5:
			cout<<"\n\n Enter Shake Quantity : ";
			cin>> quant;
			if (Qshake - Sshake >= quant ){
				Sshake =Sshake + quant;
				Total_shake= Total_shake + quant*120;//120 price of berger 
				cout<<"\n\n\t\t"<< quant<<" Shake is the Order!";
				break;
			}
			else{
				cout <<"\n\tOnly "<<Qshake - Sshake<<"  Shake reamaing in Hotel ";
				break;
			}
			case 6:
			cout<<"\n\n Enter chicken Quantity : ";
			cin>> quant;
			if (Qchicken - Schicken >= quant ){
				Schicken =Schicken + quant;
				Total_chicken= Total_chicken + quant*150;//150 price of berger 
				cout<<"\n\n\t\t"<< quant<<" Chicken is the Order!";
				break;
			}
			else{
				cout <<"\n\tOnly "<<Qchicken - Schicken<<"  Chicken reamaing in Hotel ";
				break;
			}
			case 7:
				cout<<"\n\t\tDetails of Sales and Collection ";
				cout<<"\n\nNumber of rooms We have: "<<Qrooms;
				cout<<"\n\nNumber of rooms We gave for rent : "<<Srooms;
				cout<<"\n\nRemaining rooms : "<<Qrooms-Srooms;
				cout<<"\n\nTotal rooms collection for a day: "<<Total_rooms;
				
				cout<<"\n\nNumber of pasta We have: "<<Qpasta;
				cout<<"\n\nNumber of pasta We gave for rent : "<<Spasta;
				cout<<"\n\nRemaining pastas : "<<Qpasta-Spasta;
				cout<<"\n\nTotal Pasta collection for a day: "<<Total_pasta;
				
				cout<<"\n\nNumber of berger We have: "<<Qburger;
				cout<<"\n\nNumber of berger We gave for rent : "<<Sburger;
				cout<<"\n\nRemaining berger : "<<Qburger-Sburger;
				cout<<"\n\nTotal berger collection for a day: "<<Total_burger;
				
				cout<<"\n\nNumber of noodles We have: "<<Qnoodles;
				cout<<"\n\nNumber of noodles We gave for rent : "<<Snoodles;
				cout<<"\n\nRemaining noodles : "<<Qnoodles-Snoodles;
				cout<<"\n\nTotal noodles collection for a day: "<<Total_noodles;
				
				cout<<"\n\nNumber of shake We have: "<<Qshake;
				cout<<"\n\nNumber of shake We gave for rent : "<<Sshake;
				cout<<"\n\nRemaining shake : "<<Qshake-Sshake;
				cout<<"\n\nTotal shake collection for a day: "<<Total_shake;
				
				cout<<"\n\nNumber of chicken-roll We have: "<<Qchicken;
				cout<<"\n\nNumber of chicken-roll We gave for rent : "<<Schicken;
				cout<<"\n\nRemaining chicken-roll : "<<Qchicken-Schicken;
				cout<<"\n\nTotal chicken-roll collection for a day: "<<Total_chicken;
				
				cout<<"\n\n\n Total Collection of a Day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
				break;
				
				
				case 8:
					exit(0);
					
					default:
						cout<<"\n Please Select the numbers mentioned above!";
				
	}
	goto m;
}