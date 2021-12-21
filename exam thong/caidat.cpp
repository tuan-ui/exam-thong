#include"thuvien.h"

void nhapMang(Mang& b)
{
	cout << "\n Nhap mang .";
	cout << "\n Nhap so phan tu trong mang: ";
	cin >> b.n;
	for (int i = 0; i < b.n; i++)
	{
		cout << "\n Nhap phan tu arr[" << i << "]: ";
		cin >> b.arr[i];
	}
}

void xuatMang(Mang b)
{
	cout << "\n Xuat mang .";
	for (int i = 0; i < b.n; i++)
		cout << "\n Phan tu arr[" << i << "]: "<< b.arr[i];
}

int tongGiaTriDoiXung(Mang b)
{
	int tong = 0;
	for (int i = 0; i < b.n; i++)
		if (kiemTraDoiXung(b.arr[i]))
			tong += b.arr[i];
	return tong;
}

bool kiemTraDoiXung(int x)
{
	int nguoc = 0;
	int tam = x;
	while (tam > 0) {
		nguoc = nguoc * 10 + tam % 10;
		tam /= 10;
	}
	if (nguoc == x)
		return true;
	return false;
}

void nhapMaTran(MaTran& c)
{
	cout << "\n Nhap ma tran .";
	cout << "\n Nhap so so dong: ";
	cin >> c.dong;
	cout << "\n Nhap so so cot: ";
	cin >> c.cot;
	for (int i = 0; i < c.dong; i++)
		for (int j = 0; j < c.cot; j++) {
			cout << "\n Nhap phan tu a[" << i << "][" << j << "]: ";
			cin >> c.a[i][j];
		}
}
void xuatMaTran(MaTran c)
{
	cout << "\n Xuat mang."<<endl;
	for (int i = 0; i < c.dong; i++){
		for (int j = 0; j < c.cot; j++)
			cout << c.a[i][j] << " ";
		cout << endl;
	}
}

bool kiemTraGiam(MaTran c,int i)
{
	for (int j = 0; j < c.cot - 1; j++)
		if (c.a[i][j] < c.a[i][j+1])
			return false;
	return true;
}

int demDongGiam(MaTran c)
{
	int dem = 0;
	for (int i = 0; i < c.dong; i++)
		if (kiemTraGiam(c, i))
			dem++;
	return dem;
}

void chuanHoaChuoi(char *&str)
{
	while (str[0] == ' ')
	{
		for (int i = 0; i < strlen(str) - 1; i++)
			str[i] = str[i + 1];
		str[strlen(str) - 1] = '\0';
	}
	while (str[strlen(str) - 1] == ' ')
	{
		str[strlen(str)-1] = '\0';
	}
	int i = 0;
	while(i<strlen(str))
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i+1; j < strlen(str) - 1; j++)
				str[j] = str[j + 1];
			str[strlen(str)-1] = '\0';
			i--;
		}
		i++;
	}
}

void nhapGiaoVien(GiaoVien& gv)
{
	cout << " Nhap ma giao vien: ";
	cin.ignore();
	cin.getline(gv.maGiaoVien, 10);
	cout << " Ho ten giao vien: ";
	cin.getline(gv.tenGiaoVien, 50);
	cout << " Nhap ngay vao lam: ";
	cin >> gv.ngay;
	cout << " Nhap thang vao lam: ";
	cin >> gv.thang;
	cout << " Nhap nam vao lam: ";
	cin >> gv.nam;
	cout << " Nhap ma khoa: ";
	cin.ignore();
	cin.getline(gv.maKhoa, 30);
}

void xuatGiaoVien(GiaoVien gv)
{
	cout << "\n Ma giao vien: " << gv.maGiaoVien;
	cout << "\n Ho ten giao vien: " << gv.tenGiaoVien;
	cout << "\n Ngay vao lam: " << gv.ngay << " / " << gv.thang << " / " << gv.nam;
	cout << "\n Ma khoa: " << gv.maKhoa;
}

void nhapDanhSach(DanhSach& ds)
{
	cout << "Nhap so luong giao vien: ";
	cin >> ds.n;
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\n Nhap giao vien " << i << endl;
		nhapGiaoVien(ds.gv[i]);
	}
}

void xuatDanhSach(DanhSach ds)
{
	cout << "\n Xuat danh sach: ";
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\n Xuat giao vien " << i << endl;
		xuatGiaoVien(ds.gv[i]);
	}
}

void lietKeDanhSachGiaoVien(DanhSach ds)
{
	GiaoVien max = ds.gv[0];
	for (int i = 1; i < ds.n; i++) {
		if (max.nam > ds.gv[i].nam)
			max = ds.gv[i];
		else if (max.nam == ds.gv[i].nam)
			{
			if (max.thang > ds.gv[i].thang)
				max = ds.gv[i];
			else if (max.ngay > ds.gv[i].ngay)
				max = ds.gv[i];
			}
		}
	for (int i = 0; i < ds.n; i++)
		if (max.nam == ds.gv[i].nam)
			if (max.thang == ds.gv[i].thang)
				if (max.ngay == ds.gv[i].ngay)
					xuatGiaoVien(ds.gv[i]);
}
