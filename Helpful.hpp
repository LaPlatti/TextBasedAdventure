#ifndef HELPFUL_HPP
#define HELPFUL_HPP

#ifdef _WIN32 
    #include <Windows.h>
#else
    #include <unistd.h>
#endif


#include <string>
#include <iostream>
#include <algorithm>
#include <thread>
#include <chrono> //microsec


using namespace std; 

/*class Helpful 
{
   public: 
   void slowPrinting(string s);  
   void clearScreen(); 
}; */

void slowPrinting(string s)
{
    for (int i = 0; i < s.size(); i++) { 
        cout << s[i] << flush; //Ausgabe Buchstabe per Buchstabe 
        this_thread::sleep_for(chrono::microseconds(40000)); 
    }
     cout << endl; 

}

void clearScreen()
{
    #ifdef _WIN32
        system("CLS");
    #else 
        system("clear");
    #endif
}

#endif