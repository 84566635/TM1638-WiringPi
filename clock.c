/**
 *
 *    * data: GPIO 23
 *    * clock: GPIO 24
 *    * strobe: GPIO 25
 */

/** @cond NEVER */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>
#include <wiringPi.h>
#include "tm1638.h"



int main(int argc, char *argv[])
   
    

{
  tm1638_p t;


printf ("Orange Pi - 1638\n");


if (wiringPiSetup () == -1)
    {
      printf ("wiringPiSetup Error\n");
      exit (1) ;
    }


  t = tm1638_alloc(23, 24, 25);
  if (!t)
    {
      printf("Unable to allocate TM1638\n");
      return -2;
    }

  while(1)
    {
      time_t now    = time(NULL);
      struct tm *tm = localtime(&now);

      char text[10];
      snprintf(text, 9, "%02d %02d %02d", tm->tm_hour, tm->tm_min, tm->tm_sec);
      tm1638_set_7seg_text(t, text, 0x00);
      delay(100);
    }

  return 0;
}
