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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char num[],int size);
unsigned char find_median(unsigned char num[],int size);
unsigned char find_maximum(unsigned char num[],int size);
unsigned char find_minimum(unsigned char num[],int size);
unsigned char find_mean(unsigned char num[],int size);
void print_statistics(unsigned char num[],int size);
void sort_array(unsigned char arr[], int n);
void swap(unsigned char* xp, unsigned char* yp);
unsigned char* copied( unsigned char *var1, int var2);

/** print_array
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 * @param <num[]> <A unsigned char pointer to an n-element data array>
 * @param <size> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */

/** find_median
 * @brief <Given an array of data and a length, returns the median value>
 * @param <num[]> <A unsigned char pointer to an n-element data array>
 * @param <size> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */

/** find_maximum
 * @brief <Given an array of data and a length, returns the maximum>
 * @param <num[]> <A unsigned char pointer to an n-element data array>
 * @param <size> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */

 /** find_minimum
 * @brief <Given an array of data and a length, returns the minimum>
 * @param <num[]> <A unsigned char pointer to an n-element data array>
 * @param <size> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */

 /** find_mean
 * @brief <Given an array of data and a length, returns the mean>
 * @param <num[]> <A unsigned char pointer to an n-element data array>
 * @param <size> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */

 /** print_statistics
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 * @param <num[]> <A unsigned char pointer to an n-element data array>
 * @param <size> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */


/** sort_array
 * @brief <Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )>
 * @param <arr[]> <A unsigned char pointer to an n-element copied data array>
 * @param <size> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */

/** swap
 * @brief <A function that swap two elements with each other>
 * @param <xp> <An unsigned char pointer to elemnt data>
 * @param <yp> <An unsigned char pointer to elemnt data>

 */

 /** copied
 * @brief <Given an array of data and a length and copy it to another array>
 * @param <*var1> <A unsigned char pointer to an n-element copied data array>
 * @param <var2> <An unsigned integer as the size of the array>

 * @return <An unsigned char result from the function>
 */
#endif /* __STATS_H__ */
