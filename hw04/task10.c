#include <stdio.h>

int main()
{	
	const int SPRING_START = 3;
	const int SUMMER_START = 6;
	const int AUTUMN_START = 9;
	
	int month;
	
	scanf("%d", &month);
	
	if (month < 1 || month > 12) 
		return 0;
		
	int in_season(int season_start)
	{
		return month >= season_start && month <= season_start + 2;
	}

	
	printf(in_season(SPRING_START) ? "spring" : in_season(SUMMER_START) ? "summer" : in_season(AUTUMN_START) ? "autumn" : "winter");
	printf("\n");
		
	
	return 0;
}
