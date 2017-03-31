#include <iostream>
#include <array>

using namespace std;

void quickSort(int arr[], int left, int right);

void printArray(int arr[],int size);

int main()
{


    int arr[] = {6,3,4,5,2,1};
	

static int size = sizeof(arr)/sizeof(int);	// returning size 6 then the - 1


    printArray(arr, size);
	
    quickSort(arr, 0, size - 1);

	cout << endl;

   printArray(arr, size);


    return 0;
}


void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
	     	{
                  i++;

	     	}
            while (arr[j] > pivot)
	    	{
                  j--;
	    	}

            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (left < j)
	  {	

            quickSort(arr, left, j);
	  }
      if (i < right)
	  {
            quickSort(arr, i, right);
	  }
}


void printArray(int arr[],int size){

    int count = 0;

	//cout << “sorted array: ” << endl;



    while (size > count){

        cout << arr[count] << endl;

        count++;
    }

}
