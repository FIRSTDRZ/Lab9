#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan=0,rate=0,pay=0;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i = 0;
	do {
		
		double interest = (rate/100)*loan;
		double total = loan+interest;
		if (total >= pay){
			double newbalance = total - pay;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i+1; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newbalance;
			cout << "\n";
			loan = newbalance;
		}else if(total <= pay){
			pay = total;
			double newbalance = total - pay;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i+1; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newbalance;
			cout << "\n";
			loan = newbalance;
		}

		i++;	
	}
	while (loan != 0);
	
	return 0;
}
