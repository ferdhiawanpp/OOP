#include <iostream>
#include <string>

using namespace std;
class kambing
{
	protected :
		int jk, jkp;
    public :
    	void rp1()
    	{
			cout<<"masukkan jumlah kambing : "; cin >> jk;
			cout<<"masukkan jumlah kambing yang dipotong : "; cin >> jkp;
		}
};

class alamat {  
    public:  
   string namaJalan, kota;    
     alamat(string namaJalan, string kota)    
    {    
        this->namaJalan = namaJalan;    
        this->kota = kota;
    }    
};

class sapi
{
	protected :
		int js, jsp;
    public :
    	void rp2()
    	{
			cout<<"masukkan jumlah sapi : "; cin>>js;
			cout<<"masukkan jumlah sapi yang dipotong : "; cin >> jsp;
		}
};
class hasil : public kambing, public sapi
{
	private :
		alamat* almt;
	int totalTernak, totalPotong;
	string namaJalan="Jalan Kandangan", kota="Surabaya";
	public :
	
		void total()
		{
			totalTernak = (jk+js);
			totalPotong = (jkp+jsp);
			cout<<"jumlah sapi : "<<js;
			cout<<endl;
			cout<<"jumlah sapi yang dipotong : "<<jsp;
			cout<<endl;
			cout<<"alamat tempat potong ayam : "<<namaJalan<<" "<<kota;
			cout<<endl;
			cout<<endl;
			cout<<"jumlah kambing : "<<jk;
			cout<<endl;
			cout<<"jumlah kambing yang dipotong : "<<jkp;
			cout<<endl;
			cout<<"alamat tempat potong bebek : "<<namaJalan<<" "<<kota;
			cout<<endl;
			cout<<endl;
			cout<<"total ternak : "<<totalTernak<<endl;
			cout<<"total ternak yang dipotong : "<<totalPotong;
		}
	
};
int main()
{
	alamat a1= alamat("Jalan Kandangan","Surabaya");
	hasil a;
	a.rp1();
	a.rp2();
	a.total();
	return 0;
}