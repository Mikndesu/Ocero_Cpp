//
//  main.cpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/05.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#include <iostream>
#include <memory>
#include "Game/Game.hpp"

int main(int argc, const char * argv[]) {
#ifdef _WIN32
    std::cerr << "Not supported Windows" << std::endl;
    std::exit(1);
#endif
    std::unique_ptr<Game> game(new Game());
    game->startUpGame();
    return 0;
}
