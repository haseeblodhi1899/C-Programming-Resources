// C Program to Calculate the Average Marks of the Class

#include <stdio.h>

int main()
{
	int gradeCounter = 1, numOfStudents = 0;
	float classAverage = 0, total = 0;
	
	printf("Enter the number of students: ");
	scanf("%d", &numOfStudents);
	printf("\n");
	
	while (gradeCounter <= numOfStudents)
	{
		float grade = 0;
		
		do 
		{
			printf("Enter the grade: ");
			scanf("%f", &grade);
		}
		while (grade < 0 || grade > 100);
		
		total += grade;
		gradeCounter++;
	}
	
	classAverage = total / numOfStudents;
	printf("\nClass Average: %.2f\n", classAverage);

	return 0;
}

