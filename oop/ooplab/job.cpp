//#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;


struct Job {
   char id;
   int deadLine;
   int profit;
};


bool comp(Job j1, Job j2) {
   return (j1.profit > j2.profit);    //compare jobs based on profit
}


int min(int a, int b) {
   return (a<b)?a:b;
}


void jobSequence(Job jobList[], int n) {
   sort(jobList, jobList+n, comp);    //sort jobList on profit

   int jobSeq[n];     // To store result (Sequence of jobs)
   bool slot[n];      // To keep track of free time slots

   for (int i=0; i<n; i++)
      slot[i] = false; //initially all slots are free

   for (int i=0; i<n; i++) {    //for all given jobs
      for (int j=min(n, jobList[i].deadLine)-1; j>=0; j--) {   //search from last free slot
         if (slot[j]==false) {
            jobSeq[j] = i;   // Add this job to job sequence
            slot[j] = true;  // mark this slot as occupied
            break;
         }
      }
   }

   for (int i=0; i<n; i++)
      if (slot[i])
         cout << jobList[jobSeq[i]].id << " ";    //display the sequence
}

int main() {
   Job jobList[] = {{'a',2,100}, {'b',1,19}, {'c',2,27},{'d',1,25},{'e',3,15}};
   int n = 5;
   cout << "Following is maximum profit sequence of job sequence: ";
   jobSequence(jobList, n);
}






































