#include "QuanLyNV.h"
#include <bits/stdc++.h>
using namespace std;

QuanLyNV::QuanLyNV()
{

}

QuanLyNV::QuanLyNV(string maNV,string hoNV, string tenNV, string ngaySinh, string gioiTinh, string diaChi, string soDienThoai, string chucVu,int ngayCong, float Luong)
{
    setMaNV(maNV);
    setHoNV(hoNV);
    setTenNV(tenNV);
    setNgaySinh(ngaySinh);
    setGioiTinh(gioiTinh);
    setDiaChi(diaChi);
    setChucVu(chucVu);
    setSoDienThoai(soDienThoai);
    this->ngayCong = ngayCong;
    this->luong = Luong;
}

void QuanLyNV::setNgayCong(int ngayCong)
{
    this->ngayCong = ngayCong;
}

void QuanLyNV::setLuong(float luong)
{
    this->luong = luong;
}

int QuanLyNV::getNgayCong()
{
    return this->ngayCong;
}

float QuanLyNV::getLuong()
{
    return this->luong;
}

void QuanLyNV::setThanhTien(double thanhTien)
{
    if(thanhTien == (ngayCong * luong))
    {
        this->thanhTien = thanhTien;
    }
    else
    {
        this->thanhTien = 0;
    }
}

double QuanLyNV::tinhTienLuong()
{
    return (ngayCong * luong);
}

void QuanLyNV::themNV(const QuanLyNV& nhanviens)
{
     nhanvien.push_back(nhanviens);
}

void QuanLyNV::themNhanVien()
{
    system("cls");
    cin.ignore();
    cout<<"Nhap vao ma nhan vien : ";
    string maNV; getline(cin, maNV);
    cout<<"Nhap vao ho va ten dem cua nhan vien : ";
    string hoTenDem; getline(cin, hoTenDem);
    cout<<"Nhap vao ten cua nhan vien : ";
    string ten; getline(cin, ten);
    cout<<"Nhap vao ngay sinh cua nhan vien (dd/mm/yyyy): ";
    string ngsinh; getline(cin,ngsinh);
    cout<<"Nhap vao gioi tinh cua nhan vien : ";
    string gioiTinh; getline(cin,gioiTinh);
    cout<<"Nhap vao dia chi cua nhan vien : ";
    string diaChi; getline(cin,diaChi);
    cout<<"Nhap vao so dien thoai cua nhan vien : ";
    string soDienThoai; getline(cin,soDienThoai);
    cout<<"Nhap vao chuc vu cua nhan vien : ";
    string chucVu; getline(cin,chucVu);
    cout<<"Nhao vao so ngay cong : ";
    int ngayCong; cin>>ngayCong;
    cout<<"Nhap vao so tien luong theo ngay : ";
    float luong; cin>>luong;    
    QuanLyNV nv(maNV,hoTenDem,ten,ngsinh,gioiTinh,diaChi,soDienThoai,chucVu,ngayCong,luong);
    themNV(nv);
    system("cls");
}

void QuanLyNV::gach()
{
    cout<<setfill('-');
    cout<<setw(154)<<"-"<<endl;
    cout<<setfill(' ');
}

void QuanLyNV::tieuDe()
{
    gach();
    cout << left << setw(10) << "<Ma NV>";
    cout << left << setw(15) << "<Ho va";
    cout << left << setw(10) << "Ten>";
    cout << left << setw(15) << "<Gioi tinh>";
    cout << left << setw(15) << "<Ngay sinh>";
    cout << left << setw(12) << "<So DT>";
    cout << left << setw(12) << "<Dia chi>" ;
    cout << left << setw(12) << "<Chuc vu>";
    cout << left << setw(16) << "<So Ngay lam>";
    cout << left << setw(15) << "<Luong Theo Ngay>";
    cout << right << setw(18) << "<Tong Luong>" << endl;
    gach();
}

string QuanLyNV::chuanHoa(string &a)
{
    string tam = "";
    stringstream ss(a);
    string chuanhoa;
    while (ss >> chuanhoa)
    {
        tam+= toupper(chuanhoa[0]);
        for(int i = 1; i < chuanhoa.length(); i++)
        {
            tam+= tolower(chuanhoa[i]);
        }
        tam +=" ";
    }
    tam.erase(tam.length()-1);
    a = tam;
    return a;
}

int QuanLyNV::menuChinh()
{
    int chon;
    cout<<endl;
    gach();
    cout << "CHUONG TRINH QUAN LY NHAN VIEN NHOM 1\n";
    cout << "<<-----------------------MENU------------------------>>\n";
    cout << "  [1] : Them nhan vien.                                \n";
    cout << "  [2] : Hien thi danh sach thong tin nhan vien.        \n";
    cout << "  [3] : MENU tim kiem                                  \n";
    cout << "  [4] : MENU sap xep                                   \n";
    cout << "  [5] : MENU sua thong tin              		        \n";
    cout << "  [6] : MENU xoa                                       \n";
    cout << "  [7] : MENU thao tac voi File                         \n";
    cout << "  [8] : Thong ke nhan vien theo gioi tinh              \n";
    cout << "  [9] : Tong luong                                     \n";
    cout << "  [0] : Thoat                                          \n";
    cout << "<<-----------------------MENU------------------------>>\n";
    cout<<"Nhap vao lua chon cua ban : "; cin>>chon;
    return chon;
}

