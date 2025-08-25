#include <iostream>

class operations
{
public:
    // addition
    int addition(int num1, int num2){
        return num1+num2;
    }
    
    // subtraction
    int subtraction(int num1, int num2){
        if((num1-num2)>0){
            return num1-num2;
        }else{
            return num2-num1;
        }
    }
    
    // multiplication 
    int multiplication(int num1, int num2){
        return num1*num2;
    }
    
    // division 
    float divsion(int num1, int num2){
        return num1/num2;
    }

}calci;

int main(){
    int first_Num, second_num, output=0;
    std::string calculation;
    std::cout << "Welcome to Unique_Calci \n\n";
    std::cout << "Enter first number: ";
    std::cin >> first_Num;
    std::cout << "Enter second number: ";
    std::cin >> second_num;
    std::cout << "\n\n" << "type the operation -\n" << "addition(add)\n" << "subtraction(sub)\n" << "multiply(mul)\n" << "division(div)\n\n";
    std::cout << "type: ";
    std::cin >> calculation;
    if(calculation.compare("add")==0)output=calci.addition(first_Num, second_num);
    else if(calculation.compare("sub")==0)output=calci.subtraction(first_Num, second_num);
    else if(calculation.compare("mul")==0)output=calci.multiplication(first_Num, second_num);
    else if(calculation.compare("div")==0)output=calci.divsion(first_Num, second_num);
    else std::cout << "wrong option selected";
    std::cout << "\n Output => " << output;
}
