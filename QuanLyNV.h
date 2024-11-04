#ifndef QuanLyNV_h
#define QuanLyNV_h
#include "NhanVien.h"
#include <bits/stdc++.h>
using namespace std;

class QuanLyNV : public NhanVien
{
    private:
        int ngayCong;
        float luong;
        double thanhTien;
    public:
        vector<QuanLyNV> nhanvien;
        QuanLyNV();
        QuanLyNV(string maNV,string hoNV, string tenNV, string ngaySinh, string gioiTinh, string diaChi, string soDienThoai, string chucVu ,int ngayCong, float luong);
        //----------------------------------------------------------------
        void setNgayCong(int NgayCong);
        void setLuong(float Luong);
        int getNgayCong();
        float getLuong();
        double tinhTienLuong();
        void setThanhTien(double thanhTien);
        //----------------------------------------------------------------
        int menuChinh();
        void menuSapXep();
        void menuTimKiem();
        void menuThayDoi();
        void menuXoa();
        void menuFILE();
        //----------------------------------------------------------------
        void tieuDe();
        void gach();
        string chuanHoa(string &a);
        //----------------------------------------------------------------
        void themNV(const QuanLyNV& nhanviens);
        void hienThiNhanVien();
        void themNhanVien();
        //----------------------------------------------------------------
        int inMENUTimKiem();
        int inMENUSapXep();
        int inMENUSuaThongTinNV();
        int inMENUXoa();
        int inMENUFILE();
        void intimKiemNhanVienTheoMNV(string tim_nv);
        void intimKiemNhanVienTheoTen(string tim_nv);
        void intimKiemNhanVienTheoHoDem(string tim_nv);
        void intimKiemNhanVienTheoGioiTinh(string tim_nv);
        void intimKiemNhanVienTheoChucVu(string tim_nv);
        void intimKiemNhanVienTheoDiaChi(string tim_nv);
        void timKiemNhanVienTheoMNV();
        void timKiemNhanVienTheoTen();
        void timKiemNhanVienTheoHoDem();
        void timKiemNhanVienTheoGioiTinh();
        void timKiemNhanVienTheoChucVu();
        void timKiemNhanVienTheoDiaChi();
        //----------------------------------------------------------------
        void sapXepTheoMNV();
        void sapXepTheoTen();
        void sapXepTheoLuong();
        void sapXepTheoSoNgayLam();
        void sapXepTheoTongTien();
        //----------------------------------------------------------------
        void thayDoiTen();
        void thayDoiHoDem();
        void thayDoiLuong();
        void thayDoiNgayCong();
        void thayDoiChucVu();
        //----------------------------------------------------------------
        void xoaTheoMNV();
        string nhapMaNhanVienMuonXoa();
        void xoaToanBoDanhSach();
        //----------------------------------------------------------------
        void luuFile();
        void docFile();
        //----------------------------------------------------------------
        bool hoiYKienXoa();
        bool hoiYKienXoaMNV();
        bool hoiYKienThoat();
        bool hoiYKienLuuFile();
        //----------------------------------------------------------------
        void thongKeNhanVienTheoGioiTinh();
        //----------------------------------------------------------------
        void tongLuong();
};


#endif
