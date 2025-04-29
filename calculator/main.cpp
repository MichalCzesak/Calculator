#include <iostream>

inline long double addition(const double &a, const double &b){
    return a+b;
}

inline long double substraction(const double &a, const double &b){
    return a-b;
}

inline long double multiplication(const double &a, const double &b){
    return a*b;
}

inline long double division(const double &a, const double &b){
    return a/b;
}

long long factorial(const long long &a){
    if(a<=0){
        return 1;
    }

    long long helper{1};
    for (auto i=1; i<=a; ++i){
        helper*=i;
    }
    return helper;
}

long double power(long double a, long long b){
   long double result{1};

   while(b){
    if(b&1){
        result *= a;
    }
    a*=a;
    b = b >> 1;
   }

   return result;
}

int main()
{
    char q{};
    double x{};

    std::cout << "What would you like to calculate?\n+ - Addition\n- - Substraction\n* - Multiplication\n: - Division\n! - factorial\n^ - power\n";
    std::cin >> q;

    long double a{}, b{};
    if (q!='!'){
        std::cout << "Enter the numbers: ";
        std::cin >> a >> b;
    } else{
        std::cout << "Enter the number: ";
        std::cin >> a;
    }
    
    switch (q){
    case '+':
        std::cout << addition(a, b);
        break;
    
    case '-':
        std::cout << substraction(a, b);
        break;

    case '*':
        std::cout << multiplication(a, b);
        break;
    
    case ':':
        std::cout << division(a, b);
        break;
    
    case '!':
        std::cout << factorial(a);
        break;

    case '^':
        std::cout << power(a, b);
        break;

    default:
        std::cout << "Invalid letter, terminating...\n";
        return -1;
    }

    return 0;
}