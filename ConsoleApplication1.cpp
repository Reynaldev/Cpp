// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

int arithmetic()
{
    int f = 0;

    for (int i = 1; i <= 10; i++)
    {
        int result = 4 * i - 1;
        f += result;

        //std::cout << f << std::endl;
    }

    return f;
}

void trace()
{
    int x = 1, y = 1, sum = x + y;

    std::cout << x << " + " << y << " = " << sum << std::endl;

    do
    {
        x = y;
        y = sum;
        sum = x + y;

        std::cout << x << " + " << y << " = " << sum << std::endl;
    } while (sum < 20);
    

    std::cout << "Result -> " << "x = " << x << ", y = " << y << ", sum = " << sum << std::endl;
}

int determinant(int a, int b, int c)
{
    //ax2 + bx + c = 0; D = b2 - 4ac;
    int equation = a * std::sqrt(1) + b * 1 + c;

    if (equation > 0)
    {
        return 0;
    }
    else if (equation < 0)
    {
        return 0;
    }
    else
    {
        int determinant = std::sqrt(b) - 4 * a * c;
        return determinant;
    }
}

int max(int num[]) {
    //int num[] = { 8, 3, 5, 2, 7, 9, 6, 4 };
    int arr_len = sizeof(num) / sizeof(int);
    int max = 0;

    for (int i = 0; i < arr_len; i++)
    {
        max = (max > num[i]) ? max : num[i];
    }

    return max;
}

int min(int num[]) {
    int arr_len = sizeof(num) / sizeof(int);

    int min = arr_len;

    for (int i = 0; i < arr_len; i++)
    {
        min = (min < num[i]) ? min : num[i];
    }

    return min;
}

int v_max(std::vector<int> num) {
    int max = 0;

    for (int i = 0; i < num.size(); i++) {
        max = (max > num[i]) ? max : num[i];
    }

    return max;
}

int v_min(std::vector<int> num) {
    int min = num.size();

    for (int i = 0; i < num.size(); i++) {
        min = (min < num[i]) ? min : num[i];
    }

    return min;
}

void triangular(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            std::cout << "*";
        }

        std::cout << "\n";
    }
}

int e_triangular(int n) {
    int x = n;

    for (int i = 0; i < n; i++) {
        x += i;
    }

    return x;
}

std::string palindrom(std::string text) {
    std::string revText;

    for (int i = text.size() - 1; i >= 0; i--) {
        revText += text[i];
    }

    return revText;
}

std::string is_palindrom(std::string ftext, std::string ntext) {
    return (ftext == ntext) ? "True" : "False";
}

// Negative decimal to binary
void negative_to_binary(int val) {
    std::vector<int> bit;

    while (val > 0) {
        int remain = val % 2;
        bit.push_back(remain);
        val /= 2;
    }

    while (bit.size() < 8) {
        bit.push_back(0);
    }

    for (int i = 0; i < bit.size(); i++) {
        (bit[i] == 0) ? bit[i] = 1 : bit[i] = 0;
    }

    bit[0] = 1;

    for (int i = bit.size() - 1; i >= 0; i--) {
        std::cout << bit[i];
    }

    std::cout << std::endl;
}

int main()
{
    //Aritmatika();
    
    //trace();
    
    //Determinant
    /*int a, b, c;
    std::cout << "Quadratic Equation\n";
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
    std::cout << "c = "; std::cin >> c;
    std::cout << determinant(a, b, c);*/

    // Finding the max/min element
    //int num[] = { 8, 3, 5, 2, 7, 9, 6, 4 };

    /*std::cout << "Max: " << max(num) << std::endl;
    std::cout << "Min: " << min(num) << std::endl;*/

    // Finding the max/min element (2)
    /*std::vector<int> num = { 8, 3, 5, 2, 7, 9, 6, 4 };
    
    std::cout << "Max: " << v_max(num) << std::endl;
    std::cout << "Min: " << v_min(num) << std::endl;*/

    // Triangular
    /*int n = 5;
    triangular(n);*/
    
    // Triangular elements
    /*int n = 5;
    std::cout << "Triangular elements: " << e_triangular(n);*/

    // Palindrom
    /*std::string text;
    std::cout << "Text: "; std::cin >> text;

    std::string revText = palindrom(text);
    std::cout << "Result: " + revText + "\n";
    std::cout << "Is Palindrom? " + is_palindrom(text, revText);*/

    // Negative number to binary
    /*while (true) {
        int input;
        std::cout << "Input number: "; std::cin >> input;
        negative_to_binary(input);
    }*/

    // Matrix
    const int x = 2, y = 3;

    int m1[x][y] = { 
        {5, 2, 3}, 
        {1, 7, 1} 
    };

    int m2[x][y] = { 
        {1, 1, 2}, 
        {0, 1, 4} 
    };

    int m3[2][2];

    /*m3[0][0] = 5;
    m3[0][1] = 10;
    m3[1][0] = 15;
    m3[1][1] = 20;*/

    for (int i = 0; i < x; i++) {
        int val = 0;

        for (int j = 0; j < y; j++) {
            val += m1[i][j] * m2[0][j];
        }

        m3[i][0] = val;

        val = 0;

        for (int j = 0; j < y; j++) {
            val += m1[i][j] * m2[1][j];
        }

        m3[i][1] = val;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << m3[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}