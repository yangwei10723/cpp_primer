//
//  chapter6.cpp
//  cpp_primer
//
//  Created by yw on 16/8/24.
//  Copyright © 2016年 yangwei. All rights reserved.
//

#include "chapter6.hpp"
#include <iostream>
#include <string>

void chapter6::calc_fact()
{
    using namespace std;
    
    int i;
    while (cin >> i)
    {
        cout << fact(i) << endl;
    }
}

int chapter6::fact(int i)
{
    int r = 1;
    
    while (i > 1)
    {
        r *= i--;
    }
    
    return r;
}

void chapter6::ex_6_05(int &i)
{
    using namespace std;
    
    cout << (i >=0? i : -i) << endl;
}

void chapter6::call_ex_6_05()
{
    using namespace std;
    
    int i;
    
    while (cin >> i)
    {
        int &i2 = i;
        chapter6 chpt6;
        chpt6.ex_6_05(i2);
    }
}


bool chapter6::ex_6_17a(const std::string  &s)
{
    for (auto c : s)
    {
        if (isupper(c))
        {
            return true;
        }
    }
    return false;
}

std::string chapter6::ex_6_17b(const std::string &s)
{
    std::string s2 = s;
    for (auto &c : s2)
    {
        c = toupper(c);
    }
    
    return s2;
}
