// Online C++ compiler to run C++ program online
//insertion sort

#include <iostream>
#include <vector>
using namespace std;


vector<int> InsertionSort(vector<int> array){
    int i = 0;
    while(i < array.size()-1){
        int j=i;
        while ((array[j+1] <= array[j]) && j>=0){
            int temp=array[j+1];
            array[j+1]= array[j];
            array[j]=temp;
            j--;
        }
    i++;
    }

   
    return array;
    
}





int main() {                   
   vector<int> array = {0,7,8,6,1,1,0};
   vector<int> result = InsertionSort(array);

   for (int i : result){
       cout<<i<<" ";
   }
    return 0;
}

