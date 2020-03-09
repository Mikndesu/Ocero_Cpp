//
//  KeyCode.hpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/06.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#ifndef KeyCode_h
#define KeyCode_h

namespace KeyCode {

enum class WASD {
    W = 0x77,
    A = 0x61,
    S = 0x73,
    D = 0x64
};

namespace Terminal {
enum class ARROWCODE {
    UP_ARROW = 0x41,
    RIGHT_ARROW = 0x43,
    UNDER_ARROW = 0x42,
    LEFT_ARROW = 0x44,
};
enum class QUITCODE {
    QUIT = 0x67
};
}

namespace XcodeDebug {
enum class ARROWCODE {
    UP_ARROW = 0x80,
    RIGHT_ARROW = 0x83,
    UNDER_ARROW = 0x81,
    LEFT_ARROW = 0x82,
};
enum class QUITCODE {
    QUIT = 0x71
};
}

}

#endif /* KeyCode_h */

