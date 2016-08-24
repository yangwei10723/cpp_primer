//
//  main.cpp
//  cpp_primer
//
//  Created by yangwei on 16/8/23.
//  Copyright © 2016年 yangwei. All rights reserved.
//

#include <iostream>
#include "chapter3.hpp"
#include "chapter6.hpp"

int main(int argc, const char ** argv)
{
    using namespace std;
//    chapter3 chpt3;
//    chpt3.ex_3_35();

//    chapter6 chpt6;
//    chpt6.call_ex_6_05();
    
    string s;
    for (int i = 1; i < argc; ++i)
    {
        s += argv[i];
    }
    
    cout << s << endl;
    
    return 0;
}
