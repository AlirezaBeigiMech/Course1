/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief <Write simple program to compute some simple calculations>
 *
 * In this program, we are given an array, then we show the mean, median, maximum, minimum and sort it.
 *
 * @author Alireza Beigi
 * @date 8/21/2022
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

#define SIZE (40)



void print_array(unsigned char num[],int size) {



  for (int i = 0; i < size; ++i) {

    printf("List[%d] = %d\n", i, num[i]);
  }

}

unsigned char* copied( unsigned char *var1, int var2)
{

  unsigned char *arr;
  arr = (unsigned char*) malloc(SIZE * sizeof(unsigned char));
  for(int x=0; x<var2; x++)
    {
        *arr = *var1;
        arr++;
        var1++;
    }
    return arr-SIZE;
}

void print_statistics(unsigned char num[],int size) {
  
  unsigned char med = find_median(num,SIZE); 
  unsigned char max = find_maximum(num,SIZE); 
  unsigned char min = find_minimum(num,SIZE); 
  unsigned char mean = find_mean(num,SIZE); 
  unsigned char *arr;
  print_array(num,size);
  printf("Result med = %d\n", med);
  printf("Result max = %d\n", max);
  printf("Result min = %d\n", min);
  printf("Result mean = %d\n", mean);
  arr = copied( num,size);
  print_array(arr,size);

}

unsigned char find_median(unsigned char num[],int size) {
  unsigned char sum = 0.0;
  int med;
  if (size%2 ==0)
  {
    med = size/2-1;
  }
    if (size%2 !=0)
  {
    med = size/2;
  }


  return num[med];

}

unsigned char find_maximum(unsigned char num[],int size) {

  int med = size/2;
  unsigned char max = num[med];
  for (int i = 0; i < size; ++i) {
    if (num[i]>max){
      max = num[i];
    }

  }

  return max;

}

unsigned char find_minimum(unsigned char num[],int size) {

  unsigned char med = size/2;
  unsigned char min = num[med];
  for (int i = 0; i < size; ++i) {
    if (num[i]<min){
      min = num[i];
    }

  }

  return min;

}

unsigned char find_mean(unsigned char num[],int size) {
  long sum = 0.0;

  for (int i = 0; i < size; ++i) {

    sum = sum + num[i];
    

  }
  
  unsigned char mean = sum/size;
  return mean;

}

void swap(unsigned char* xp, unsigned char* yp)
{
    unsigned char temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
// A function to implement bubble sort
void sort_array(unsigned char arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
// A function to implement bubble sort


/* Add other Implementation File Code Here */
