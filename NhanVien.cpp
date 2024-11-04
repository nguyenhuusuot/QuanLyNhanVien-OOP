#include "NhanVien.h"
#include <bits/stdc++.h>
using namespace std;

NhanVien::NhanVien()
{

}

NhanVien::NhanVien(string maNV,string hoNV, string tenNV, string ngaySinh, string gioiTinh, string diaChi, string soDienThoai, string chucVu)
{
    string MANV = "";
    stringstream msv(maNV);
    string chuanHoaMNV;
    while (msv >> chuanHoaMNV)
    {	
        MANV+= toupper(chuanHoaMNV[0]);
        for(int i = 1; i < chuanHoaMNV.length(); i++)
        {
            MANV+= tolower(chuanHoaMNV[i]);
        }
        MANV +=" ";
    }
    MANV.erase(MANV.length()-1);
    this->maNV = MANV;
    //----------------------------------------------------------------
    string HoVaTen_Dem = "";
    stringstream st(hoNV);
    string chuanHoaHoVaTenDem;
    while (st >> chuanHoaHoVaTenDem)
    {
        HoVaTen_Dem+= toupper(chuanHoaHoVaTenDem[0]);
        for(int i = 1; i < chuanHoaHoVaTenDem.length(); i++)
        {
            HoVaTen_Dem+= tolower(chuanHoaHoVaTenDem[i]);
        }
        HoVaTen_Dem +=" ";
    }
    HoVaTen_Dem.erase(HoVaTen_Dem.length()-1);
    this->hoNV = HoVaTen_Dem;
    //----------------------------------------------------------------
    string Ten = "";
    stringstream ss(tenNV);
    string chuanhoaten;
    while (ss >> chuanhoaten)
    {
        Ten+= toupper(chuanhoaten[0]);
        for(int i = 1; i < chuanhoaten.length(); i++)
        {
            Ten+= tolower(chuanhoaten[i]);
        }
        Ten +=" ";
    }
    Ten.erase(Ten.length()-1);
    this->tenNV = Ten;
    //----------------------------------------------------------------
    this->ngaySinh = ngaySinh;
    //----------------------------------------------------------------
    string GioiTinh = "";
    stringstream gt(gioiTinh);
    string chuanHoaGioiTinh;
    while (gt >> chuanHoaGioiTinh)
    {
        GioiTinh+= toupper(chuanHoaGioiTinh[0]);
        for(int i = 1; i < chuanHoaGioiTinh.length(); i++)
        {
            GioiTinh+= tolower(chuanHoaGioiTinh[i]);
        }
        GioiTinh +=" ";
    }
    GioiTinh.erase(GioiTinh.length()-1);
    this->gioiTinh = GioiTinh;
    //----------------------------------------------------------------
    string ChucVu = "";
    stringstream cv(chucVu);
    string chuanHoaChucVu;
    while (cv >> chuanHoaChucVu)
    {
        ChucVu+= toupper(chuanHoaChucVu[0]);
        for(int i = 1; i < chuanHoaChucVu.length(); i++)
        {
            ChucVu+= tolower(chuanHoaChucVu[i]);
        }
        ChucVu +=" ";
    }
    ChucVu.erase(ChucVu.length()-1);
    this->chucVu = ChucVu;
    //----------------------------------------------------------------
    string DiaChi = "";
    stringstream dc(diaChi);
    string chuanHoaDiaChi;
    while (dc >> chuanHoaDiaChi)
    {
        DiaChi+= toupper(chuanHoaDiaChi[0]);
        for(int i = 1; i < chuanHoaDiaChi.length(); i++)
        {
            DiaChi+= tolower(chuanHoaDiaChi[i]);
        }
        DiaChi +=" ";
    }
    DiaChi.erase(DiaChi.length()-1);
    this->diaChi = DiaChi;
    //----------------------------------------------------------------
    this->soDienThoai = soDienThoai;
}

string NhanVien::getHoNV()
{
    return this->hoNV;
}

string NhanVien::getTenNV()
{
    return this->tenNV;
}

string NhanVien::getNgaySinh()
{
    return this->ngaySinh;
}

