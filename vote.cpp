#include <iostream>
int main (){
std::cout<<"Please Type Your Age"<<std::endl;
int age;
std::cin>>age;
if (age < 0 | age > 125) {
std::cout<<"Invalid Age"<<std::endl;
}
else if (age < 18){
std::cout<<"you can not vote"<<std::endl;
}
else if (age >= 18) {
std::cout<<"you can vote"<<std::endl;
}
return 0;
}


