#include <iostream>
using namespace std;

int main(void)
{
	double employee_id, hours_worked, hourly_rate; // Input
	double gross_earning, tax, tax_payable, medical_deduction, net_earning; // Output
	tax = 0.30;

	while(1)
	{
		cout << "Welcome to the Employee Financial System, press CTRL+Break to Exit." << endl;
		cout << "Enter the emplyeeID HoursWorked and HourlyRate below, respectively:" << endl;
		cin >> employee_id >> hours_worked >> hourly_rate;

		if( employee_id < 1000 || employee_id > 9999)
			cout << "Wrong EmployeeID, please try again."		<< endl;
		else if( hours_worked <= 0 )
			cout << "Invalid HoursWorked, please try again."	<< endl;
		else if( hourly_rate < 10 || hourly_rate > 100 )
			cout << "Invalid HourlyRate, please try again."		<< endl;
		else
		{
			gross_earning = hours_worked*hourly_rate;
		
			if( gross_earning <= 300 )
				tax = 0.20;
		
			medical_deduction	= gross_earning*0.01;
			tax_payable			= gross_earning*tax;
			net_earning			= gross_earning - tax_payable - medical_deduction;

			cout << "Employee "					<< employee_id			<< endl 
				 << "Total Gross Earnings: \t"	<< gross_earning		<< endl
				 << "Tax Payable: \t\t"			<< tax_payable			<< endl 
				 << "Medical Deduction: \t"		<< medical_deduction	<< endl
				 << "Net Earnings: \t\t"		<< net_earning			<< endl;

			tax = 0.30;
		}
	}
}