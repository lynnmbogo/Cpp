#ifndef BALLPEN_H
#define BALLPEN_H
#include "pen.h"

RollerBallPen : public Pen{

 public:

 RollerBallPen(std::string pen_name)

 : Pen(pen_name) {}

 RollerBallPen() : Pen(std::string("RollerBallPen")){}

 virtual std::string drawLine() {
 };
 
#endif