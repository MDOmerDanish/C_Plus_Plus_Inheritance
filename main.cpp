#include <iostream>
#include"Automobile.h"
#include<math.h>
using namespace std;

class Car   : public Automobile

{
    double Angle1;
    double fuel;
    double speed;
public :

    Car ( ) : Automobile ("Car")
    {
        speed=0;
        fuel=30;
        Angle1=atan(posY/posX);
    }
  //void SetInitialPosition (double x,double y);
   //void SetInitialdirection(double x,double y);
   double Getspeed();
   void Increasespeed(){

   if(speed<110)
    {speed+=10;}

   }
   void Decreasespeed(){
    if(speed>9)
    {
      speed -= 10;
    }


   }
   void Move (){

  // speed=Getspeed();

   fuel=fuel- ((sqrt((directionX-posX)*(directionX-posX)+(directionY-posY)*(directionY-posY)))/100000)*8;
  if (fuel>0)
    {directionX=directionX+(speed*(1000/36))*cos(Angle1);
    directionY=directionY+(speed*(1000/36))*sin(Angle1);
}

   }

void TurnRight()
{
   Angle1+=5;
    posX=posX+atan(posY/posX);
    posY=posY+atan(posY/posX);
}
void TurnLeft()
{
   Angle1-=5;
    posX=posX-atan(posY/posX);
    posY=posY-atan(posY/posX);
}

};

class    SUV : public Automobile

{
    double Angle1;
    double fuel;
    double speed;
public :

    SUV ( ) : Automobile ("SUV")
    {
        fuel=50;
        speed=0;
        Angle1=atan(posY/posX);
    }
  // void SetInitialPosition (double x,double y);
   void SetInitialdirection(double x,double y);
   double Getspeed();
   void Increasespeed(){

   if(speed<93)
    {speed+=8;}

   }
   void Decreasespeed(){
    if(speed>7)
    {
      speed -= 8;
    }


   }
   void Move (){

   speed=Getspeed();

   fuel=fuel- ((sqrt((directionX-posX)*(directionX-posX)+(directionY-posY)*(directionY-posY)))/100000)*6;
directionX=directionX+(speed*(1000/36))*cos(Angle1);
directionY=directionY+(speed*(1000/36))*sin(Angle1);

   }

void TurnRight()
{
   Angle1+=10;
    posX=posX+atan(posY/posX);
    posY=posY+atan(posY/posX);
}
void TurnLeft()
{
   Angle1-=10;
   if (fuel>0)
    {posX=posX-atan(posY/posX);
    posY=posY-atan(posY/posX);
   }

}

};

class Bus : public AutomobileWithManualXmission

{
    int gear;
    double Angle1;
    double fuel;
    double speed;
public :

    Bus ( ) : AutomobileWithManualXmission ("Bus")
    {
        fuel=80;
        speed=0;
        Angle1=atan(posY/posX);
    }
   void SetInitialPosition (double x,double y);
   void SetInitialdirection(double x,double y);
   double Getspeed();
   void Increasespeed(){
       gear=GetGearPosition();

       if(gear==1&&speed<15)
       {speed+=6;
       }
            if(gear==2&&speed<25)
       {speed+=6;
       }
    if(gear==3&&speed<40)
       {speed+=6;
       }
    if(gear==4&&speed<55)
       {speed+=6;
       }
       if(gear==5&&speed<75)
       {speed+=6;
       }

   }
   void Decreasespeed(){

    gear=GetGearPosition();
    if(gear==1&&speed>6)
    {
        speed-=6;
    }
 if(gear==2&&speed>15)
    {
        speed-=6;
    }
 if(gear==3&&speed>30)
    {
        speed-=6;
    }
 if(gear==4&&speed>40)
    {
        speed-=6;
    }
 if(gear==5&&speed>55)
    {
        speed-=6;
    }

}
   void Move (){

   speed=Getspeed();

   fuel=fuel- ((sqrt((directionX-posX)*(directionX-posX)+(directionY-posY)*(directionY-posY)))/100000)*4;
directionX=directionX+(speed*(1000/36))*cos(Angle1);
directionY=directionY+(speed*(1000/36))*sin(Angle1);

   }

void TurnRight()
{
   Angle1+=15;
    posX=posX+atan(posY/posX);
    posY=posY+atan(posY/posX);
}
void TurnLeft()
{
   Angle1-=15;
   if (fuel>0)
    {posX=posX-atan(posY/posX);
    posY=posY-atan(posY/posX);
   }

}

};
class Truck : public AutomobileWithManualXmission

{
    int gear;
    double Angle1;
    double fuel;
    double speed;
public :

    Truck ( ) : AutomobileWithManualXmission ("Truck")
    {
        fuel=100;
        speed=0;
        Angle1=atan(posY/posX);
    }
  // void SetInitialPosition (double x,double y);
   void SetInitialdirection(double x,double y);
   double Getspeed();
   void Increasespeed(){
       gear=GetGearPosition();

       if(gear==1&&speed<17)
       {speed+=4;
       }
            if(gear==2&&speed<27)
       {speed+=4;
       }
    if(gear==3&&speed<42)
       {speed+=4;
       }
    if(gear==4&&speed<57)
       {speed+=4;
       }
       if(gear==5&&speed<57)
       {speed+=4;
       }

   }
   void Decreasespeed(){

    gear=GetGearPosition();
    if(gear==1&&speed>3)
    {
        speed-=4;
    }
 if(gear==2&&speed>13)
    {
        speed-=4;
    }
 if(gear==3&&speed>28)
    {
        speed-=4;
    }
 if(gear==4&&speed>38)
    {
        speed-=4;
    }
 if(gear==5&&speed>54)
    {
        speed-=4;
    }

}
   void Move (){

   speed=Getspeed();

   fuel=fuel- ((sqrt((directionX-posX)*(directionX-posX)+(directionY-posY)*(directionY-posY)))/100000)*4;
directionX=directionX+(speed*(1000/36))*cos(Angle1);
directionY=directionY+(speed*(1000/36))*sin(Angle1);

   }

void TurnRight()
{
   Angle1+=25;
    posX=posX+atan(posY/posX);
    posY=posY+atan(posY/posX);
}
void TurnLeft()
{
   Angle1-=25;
   if (fuel>0)
    {posX=posX-atan(posY/posX);
    posY=posY-atan(posY/posX);
   }

}

};








int main()
{
    cout<<"Automobile"<<endl;
     Car k ;
     k.SetInitialPosition(2,5);
   k.Move();
    return 0;
}
