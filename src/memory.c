#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "memory.h"
#include <math.h>
#include "data.h"


////////////////////
int32_t * reserve_words(size_t length){
    return malloc(length*sizeof(length));
}

uint8_t * my_reverse(uint8_t * src, size_t length) {
  //x[i] is equivalent to *(x+i)
  // *(src+i)
  int step;
  step = length/2;
  for (int i = 0; i < step; ++i) {
      uint8_t c0 = *(src+i);
      uint8_t c1 = *(src+length-i-1);
      *(src+i) = c1;
      *(src+length-i-1) = c0;
  } 
  return src;
}

uint8_t * my_memzero(uint8_t * src, size_t length) {
  //x[i] is equivalent to *(x+i)
  // *(src+i)
  for (int i = 0; i < length; ++i) {
      *(src+i) = 0;
  } 
  return src;
}

uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value){
  for (int i = 0; i < length; ++i) {
      *(src+i) = value;
  } 
  return src;
}

uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length){
  for (int i = 0; i < length; ++i) {
      *(dst+i) = *(src+i);
  } 
  return src;
}

uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length){

    uint8_t *d = dst;
    uint8_t *s = src;

    if (d < s){
        while (length--){
            *d++= *s++;
        }
    }

    else{
        uint8_t *lasts = s + (length-1);   
        uint8_t *lastd = d + (length-1);    
        while (length--){
            *lastd-- = *lasts--;
        }
    }
    return dst;
}

void free_words(uint32_t * src){
    return free(src);
}


//int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){

//}
////////////////////

void print_array(unsigned char num[],int size) {

  for (int i = 0; i < size; ++i) {

    printf("List[%d] = %d\n", i, num[i]);
  }

}

void set_value(char * ptr, unsigned int index, char value){
  ptr[index] = value;
}

void clear_value(char * ptr, unsigned int index){
  set_value(ptr, index, 0);
}

char get_value(char * ptr, unsigned int index){
  return ptr[index];
}

void set_all(char * ptr, char value, unsigned int size){
  unsigned int i;
  for(i = 0; i < size; i++) {
    set_value(ptr, i, value);
  }
}

void clear_all(char * ptr, unsigned int size){
  set_all(ptr, 0, size);
}