#include <stdio.h>

int main()
{
    int category, choice;

    printf("Chatbot Menu\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("1. Hello\n");
            printf("2. How are you\n");
            printf("3. Goodbye\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Hello! How can I help you?\n");
                    break;
                case 2:
                    printf("I am ready to help you.\n");
                    break;
                case 3:
                    printf("Goodbye! Have a nice day.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 2:
            printf("1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Practice C programs to improve your programming skills.\n");
                    break;
                case 2:
                    printf("Solve mathematics problems step by step.\n");
                    break;
                case 3:
                    printf("AI is used to build systems that perform tasks such as prediction.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 3:
            printf("1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Check a weather service for today's weather.\n");
                    break;
                case 2:
                    printf("Check a weather service for tomorrow's weather.\n");
                    break;
                case 3:
                    printf("This chatbot does not have live weather data.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 4:
            printf("1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("This is a simple menu based chatbot.\n");
                    break;
                case 2:
                    printf("Select a category and then enter a choice number.\n");
                    break;
                case 3:
                    printf("Chatbot closed.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        default:
            printf("Invalid category.\n");
    }
    return 0;
}
