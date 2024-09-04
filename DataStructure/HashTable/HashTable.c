//Implementing Hash Table in C
#include <stdio.h>
#include <stdlib.h>

struct set{

    int key;
    int data;
};

struct set *array;
int capacity = 10;
int size =0;


int hashFunction(int key){
    return (key % capacity);
}
int checkPrime(int n){
    int i;
    if(n==1 || n==0){
        return 0;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
}
int main(){

printf("GAs");

    return 0;
}