void QuanLyNV::hienThiNhanVien()
{
    tieuDe();
    for(QuanLyNV& nv : nhanvien)
    {     
        cout<<setw(10)<<left<<nv.getMaNV();
        cout<<setw(15)<<left<<nv.getHoNV();
        cout<<setw(10)<<left<<nv.getTenNV();
        cout<<setw(15)<<left<<nv.getGioiTinh();
        cout<<setw(15)<<left<<nv.getNgaySinh();
        cout<<setw(12)<<left<<nv.getSoDienThoai();
        cout<<setw(12)<<left<<nv.getDiaChi();
        cout<<setw(12)<<left<<nv.getChucVu();    
        cout<<setw(16)<<left<<nv.getNgayCong();
        cout<<setw(15)<<left<<nv.getLuong();  
        cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
    }
    gach();
}


void QuanLyNV::intimKiemNhanVienTheoMNV(string tim_nv)
{
    tieuDe();
    bool timthay = false;    
    for(QuanLyNV& nv : nhanvien)
    {   
        if(nv.getMaNV() == tim_nv)
        {
            timthay = true;
            cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;    
        }      
    }
    if (!timthay)    // Nếu không tìm thấy sinh viên nào có tên giống với tên người dùng nhập vào thì hiển thị sau dòng cout<<
	{
		cout<<"KHONG TIM THAY NHAN VIEN NAY!"<<endl;
	}
}

void QuanLyNV::timKiemNhanVienTheoMNV()
{                   
	cout<<endl;
	string tim_nv;
	cin.ignore();
	cout<<"NHAP MA NHAN VIEN CAN TIM : ";
	getline(cin, tim_nv);
    tim_nv = chuanHoa(tim_nv);
    intimKiemNhanVienTheoMNV(tim_nv);  
}

void QuanLyNV::intimKiemNhanVienTheoHoDem(string tim_nv)
{
    tieuDe();
    bool timthay = false;    
    for(QuanLyNV& nv : nhanvien)
    {   
        if(nv.getHoNV() == tim_nv)
        {
            timthay = true;
            cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
        }      
    }
    if (!timthay)    // Nếu không tìm thấy sinh viên nào có tên giống với tên người dùng nhập vào thì hiển thị sau dòng cout<<
	{
		cout<<"KHONG TIM THAY NHAN VIEN NAY!"<<endl;
	}
}

void QuanLyNV::timKiemNhanVienTheoHoDem()
{                   
	cout<<endl;
	string tim_nv;
	cin.ignore();
	cout<<"NHAP HO VA TEN DEM NHAN VIEN CAN TIM : ";
	getline(cin, tim_nv);
    tim_nv = chuanHoa(tim_nv);
    intimKiemNhanVienTheoHoDem(tim_nv);  
}

void QuanLyNV::intimKiemNhanVienTheoTen(string tim_nv)
{
    tieuDe();
    bool timthay = false;    
    for(QuanLyNV& nv : nhanvien)
    {   
        if(nv.getTenNV() == tim_nv)
        {
            timthay = true;
            cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
        }      
    }
    if (!timthay)    // Nếu không tìm thấy sinh viên nào có tên giống với tên người dùng nhập vào thì hiển thị sau dòng cout<<
	{
		cout<<"KHONG TIM THAY NHAN VIEN NAY!"<<endl;
	}
}

void QuanLyNV::timKiemNhanVienTheoTen()
{                   
	cout<<endl;
	string tim_nv;
	cin.ignore();
	cout<<"NHAP TEN NHAN VIEN CAN TIM : ";
	getline(cin, tim_nv);
    tim_nv = chuanHoa(tim_nv);
    intimKiemNhanVienTheoTen(tim_nv);  
}

void QuanLyNV::intimKiemNhanVienTheoGioiTinh(string tim_nv)
{
    tieuDe();
    bool timthay = false;    
    for(QuanLyNV& nv : nhanvien)
    {   
        if(nv.getGioiTinh() == tim_nv)
        {
            timthay = true;
            cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
        }      
    }
    if (!timthay)    // Nếu không tìm thấy sinh viên nào có tên giống với tên người dùng nhập vào thì hiển thị sau dòng cout<<
	{
		cout<<"KHONG TIM THAY NHAN VIEN NAY!"<<endl;
	}
}

