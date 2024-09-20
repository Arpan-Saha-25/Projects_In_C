#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50 // Max size for task strings

// Node structure for linked list
struct Node
{
    char task[SIZE];   // Task description
    struct Node *next; // Pointer to next node
};

// Function to add a task
struct Node *addTask(struct Node *head)
{
    struct Node *temp = head;
    // Find the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    getchar(); // Clear input buffer
    printf("Enter your task: ");
    fgets(newNode->task, SIZE, stdin);                  // Read task
    newNode->task[strcspn(newNode->task, "\n")] = '\0'; // Remove newline
    newNode->next = NULL;                               // Next is NULL

    temp->next = newNode; // Link new node to list

    return head; // Return head
}

// Function to display tasks
void displayTasks(struct Node *head)
{
    struct Node *temp = head->next; // Skip dummy node
    if (temp == NULL)
    {
        printf("No tasks available.\n");
        return;
    }
    int i = 1;
    // Print each task
    while (temp != NULL)
    {
        printf("%d. %s\n", i, temp->task);
        temp = temp->next;
        i++;
    }
}

// Function to delete a task
struct Node *deleteTask(struct Node *head, int taskNumber)
{
    if (head->next == NULL)
    {
        printf("No tasks to delete.\n");
        return head;
    }

    struct Node *temp = head->next; // First actual task
    struct Node *prev = head;       // Previous node
    int i = 1;

    // Find the task to delete
    while (temp != NULL && i < taskNumber)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        printf("Task not found.\n");
        return head;
    }

    prev->next = temp->next; // Remove task

    printf("Task '%s' completed and removed.\n", temp->task);
    free(temp); // Free memory

    return head; // Return head
}

int main()
{
    printf("To-Do List Manager:\n\n");
    printf("Press 1 to add task\n");
    printf("Press 2 to see all tasks\n");
    printf("Press 3 to mark task as complete\n");
    printf("Press 4 to exit\n\n");

    // Create head node
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(head->task, "Your tasks are :");
    head->next = NULL; // Next is NULL

    int choice;
    while (1)
    {
        printf("\n>>> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = addTask(head); // Add task
            break;
        case 2:
            displayTasks(head); // Show tasks
            break;
        case 3:
        {
            printf("Enter the task number to mark as complete: ");
            int taskNumber;
            scanf("%d", &taskNumber);
            head = deleteTask(head, taskNumber); // Delete task
            break;
        }
        case 4:
            printf("Exiting program.\n");
            return 0; // Exit
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0; // End of program
}
