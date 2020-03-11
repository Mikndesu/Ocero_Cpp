//
//  Util.hpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/11.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#ifndef Util_hpp
#define Util_hpp

#include <iostream>

class Util {
public:
    template<class Head, class... Tail>
    void printAll(Head&& head, Tail&&... tail) {
      std::cout << head << std::endl;
      printAll(std::forward<Tail>(tail)...);
    }
    
    template<class T>
    void print(const T& t) {
        std::cout << t <<  std::endl;
    }

private:
    void printAll(){}
};

#endif /* Util_hpp */
