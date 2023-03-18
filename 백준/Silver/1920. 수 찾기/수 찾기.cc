#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int standard[100001];

void search( int object, int arr_num_i, int arr_num_f);

int main()
{
    
    int num_std;
    int num_check;

    scanf("%d", &num_std);
    
    for (int i = 0; i < num_std; i++) {scanf("%d", standard+i);}
    scanf("%d", &num_check);
    int check[num_check];
    for (int i = 0; i < num_check; i++) {scanf("%d", check+i);}

    sort(standard, standard+num_std);
    for (int i = 0; i < num_check; i++) {search(check[i], 0, num_std-1);}

}

void search( int object, int arr_num_i, int arr_num_f)
{
    int mid = 0;
    while(arr_num_i <= arr_num_f){
        mid = (arr_num_f+arr_num_i)/2;
        if ( standard[mid] == object) {printf("1\n"); return;}
        if ( standard[mid] > object ) {arr_num_f = mid-1;}
        if ( standard[mid] < object ) {arr_num_i = mid+1;}
        }
        printf("0\n"); return;
    
       
}