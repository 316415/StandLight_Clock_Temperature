#include "TempHumidView.h"

TempHumidView::TempHumidView(LCD *lcd)
{
    this->lcd = lcd;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumidData(float temp, float humid)
{
    char buff[30];
    sprintf(buff, "   %.1fC", temp);
    lcd->WriteStringXY(0, 7, buff);
    printf("%s\n", buff);
    sprintf(buff, "   %.1f%%", humid);
    lcd->WriteStringXY(1, 7, buff);
    printf("%s\n", buff);
}