void QuanLyNV::timKiemNhanVienTheoGioiTinh()
{                   
	cout<<endl;
	string tim_nv;
	cin.ignore();
	cout<<"NHAP GIOI TINH NHAN VIEN CAN TIM : ";
	getline(cin, tim_nv);
    tim_nv = chuanHoa(tim_nv);
    intimKiemNhanVienTheoGioiTinh(tim_nv);  
}

void QuanLyNV::intimKiemNhanVienTheoDiaChi(string tim_nv)
{
    tieuDe();
    bool timthay = false;    
    for(QuanLyNV& nv : nhanvien)
    {   
        if(nv.getDiaChi() == tim_nv)
        {
            timthay = true;
            cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
        }      
    }
    if (!timthay)    // Nếu không tìm thấy sinh viên nào có tên giống với tên người dùng nhập vào thì hiển thị sau dòng cout<<
	{
		cout<<"KHONG TIM THAY NHAN VIEN NAY!"<<endl;
	}
}

void QuanLyNV::timKiemNhanVienTheoDiaChi()
{                   
	cout<<endl;
	string tim_nv;
	cin.ignore();
	cout<<"NHAP DIA CHI NHAN VIEN CAN TIM : ";
	getline(cin, tim_nv);
    tim_nv = chuanHoa(tim_nv);
    intimKiemNhanVienTheoDiaChi(tim_nv);  
}

void QuanLyNV::intimKiemNhanVienTheoChucVu(string tim_nv)
{
    tieuDe();
    bool timthay = false;    
    for(QuanLyNV& nv : nhanvien)
    {   
        if(nv.getChucVu() == tim_nv)
        {
            timthay = true;
            cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
        }      
    }
    if (!timthay)    // Nếu không tìm thấy sinh viên nào có tên giống với tên người dùng nhập vào thì hiển thị sau dòng cout<<
	{
		cout<<"KHONG TIM THAY NHAN VIEN NAY!"<<endl;
	}
}

void QuanLyNV::timKiemNhanVienTheoChucVu()
{                   
	cout<<endl;
	string tim_nv;
	cin.ignore();
	cout<<"NHAP CHUC VU NHAN VIEN CAN TIM : ";
	getline(cin, tim_nv);
    tim_nv = chuanHoa(tim_nv);
    intimKiemNhanVienTheoChucVu(tim_nv);  
}


int QuanLyNV::inMENUTimKiem()
{
    int chon;
    cout<<"------BAN DANG TRONG MENU TIM KIEM NHAN VIEN--------"<<endl;
    cout<<endl;
    cout<<"<<---------------------MENU TIM KIEM--------------------->>"<<endl;
    cout << "  [1] : Tim kiem nhan vien theo ma nhan vien"<<endl;
    cout << "  [2] : Tim kiem nhan vien theo ho va ten dem"<<endl;
    cout << "  [3] : Tim kiem nhan vien theo ten"<<endl;
    cout << "  [4] : Tim kiem nhan vien theo gioi tinh"<<endl;
    cout << "  [5] : Tim kiem nhan vien theo dia chi"<<endl;
    cout << "  [6] : Tim kiem nhan vien theo chuc vu"<<endl;
    cout << "  [0] : [NEXT]"<<endl;
    cout << "<<-----------------------MENU-------------------------->>\n";
    cout<<"Nhap vao lua chon cua ban : "; cin>>chon;
    return chon;
}

void QuanLyNV::menuTimKiem()
{
    bool chon = false;
    do{
        switch (inMENUTimKiem())
        {
            case 1:
            {
                system("cls");
                timKiemNhanVienTheoMNV();
                break;
            }
            case 2:
            {
                system("cls");
                timKiemNhanVienTheoHoDem();
                break;
            }
            case 3:
            {
                system("cls");
                timKiemNhanVienTheoTen();
                break;
            }
            case 4:
            {
                system("cls");
                timKiemNhanVienTheoGioiTinh();
                break;
            }
            case 5:
            {
                system("cls");
                timKiemNhanVienTheoDiaChi();
                break;
            }
            case 6:
            {
                system("cls");
                timKiemNhanVienTheoChucVu();
                break;
            }
            case 0:
            {
                system("cls");
                chon = true;
                return;
            }
            default:
            {
                system("cls");
                cout<<"VUI LONG NHAP LAI!"<<endl;
            }
        }

    }while (!chon);   
}


int QuanLyNV::inMENUSapXep()
{
    int chon;
    cout<<"------BAN DANG TRONG MENU SAP XEP NHAN VIEN--------"<<endl;
    cout<<endl;
    cout<<"<<---------------------MENU SAP XEP--------------------->>"<<endl;
    cout << "  [1] : Sap xep nhan vien theo ma nhan vien"<<endl;
    cout << "  [2] : Sap xep nhan vien theo ten"<<endl;
    cout << "  [3] : Sap xep nhan vien theo tien luong theo ngay"<<endl;
    cout << "  [4] : Sap xep nhan vien theo ngay cong"<<endl;
    cout << "  [5] : Sap xep nhan vien theo tong tien"<<endl;
    cout << "  [0] : [NEXT]"<<endl;
    cout << "<<-----------------------MENU-------------------------->>\n";
    cout<<"Nhap vao lua chon cua ban : "; cin>>chon;
    return chon;
}

