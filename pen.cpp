#include <iostream>
#include "pen_h"

std::string Pen:: drawline(){
    
    return getName().append("draws a line.");
    
}

std::string Pen::drawCircle(){
    
    return Pen::getName().append("draws a circle.");
    
    
}