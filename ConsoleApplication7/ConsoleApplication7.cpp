

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    //N1!
    int hours;
    int x;
    int minutes;
    double sizemovie;
    int gb;
    gb = 1024;
    double speed;
    cout << "Speed \n";
    cin >> speed;
    cout << "How big the size of the movie \n";
    cin >> sizemovie;
    x = (sizemovie * gb)  / (speed / 8);
    hours = x % 3600;
    minutes = hours % 60;
    cout << "Overall time: \n";
    cout << x / 3600 << "Hour " << hours / 60 << "minutes " << minutes; 
    //N2!
    int flash;
    int movie = 760;
    int gb = 1024;
    cout << "Enter the size of flash: \n";
    cin >> flash;
    cout << "Overall size: ";
    int o;
    o = flash * gb;
    cout << o / movie;
    //N3!
    double number;
    cout << "Enter number ";
    cin >> number;
     
    cout << number * 100 / 100;  
    
    //N4!
    int students;
    int students2;
    cout << "Overall amount ";
    cin >> students;
    cout << "Students with completed homework \n";
    cin >> students2;
    cout << "Students that didnt complete homework \n";
    cout << students % students2;
    //N5!
    int  overalltime;
    int  minutes;
    int  hours;
    int  timeofday = 86400;
    cout << "Overall time before start the day \n";
    cin >> overalltime;
    hours =  timeofday - overalltime;
    hours % 3600;
    minutes = hours / 60;
    cout << "Time till middle of the night \n";
    cout << timeofday - overalltime / 3600 ;
    cout << "hour " << hours / 60;
    cout << "minutes" << minutes;
    
    //N6!
    double suma;
    double rate;
    double procent;
    double y;
    cout << "Write here the overall sum that you have";
    cin >> suma;
    cout << "Write here the rate which you want to put";
    cin >> rate;
    cout << "Write here the exact percent of your amount money";
    cin >> procent;
    y = procent / 100;
    cout << "Overall amount of money";
    cout << (suma * procent) / rate;









    
    
    
    
    



}

