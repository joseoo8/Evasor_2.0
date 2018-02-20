# Evasor_2.0
Evasor de obstaculos con servomotor sg90.
Para inicializar el Robot como un evasor son necesarios 2 parametetros, La velocidad y Distancia de deteccion del obstaculo

//Objeto.Modo_Evasor(Velocidad,Distancia) 
La distancia esta en cm.
La velocidad debe estar dentro del rango 0-255.

Ejemplo:
 Robot.Modo_Evasor(255,5);
 la velocidad con la que avanzara el robot sera de 255
 El robot detectara el objeto a 5 cm
