#include <cmath>
#include <iostream>

void FirstEx() {
    int x, a = 0;
    double y;
    std::cout << "Please, enter 'x' value: " << std::endl;
    std::cin >> x;
    std::cout << "Please, enter 'a' value: " << std::endl;
    std::cin >> a;
    double S = pow((sqrt(5) * x / 7.5), 2 * a);
    double SS = pow((a - 5), 3);
    double SSS = sin(x) / pow(sqrt(a), 3) * pow(10, -5);
    double Answer = S * SS * SSS;

    std::cout << "Answer: " << Answer << std::endl;
}

void SecondEx() {
    int x, a = 0;
    double y;
    std::cout << "Please, enter 'x' value: " << std::endl;
    std::cin >> x;
    if (x > 0) {
        y = sin(x);
    }
    else if (x == 0) {
        y = 1;
    }
    else {
        y = pow(sqrt(x * -1), 3);
    }
    std::cout << "Output 'y' = " << y << std::endl;
}

void ThirdEx() {
    int n = 0;
    double y = 0;
    while (n <= 1) {
        std::cout << "Please, enter 'n' value: " << std::endl;
        std::cin >> n;
    }
    for (int a = 1; a <= n; a++) {
        y += ((double)a / 2);   // 1/2, 2/2, 3/2, 4/2, 5/2
                                // 0.5 + 1 + 1,5 + 2 + 2,5 = 7,5
    }
    std::cout << "Output 'y' = " << y << std::endl;
}

int main()
{
    int result = 0;
    std::cout << "Please, enter 1 for example\n2 for second example\n3 for Third example\n";
    std::cin >> result;
    if (result > 3)
    {
        std::cout << "Error\n";
    }
    else if(result <= 0)
    {
        std::cout << "Error\n";
    }
    else
    {
        switch (result)
        {
        case 1:
            FirstEx();
            break;
        case 2:
            SecondEx();
            break;
        case 3:
            ThirdEx();
            break;
        }
    }
    return 0;
}
 