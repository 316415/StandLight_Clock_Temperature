#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#pragma once
#include "LCD.h"

class TempHumidView
{
public:
    TempHumidView(LCD *lcd);
    ~TempHumidView();
    void setTempHumidData(float temp, float humid);

private:
    LCD *lcd;
};

#endif