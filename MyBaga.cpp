#include <iostream>
using namespace std;

class CBurger{
    int harga;
  public:
  	int jml1;
    void setbyr (int);
    int byr() {return harga*jml1;}
};

void CBurger::setbyr (int x) {
  harga = x;
}
class SBurger{
    int harga;
  public:
  	int jml2;
    void setbyr (int);
    int byr() {return harga*jml2;}
};

void SBurger::setbyr (int v) {
  harga = v;
}
class DBurger{
    int harga;
  public:
  	int jml3;
    void setbyr (int);
    int byr() {return harga*jml3;}
};

void DBurger::setbyr (int z) {
  harga = z;
}

int main () {
	char pil;
	int a;
	cout<<"\t\t\t==============================="<<endl;
	cout<<"\t\t\t\tMyBaga"<<endl;
	cout<<"\t\t\t==============================="<<endl;
	cout<<"\t\t\t\tPilihan Menu "<<endl;
	cout<<"\t[1]Cheese Burger [2]Sunny Burger [3]Double Beef Burger"<<endl;
	menu:
	cout<<"Pilih Menu :";
	cin>>a;
	if (a==1){
  CBurger c;
  
  c.setbyr (20000);
  cout<<"Masukan Jumlah :";
  cin>>c.jml1;
  cout << "Total: " << c.byr();

	}
	else if(a==2){
	SBurger s;

  s.setbyr (15000);
  cout<<"Masukan Jumlah :";
  cin>>s.jml2;
  cout << "Total: " << s.byr();
	}
	else if (a==3){
	DBurger d;
	
  d.setbyr (28000);
  cout<<"Masukan Jumlah :";
  cin>>d.jml3;
  cout << "Total: " << d.byr();
	}
	else;
	cout<<"\n\\nMasukan Menu lagi?(y/n)";
	cin>>pil;
	if(pil=='y'){
		goto menu;
	}
  return 0;
}
