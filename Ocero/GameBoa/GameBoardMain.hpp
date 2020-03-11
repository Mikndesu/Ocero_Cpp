//
//  GameBoardMain.hpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/10.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#ifndef GameBoardMain_hpp
#define GameBoardMain_hpp

#include <stdio.h>

class GameBoard {
public:
    void onUpSignal();
    void onRightSignal();
    void onUnderSignal();
    void onLeftSignal();
};

#endif /* GameBoardMain_hpp */
