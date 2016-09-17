#include <stdio.h>
#include <stdlib.h>
#include <math.h>



////////////////////////////////
/* PROBLEM 1 */
int one() {
  int i;
  int s=0;
  for(i=0; i<1000; i++) {
    if( i%5==0 || i%3==0 ) {
      s+=i;
    }
  }
  return s;
}//ANS: 233168
////////////////////////////////



////////////////////////////////
/* PROBLEM 2 */
int fib(int n) {
  if(n < 2) {
    return 1;
  }
  return fib(n-1) + fib(n-2);
}
int two() {
  int s=0;
  int x=0;
  int i;
  for(i=0; x<4*pow(10,6); i++) {
    x=fib(i);
    if(x%2 == 0) {
      s+=x;
    }
  }
  return s;
}//ANS: 4613732
////////////////////////////////



////////////////////////////////
/* PROBLEM 3 */
int is_prime(int n) {
  double st = sqrt(n);
  int i;
  for(i=2; i<st; i++) {
    if(n%i==0) {
      return 0;
    }
  }
  return 1;
}
int three() {
  long n=600851475143;
  int pr=1;
  double st = sqrt(n);
  int i;
  for(i=1; i<st; i++) {
    if(n%i==0 && is_prime(i)) {
      pr=i;
    }
  }
  if (pr==1) {
    return n;
  }
  return pr;
}//ANS: 6857
////////////////////////////////



////////////////////////////////
/* PROBLEM 4 */
int num_dig(int n) {
  int d=0;
  while(n>0) {
    n=n/10;
    d++;
  }
  return d;
}
int is_palindrome(int n) {
  int x=num_dig(n);
  int num [x];
  int i;
  for(i=0; i<x; i++) {
    num[i] = n%10;
    n=n/10;
  }
  for(i=0; i<=x/2; i++) {
    if(num[i] != num[(x-i-1)]) {
      return 0;
    }
  }
  return 1;
}
int four() {
  int x; int y;
  int max_palin;
  for(x=100; x<1000; x++) {
    for(y=100; y<1000; y++) {
      int prod=x*y;
      if( is_palindrome(prod) && prod > max_palin ) {
	max_palin=prod;
      }
    }
  }
  return max_palin;
}//ANS: 906609
////////////////////////////////



////////////////////////////////
/* PROBLEM 5 */
int five() {
  int i=1;
  int j;
  while(j!=21) {
    i++;
    j=11;//anything below 11 will be accounted for
    while(j<=20) {
      if(i%j!=0) {
	break;
      }
      j++;
    }
  }
  return i;
}//ANS: 232792560
////////////////////////////////



////////////////////////////////
/* PROBLEM 6 */
int six() {
  int ssq=0;
  int i;
  for(i=1; i<=100; i++) {
    ssq+=pow(i,2);
  }
  int sqs=0;
  for(i=1; i<=100; i++) {
    sqs+=i;
  }
  sqs=pow(sqs,2);
  return sqs-ssq;
}//ANS: 25164150
////////////////////////////////



////////////////////////////////
/* MAIN */
int main() {
  //printf( "prob 1: %d\n", one() ); //prob 1
  //printf( "prob 2: %d\n", two() ); //prob 2
  //printf( "prob 3: %d\n", three() ); //prob 3
  //printf( "prob 4: %d\n", four() ); //prob 4
  //printf( "prob 5: %d\n", five() ); //prob 5
  //printf( "prob 6: %d\n", six() ); //prob 6
  return 0;
}
////////////////////////////////
