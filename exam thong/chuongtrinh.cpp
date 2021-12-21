#include"thuvien.h"

int main()
{
	int chon;
	Mang b;
	MaTran c;
	DanhSach ds;
	do {
		cout << "\n 0. Thoat chuong trinh";
		cout << "\n 1. tinh tong cac gia tri doi xung trong mang";
		cout << "\n 2. Dem so luong dong giam trong ma tran";
		cout << "\n 3. Chuan hoa chuoi";
		cout << "\n 4. Nhap danh sach giao vien";
		cout << "\n 5. Xuat danh sach giao vien";
		cout << "\n 6. Liet ke giao vien co thoi gian lam viec lau nhat ";
		cout << "\n Nhap lua chon: ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			break;
		case 1:
			nhapMang(b);
			xuatMang(b);
			cout << "\n Tong cac gia tri doi xung trong mang: " << tongGiaTriDoiXung(b);
			break;
		case 2:
			nhapMaTran(c);
			xuatMaTran(c);
			cout << "\n So luong dong giam trong ma tran: " << demDongGiam(c);
			break;
		case  3: {
			   char* str = new char[MAX];
			   cin.ignore();
			   cout << "\n Nhap chuoi: ";
			   cin.getline(str, MAX);
			   chuanHoaChuoi(str);
			   cout << str;
		}
			break;
		case 4:
			nhapDanhSach(ds);
			break;
		case 5:
			xuatDanhSach(ds);
			break;
		case 6:
			cout << "\n Liet ke giao vien co thoi gian lam viec lau nhat: ";
			lietKeDanhSachGiaoVien(ds);
			break;
		}

	} while (chon != 0);
	cout << endl;
	system("pause");
	return 0;
}