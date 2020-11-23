#ifndef STAGE_HPP
#define STAGE_HPP

#pragma once
#include <iostream>
#include <string> 
//#include "stageMethods.hpp"
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"


using namespace std; 

class Stage
{
    public: 
        Stage(); 
        ~Stage(); 
        void run(); 
        int getID(); 
        string getName(); 
        string getDescription(); 
        string getDescription2(); 
        int getNext(); //Muss das Fach bestanden werden? 
        virtual bool specificRun() = 0; //virtual, damit die derived classes aufgerufen werden. = 0 weil? i dunno? aber es geht
        bool toPass;

    protected: 
        int id;  //stageID
        string name; //stageName
        string description; //shortTest
        string description2; //Question to Answer
        bool passed; 
}; 

#endif


