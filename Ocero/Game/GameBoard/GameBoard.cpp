//
//  GameBoard.cpp
//  Ocero
//
//  Created by MitsukiGoto on 2020/03/11.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#include <iostream>
#include <string>
#include "GameBoard.hpp"
#include "../../Util/Util.hpp"

void GameBoard::renderBootMessage() {
    std::unique_ptr<Util> util(new Util());
    util->print("\u001b[32m");
    util->print("  /$$$$$$    /$$     /$$                 /$$ /$$");
    util->print(" /$$__  $$  | $$    | $$                | $$| $$");
    util->print("| $$  \\ $$ /$$$$$$  | $$$$$$$   /$$$$$$ | $$| $$  /$$$$$$");
    util->print("| $$  | $$|_  $$_/  | $$__  $$ /$$__  $$| $$| $$ /$$__  $$");
    util->print("| $$  | $$  | $$    | $$  \\ $$| $$$$$$$$| $$| $$| $$  \\ $$");
    util->print("| $$  | $$  | $$ /$$| $$  | $$| $$_____/| $$| $$| $$  | $$");
    util->print("|  $$$$$$/  |  $$$$/| $$  | $$|  $$$$$$$| $$| $$|  $$$$$$/");
    util->print(" \\______/    \\___/  |__/  |__/ \\_______/|__/|__/ \\______/");
    util->print("\u001b[36m");
    util->print("Do you wanna start Othello?");
    util->print("Y/N");
    util->print("\u001b[0m");
}
void GameBoard::renderStartMessage() {
    std::unique_ptr<Util> util(new Util());
    util->print("\u001b[32m");
    util->print("  /$$$$$$   /$$                           /$$    /$$");
    util->print(" /$$__  $$ | $$                          | $$   | $$");
    util->print("| $$  \\__//$$$$$$    /$$$$$$   /$$$$$$  /$$$$$$ | $$");
    util->print("|  $$$$$$|_  $$_/   |____  $$ /$$__  $$|_  $$_/ | $$");
    util->print(" \\____  $$ | $$      /$$$$$$$| $$  \\__/  | $$   |__/");
    util->print(" /$$  \\ $$ | $$ /$$ /$$__  $$| $$        | $$ /$$");
    util->print("|  $$$$$$/ |  $$$$/|  $$$$$$$| $$        |  $$$$//$$");
    util->print(" \\______/   \\___/   \\_______/|__/         \\___/ |__/");
    util->print("\u001b[0m");
}

void GameBoard::onBoot() {
    renderBootMessage();
    std::unique_ptr<Util> util(new Util());
    bool correctAns = true;
    do {
        std::string ans;
        std::cin >> ans;
        if(ans == "N" || ans == "n") {
            util->print("Quit Game");
            std::exit(0);
        } else if (ans == "Y" || ans == "y") {
            correctAns = false;
        }
    } while (correctAns);
    util->print("\u001b[36m");
    util->print("Start Game!");
    renderStartMessage();
    util->print("\u001b[0m");
}
