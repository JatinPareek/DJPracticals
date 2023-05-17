#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

//structure to rep a job
typedef struct Job{
    char id;
    int deadline;
    int profit;
}Job;

//compare function is used to sort all jobs according to profit
int compare(const void* a, const void* b)
{
    Job* temp1 = (Job*)a;
    Job* temp2 = (Job*)b;
    return (temp2->profit - temp1->profit);
}

//min number between two numbers
int min(int num1, int num2)
{
    return (num1>num2) ? num2 : num1;
}

//returns max profit from jobs
void printJobScheduling(Job a[], int n){
    qsort(a, n ,sizeof(Job), compare); //sorts all jobs according to decreasing order of profit

    int result[n]; //store result
    bool slot[n]; //keep track of free time slots

    //initialise all sorts to be free
    for(int i=0; i<n; i++)
        slot[i] = false;

    //iterate through all given jobs
    for(int i=0; i<n; i++){
        //find a free slot for this job and we start from the last possible slot
        for(int j = min(n, a[i].deadline)-1; j>=0; j--){
            if(slot[i] == false){
                result[j] = i; //add this job to result
                slot[j] = true;
                break;
            }
        }
    }

    //print result
    for(int i=0; i<n; i++){
        if(slot[i]){
            printf("%c\t", a[result[i]].id);
        }
    }

}
// Driver's code
int main()
{
    Job a[] = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };
    int n = sizeof(a) / sizeof(a[0]);
    printf(
        "Following is maximum profit sequence of jobs \n");
 
    // Function call
    printJobScheduling(a, n);
    return 0;
}