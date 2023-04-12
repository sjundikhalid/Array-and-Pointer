#include <iostream>
using namespace std;

//void printArray(int *arr, int size){
//	for(int i = 0; i < size; i++){
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//int main(){
//	int array[5] = {10, 20, 30, 40, 50};
//	for (int i = 0; i < 5; i++){
//		cout << "Value of element: " << i << " is " << array[i] << endl;
//	}
//	return 0;

//	int arr[3][4];
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 4; j++){
//			arr[i][j] = i*j;
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}

//	int arr[]={1, 2, 3, 4, 5};
//	int size = sizeof(arr)/sizeof(int);
//	cout << size << endl;
//	printArray(arr, size);
//	return 0;
//}
int main(){
//int *ip;
//double *dp;
//float *fp;
//int num = 10;
//double dbl = 3.14;
//float flt = 2.5;
//ip = &num;
//dp = &dbl;
//fp = &flt;
//
//cout << "Nilai num: " << *ip << " Alamat : " << ip << endl;
//cout << "Nilai dbl: " << *dp << " Alamat : " << dp << endl;
//cout << "Nilai flt: " << *fp << " Alamat : " << fp << endl;

int arr[5]={1, 2, 3, 4, 5};
int *ptr = arr;

for(int i = 0; i < 5; i++){
	cout << "Value of arr[" << i << "] = " << &ptr << endl;
	ptr++;
}
return 0;
}
