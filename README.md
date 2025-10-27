# Vehicle_Efficiency_Calculator
Student Grading System
Develop a C program to calculate the average and grade of each student in the first year BTech program based on their marks obtained in the first semester. The program should prompt the user to input the marks of each student for subjects such as mathematics, physics, chemistry, english and computer science. Using control structures such as loops and conditional statements, the program should calculate the average marks and assign grades to each student according to predefined grading criteria. Finally the program should display the average marks and grade for each student.

Research:

The grading system plays a vital role in assessing students’ academic performance. It evaluates the student’s learning abilities and understanding of subjects. It reduces exam stress and helps the students to identify their strengths and areas for improvement.
A lot of different types of grading systems are using around the world, some of them are:
GPA stands for Grade Point Average and it is the standard method of calculating a student's average score over a period of time. It is calculated by dividing the average points scored by a student by the total credit hours attended by the student.
CGPA stands for Cumulative Grade Point Average. The mean GPA of semesters is calculated and then it is divided by the total number of credits. Two main CGPA-based grading systems widely used in India: the 10-point grading system and the 7-point grading system. 
In the letter grade system, students are awarded grades such as A, B, C, etc., which reflect their academic performance but do not directly correspond to numeric values.
This is the traditional grading system where student performance is represented as a percentage based on marks obtained.
75% and above – Distinction
60% to 75% – First Division
50% to 60% – Second Division
40% to 50% – Third Division
References: 
Grading System in India: University Scale, Marks, Grades & Percentages

Analyse:

To develop a grading system, certain concepts are needed in order to write the code:
Input Handling: Using printf and scanf functions to take the input scores from the user.
Grading System: Choosing a grading system appropriate to the situation. 
Score Processing: The scores entered by the user will be used to calculate total scores, average and percentage depending on the type of grading system used.
Grade Assignment: Use decision control commands like if-elseif-else to assign the proper grade to each student.
Output: Use printf function to display the total marks, percentage and grade to the user.

Ideate:

To design a program that helps drivers track the fuel efficiency of multiple vehicles. The program takes the vehicle name, distance traveled, fuel consumed and calculates its mileage (km per litre) and classifies each vehicle as Highly Efficient, Moderately Efficient, Low Efficiency or Poor Efficiency.


Mileage for car (km per litre)
Efficiency Category
> 20
High Efficiency
15 - 20
Moderate Efficiency
10 - 14
Low Efficiency
< 10
Poor Efficiency



Mileage for bike (km per litre)
Efficiency Category
> 35
High Efficiency
25 - 35
Moderate Efficiency
15 - 25
Low Efficiency
< 15
Poor Efficiency



Build:

#include <stdio.h>

int main(){
    char name[10][20];
    int distance, fuel, num_veh, i = 0;
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
        i++;
    }

    return 0;
}

Test:

Enter number of vehicles: 5

Enter the type of the vehicle, 1 for bike, 2 for car: 1
Enter the name of the vehicle: Bike_A
Enter the distance traveled (km): 300
Enter the fuel consumed (litre): 10

Enter the type of the vehicle, 1 for bike, 2 for car: 2
Enter the name of the vehicle: Car_A
Enter the distance traveled (km): 250
Enter the fuel consumed (litre): 25

Enter the type of the vehicle, 1 for bike, 2 for car: 1
Enter the name of the vehicle: Bike_B
Enter the distance traveled (km): 500
Enter the fuel consumed (litre): 45

Enter the type of the vehicle, 1 for bike, 2 for car: 1
Enter the name of the vehicle: Bike_C
Enter the distance traveled (km): 450
Enter the fuel consumed (litre): 34

Enter the type of the vehicle, 1 for bike, 2 for car: 2
Enter the name of the vehicle: Car_B
Enter the distance traveled (km): 730
Enter the fuel consumed (litre): 45

---- Vehicle Efficiency Report ---
 Vehicle  	Mileage(km/l)	Efficiency  
 Bike_A   	30.0         	Moderate Efficiency
 Car_A    	10.0         	Poor Efficiency
 Bike_B   	11.0         	Poor Efficiency
 Bike_C   	13.0         	Poor Efficiency
 Car_B    	16.0         	Low Efficiency
