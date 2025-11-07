#include <iostream>
#include<string>
#include<cstdlib>

int main(){
    std::string name;
    bool student= true;
    int course;
    std::string course_name;
    int days;
    int registration; 
    std::string location;
    int location_number;
    int lodging_per_day;
    double discount;
    

    std::cout<<"Enter fullname here: ";
    std::getline(std::cin, name);
    std::cout<<"Welcome "<<name<<"!!!\n";

    std::cout<< "Are you a student?\n";
    std::cout<<"Click 1 for YES and 0 for NO: ";
    std::cin >> student;
    if (student== 1){
        std::cout<<"You are a student\n";
     
    }
    else if (student==0){
        std::cout<<"Kindly exit";
    }
    std::cout<<"Select course 1-5: ";
    std::cin>> course;
    if (course== 1){
        course_name ="Photography";
        days= 3;
        registration= 10000;
    }
    else if (course== 2){
        course_name= "Painting";
        days= 5;
        registration= 8000;
    }
    else if (course== 3){
        course_name= "Fish Farming";
        days= 7;
        registration= 15000;
    }
    else if (course== 4){
        course_name= "Baking";
        days= 5;
        registration= 13000;
    }
    else if (course== 5){
        course_name= "Public Speaking";
        days= 2;
        registration= 5000;
    }
    else{
        std::cout<<"Invalid chose?";
    }
   std::cout<<"Choose campus location 1-5: ";
   std::cin>>location_number;

   if(location_number==1){
    location= "Camp House A "; lodging_per_day= 10000;

   }
   else if(location_number==2){
    location= "Camp House B "; lodging_per_day= 2000;

   }
    else if(location_number==3){
    location= "Camp House C "; lodging_per_day= 5000;

   }
    else if(location_number==4){
    location= "Camp House D "; lodging_per_day= 13000;

   }
    else if(location_number==5){
    location= "Camp House E "; lodging_per_day= 5000;

   }
   else{
    std::cout<<"invalid option";
   }
   int lodging_cost= lodging_per_day * days;
   int total= registration+ lodging_cost;
   
   if (student&&(location_number==1 ||location_number== 2)){
   double discount=lodging_cost*0.5;
   std::cout<< "Congratulations!!! you have gotten a 5% discount on lodging Cost "<<discount<<"\n";
   }
   else if (days>5 ||registration>12000){
   double discount= registration*0.3;
   std::cout<<"Congratulations!!! you have gotten a 3% discount on registration"<<discount<<"\n";
   }

   srand(time(NULL));
   int r = std::rand()% 100+1;
   int promo;
   if (r ==7 || r==77){
   promo= 500;
   }
   total = registration+ promo + lodging_cost;

    
    
  std::cout<<"-----------BOOKING SUMMARY------------- \n";
  std::cout<<"Name: "<< name<<"\n";
  std::cout<<"Course name : "<< course_name <<"\n";
  std::cout<<"Days: "<<days<<"\n";
  std::cout<<"Registration: "<<registration<<"\n";
  std::cout<<"Lodging: "<< lodging_cost<<"\n";
  std::cout <<"Random draw: " << r << "   Promo applied: ₦" << promo << "\n";

  std::cout<<"TOTAL: "<<total<<"\n";
  
  
}






