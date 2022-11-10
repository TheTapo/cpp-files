#include<iostream>
int main(){
std::cout << "Welcome to DenseClac" << std::endl;
std::cout << "Enter the Mass of the Item: ";
int a;
std::cin >> a;
  
int b;
std::cout << "Enter the Volume of the Item: ";
std::cin >> b;

std::cout << "The Density of the Item is " << (float)a / b << std::endl;

std::cout <<"Do you want to check if the Item will float or sink in water?"<< std::endl;

int r;
std::cout <<"Type 1 to continue"<<std::endl;
std::cin >> r;

if(r==1){
int d;
d = float(a / b) / 1 ;
if (d >=1){

std::cout << "the item will sink in water" << std::endl;
}
else if (d < 1){
std::cout << "the item will float in water" << std::endl;
}

}

} 


 
 
 
 
 
