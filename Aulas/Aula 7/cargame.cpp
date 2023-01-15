#include <stdio.h>
#include <time.h>

#define MIN_DISTANCE 10
#define MAX_DISTANCE 100
#define MIN_SPEED 5
#define MAX_SPEED 20

int main() {
  int distance, speed;
  double time;

  srand(time(NULL)); // inicializa a semente para a função rand()

  distance = MIN_DISTANCE + rand() % (MAX_DISTANCE - MIN_DISTANCE + 1);
  speed = MIN_SPEED + rand() % (MAX_SPEED - MIN_SPEED + 1);

  time = (double) distance / speed; // calcula o tempo em horas

  printf("Você percorreu %d quilômetros a uma velocidade média de %d km/h em %.1f horas.\n", distance, speed, time);

  return 0;
}
