#ifndef TEMPHUMIDSERVICE_H
#define TEMPHUMIDSERVICE_H

#pragma once
#include "DHT_Data.h"
#include "TempHumidView.h"

class TempHumidService
{
public:
    TempHumidService(TempHumidView *tempHumidView);
    virtual ~TempHumidService();
    void updateEvent(DHT_Data dhtData);

private:
    TempHumidView *tempHumidView;
};

#endif