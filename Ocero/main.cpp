//
//  main.cpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/05.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#include <iostream>
#include <string>
#include "Console/ConsoleMode.hpp"

template<typename T>
void print(T t) {
    std::cout << t << std::endl;
}

int main(int argc, const char * argv[]) {
    ConsoleMode* cm = ConsoleMode::getInstance();
    cm->toRawMode();
    for(int a = std::cin.get(); a!= 13; a = std::cin.get()) {
        print(a);
    }
    cm->destoroy();
    return 0;
}