string NhanVien::getGioiTinh()
{
    return this->gioiTinh;
}

string NhanVien::getChucVu()
{
    return this->chucVu;
}

string NhanVien::getDiaChi()
{
    return this->diaChi;
}

string NhanVien::getSoDienThoai()
{
    return this->soDienThoai;
}

string NhanVien::getMaNV()
{
    return this->maNV;
}

void NhanVien::setMaNV(string maNV)
{
    string MANV = "";
    stringstream msv(maNV);
    string chuanHoaMNV;
    while (msv >> chuanHoaMNV)
    {
        MANV+= toupper(chuanHoaMNV[0]);
        for(int i = 1; i < chuanHoaMNV.length(); i++)
        {
            MANV+= tolower(chuanHoaMNV[i]);
        }
        MANV +=" ";
    }
    MANV.erase(MANV.length()-1);
    this->maNV = MANV;
}

void NhanVien::setHoNV(string hoNV)
{
    string HoVaTen_Dem = "";
    stringstream st(hoNV);
    string chuanHoaHoVaTenDem;
    while (st >> chuanHoaHoVaTenDem)
    {
        HoVaTen_Dem+= toupper(chuanHoaHoVaTenDem[0]);
        for(int i = 1; i < chuanHoaHoVaTenDem.length(); i++)
        {
            HoVaTen_Dem+= tolower(chuanHoaHoVaTenDem[i]);
        }
        HoVaTen_Dem +=" ";
    }
    HoVaTen_Dem.erase(HoVaTen_Dem.length()-1);
    this->hoNV = HoVaTen_Dem;
}

void NhanVien::setTenNV(string tenNV)
{
    string Ten = "";
    stringstream ss(tenNV);
    string chuanhoaten;
    while (ss >> chuanhoaten)
    {
        Ten+= toupper(chuanhoaten[0]);
        for(int i = 1; i < chuanhoaten.length(); i++)
        {
            Ten+= tolower(chuanhoaten[i]);
        }
        Ten +=" ";
    }
    Ten.erase(Ten.length()-1);
    this->tenNV = Ten;
}

void NhanVien::setNgaySinh(string ngaySinh)
{
    this->ngaySinh = ngaySinh;
}

void NhanVien::setGioiTinh(string gioiTinh)
{
    string GioiTinh = "";
    stringstream gt(gioiTinh);
    string chuanHoaGioiTinh;
    while (gt >> chuanHoaGioiTinh)
    {
        GioiTinh+= toupper(chuanHoaGioiTinh[0]);
        for(int i = 1; i < chuanHoaGioiTinh.length(); i++)
        {
            GioiTinh+= tolower(chuanHoaGioiTinh[i]);
        }
        GioiTinh +=" ";
    }
    GioiTinh.erase(GioiTinh.length()-1);
    this->gioiTinh = GioiTinh;
}

void NhanVien::setDiaChi(string diaChi)
{
    string DiaChi = "";
    stringstream dc(diaChi);
    string chuanHoaDiaChi;
    while (dc >> chuanHoaDiaChi)
    {
        DiaChi+= toupper(chuanHoaDiaChi[0]);
        for(int i = 1; i < chuanHoaDiaChi.length(); i++)
        {
            DiaChi+= tolower(chuanHoaDiaChi[i]);
        }
        DiaChi +=" ";
    }
    DiaChi.erase(DiaChi.length()-1);
    this->diaChi = DiaChi;
}

void NhanVien::setChucVu(string chucVu)
{
    string ChucVu = "";
    stringstream cv(chucVu);
    string chuanHoaChucVu;
    while (cv >> chuanHoaChucVu)
    {
        ChucVu+= toupper(chuanHoaChucVu[0]);
        for(int i = 1; i < chuanHoaChucVu.length(); i++)
        {
            ChucVu+= tolower(chuanHoaChucVu[i]);
        }
        ChucVu +=" ";
    }
    ChucVu.erase(ChucVu.length()-1);
    this->chucVu = ChucVu;
}

void NhanVien::setSoDienThoai(string SDT)
{
    this->soDienThoai = SDT;
}



