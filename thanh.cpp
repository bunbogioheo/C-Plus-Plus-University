#include<bits/stdc++.h>
using namespace std;

int Sum(int a[],int n);
void NhapThongTin(int a[],int n);

int main(){
    int t, n, a[n];
    do{
        cin >> t;
    }while(1 >= t || t >=100);

    //Khởi tạo T bộ test
    for(int i=0; i < t; i++) {
        do{
            cin >>n;
        } while(1>=n || n>= pow(10,6));
        
        NhapThongTin(a,n);
        Sum(a,n);
    }
}

void NhapThongTin(int a[],int n){
    for(int i=0; i < n; i++){
        do{
            cin >> a[i];
        }while(pow(-10,8) >= a[i] || a[i] >= pow(10,8) );
    }
}

int Sum(int a[],int n){
    int max = a[0];
    int dem = 0;
    int sum = 0;
    do{
        for (int i = 1; i < n; i++)
            if (max < a[i])
                max = a[i];
                dem++;
                return sum += max;
    }while(dem > 3);
    return sum;
}