void QuanLyNV::sapXepTheoMNV()
{
    QuanLyNV sv;
    for(int i=0; i<nhanvien.size(); i++)
    {
        for(int j=i+1; j<nhanvien.size(); j++)
        {
            if(nhanvien[i].getMaNV() < nhanvien[j].getMaNV())
            {
                sv = nhanvien[i];
                nhanvien[i] = nhanvien[j];
                nhanvien[j] = sv;
            }
        }
    }
}

void QuanLyNV::sapXepTheoTen()
{
    QuanLyNV sv;
    for(int i=0; i<nhanvien.size(); i++)
    {
        for(int j=i+1; j<nhanvien.size(); j++)
        {
            if(nhanvien[i].getTenNV() > nhanvien[j].getTenNV())
            {
                sv = nhanvien[i];
                nhanvien[i] = nhanvien[j];
                nhanvien[j] = sv;
            }
        }
    }
}

void QuanLyNV::sapXepTheoLuong()
{
    QuanLyNV sv;
    for(int i=0; i<nhanvien.size(); i++)
    {
        for(int j=i+1; j<nhanvien.size(); j++)
        {
            if(nhanvien[i].getLuong() < nhanvien[j].getLuong())
            {
                sv = nhanvien[i];
                nhanvien[i] = nhanvien[j];
                nhanvien[j] = sv;
            }
        }
    }
}

void QuanLyNV::sapXepTheoSoNgayLam()
{
    QuanLyNV sv;
    for(int i=0; i<nhanvien.size(); i++)
    {
        for(int j=i+1; j<nhanvien.size(); j++)
        {
            if(nhanvien[i].getNgayCong() < nhanvien[j].getNgayCong())
            {
                sv = nhanvien[i];
                nhanvien[i] = nhanvien[j];
                nhanvien[j] = sv;
            }
        }
    }
}

void QuanLyNV::sapXepTheoTongTien()
{
    QuanLyNV sv;
    for(int i=0; i<nhanvien.size(); i++)
    {
        for(int j=i+1; j<nhanvien.size(); j++)
        {
            if(nhanvien[i].tinhTienLuong() < nhanvien[j].tinhTienLuong())
            {
                sv = nhanvien[i];
                nhanvien[i] = nhanvien[j];
                nhanvien[j] = sv;
            }
        }
    }
}


void QuanLyNV::menuSapXep()
{
    bool chon = false;
    do{
        switch (inMENUSapXep())
        {
            case 1:
            {
                system("cls");
                sapXepTheoMNV();
                break;
            }
            case 2:
            {
                system("cls");
                sapXepTheoTen();
                break;
            }
            case 3:
            {
                system("cls");
                sapXepTheoLuong();
                break;
            }
            case 4:
            {
                system("cls");
                sapXepTheoSoNgayLam();
                break;
            }
            case 5:
            {
                system("cls");
                sapXepTheoTongTien();
                break;
            }
            case 0:
            {
                system("cls");
                chon = true;
                return;
            }
            default:
            {
                system("cls");
                cout<<"VUI LONG NHAP LAI!"<<endl;
            }
        }

    }while (!chon);   
}

int QuanLyNV::inMENUSuaThongTinNV()
{
    int chon;
    cout<<"------BAN DANG TRONG MENU SUA THONG TIN NHAN VIEN--------"<<endl;
    cout<<endl;
    cout<<"<<---------------------MENU SUA THONG TIN--------------------->>"<<endl;
    cout << "  [1] : Thay doi ten nhan vien"<<endl;
    cout << "  [2] : Thay doi ho va ten dem nhan vien"<<endl;
    cout << "  [3] : Thay doi ngay cong nhan vien"<<endl;
    cout << "  [4] : Thay doi luong nhan vien"<<endl;
    cout << "  [5] : Thay doi chuc vu nhan vien "<<endl;
    cout << "  [0] : [NEXT]"<<endl;
    cout << "<<-----------------------MENU------------------------------->>\n";
    cout<<"Nhap vao lua chon cua ban : "; cin>>chon;
    return chon;
}

