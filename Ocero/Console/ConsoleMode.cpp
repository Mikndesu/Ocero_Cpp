//
//  ConsoleMode.cpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/05.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//
//  https://okwave.jp/qa/q3121681.html
//

#include "ConsoleMode.hpp"
#include <unistd.h>
#include <termios.h>

ConsoleMode* ConsoleMode::instance = nullptr;

ConsoleMode::ConsoleMode() {
    tcgetattr(STDIN_FILENO, &CookedTermIos);
}

void ConsoleMode::destoroy() {
    instance->toCookedMode();
    delete ConsoleMode::instance;
}

ConsoleMode* ConsoleMode::getInstance() {
    if(ConsoleMode::instance == nullptr) ConsoleMode::instance = new ConsoleMode();
    return ConsoleMode::instance;
}

void ConsoleMode::toRawMode() {
    RawTermIos = CookedTermIos;
    cfmakeraw(&RawTermIos);
    tcsetattr(STDIN_FILENO, 0, &RawTermIos);
}

void ConsoleMode::toCookedMode() {
    tcsetattr(STDIN_FILENO, 0, &CookedTermIos);
}
