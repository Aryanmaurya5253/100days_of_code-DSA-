// Problem: Count Nodes in Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function to count nodes
int countNodes(struct node *head) {
    int count = 0;
    struct node *temp = head;
    
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    
    return count;
}

int main() {
    int n, value;
    struct node *head = NULL, *temp = NULL, *newNode = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    int result = countNodes(head);
    printf("%d", result);

    return 0;
}