void QuanLyNV::thayDoiTen()
{
    system("cls");
	string manhanvien;
	cin.ignore();
	cout<<endl;
	cout<<"Nhap vao ma nhan vien can thay doi ten : ";
	getline(cin, manhanvien);
    manhanvien = chuanHoa(manhanvien);
	bool timthay = false;
	for (QuanLyNV& nv : nhanvien)
	{
		if (nv.getMaNV() == manhanvien)          // Trường hợp tìm thấy
		{
		    timthay = true;
		    cout<<endl;
            tieuDe();
		    cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
            gach();
	        cout<<endl;
			cout<<"Nhap vao ten moi cua nhan vien : "; string tennv;
		    getline(cin, tennv); nv.setTenNV(tennv);
		    cout<<endl;
		    system("cls");
		    cout<<"Thong tin cua nhan vien da duoc thay"<<endl;
     	}
	}
	if (!timthay)               // Xét trường hợp không tìm thấy
	{
		cout<<"Khong tim thay nhan vien nay!"<<endl;
	}
}

void QuanLyNV::thayDoiHoDem()
{
    system("cls");
	string manhanvien;
	cin.ignore();
	cout<<endl;
	cout<<"Nhap vao ma nhan vien can thay doi ho va ten dem : ";
	getline(cin, manhanvien);
    manhanvien = chuanHoa(manhanvien);
	bool timthay = false;
	for (QuanLyNV& nv : nhanvien)
	{
		if (nv.getMaNV() == manhanvien)          // Trường hợp tìm thấy
		{
		    timthay = true;
		    cout<<endl;
            tieuDe();
		    cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
            gach();
	        cout<<endl;
			cout<<"Nhap vao ho va ten dem moi cua nhan vien : "; string hodem;
		    getline(cin, hodem); nv.setHoNV(hodem);
		    cout<<endl;
		    system("cls");
		    cout<<"Thong tin cua nhan vien da duoc thay"<<endl;
     	}
	}
	if (!timthay)               // Xét trường hợp không tìm thấy
	{
		cout<<"Khong tim thay nhan vien nay!"<<endl;
	}
}

void QuanLyNV::thayDoiLuong()
{
    system("cls");
	string manhanvien;
	cin.ignore();
	cout<<endl;
	cout<<"Nhap vao ma nhan vien can thay doi ho va ten dem : ";
	getline(cin, manhanvien);
    manhanvien = chuanHoa(manhanvien);
	bool timthay = false;
	for (QuanLyNV& nv : nhanvien)
	{
		if (nv.getMaNV() == manhanvien)          // Trường hợp tìm thấy
		{
		    timthay = true;
		    cout<<endl;
            tieuDe();
		    cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
            gach();
	        cout<<endl;
			cout<<"Nhap vao luong moi cua nhan vien : "; float luong;
		    cin>>luong; nv.setLuong(luong);
		    cout<<endl;
		    system("cls");
		    cout<<"Thong tin cua nhan vien da duoc thay"<<endl;
     	}
	}
	if (!timthay)               // Xét trường hợp không tìm thấy
	{
		cout<<"Khong tim thay nhan vien nay!"<<endl;
	}
}

void QuanLyNV::thayDoiNgayCong()
{
    system("cls");
	string manhanvien;
	cin.ignore();
	cout<<endl;
	cout<<"Nhap vao ma nhan vien can thay doi ho va ten dem : ";
	getline(cin, manhanvien);
    manhanvien = chuanHoa(manhanvien);
	bool timthay = false;
	for (QuanLyNV& nv : nhanvien)
	{
		if (nv.getMaNV() == manhanvien)          // Trường hợp tìm thấy
		{
		    timthay = true;
		    cout<<endl;
            tieuDe();
		    cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
            gach();
	        cout<<endl;
			cout<<"Nhap vao ngay cong moi cua nhan vien : "; int ngayCong;
		    cin>>ngayCong; nv.setNgayCong(ngayCong);
		    cout<<endl;
		    system("cls");
		    cout<<"Thong tin cua nhan vien da duoc thay"<<endl;
     	}
	}
	if (!timthay)               // Xét trường hợp không tìm thấy
	{
		cout<<"Khong tim thay nhan vien nay!"<<endl;
	}
}

void QuanLyNV::thayDoiChucVu()
{
    system("cls");
	string manhanvien;
	cin.ignore();
	cout<<endl;
	cout<<"Nhap vao ma nhan vien can thay doi ho va ten dem : ";
	getline(cin, manhanvien);
    manhanvien = chuanHoa(manhanvien);
	bool timthay = false;
	for (QuanLyNV& nv : nhanvien)
	{
		if (nv.getMaNV() == manhanvien)          // Trường hợp tìm thấy
		{
		    timthay = true;
		    cout<<endl;
            tieuDe();
		    cout<<setw(10)<<left<<nv.getMaNV();
            cout<<setw(15)<<left<<nv.getHoNV();
            cout<<setw(10)<<left<<nv.getTenNV();
            cout<<setw(15)<<left<<nv.getGioiTinh();
            cout<<setw(15)<<left<<nv.getNgaySinh();
            cout<<setw(12)<<left<<nv.getSoDienThoai();
            cout<<setw(12)<<left<<nv.getDiaChi();
            cout<<setw(12)<<left<<nv.getChucVu();    
            cout<<setw(16)<<left<<nv.getNgayCong();
            cout<<setw(15)<<left<<nv.getLuong();  
            cout<<setw(18)<<right<<nv.tinhTienLuong()<<endl;   
            gach();
	        cout<<endl;
			cout<<"Nhap vao chuc vu moi cua nhan vien : "; string chucVu;
		    getline(cin, chucVu); nv.setChucVu(chucVu);
		    cout<<endl;
		    system("cls");
		    cout<<"Thong tin cua nhan vien da duoc thay"<<endl;
     	}
	}
	if (!timthay)               // Xét trường hợp không tìm thấy
	{
		cout<<"Khong tim thay nhan vien nay!"<<endl;
	}
}

