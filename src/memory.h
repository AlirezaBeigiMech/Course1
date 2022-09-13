#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stdint.h>
#include <math.h>
#include <stdio.h>

uint8_t * my_reverse(uint8_t * src, size_t length);
uint8_t * my_memzero(uint8_t * src, size_t length);
uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value);
uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length);
uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length);
int32_t * reserve_words(size_t length);
void free_words(uint32_t * src);




enum base{BASE_2=2, BASE_10=10, BASE_16=16};

#endif /* __COURSE1_H__ */