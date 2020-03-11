//
//  GameBoard.hpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/11.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#ifndef GameBoard_hpp
#define GameBoard_hpp

#include "../../Util/Util.hpp"
#include <memory>

class GameBoard {
public:
    void onBoot();
private:
    void renderBootMessage();
    void renderStartMessage();
    void renderGameBoard();
};

#endif /* GameBoard_hpp */
