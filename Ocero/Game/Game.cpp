//
//  Game.cpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/11.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#include <memory>

#include "Game.hpp"
#include "GameBoard/GameBoard.hpp"
#include "../Util/Util.hpp"
#include "../Console/ConsoleMode.hpp"
#include "../Console/KeyCode.hpp"

void Game::startUpGame() {
    std::unique_ptr<GameBoard> gameboard(new GameBoard());
    cm = ConsoleMode::getInstance();
    gameboard->onBoot();
    cm->toRawMode();
}

void Game::gameLoop() {
    std::unique_ptr<Util> util(new Util());
    for(int a = std::getchar();; a = std::getchar()) {
        switch(a) {
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::UP_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::UP_ARROW):
            case static_cast<int>(KeyCode::WASD::W):
                util->print("Up Pressed");
                break;
                
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::RIGHT_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::RIGHT_ARROW):
            case static_cast<int>(KeyCode::WASD::D):
                util->print("Right Pressed");
                break;
                
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::UNDER_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::UNDER_ARROW):
            case static_cast<int>(KeyCode::WASD::S):
                util->print("Under Pressed");
                break;
                
            case static_cast<int>(KeyCode::Terminal::ARROWCODE::LEFT_ARROW):
            case static_cast<int>(KeyCode::XcodeDebug::ARROWCODE::LEFT_ARROW):
            case static_cast<int>(KeyCode::WASD::A):
                util->print("Left Pressed");
                break;
            case static_cast<int>(KeyCode::Terminal::QUITCODE::QUIT):
            case static_cast<int>(KeyCode::XcodeDebug::QUITCODE::QUIT):
                util->print("Quit Pressed");
                goto GAMEEXIT;
        }
    }
    GAMEEXIT:
    gameEnd();
}

void Game::gameEnd() {
    cm->toCookedMode();
}