void QuanLyNV::menuThayDoi()
{
    bool chon = false;
    do{
        switch (inMENUSuaThongTinNV())
        {
            case 1:
            {
                system("cls");
                thayDoiTen();
                break;
            }
            case 2:
            {
                system("cls");
                thayDoiHoDem();
                break;
            }
            case 3:
            {
                system("cls");
                thayDoiNgayCong();
                break;
            }
            case 4:
            {
                system("cls");
                thayDoiLuong();
                break;
            }
            case 5:
            {
                system("cls");
                thayDoiChucVu();
                break;
            }
            case 0:
            {
                system("cls");
                chon = true;
                return;
            }
            default:
            {
                system("cls");
                cout<<"VUI LONG NHAP LAI!"<<endl;
            }
        }

    }while (!chon);   
}

int QuanLyNV::inMENUXoa()
{
    int chon;
    cout<<"------BAN DANG TRONG MENU XOA NHAN VIEN--------"<<endl;
    cout<<endl;
    cout<<"<<---------------------MENU XOA--------------------->>"<<endl;
    cout << "  [1] : Xoa nhan vien theo ma nhan vien"<<endl;
    cout << "  [2] : Xoa tat ca nhan vien"<<endl;
    cout << "  [0] : [NEXT]"<<endl;
    cout << "<<-----------------------MENU------------------------------->>\n";
    cout<<"Nhap vao lua chon cua ban : "; cin>>chon;
    return chon;
}

string QuanLyNV::nhapMaNhanVienMuonXoa()
{
    cin.ignore();
    cout<<"Nhap vao ma nhan vien muon xoa : "; string manv;
    getline(cin, manv);
    return manv;
}
void QuanLyNV::xoaTheoMNV()
{
    system("cls");
	string manv;
	manv = nhapMaNhanVienMuonXoa();
	bool timthay = false;
	for (auto i = nhanvien.begin() ; i != nhanvien.end(); ++i)        // Dùng con trỏ để truy cập vào trong toàn bộ vector sinhviens
	{
		if (i->getMaNV() == manv)        // Toán tử "->" được sử dụng để truy cập thuộc tính của một đối tượng được trỏ bởi một con trỏ.
		{                
            if(hoiYKienXoaMNV())   
            {                // Đây là trường hợp tìm thấy
                timthay = true;
                nhanvien.erase(i);
                cout<<endl;
                system("cls");
                cout<<"Nhan vien da duoc xoa "<<endl;
                break;
            }
			break;
		}
	}
	if (!timthay)               // Trường hợp không tìm thấy
	{
		cout<<"Khong tim thay nhan vien"<<endl;
	}
}

void QuanLyNV::xoaToanBoDanhSach() 
{
    nhanvien.clear();  // xóa toàn bộ danh sách bằng hàm clear
    system("cls");
    cout<<"Da xoa toan bo danh sach nhan vien\n";
    cout<<endl;
}

bool QuanLyNV::hoiYKienXoaMNV() 
{
    char nhapLuaChon;
	cout<<endl;
    cout << "[ Ban co muon xoa nhan vien nay (y/n) ] : ";
    cin >> nhapLuaChon;
    return nhapLuaChon == 'y' || nhapLuaChon == 'Y';            // Trả về lựa chọn của ng dùng nếu nhập 'Y' or 'y' là true còn lại là false
}

bool QuanLyNV::hoiYKienXoa() 
{
    char nhapLuaChon;
	cout<<endl;
    cout << "[ Ban co muon xoa tat ca nhan vien (y/n) ] : ";
    cin >> nhapLuaChon;
    return nhapLuaChon == 'y' || nhapLuaChon == 'Y';            // Trả về lựa chọn của ng dùng nếu nhập 'Y' or 'y' là true còn lại là false
}

bool QuanLyNV::hoiYKienThoat() 
{
    char nhapLuaChon;
	cout<<endl;
    cout << "[ Ban co muon thoat chuong trinh (y/n) ] : ";
    cin >> nhapLuaChon;
    return nhapLuaChon == 'y' || nhapLuaChon == 'Y';            // Trả về lựa chọn của ng dùng nếu nhập 'Y' or 'y' là true còn lại là false
}

