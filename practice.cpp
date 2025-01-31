#include<iostream>
using namespace std;
void partititon( arr , lb , ub){
    int pivot = arr[lb];
    int st = lb;
    int end = up;
    while(end > st){
        while(st <= pivot){
            st++;
        }
        while(end > pivot){
            end--;
        }
        if(st < end){
            swap(arr[st] , arr[end]);
        }
    }
    swap(arr[lb] , arr[up]);
    return end;
}

void selectionSort(){
    for(int i = 0 ; i < n -1 ; i++){
        int min = i;
        for(int j = i+1; i< n ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[i], arr[min]);
        }
    }
}
void countingSort(){
    for(int i = 0; i< n; j++){
        ++count[arr[i]];
    }
    for(int j = 1 ; j <= k ; j++){
        count[j] = count[j-1] + count[j];
    }
    for(int i = n-1 ; i >= 0 ; i--){
        b[--count[arr[i]]] = arr[i];
    }
}
int main(){
    
}