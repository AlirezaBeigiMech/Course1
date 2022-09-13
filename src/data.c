#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include <math.h>

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
  uint8_t flag = 0;
  
  if (data<0){
    data = -1*data;
    flag = 1;
  }
  uint32_t holder = data;
  uint8_t Length = log(data)/log(base)+2;
  uint8_t temp[Length];

  
  for (int i=0;i<Length;i++){


    temp[Length-i-1] = holder%base;
    *(ptr+Length-i-1) = temp[Length-i-1];
    holder = holder / base;
    
  }
  if (flag == 1  ){
    *(ptr)='-';
  }
  return Length;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
  uint32_t Number=0;
  uint32_t  powNumber;
  uint8_t flag=0;
  if (*(ptr) == '-'){
    flag = 1;
  }
  for (int i=1;i<digits;i++){
    powNumber = pow(base,digits-1-i);
    Number = Number + *(ptr+i)*(powNumber);
  }
  if (flag==1){
    Number = Number*(-1);
  }
  return Number;
}

