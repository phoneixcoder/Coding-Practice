 #include<iostream>
 using namespace std;

void selectionSort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int curr = arr[i - 1];
        int minEl = 9999;
        int pt = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < minEl)
            {
                minEl = arr[j];
                pt = j;
            }
        }

        if (curr > minEl)
        {
            arr[i - 1] = minEl;
            arr[pt] = curr;
        }
    } 
    return;
}

 int main(){
     int arr[] = {5, 4, 3, 2, 1};
     int size = sizeof(arr)/sizeof(int);
     selectionSort(arr, size);
     for (int i = 0; i < size; i++)
     {
         cout<<arr[i]<<" ";
     }
       
     return 0;
 }