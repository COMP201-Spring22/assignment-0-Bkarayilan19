#include "mylibrary.h"


int fibonacci(int n)
{ 
  //TODO: return n-th Fibonacci number: f(0) = 0, f(1) = 1, f(n) = f(n-1) + f(n-2)
  //SEE: https://en.wikipedia.org/wiki/Fibonacci_number

  //I created an array and ı put first two element then my while loop start to put fibonacci numbers to array until that number came, and the method return the result

  int result=0;
  
  int i =2;
  int fibonacci[n+1];
  fibonacci[0]=0;
  fibonacci[1]=1;
  
  while(i<=n){
    fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    i++;
  }
  result=fibonacci[n];
  return result;
}


int mean_of_numbers(int *array, int count)
{
	
  //TODO: return the mean (average) of the numbers in the array (count is the size of the array)
  //in while loop it start from 0. index and stop at until last index and add them together after that divide it to number of element so it gives mean of the array. 
  
  int mean = 0;
  int i=0;
  
  while(i<count){
    mean+=array[i];
    i++;
  }
  mean/=count;
  return mean;
}


int min_of_numbers(int *array, int count)
{
	
  //TODO: return the minimum number in the array (count is the size of the array)
  //at the begging I set the min value to first element of array then in the while loop ı compare every element of array with min value if there is a smaller value I change it to min value  
  int min = array[0];
  int i=0;
  
  while(i<count){
    if(array[i]<min){
      min= array[i];
    }
    i++;
  }
  return min;
}

int reflected_number(int number)
{


  int reflected = number;
  int result=number;

  //TODO: calculate the reflected number as in the following examples
  // if the input is 123, return 123321
  // if the input is 97, return 9779
  //firstly I calculate the length of the number secondly,I multiplyed the first number with 10**(number of the length) finally with arithmetic operator I create the reflected number.
  int copy =number;
  int lenOfNumber =0;
  while(copy>0){
  copy/=10;
  lenOfNumber++;
      
  }
  int cc =lenOfNumber;
  int next=1;
  while(cc>0){
  result*=10;
  next*=10;
  cc--;
  }
  next/=10;
  while(reflected>0){
  int current=reflected%10;
  result+=current*next;
  next/=10;
  reflected/=10;
  }
  reflected=result;
  return reflected;
  
}


char digit2char(int digit)
{
  //TODO: convert a given integer digit (0, 1, 2, ..., 9) 
  // to the corresponding character ('0', '1', '2', ..., '9')
  //Note: There exists one-line solution.
  char result=digit+'0';
  return result;
}

