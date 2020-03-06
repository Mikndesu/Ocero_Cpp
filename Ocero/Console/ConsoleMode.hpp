//
//  ConsoleMode.hpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/05.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//
//  This changes the console mode, so not Exiting without delete this class.
//

#ifndef ConsoleMode_hpp
#define ConsoleMode_hpp

#include <cstdio>
#include <unistd.h>
#include <termios.h>

class ConsoleMode {
    
private:
    ConsoleMode();
    
    ~ConsoleMode() = default;
    
    struct termios CookedTermIos;
    struct termios RawTermIos;
    
    static ConsoleMode* instance;
    
public:
    ConsoleMode(const ConsoleMode&) = delete;
    ConsoleMode& operator=(const ConsoleMode&) = delete;
    ConsoleMode(ConsoleMode&&) = delete;
    ConsoleMode& operator=(ConsoleMode&&) = delete;
    
    static ConsoleMode* getInstance();
    
    static void destoroy();
    
    void toRawMode();
    
    void toCookedMode();
};


#endif /* ConsoleMode_hpp */
