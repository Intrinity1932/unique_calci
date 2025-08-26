#include <iostream>
#include <cmath>

class operations
{
public:
    // addition
    long addition(long num1, long num2){
        return num1+num2;
    }
    
    // subtraction
    long subtraction(long num1, long num2){
        if((num1-num2)>0){
            return num1-num2;
        }else{
            return num2-num1;
        }
    }
    
    // multiplication 
    long multiplication(long num1, long num2){
        return num1*num2;
    }
    
    // division 
    double divsion(long num1, long num2){
        return num1/num2;
    }

    // factorial
    long factorial(long num){
        if(num==0)return 1;
        return num*factorial(num-1);
    }

    // square
    long square(long num){
        return num*num;
    }

    // square root
    double square_root(long num){
        return sqrt(num);
    }

}calci;

int main(){
    long first_Num, second_num, output=0;
    std::string calculation;

    while(1){
    std::cout << "\033[H\033[J" << "Welcome to Unique_Calci \n\n";
    std::cout << "Enter first number: ";
    std::cin >> first_Num;
    std::cout << "Enter second number: ";
    std::cin >> second_num;
    std::cout << "\n\n" << "type the operation -\n" << "addition(add)\n" << "subtraction(sub)\n" << "multiply(mul)\n" << "division(div)\n" << "factorial of first number(fac1)\n";
    std::cout << "square of first number(sqr1)\n" << "square root of first number(sqrt1)\n" << "factorial of second number(fac2)\n" << "square of second number(sqr2)\n";
    std::cout << "square root of second number(sqrt2)\n\n";

    // input taking
    std::cout << "type: ";
    std::cin >> calculation;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // main operations
    if(calculation.compare("add")==0)output=calci.addition(first_Num, second_num);
    else if(calculation.compare("sub")==0)output=calci.subtraction(first_Num, second_num);
    else if(calculation.compare("mul")==0)output=calci.multiplication(first_Num, second_num);
    else if(calculation.compare("div")==0)output=calci.divsion(first_Num, second_num);
    else if(calculation.compare("fac1")==0)output=calci.factorial(first_Num);
    else if(calculation.compare("sqr1")==0)output=calci.square(first_Num);
    else if(calculation.compare("sqrt1")==0)output=calci.square_root(first_Num);
    else if(calculation.compare("fac2")==0)output=calci.factorial(second_num);
    else if(calculation.compare("sqr2")==0)output=calci.square(second_num);
    else if(calculation.compare("sqrt2")==0)output=calci.square_root(second_num);
    else if(calculation.compare("exit")==0)exit;
    else std::cout << "wrong option selected";
    std::cout << "\n Output => " << output << std::flush;
    getchar();
    }
}
