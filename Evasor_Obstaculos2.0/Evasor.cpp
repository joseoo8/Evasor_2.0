#include <Arduino.h> //Permite utilizar los comandos de Arduino
#include "Evasor.h"
void Evasor::Inicializar()
{
	Robot.Inicializar_Robot();
	S1.Inicializar_ultrasonico();
	Servo_1.attach(Pin_Servo);  // attaches the servo on pin 9 to the servo object}

}
void Evasor::Izquierda(int Velocidad_1,int Velocidad_2)
{
	Robot.Motor_1.Adelante(Velocidad_1);
  Robot.Motor_2.Atras(Velocidad_2);
}
void Evasor::Derecha(int Velocidad_1,int Velocidad_2)
{
  Robot.Motor_2.Adelante(Velocidad_1);
  Robot.Motor_1.Atras(Velocidad_2);
}
void Evasor::Adelante(int Velocidad_1,int Velocidad_2)
{
	Robot.Atras(Velocidad_1,Velocidad_2);
}
void Evasor::Stop()
{
  Robot.Stop();
}
void Evasor::Modo_Evasor(int Velocidad)
{
	float Distancia_1;
	float Distancia_2;
	float Distancia_3;
  float Distancia_4;
   	//////////////////////////////////////////
    //    Algoritmo evasor de obstaculos    //
    //////////////////////////////////////////

    Servo_1.write(90);
    Distancia_1=S1.Obtener_Distancia();

    if(Distancia_1 < 5)   
    {
      Stop();
      Servo_1.write(20);
      delay(500);
      Distancia_2=S1.Obtener_Distancia();
      Servo_1.write(90);
      delay(500);
      Distancia_3=S1.Obtener_Distancia();
      Servo_1.write(150);
      delay(500);
      Distancia_4=S1.Obtener_Distancia();
      Servo_1.write(90);
      if(Distancia_2>Distancia_4)
      {
        Izquierda(Velocidad,Velocidad);
        delay(400);
        Stop();
      }
      if(Distancia_2<Distancia_4)
      {
        Derecha(Velocidad,Velocidad);
        delay(400);
        Stop();
      }
    }
    Adelante(Velocidad,Velocidad);
}
