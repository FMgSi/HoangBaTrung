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

void nhap_day_nguyen(day_nguyen **n_dn, int *so_day_so_nguyen){
    *n_dn = new day_nguyen[*so_day_so_nguyen];
    for (int i = 0; i < *so_day_so_nguyen; i++)
    {
        cout << "Nhap so phan tu day nguyen thu " << i+1 << ": " << "\n";
        cout << "n = ";
        cin >> (*n_dn)[i].n;
        (*n_dn)[i].a = new int[(*n_dn)[i].n];
        for (int j = 0; j < (*n_dn)[i].n; j++)
        {
            cin >> (*n_dn)[i].a[j];
        }
        
    }
    
}

void in_day_nguyen(day_nguyen *n_dn, int so_day_so){
    cout << "In ra nhieu day nguyen" << "\n";
    for (int i = 0; i < so_day_so; i++)
    {
        cout << "Day so: " << i + 1 << ": ";
        for (int j = 0; j < n_dn[i].n; j++)
        {
            cout << n_dn[i].a[j] << "\t";
        }
        cout << "\n";
    }
    
}

void tim_chan_max(day_nguyen *n_dn, int so_day_so){
    int res = 0, now = 0;
    for (int i = 0; i < n_dn[0].n; i++)
    {
        if (n_dn[0].a[i] % 2 == 0)
        {
            now ++;
        }
        
    }
    res = now;
    for (int i = 0; i < so_day_so; i++)
    {
        now = 0;
        for (int j = 0; j < n_dn[i].n; j++)
        {
            if (n_dn[i].a[j] % 2 == 0)
            {
                now ++;
            }
            
        }
        if (now > res )
        {
            res = now;
        }
        
    }
    if (res == 0)
    {
        cout << "Khong co day nao co phan tu chan" << "\n";
    }
    for (int i = 0; i < so_day_so; i++)
    {
        now = 0;
        for (int j = 0; j < n_dn[i].n; j++)
        {
            if (n_dn[i].a[j] % 2 == 0)
            {
                now ++;
            }
        }
        if (now == res)
        {
            cout << "Day " << i+1 << " co nhieu phan tu chan nhat";
        }
        
    }
    
}

void tim_max_cua_cac_day(day_nguyen *n_dn, int so_day_so){
    int max=0;
    cout << "\n";
    for (int i = 0; i < so_day_so; i++)
    {
        int now = n_dn[i].a[0];
        for (int j = 0; j < n_dn[i].n; j++)
        {
            if(now < n_dn[i].a[j]){
                now = n_dn[i].a[j];
            }
        }
        cout << "Max day " << i+1 << ": " << now << "\n";
    }
}

int main(){
    // day_nguyen dn;
    // nhap(&dn);
    // for (int i = 0; i < dn.n; i++)
    // {
    //     cout << dn.a[i] << "\t";
    // }
    // in(dn);
    // float x;
    // int tong=0;
    // cout << "Nhap so x: ";
    // cin >> x;
    // tinh_tong_lon_x(dn, x, tong);
    // cout << "Tong cac so lon hon x: " << tong << "\n";
    int so_day_so_nguyen=0;
    cout << "Nhap so day so so nguyen: ";
    cin >> so_day_so_nguyen;
    day_nguyen *n_dn;
    nhap_day_nguyen(&n_dn, &so_day_so_nguyen);
    in_day_nguyen(n_dn, so_day_so_nguyen);
    tim_chan_max(n_dn, so_day_so_nguyen);
    tim_max_cua_cac_day(n_dn, so_day_so_nguyen);
}