bool QuanLyNV::hoiYKienLuuFile() 
{
    char nhapLuaChon;
	cout<<endl;
    cout << "[ Ban co muon luu file (y/n) ] : ";
    cin >> nhapLuaChon;
    return nhapLuaChon == 'y' || nhapLuaChon == 'Y';                // Trả về lựa chọn của ng dùng nếu nhập 'Y' or 'y' là true còn lại là false
}

void QuanLyNV::menuXoa()
{
    bool chon = false;
    do{
        switch (inMENUXoa())
        {
            case 1:
            {                         
                xoaTheoMNV();   // Gọi hàm lưu file         
                break;
            }
            case 2:
            {
                if(hoiYKienXoa())   // if đúng thì thực hiện
                {
                    xoaToanBoDanhSach();   // Gọi hàm lưu file
                    break;    // Thoát
                }
                break;
            }
            case 0:
            {
                system("cls");
                chon = true;
                return;
            }
            default:
            {
                system("cls");
                cout<<"VUI LONG NHAP LAI!"<<endl;
            }
        }

    }while (!chon);   
}

void QuanLyNV::luuFile() 
{
    string filename;     // Tạo biến filename kiểu string
	cout<<endl;
    cout << "Nhap ten file muon luu vao: ";
    cin >> filename;    // Nhập vào tên file muốn lưu

    ofstream fout(filename);                    // Hàm `ofstream fout(filename);` là khởi tạo một đối tượng output filestream trong C++. 
                                                //Nó đặt tên cho đối tượng là `fout` và liên kết nó với tệp được chỉ định bởi tham số `filename`.
                                                //Đối tượng `fout` này sẽ được sử dụng để ghi dữ liệu vào tệp đã liên kết.
                                                //`filename` là một chuỗi có nghĩa là tên tệp mà đối tượng output file stream sẽ liên kết đến. 
                                                //Tệp có thể đã tồn tại hoặc sẽ được tạo mới nếu chưa tồn tại.
    if (fout.is_open())      // Mở file để lưu nếu đã nhập đúng tên file
    {
        for ( QuanLyNV& st : nhanvien)      // Dùng for each để lưu từng sinh viên vào file và mỗi trường đều cách nhau 1 dấu , biến st coi như là một index trong vòng lặp
        {
            fout << st.getMaNV()<< "," << st.getHoNV()<< "," << st.getTenNV()<<","<<st.getNgaySinh()<< "," << st.getGioiTinh()<< "," << st.getDiaChi() << "," << st.getSoDienThoai() << "," << st.getChucVu() << "," <<st.getNgayCong()<<","<<st.getLuong()<<","<<st.tinhTienLuong()<<endl;
        }
        fout.close();  // Đóng file 
		system("cls");   // Xóa màn hình
        cout << "Da luu danh sach nhan vien vao file " << filename << " thanh cong!\n";
    }
    else    // Dòng để hiển thị nếu file nhập vào không đúng tên
    {
        cout << "Khong the mo file " << filename << " de luu du lieu.\n";
    }
}

