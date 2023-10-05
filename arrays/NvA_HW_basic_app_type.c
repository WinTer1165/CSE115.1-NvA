#include <stdio.h>
#define MAX_SIZE 100

void array_commands()
{
    printf("Search for numbers: Type 's'\nReplace number: Type 'r'\nInsert values: Type 'i'\nDelete values: Type 'd'\n\nEnter your command:");
}
int user_array_size()
{
    int user_define_array_size;
    printf("\n\nEnter a maximum number of array you want: ");
    scanf("%d", &user_define_array_size);
    return user_define_array_size;
}

int array_input(int function_array[MAX_SIZE], int user_function_array_size)
{
    for (int i = 0; i < user_function_array_size; i++)
    {
        printf("Enter %d array position value: ", i + 1);
        scanf("%d", &function_array[i]);
    }
    return function_array[MAX_SIZE];
}

int array_search(int function_array[MAX_SIZE])
{
    int user_searching_number;
    printf("Enter a number to search it's index value: ");
    scanf("%d", &user_searching_number);
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (user_searching_number == function_array[i])
        {
            printf("Your number %d's index value is %d or at main_array[%d]\n", user_searching_number, i, i);
        }
    }
}

int array_replace(int function_array[MAX_SIZE])
{
    int user_replacing_number, user_new_number;
    printf("Enter a number you want to replace: ");
    scanf("%d", &user_replacing_number);
    printf("Enter your new number: ");
    scanf("%d", &user_new_number);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (user_replacing_number == function_array[i])
        {
            function_array[i] = user_new_number;
        }
    }
    return function_array[MAX_SIZE];
}

int array_insert(int function_array[MAX_SIZE], int user_function_array_size)
{
    int user_inserting_index, user_inserting_number;
    printf("Enter index value where you want to insert: ");
    scanf("%d", &user_inserting_index);
    printf("Enter number you want to insert: ");
    scanf("%d", &user_inserting_number);

    for (int i = user_function_array_size; i >= user_inserting_index; i--)
    {
        function_array[i + 1] = function_array[i];
    }
    function_array[user_inserting_index] = user_inserting_number;
    return function_array[MAX_SIZE];
}

int array_delete(int function_array[MAX_SIZE], int user_function_array_size)
{

    int user_deleting_index;
    printf("Enter index value where you want to delete: ");
    scanf("%d", &user_deleting_index);
    for (int i = user_deleting_index; i < user_function_array_size; i++)
    {
        function_array[i] = function_array[i + 1];
    }
    return function_array[MAX_SIZE];
}

int main()
{

    int main_array[MAX_SIZE] = {0};

    printf("\t\t\tWelcome to Array Playground!\nCreate arrays, Search for numbers, Replace numbers, Insert values and Delete values!!!\n");
    printf("\t\tTo begin, declare your array size and initiate an array!!!\n");
    int user_array_size_value = user_array_size();
    array_input(main_array, user_array_size_value);
    printf("\n");
    printf("YOUR ARRAY: ");
    for (int i = 0; i < user_array_size_value; i++)
    {
        printf("%d ", main_array[i]);
    }
    printf("\n");
    printf("\n");
    array_commands();

    char user_command;
    while (1)
    {

        scanf("%c", &user_command);

        switch (user_command)
        {
        case 's':
            printf("\n");
            array_search(main_array);
            printf("\n");
            printf("\n");
            array_commands();
            break;
        case 'r':
            printf("\n");
            array_replace(main_array);
            printf("\n");
            printf("After replacing new array: ");
            for (int i = 0; i < user_array_size_value; i++)
            {
                printf("%d ", main_array[i]);
            }
            printf("\n");
            printf("\n");
            array_commands();
            break;
        case 'i':
            printf("\n");
            array_insert(main_array, user_array_size_value);
            printf("\n");
            printf("After inserting new array: ");
            for (int i = 0; i < user_array_size_value + 1; i++)
            {
                printf("%d ", main_array[i]);
            }
            printf("\n");
            printf("\n");
            array_commands();
            break;
        case 'd':
            printf("\n");
            array_delete(main_array, user_array_size_value);
            printf("\n");
            printf("After deleting new array: ");
            for (int i = 0; i < user_array_size_value - 1; i++)
            {
                printf("%d ", main_array[i]);
            }
            printf("\n");
            printf("\n");
            array_commands();
            break;
        }
    }
}
