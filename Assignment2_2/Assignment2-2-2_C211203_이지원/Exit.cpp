#include "Exit.h"
#include <fstream>

extern std::ofstream out_fp;

Exit::Exit(int& is_program_exit) : is_program_exit(is_program_exit) {
    exitUI = new ExitUI();
}

void Exit::exitProgram() {
    out_fp << "6.1. 종료\n";
    is_program_exit = 1;  
}

ExitUI* Exit::getExitUI() {
    return exitUI;
}
