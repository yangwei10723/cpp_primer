//
//  chapter3.cpp
//  cpp_primer
//
//  Created by yangwei on 16/8/23.
//  Copyright © 2016年 yangwei. All rights reserved.
//

#include <iostream>
#include "chapter3.hpp"

using namespace std;

void chapter3::ex_3_35()
{
    int ai[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int *pstart = begin(ai);
    int *pend = end(ai);

    for (int *i = pstart; i != pend; ++i)
    {
        *i = 0;
    }
    
    for (auto i : ai)
    {
        cout << i << endl;
    }
}


bool chapter3::ex_3_36a(int *const pstart1, int *const pend1, int *const pstart2, int *const pend2)
{
    if ((pend1 - pstart1) != (pend2 - pstart2))
    {
        return false;
    }
    
    for (int *p1 = pstart1, *p2 = pstart2; p1 != pend1 && p2 != pend2; ++p1, ++p2)
    {
        if (*p1 != *p2)
        {
            return false;
        }
    }
    
    return true;
}