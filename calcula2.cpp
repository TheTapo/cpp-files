#include <iostream>
int main (){
std::cout<<"Welcome to Calculator"<<std::endl;
std::cout<<"Enter the First Number"<<std::endl;
float a;
float b;
char c;
std::cin>>a;
std::cout<<"Enter the Second Number"<<std::endl;
std::cin>>b;
std::cout<<"Now enter Which Operator do you want use? [The Options Are + - * /]"<<std::endl;
std::cin>>c;
if(c=='+')
{
    std::cout<<"The Answer is"<<(float)a + b<<std::endl;
}
else if (c=='-'){
    std::cout<<"The Answer is"<<(float)a - b<<std::endl;
}
else if (c=='*'){
    std::cout<<"The Answer is"<<(float)a * b<<std::endl;
}
 else if (c=='/'){
    std::cout<<"The Answer is"<<(float)a / b<<std::endl;
 }
else {
    std::cout<<"unknown operator"<<std::endl;
}
return 0;
}