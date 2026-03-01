// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  // вставьте код функции
  uint8_t c = 0;
  if (value > 1) {
	  uint64_t mid = sqrt(value) + 1;
	  for (uint64_t i = 2; i < mid; ++i) {
		  if (value % i == 0 && value != i) {
			  c++;
			  break;
		  }
	  }
  }
  if (c == 0) return true;
  else return false;
}

uint64_t nPrime(uint64_t n) {
  // вставьте код функции
  uint64_t count = 0;
  uint64_t res = 2;
  for (uint64_t i = 2;count < n; ++i) {
	  if (checkPrime(i)) {
		  count++;
		  res = i;
	  }
  }
  return res;
}

uint64_t nextPrime(uint64_t value) {
  // вставьте код функции
  uint64_t i = 2;
  uint64_t count = 0;
  uint64_t res = 2;
  for (; i <= value; ++i) {
	  if (checkPrime(i)) {
		  count++;
		  res = i;
	  }
  }
  res++;
for (; count != 0;++res) {
	if (checkPrime(res)) break;
}
return res;
}

uint64_t sumPrime(uint64_t hbound) {
  // вставьте код функции
  uint64_t res = 0;
  for (uint64_t i = 2; i < hbound; ++i) {
  	if (checkPrime(i)) {
  		res += i;
  	}
  }
  return res;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  // вставьте код функции
  uint64_t res = 0;
  for (uint64_t i = lbound; i < hbound; ++i) {
  	if (checkPrime(i)) {
  		if (checkPrime(i + 2) && i + 2 < hbound) {
  			res++;
  		}
  	}
  }
  return res;
}
