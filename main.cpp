//Alexander Y. Hartley


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()

{
//First a string input is defined for the title of the movie 
string movie_name;

//Then we have to define the variables for the information we
//want to receive 

double adult_tickets = 0.0, child_tickets = 0.0;

double gross_box = 0.0, net_box = 0.0, amount_paid = 0.0;

double p_adult_tickets = 10.00, p_child_tickets = 6.00;

cout << "The purpose of this program is to calculate the Gross and Net Box\nOffice Profit and the Distirbuter's Profit of a \nmovie playing in a theater." << endl;

cout << "Enter the name of the movie:" << endl;
cin >> movie_name ;
cout << "Enter the amount of adult tickets sold:" << endl;
cin >> adult_tickets;
cout << "Enter the amount of child tickets sold:" << endl;
cin >> child_tickets; 

double total_adult_tickets = 0.0, total_child_tickets = 0.0;

total_adult_tickets = adult_tickets * p_adult_tickets;
total_child_tickets = child_tickets * p_child_tickets;
gross_box = total_adult_tickets + total_child_tickets;
net_box = gross_box * .20;
amount_paid = gross_box - net_box;


cout << "Movie name:"<< setw(19) << '"' << movie_name << '"' << endl;
cout << endl;
cout << setprecision (0)<< fixed << "Adult Tickets sold:" << setw(15) << adult_tickets << endl;
cout << "Child Tickets sold:" << setw(15) << child_tickets << endl;
cout << setprecision(2) << fixed;
cout <<"Gross Box Office Profit:"<< setw(5) <<"$";
cout << setw(10) <<gross_box << endl;
cout <<"Net Box Office Profit:" << setw(7) <<"$" ;
cout << setw(10)<<net_box <<endl;
cout <<"Amount Paid to distributor:" << setw(2) << "$"; 
cout << setw(10) << amount_paid << endl;


return 0;

}


