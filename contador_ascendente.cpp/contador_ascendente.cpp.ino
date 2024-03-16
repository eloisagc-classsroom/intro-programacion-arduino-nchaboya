int size = 4; // definimos el número de bits 

int pin[4] = {0,1,2,3}; // Arreglo para acceder a los pines

// Inicializamos cada uno de los pines a utilizar
void setup()
{
  for (int i = 0; i < size ; i++){
    pinMode(pin[i], OUTPUT);
  }
}

int c = 0; // Inicializamos un contador en 0

void loop()
{
  // Si el contador llega al número máximo que se puede representar
  // con el número de bits usados, se reinicia el contador
  if(c == pow(2,4)){
    c = 0;
  }
  
  float aux = c;
  
  // Con este ciclo, convertimos el número decimal a binario,
  // definiendo los pines que deberán encenderse según
  // el número dado
  for (int i = size-1; i >= 0 ; i--){
    if ((aux/pow(2, i)) >= 1){
    	digitalWrite(pin[i], HIGH);
      	aux = aux - pow(2, i);	
  	}
  	else{
      	digitalWrite(pin[i], LOW);
  	}
  }
  
  c ++; // Incrementamos en 1 el contador
  delay(500); // Esperamos 500 milisegundos
}