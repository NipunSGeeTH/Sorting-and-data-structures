// Online C++ compiler to run C++ program online
//selection sort

#include <iostream>
#include <vector>
using namespace std;


vector<int> SelectionSort(vector<int> array){
    int i=0;
    int size=array.size();
    while(i < size){
        int minIndex= i;
        int j = i;
        while (j < size){
            if (array[minIndex] >= array[j]){
                minIndex= j;
            }
            j++;
        }
        int temp = array[minIndex];
        array[minIndex]= array[i];
        array[i] = temp;
        i++;
    }
    return array;
    
}





int main() {                   
   vector<int> array = {7,8,6,1,1,2,0};
   vector<int> result = SelectionSort(array);

   for (int i : result){
       cout<<i<<" ";
       
   }
    return 0;
}

