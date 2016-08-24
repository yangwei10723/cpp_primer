//
//  chapter6.hpp
//  cpp_primer
//
//  Created by yw on 16/8/24.
//  Copyright © 2016年 yangwei. All rights reserved.
//

#ifndef chapter6_hpp
#define chapter6_hpp

#include <string>

class chapter6
{
public:
    int fact(int i);
    
    void calc_fact();

    void ex_6_05(int &i);
    
    void call_ex_6_05();
    
    bool ex_6_17a(const std::string &s);
    std::string ex_6_17b(const std::string &s);
};

#endif /* chapter6_hpp */
