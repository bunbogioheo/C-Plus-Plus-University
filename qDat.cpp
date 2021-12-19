#include<bits/stdc++.h>
using namespace std;

struct Exam{

    string ma;
    char ten[255];
    int ngay, thang, nam;
    int gio,phut;
    int nhom;
};

    void NhapThongTin(Exam a[],Exam b[], int n, int m);
    void XuatThongTin(Exam a[], int dem);
int main()
{
    Exam a[5];
    Exam b[5];
    int n;
    cin >> n;
    int m;
    cin >> m;
    NhapThongTin(a,b,n,m);
}

void NhapThongTin(Exam a[],Exam b[], int n, int m){
    for(int i = 0; i<n ; i++){
        cout << "Nhap ma mon hoc thu "<<i+1<< " : " ; cin >> a[i].ma;
        cout << "Nhap ten mon hoc "<<i+1<< " : "; cin.ignore(); cin.getline(a[i].ten,255);
    }
    int dem;
    for(int j = 0; j < m; j++){
        cout << "Nhap ma mon hoc thu "<<j+1<< " : " ; cin >> b[j].ma;
        for(int i = 0; i < n; i++){
            if(b[j].ma == a[i].ma){
                dem++;
                a[i].ma = a[j].ma;
                a[i].ten[255] = a[j].ten[255];
                cout<<"Nhap ngay thi -> "; cin>>a[j].ngay;  
                cout<<"Nhap thang thi -> : "; cin >> a[j].thang; 
                cout<<"Nhap nam thi -> : "; cin >> a[j].nam;
                cout <<"Nhap gio thi -> "; cin >> a[j].gio;
                cout <<"Nhap phut thi -> : "; cin >> a[j].phut;
                cout <<"Nhap nhom phong thi -> "; cin >> a[j].nhom;
            }
        }
        
    }
    system("cls");
    XuatThongTin(a,dem);
}

void XuatThongTin(Exam a[], int m){
    cout << "\t\t DANH SACH CA THI \n\n\n";
    cout << "*********************************************************"<<endl;
    for(int i=0; i < m; i++){
        cout << "*  "<< a[i].ma << "  * ";
        cout << a[i].ten << "  *  ";
        cout << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam <<"  *  ";
        cout << a[i].gio << ":" << a[i].phut << "  *  ";
        cout << "0"<<a[i].nhom <<" *\n";
    }
    cout << "*********************************************************"<<endl;
}

