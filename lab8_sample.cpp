// COMS210 | Lab 8 | Winston Jose
// Github link: https://github.com/winstonjose01/210-lab-8

# include <iostream>
using namespace std;



int main(){

    time_t now = time(0);  // Get the current time
    tm* localtm = localtime (&now); // Get the local time
    
    cout << "\nHello World!";
    cout << "\nThis is a sample program for Lab 8 - Github Repository";
    int year = localtm -> tm_year + 1900; 
    int month = localtm -> tm_mon + 1;
    int day = localtm -> tm_mday;

    cout << "\nDate: " << day << "-" << month << "-" << year << endl;


}