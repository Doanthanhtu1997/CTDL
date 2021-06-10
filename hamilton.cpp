#include <iostream>
#include <stdio.h>
using namespace std;
#define SIZE 100
int A[SIZE][SIZE], n;
int Path[SIZE + 1], nP;
int DaDuyet[SIZE] = {0};
void docDoThi();
void hamilton(int i);
void xuatHamilton(int a[], int n);
int main(){
    docDoThi();
    //xuat(A, n);
    hamilton(0);
    cout << "\nKhong tim duoc chu trinh Hamilton.";
    return 0;
}
void hamilton(int i){

    Path[nP++] = i;
    DaDuyet[i] = 1;
    xuatHamilton(Path, nP);
    if(nP == n && A[i][0] > 0){
            Path[nP++] = 0;
            xuatHamilton(Path, nP);
            exit(0);
    }else{
        for(int j = 0; j < n; j++)
        if(A[i][j] > 0 && DaDuyet[j] == 0)
            hamilton(j);
    }
    nP--;
    DaDuyet[i]=0;
}
void xuatHamilton(int a[], int n){
    for(int i = 0 ;i < n; i++) {
        cout << a[i] + 1<< " ";
    }
    cout << "\n";
}
void docDoThi(){
    FILE *fi = fopen("input.txt","r");
    if(fi == NULL){
        cout << "khong mo duoc";
        exit(0);
    }
    n = fgetc(fi) - '0';
    char temp = fgetc(fi);
    int i = 0, j = 0;
    while(temp != EOF){
        if(temp == '0' || temp == '1'){
            if(j == n){
                j = 0;
                i++;
            }  
            A[i][j++] = temp -'0';
        }
        temp = fgetc(fi);
    }
    fclose(fi);
}