void QuanLyNV::docFile()
{
    string filename;
    cout<<endl;
	cin.ignore();
    cout << "Nhap ten file muon doc: ";
    getline(cin, filename);             // Nhập tên file 

    ifstream fin(filename);         // "ifstream", được sử dụng để đọc đầu vào từ các tệp
                                    // đối tượng "fin" có thể được sử dụng để đọc dữ liệu từ tệp được chỉ định bởi "filename"

    if (fin.is_open())      //"is_open ()" trên đối tượng ifstream, sẽ trả về đúng nếu tệp được mở thành công
	{
        string line;

        while (getline(fin, line)) 
		{
            QuanLyNV st;

            // Tách các trường thông tin trong dòng
            size_t pos = line.find_first_of(',');  //Hàm find_first_of(','), được gọi trên biến string line, trả về vị trí đầu tiên của ký tự phẩy (',') trong chuỗi line.
            st.setMaNV(line.substr(0,pos));        //Vị trí này được lưu trữ trong biến pos kiểu size_t.
													//Hàm substr(0, pos), được gọi trên biến string line, trả về một chuỗi con bắt đầu từ vị trí đầu tiên (0) và có độ dài bằng với khoảng cách từ đầu đến ký tự phẩy (',') đầu tiên.
            
            size_t prev_pos = pos + 1;
            pos = line.find_first_of(',', prev_pos);    
            st.setHoNV(line.substr(prev_pos, pos - prev_pos));
            
 			prev_pos = pos + 1;  //Biến prev_pos được khởi tạo bằng giá trị pos + 1. Biến pos chính là vị trí ký tự phẩy (',') tìm được ở phần trước để tìm được mã lớp.
            pos = line.find_first_of(',', prev_pos);  //Hàm find_first_of(',', prev_pos), được gọi trên biến string line, tìm vị trí đầu tiên của dấu phẩy (',') từ vị trí prev_pos. Vị trí này là vị trí của dấu phẩy (',') tiếp theo trong chuỗi line.
            st.setTenNV(line.substr(prev_pos, pos - prev_pos));  //Hàm substr(prev_pos, pos - prev_pos), được gọi trên biến string line, cắt ra một chuỗi con bắt đầu từ vị trí prev_pos và có độ dài bằng với khoảng cách từ prev_pos đến pos.
            
			prev_pos = pos + 1;  
			pos = line.find_first_of(',', prev_pos);
            st.setNgaySinh(line.substr(prev_pos, pos - prev_pos));

            prev_pos = pos + 1;
            pos = line.find_first_of(',', prev_pos);
            st.setGioiTinh(line.substr(prev_pos, pos - prev_pos));  //Chuỗi con này được chuyển đổi sang kiểu int bằng hàm stoi() và gán vào trường id của đối tượng Sinhvien.
            
            prev_pos = pos + 1;
            pos = line.find_first_of(',', prev_pos);
            st.setDiaChi(line.substr(prev_pos, pos - prev_pos));
            
			prev_pos = pos + 1;
            pos = line.find_first_of(',', prev_pos);
            st.setSoDienThoai(line.substr(prev_pos, pos - prev_pos));

            prev_pos = pos + 1;
            pos = line.find_first_of(',', prev_pos);
            st.setChucVu(line.substr(prev_pos, pos - prev_pos));  //Chuỗi con này được chuyển đổi sang kiểu float bằng hàm stof() và gán vào trường id của đối tượng Sinhvien.

            prev_pos = pos + 1;
            pos = line.find_first_of(',', prev_pos);
            st.setNgayCong(stoi(line.substr(prev_pos, pos - prev_pos)));  //Chuỗi con này được chuyển đổi sang kiểu float bằng hàm stof() và gán vào trường id của đối tượng Sinhvien.

            prev_pos = pos + 1;
            pos = line.find_first_of(',', prev_pos);
            st.setLuong(stof(line.substr(prev_pos)));  //Chuỗi con này được chuyển đổi sang kiểu float bằng hàm stof() và gán vào trường id của đối tượng Sinhvien.

            prev_pos = pos + 1;
            st.setThanhTien(stof(line.substr(prev_pos)));

            nhanvien.push_back(st);   // Thêm vào cuối của vector sinhviens bằng cách gán vào biến st có kiểu cấu trúc là Sinhvien
        }
        fin.close();   // Đóng file 
		system("cls");
        cout << "Da doc danh sach sinh vien tu file " << filename << " thanh cong!\n";
    }
    else   // Thực thi nếu tên file nhập không phù hợp
	{
		system("cls");
        cout << "Khong the mo file " << filename << " de doc du lieu.\n";
    }
}

int QuanLyNV::inMENUFILE()
{
    int chon;
    cout<<"------BAN DANG TRONG MENU THAO TAC VOI FILE--------"<<endl;
    cout<<endl;
    cout<<"<<---------------------MENU FILE--------------------->>"<<endl;
    cout << "  [1] : Doc file"<<endl;
    cout << "  [2] : Ghi vao file"<<endl;
    cout << "  [0] : [NEXT]"<<endl;
    cout << "<<-----------------------MENU------------------------------->>\n";
    cout<<"Nhap vao lua chon cua ban : "; cin>>chon;
    return chon;
}

void QuanLyNV::menuFILE()
{
    bool chon = false;
    do{
        switch (inMENUFILE())
        {
            case 1:
            {              
                docFile();   
                break;
            }
            case 2:
            {
                if(hoiYKienLuuFile())   // if đúng thì thực hiện
                {
                    luuFile();   // Gọi hàm lưu file
                    break;    // Thoát
                }
                system("cls"); 
                break;
            }
            case 0:
            {
                system("cls");
                chon = true;
                return;
            }
            default:
            {
                system("cls");
                cout<<"VUI LONG NHAP LAI!"<<endl;
            }
        }

    }while (!chon);   
}

void QuanLyNV::thongKeNhanVienTheoGioiTinh()
{
    int nam = 0;
    for(QuanLyNV& nv : nhanvien)
    {
        if(nv.getGioiTinh() == "Nam")
        {
            nam++;
        }
    }

    int nu = 0;
    for(QuanLyNV& nv : nhanvien)
    {
        if(nv.getGioiTinh() == "Nu")
        {
            nu++;
        }
    }

    cout<<"[So luong nhan vien nam la] : "<<nam<<endl;
    cout<<"[So luong nhan vien nu la] : "<<nu<<endl;
}

void QuanLyNV::tongLuong()
{
    double tongLuong =0;
    for(QuanLyNV& nv : nhanvien)
    {
        tongLuong+=nv.tinhTienLuong();
    }

    cout<<"[Tong luong cua tat ca nhan vien la] :"<<tongLuong<<endl;
}



