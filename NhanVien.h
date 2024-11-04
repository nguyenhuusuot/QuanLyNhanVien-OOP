#ifndef NhanVien_h
#define NhanVien_h
#include <bits/stdc++.h>
using namespace std;
class NhanVien
{
    private:
        string maNV;
        string hoNV;
        string tenNV;
        string ngaySinh;
        string gioiTinh;
        string diaChi;
        string soDienThoai;
        string chucVu;
    public:
        NhanVien();
        NhanVien(string maNV,string hoNV, string tenNV, string ngaySinh, string gioiTinh, string diaChi, string soDienThoai, string chucVu);
        //----------------------------------------------------------------
        string getHoNV();
        string getTenNV();
        string getNgaySinh();
        string getGioiTinh();
        string getDiaChi();
        string getSoDienThoai();
        string getChucVu();
        string getMaNV();
        //----------------------------------------------------------------
        void setHoNV(string HoNV);
        void setTenNV(string TenNV);
        void setNgaySinh(string NgaySinh);
        void setGioiTinh(string GioiTinh);
        void setDiaChi(string DiaChi);
        void setChucVu(string ChucVu);
        void setSoDienThoai(string SoDienThoai);
        void setMaNV(string MaNV);
};

#endif