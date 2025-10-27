#include <stdio.h>

int main(){
    char name[10][20];
    int distance, fuel, num_veh, i = 0, type[10];
    float mileage[10];

    invalid1:
    printf("Enter number of vehicles: ");
    scanf("%d", &num_veh);
    printf("\n");
    if(num_veh > 10){
        printf("Number of vehicles cannot be more than 10. \n");
        goto invalid1;
    }

    while(i < num_veh){
        printf("Enter the type of the vehicle, 1 for bike, 2 for car: ");
        scanf("%s", &type[i]);
        printf("Enter the name of the vehicle: ");
        scanf("%s", &name[i]);
        printf("Enter the distance traveled (km): ");
        scanf("%d", &distance);
        printf("Enter the fuel consumed (litre): ");
        scanf("%d", &fuel);
        printf("\n");

        mileage[i] = distance / fuel;
        i++;
    }
    i = 0;

    printf("---- Vehicle Efficiency Report ---");
    printf("\n %-12s %-16s %-12s", "Vehicle", "Mileage(km/l)", "Efficiency");
    while(i < num_veh){
        if(type[i] == 2){
            if(mileage[i]>20){
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "High Efficiency");
            }
            else if(mileage[i] >= 15){
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "Moderate Efficiency");
            }
            else if(mileage[i] >= 10){
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "Low Efficiency");
            }
            else{
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "Poor Efficiency");
            }
        }
        else{
            if(mileage[i]>35){
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "High Efficiency");
            }
            else if(mileage[i] >= 25){
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "Moderate Efficiency");
            }
            else if(mileage[i] >= 15){
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "Low Efficiency");
            }
            else{
                printf("\n %-12s %-16.1f %-12s", name[i], mileage[i], "Poor Efficiency");
            }
        }
        i++;
    }

    return 0;
}
