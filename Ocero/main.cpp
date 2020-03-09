//
//  main.cpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/05.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "Console/ConsoleMode.hpp"
#include "Console/KeyCode.hpp"

#define USEFOR

template<typename T>
void print(T t) {
    std::cout << t << "                    " << "\r";
}

int main(int argc, const char * argv[]) {
#ifdef _WIN32
    std::cerr << "Not supported Windows" << std::endl;
    std::exit(1);
#endif
    ConsoleMode* cm = ConsoleMode::getInstance();
    cm->toRawMode();
    for(int a = std::getchar();; a = std::getchar()) {
        switch(a) {
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::UP_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::UP_ARROW):
            case static_cast<int>(KeyCode::WASD::W):
                print("Up Pressed");
                break;
                
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::RIGHT_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::RIGHT_ARROW):
            case static_cast<int>(KeyCode::WASD::D):
                print("Right Pressed");
                break;
                
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::UNDER_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::UNDER_ARROW):
            case static_cast<int>(KeyCode::WASD::S):
                print("Under Pressed");
                break;
                
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::LEFT_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::LEFT_ARROW):
            case static_cast<int>(KeyCode::WASD::A):
                print("Left Pressed");
                break;
            case static_cast<int>(KeyCode::Terminal::QUITCODE::QUIT):
            case static_cast<int>(KeyCode::XcodeDebug::QUITCODE::QUIT):
                print("Quit Pressed");
                goto GAMEEXIT;
        }
    }
    GAMEEXIT:
    cm->destoroy();
    return 0;
}
