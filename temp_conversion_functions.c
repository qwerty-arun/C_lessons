#include <stdio.h>
void fahr_to_celcius(float fahr);
int main()
{
  float fahr=0;
  printf("Fahrenheit	Celcius\n");
  for(fahr=0.0;fahr<=400.0;fahr=fahr+20.0)
  {
    fahr_to_celcius(fahr);
  }
return 0;
}
void fahr_to_celcius(float fahr)
{
  float celcius = (5.0/9.0)*(fahr-32);
  printf("%3.1f\t\t%6.1f\n",fahr,celcius);
}

