//Alexander Y. Hartley

//Github username
//AlexanderHartley or Alex393
//801-22-3906


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

//We state the purpose of the program so the person understands 
//what they have to input

cout << "The purpose of this program is to calculate the Gross and Net Box\nOffice Profit and the Distirbuter's Profit of a \nmovie playing in a theater." << endl;

// Here we ask the user to input the name of the movie so then later
//it can be displayed with the data that is collected 

cout << "Enter the name of the movie:" << endl;

//I use the getline function to get the movies name 
//I do not use the cin because if I used cin 
//The input buffer would affect the input received 
//If it had space it would affect the result 

getline(cin, movie_name);

//I proceed to ask the user for the amount of tickets sold between
//the adults and kids since they are priced differently

cout << "Enter the amount of adult tickets sold:" << endl;
cin >> adult_tickets;
cout << "Enter the amount of child tickets sold:" << endl;
cin >> child_tickets; 

//I define the variables I need to represent the total price 
// of each of the tickets 

double total_adult_tickets = 0.0, total_child_tickets = 0.0;

//Then we do do the math required to calculate the data and receive
// the net box office profit and gross box office profit
total_adult_tickets = adult_tickets * p_adult_tickets;
total_child_tickets = child_tickets * p_child_tickets;
gross_box = total_adult_tickets + total_child_tickets;

//Here we multiply by .20 since the only profit the box office makes
//is 20% of the gross box office profit

net_box = gross_box * .20;


amount_paid = gross_box - net_box;


//This displays the movie's name

cout << "Movie name:"<< setw(19) << '"' << movie_name << '"' << endl;
cout << endl;

//Here we display the amount for adult tickets sold and childrens tickets sold 
//We utilize setw to organize and make it readable 
//We also utilize setprecision zero to display the results
//as x instead of x.0

cout << setprecision (0)<< fixed << "Adult Tickets sold:" << setw(15) << adult_tickets << endl;
cout << "Child Tickets sold:" << setw(15) << child_tickets << endl;

//Afterwards we display the different profits 
//We use setprecision(2) to display it as x.00
//I use setw to like mentioned before to organize 
//the code display

cout << setprecision(2) << fixed;
cout <<"Gross Box Office Profit:"<< setw(5) <<"$";
cout << setw(10) <<gross_box << endl;
cout <<"Net Box Office Profit:" << setw(7) <<"$" ;
cout << setw(10)<<net_box <<endl;
cout <<"Amount Paid to distributor:" << setw(2) << "$"; 
cout << setw(10) << amount_paid << endl;


return 0;

}


