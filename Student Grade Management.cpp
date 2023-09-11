//STUDENT GRADE MANAGEMENT PROGRAM IN C LANGUAGE.
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int Computer_Science;
    int Mathematics;
    int Physics;
    int Social_Studies;
    int Chemistry;
};

int main()
{
    int num_students;

    printf("Enter the Number of Students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    for (int i = 0; i < num_students; i++)
    {
        printf("\nEnter Details for Student %d:\n", i + 1);

        printf("Enter Student Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Marks of Computer Science: ");
        scanf("%d", &students[i].Computer_Science);

        printf("Enter Marks of Mathematics: ");
        scanf("%d", &students[i].Mathematics);

        printf("Enter Marks of Physics: ");
        scanf("%d", &students[i].Physics);

        printf("Enter Marks of Social Studies: ");
        scanf("%d", &students[i].Social_Studies);

        printf("Enter Marks of Chemistry: ");
        scanf("%d", &students[i].Chemistry);
    }

    printf("------------------------------------------\n");
    printf("All Relevant Details of the Student\n");

    for (int i = 0; i < num_students; i++)
    {
        printf("\nDetails for Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Computer Science: %d\n", students[i].Computer_Science);
        printf("Mathematics: %d\n", students[i].Mathematics);
        printf("Physics: %d\n", students[i].Physics);
        printf("Social Studies: %d\n", students[i].Social_Studies);
        printf("Chemistry: %d\n", students[i].Chemistry);

        // Calculating and showcasing of the  average marks
        int Total_Marks = students[i].Computer_Science +
                         students[i].Mathematics+
                         students[i].Physics+
                         students[i].Social_Studies +
                         students[i].Chemistry;
        double Average_Marks = (double)Total_Marks / 5.0;

        printf("Average Marks of the Student: %.2lf\n", Average_Marks);
        
        
    // Initializing variables to the first subject's marks
        int Highest_Marks = students[i].Computer_Science;
        int Lowest_Marks = students[i].Computer_Science;

// Comparing with the remaining subjects
        if (students[i].Mathematics > Highest_Marks)
        Highest_Marks = students[i].Mathematics;
        else if (students[i].Mathematics < Lowest_Marks)
        Lowest_Marks = students[i].Mathematics;

        if (students[i].Physics > Highest_Marks)
        Highest_Marks = students[i].Physics;
        else if (students[i].Physics < Lowest_Marks)
        Lowest_Marks = students[i].Physics;

        if (students[i].Social_Studies > Highest_Marks)
        Highest_Marks = students[i].Social_Studies;
        else if (students[i].Social_Studies < Lowest_Marks)
        Lowest_Marks = students[i].Social_Studies;

        if (students[i].Chemistry > Highest_Marks)
        Highest_Marks = students[i].Chemistry;
        else if (students[i].Chemistry < Lowest_Marks)
        Lowest_Marks = students[i].Chemistry;

        printf("Highest Marks: %d\n", Highest_Marks);
        printf("Lowest Marks: %d\n", Lowest_Marks);
        
        //Calculating the Grade of the students.
        if (Average_Marks >= 90.0)
            printf("Performance: Excellent(Grade : E)\n");
        else if (Average_Marks >= 80.0)
            printf("Performance: Good(Grade : A)\n");
        else if (Average_Marks >= 70.0)
            printf("Performance: Average(Grade : B)\n");
        else if (Average_Marks >= 60.0)
            printf("Performance: Below Average(Grade : C)\n");
        else if (Average_Marks >= 50.0)
            printf("Performance: Just Passed(Grade : D)\n");
        else
            printf("Performance: Failed(Grade : FAIL)\n");
		    
    

}

    return 0;
}


