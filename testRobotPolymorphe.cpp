#include <iostream>
#include <ostream>
#include <list>
#include "testRobotPolymorphe.h"


void testRobotPolymorphe(Robot& r)
{
    for (int i=0; i<8; ++i)
    {
        r.montrer();
        r.avancer(1);
    }

}


void testConteneurPolymorphe()
{
    std::list<Robot*> bots;


    remplirConteneurPolymorphe(bots);
    utiliserConteneurPolymorphe(bots);
    viderConteneurPolymorphe(bots);
}

void remplirConteneurPolymorphe(std::list<Robot*> &bots)
{
    bots.push_back(new Robot{'A'});
    bots.push_back(new RobotTeleporteur{'B'});
    bots.push_back(new RobotRapide{'C'});
    bots.push_back(new RobotTraceur{'D', '.'});
    bots.push_back(new RobotCarburant{'E', '-', 5});
    bots.push_back(new RobotEscargot);
}

void utiliserConteneurPolymorphe(std::list<Robot*> &bots)
{

    for(int i=0; i<8; ++i)
    {
        std::cout << "----------------------------" << std::endl;
        for(const auto& rz: bots)
        {

            rz->montrer();
            rz->avancer(1);


            RobotTeleporteur* cz = dynamic_cast<RobotTeleporteur*>(rz);
            if (cz && i==3)
                cz->teleporter(8);
        }
    }
}

void viderConteneurPolymorphe(std::list<Robot*> &bots)
{
    for (const auto& rz: bots)
        delete rz;
}

///TP Terminé
