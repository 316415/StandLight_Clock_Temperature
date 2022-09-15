#include "Listener.h"

Listener::Listener(Button *button, Button *powerButton, Controller *control, ClockCheck *time)
{
    modeButton = button;
    this->powerButton = powerButton;
    controller = control;
    timeClock = time;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (modeButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("modeButton");
    }

    if (powerButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("powerButton");
    }

    if (timeClock->isUpdate())
    {
        controller->updateEvent("clockUpdate");
    }
}