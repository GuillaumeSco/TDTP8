#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

#include <iostream>

class Robot
{
    protected :
        char m_aspect;
        int m_position;

    public :
        Robot(char aspect,int position=0);
        Robot();
        virtual ~Robot() = default;
        virtual void avancer(int vitesse);
        virtual void montrer() const;
};






#endif // ROBOT_H_INCLUDED
