#ifndef COCHE_H
#define COCHE_H
using namespace std;

class Coche
{
	private:
		string marca;
	public:
		Coche(sting m):marca(m){
		}
	void mostrar(){
		cout<<"Marca :"<<marca<<"\n";
	}
	protected:
};

#endif
