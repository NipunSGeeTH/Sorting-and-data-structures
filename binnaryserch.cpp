#include <iostream>
#include <vector>
using namespace std;




void binserch(vector <int> arr , int start, int end,int srnum ){


int middle = (start + end ) / 2;
cout<< arr[middle] << "\n";

if ((arr[start] > srnum)  ||  (arr[end-1] < srnum)){
    cout<< "Not found";
        return;
    }

if (arr[middle]== srnum){
    cout<< ("founded\n");
    return;
}

 

if  (srnum > arr[middle]){
    start = middle;
   
}

else {
    end = middle;
}
binserch (arr ,start,end,srnum );



}

int main (){

int start =0;

int srnum=88;
vector<int> arr={2,4,5,9,7,8,12,36,54,98,78,454};
int end = arr.size();
binserch(arr, start, end,srnum);

return 0;
}