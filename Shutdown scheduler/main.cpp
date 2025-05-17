#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h> 


int main() {
start:
    printf("Shutdown scheduler by Luka Draganovic\n\n");
    printf("\nShutdown scheduling: PRESS 1");
    printf("\nCancel scheduled shutdown: PRESS 2\n");
    printf("End the program: PRESS 3\n");

    int input = 0;
    scanf_s("%d", &input);
    while (input < 1 || input > 3)
    {
        system("cls");
        goto start;
    }
    if (input == 2) {
        system("cls");
        system("shutdown /a");
        printf("Shutdown canceled.\nReturning to main menu in : ");
        int i;
        for (i = 5; i >= 1; i--) {
            printf("\n%d", i);
            Sleep(1000);
            
        }
        system("cls");
        goto start;
    }
    else if (input == 3) { return 3; }
    system("cls");

    printf("\nIn how much time do you want your pc to turn off: PRESS 1");
    printf("\nWhen do you want your pc to turn off: PRESS 2\n");
    printf("\nReturn to main menu: PRESS 3\n");
    int input2 = 0;

    scanf_s("%d", &input2);
    while (input2 < 1 || input2 > 3)
    {
        system("cls");
        goto start;
    }



    long long delay_seconds = 0;
    int hour, min; //user input time
    if (input2 == 3) {
        system("cls");
        goto start;
    }
    else if (input2 == 2) {
    again:

        system("cls");
        printf("Enter when pc will shutdown (HH:MM in 24-hour format): ");
        scanf_s("%d:%d", &hour, &min);
        time_t current_time;
        struct tm* local_time_info;
        int hours;
        int minutes;
        current_time = time(NULL);
        local_time_info = localtime(&current_time);
        hours = local_time_info->tm_hour;
        minutes = local_time_info->tm_min;
        int diffh = hour - hours;
        int diffm = min - minutes;
        if (diffh < 0 || hour > 24) {
            system("cls");
            goto again;
        }
        if (min <0 || min > 60) {
            system("cls");
            goto again;
        }
        delay_seconds = diffh * 3600 + diffm * 60;
        if (delay_seconds < 0) {
            system("cls");
            goto again;
        }
        
    }
    else {
        int hour, min;
        system("cls");

        printf("Enter the shutdown time (HH:MM in 24-hour format): ");
        scanf_s("%d:%d", &hour, &min);
        delay_seconds = (long long)(hour * 3600) + (min * 60);

    }
   
    
    char command[100];
    sprintf_s(command,"shutdown /s /t %lld", delay_seconds);


    // Execute the shutdown command
    if (system(command) != 0) {
        perror("Error executing shutdown command");
        return 1;
    }
    int h = delay_seconds / 3600;
    int m = delay_seconds % 3600 / 60;
    printf("Shutdown initiated. Your pc will turn of in %d hours and %d minutes.\nYou can cancel it using 'shutdown /a' in the command prompt.\n",h,m);
    int j;
    for (j = 5; j >= 1; j--) {
        printf("\n%d", j);
        Sleep(1000);

    }
    system("cls");
    goto start;
    

    return 0;
}
