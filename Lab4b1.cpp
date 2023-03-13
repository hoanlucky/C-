#include <iostream>

using namespace std;

class NhanVien{
	string Ten = "";
	string ID = "";
	string Phong = "";
	string Chucvu = "";
	public:
	NhanVien(string tsTen, string tsID, string tsChucvu, string tsPhong){
		this->Ten=tsTen;
		this->ID=tsID;
		this->Phong=tsPhong;
		this->Chucvu=tsChucvu;
	}
	NhanVien(string tsTen, string tsID){
		this->Ten=tsTen;
		this->ID=tsID;
	}
	NhanVien(){
		this->Ten="";
		this->ID="0";
		this->Phong="";
		this->Chucvu="";
	}
	string getTen(){
		return this->Ten;
	}
	void setTen(string tsTen){
		this->Ten = tsTen;
	}

	string getPhong(){
		return this->Phong;
	}
	void setPhong(string tsPhong){
		this->Phong = tsPhong;
	}

	string getID(){
		return this->ID;
	}
	void setID(string tsID){
		this->ID = tsID;
	}

	string getChucvu(){
		return this->Chucvu;
	}
	void setChucvu(string tsChucvu){
		this->Chucvu = tsChucvu;
	}
	void xuat(){
		cout<<"Ten: "<<this->Ten<<"\nCMND: "<<this->ID<<"\nChuc vu:"<<this->Chucvu<<"\nPhong: "<<this->Phong<<endl;	
	}
};

int main(){
	NhanVien nv1("Susan Meyers","47899","Phó Chủ tịch","Kế toán");
	NhanVien nv2("Mark Jones","39119","Lập trình viên","CNTT");
	NhanVien nv3("Joy Rogers","81774","Kỹ sư","Sản xuất");
	NhanVien nv4("Joy Rogers","81774");
	nv4.xuat();
	return 0;
}