#include <stdio.h>
#include <stdlib.h>
int main()
{
	int hours=4;
	int minutes=27;
	int seconds=56;
	if(hours>=24 || minutes>60 || seconds>60)
	{
		printf("Invalid Time input!\n");
		exit(0);
	}
		printf("Time in 24 hour format: %d:%d:%d \n",hours,minutes,seconds);
	
	int hrs;
char meridian;
if(hours>12)
	{
		meridian='p';
		printf("Time in 12 hour format: %d:%d:%d  %cm\n",hours-12,minutes,seconds,meridian);
	}
else if(hours==12 && minutes>0)
	{
		meridian='p';
		printf("Time in 12 hour format: %d:%d:%d  %cm\n",hours,minutes,seconds,meridian);

	}
else
	{
		meridian='a';
	printf("Time in 12 hour format: %d:%d:%d %cm\n",hours,minutes,seconds,meridian);
	}
		return 0;
}
