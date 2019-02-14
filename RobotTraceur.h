#ifndef ROBOTTRACEUR_H_INCLUDED
#define ROBOTTRACEUR_H_INCLUDED

#include <iostream>
#include "robot.h"

class RobotTraceur : public Robot
{
    public :
        RobotTraceur(char aspect,char trace);
        virtual ~RobotTraceur() = default;
        virtual void montrer() const;

    protected :
        char m_trace;
};


#endif // ROBOTTRACEUR_H_INCLUDED
