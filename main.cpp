#include "NhanVien.h"
#include "QuanLyNV.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    QuanLyNV qlnv;
    while (true)
    {
        switch (qlnv.menuChinh())
        {
        case 1:
        {
            qlnv.themNhanVien();
            break;
        }
        case 2:
        {
            system("cls");
            qlnv.hienThiNhanVien();
            break;
        }
        case 3:
        {
            system("cls");
            qlnv.menuTimKiem();
            qlnv.gach();
            break;
        }
        case 4:
        {
            system("cls");
            qlnv.menuSapXep();
            break;
        }
        case 5:
        {
            system("cls");
            qlnv.menuThayDoi();
            break;
        }
        case 6:
        {
            system("cls");
            qlnv.menuXoa();
            break;
        }
        case 7:
        {
            system("cls");
            qlnv.menuFILE();
            break;
        }
        case 8:
        {
            system("cls");
            qlnv.thongKeNhanVienTheoGioiTinh();
            break;
        }
        case 9:
        {
            system("cls");
            qlnv.tongLuong();
            break;
        }
        case 0:
        {
            cout<<"Chuong trinh da dung!"<<endl;
            return 0;
        }
        default:
            system("cls");
            cout<<"Vui long nhap lai!"<<endl;
            break;
        }
    }
    return 0;
}


