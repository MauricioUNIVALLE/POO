#include<iostream>

using namespace std;
class Coche{
	private:
		string marca;
	public: 
		Coche(string m):marca(m){
		}
	void mostrar()
	{
		cout<<"Marca "<<marca<<"\n";
	}
};
int main(){
	Coche miCoche("Toyota");
	miCoche.mostrar();
	return 0;
}
