/*
 * Helper.c
 *
 *  Created on: 6 Mar 2017
 *      Author: Peter Goddard
 */

void Delay()
{
  unsigned int i, n;
  for(i=0;i<30000;i++)
  {
    for(n=0;n<200;n++)
    {
      asm("nop");
    }
  }
}
