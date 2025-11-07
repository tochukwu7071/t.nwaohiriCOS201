//Fizz buzz challenge
//Fizz buzz challenge
#include<iostream>
int main(){
  int num;
  for(num=1;num>100;num++){
    if (num % 3){
      std::cout<<"FIZZ\n";
    }
    else if(num % 5){
      std::cout<<"BUZZ\n";

    }
    else if(num % 3 and num % 5){
      std::cout<<"FizzBuzz";
    }
  }
}
    
#include <iostream>
int main (){
  int number1 ;
  std::cout<<"Write a number from 1-10: ";
  std::cin<< number1;
  if (number1 % 5){
    std::cout<< "HiEven";
  }
  else{
    std::cout<< "The number is not a multiple of 5";
  }
}1