//
//  Game.hpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/11.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "../Console/ConsoleMode.hpp"

class Game {
public:
    void startUpGame();
private:
    ConsoleMode* cm;
    void gameLoop();
    void gameEnd();
};

#endif /* Game_hpp */
