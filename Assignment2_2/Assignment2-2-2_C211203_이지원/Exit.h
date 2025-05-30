#ifndef EXIT_H
#define EXIT_H

#include "ExitUI.h"

class Exit {
private:
    ExitUI* exitUI;
    int& is_program_exit;  
public:
    Exit(int& is_program_exit);  
    void exitProgram();
    ExitUI* getExitUI();
};

#endif