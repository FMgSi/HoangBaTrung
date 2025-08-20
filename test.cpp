#include <bits/stdc++.h>
#include <map>
#include <string>
#include <chrono>

using namespace std;

typedef struct{
    int n;
    int *a;
} day_nguyen;

void nhap(day_nguyen *dn){
    cin >> (*dn).n;
    (*dn).a = new int[(*dn).n];
    for (int i = 0; i < (*dn).n; i++)
    {
        cin >> (*dn).a[i];
    }
    
}

void in(day_nguyen dn){
    cout << endl;
    for (int i = 0; i < dn.n; i++)
    {
        cout << dn.a[i] << "\t";
    }
    cout << endl;
    
}

void tinh_tong_lon_x(day_nguyen dn, float x, int &res){
    for (int i = 0; i < dn.n; i++)
    {
        if (dn.a[i]>x)
        {
            res+=dn.a[i];
        }
        
    }
}

int main(){
    day_nguyen dn;
    nhap(&dn);
    // for (int i = 0; i < dn.n; i++)
    // {
    //     cout << dn.a[i] << "\t";
    // }
    in(dn);
    float x;
    int tong=0;
    cout << "Nhap so x: ";
    cin >> x;
    tinh_tong_lon_x(dn, x, tong);
    cout << "Tong cac so lon hon x: " << tong << "\n";

}