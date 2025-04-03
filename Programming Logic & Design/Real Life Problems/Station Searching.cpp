#include <stdio.h>
#include <string.h>
int main(){

	int Total_stations;
	char stations[100][100];
	printf("Enter total stations:\n");
	scanf("%d", &Total_stations);
	getchar();
	printf("Enter the names of the stations:\n");
	for(int i=0;i<Total_stations;i++){
		scanf("%s", stations[i]);
	}
	char current_station[100];
	printf("Enter the current station:\n");
	scanf("%s", current_station);
	for(int i=0;i<Total_stations;i++){
		if(strcmp(current_station,stations[i])==0){
			printf("Train has reached: %s\n", stations[i]);
			if(strcmp(current_station,"Barrackpore")==0){
				printf("Train has reached its destination Barrackpore!\n");
			}
			else{
				printf("Not yet reached Barrackpore.\n");
			}
			break;
	}
}
	return 0;
}