#include<iostream>
using namespace std;
const int MAX = 100;
struct Mang {
	int arr[MAX];
	int n;
};
struct MaTran {
	int a[MAX][MAX];
	int dong;
	int cot;
};
struct GiaoVien {
	char maGiaoVien[10];
	char tenGiaoVien[50];
	int ngay;
	int thang;
	int nam;
	char maKhoa[30];
};
struct DanhSach {
	int n;
	GiaoVien gv[30];
};
void nhapMang(Mang& b);
void xuatMang(Mang b);
int tongGiaTriDoiXung(Mang b);
bool kiemTraDoiXung(int x);
void nhapMaTran(MaTran& c);
void xuatMaTran(MaTran c);
bool kiemTraGiam(MaTran c, int i);
int demDongGiam(MaTran c);
void chuanHoaChuoi(char*& str);
void nhapGiaoVien(GiaoVien& gv);
void xuatGiaoVien(GiaoVien gv);
void nhapDanhSach(DanhSach& ds);
void xuatDanhSach(DanhSach ds);
void lietKeDanhSachGiaoVien(DanhSach ds);
