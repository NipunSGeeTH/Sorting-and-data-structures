// Online C++ compiler to run C++ program online
//bubble sort

#include <iostream>
#include <vector>
using namespace std;


vector<int> BubbleSort(vector<int> array){
   int size = array.size();
   int i=0;
   while (i<array.size()){
       int j=1;
       while (j<size){
           if (array[j-1]> array[j]){
               int temp = array[j-1];
               array[j-1]= array[j];
               array[j]=temp;
           }
           j++;
       }
       size--;
       i++;
   }
   
    return array;
    
}





int main() {                   
   vector<int> array = {7,12,8,6,1,1,2,0};
   vector<int> result = BubbleSort(array);

   for (int i : result){
       cout<<i<<" ";
       
   }
    return 0;
}

