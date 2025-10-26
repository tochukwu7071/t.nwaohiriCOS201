#include <iostream>
int main(){    
int starting_balance;
int annual_interest_rate;
int balance_after_one_year;
int balance_after_two_years;
std::cout<< ("INTEREST CALCULATION PPROGRAM \n");
std::cout<<("Enter the starting balance: ");
std::cin>> starting_balance;
std::cout<<("Enter the annual interest rate: ");
std::cin>> annual_interest_rate;
balance_after_one_year = starting_balance + ((annual_interest_rate/100)* starting_balance);
balance_after_two_years = balance_after_two_years+ starting_balance; 
std::cout<<("New balance for first year= ")<< balance_after_one_year<< ("\n");
std::cout<<("New balanced for second year= ")<< balance_after_two_years<<("\n ");



}


//Sales tax calculator 
/*#include <iostream>
int main(){
    double  total_amount_purchased;
    double sales_tax;
    std::cout<<("TOTAL AMOUNT PURCHASED: ");
    std::cin>> total_amount_purchased;
    sales_tax= total_amount_purchased *0.06;
    std::cout<< ("THE SALES TAX IS ")<< sales_tax;




}*/


