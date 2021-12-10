//, potencias elevadas al cuadrado 
#include <iostream>

using namespace std;

class Entero{
	public:
		Entero(int i){
			setName(i);
			
		}
		void setName(int x){
		edad=x;
		}
		int getName(){
			return edad;
			
		}
	private:
		int  edad;
	
		
		
};

class Decim{
	public:
		Decim(float i){
			setName(i);
			
		}
		void setName(float x){
		edad=x;
		}
		float getName(){
			return edad;
			
		}
	private:
		float  edad;
	
		
		
};

class Doub{
	public:
		Doub(double i){
			setName(i);
			
		}
		void setName(double x){
		edad=x;
		}
		double getName(){
			return edad;
			
		}
	private:
		double edad;
	
		
		
};

class charac{
	public:
		charac(char i){
			setName(i);
			
		}
		void setName(char x){
		edad=x;
		}
		char getName(){
			return edad;
			
		}
	private:
		char edad;
	
		
		
};




int main()
{
	Entero lily(3), agt(2), mon(5);
	Entero loly(122), amt(22), mun(5);
	Entero laly(11), ast(23), men(4);
	Entero lely(100), art(2), min(2);
	Entero luly(100), axt(2), man(7);

	
	Decim le(12.6), ag(3.2), mo(1.6);
	Decim la(12.6), ah(3.2), me(1.6);
	Decim li(12.6), az(3.2), mu(1.6);
	Decim lu(12.6), ar(3.2), mi(1.6);
	Decim lo(12.6), al(3.2), ma(1.6);
	
	Doub se(82/3), eg(39/2), to(1/6);
	Doub sa(200/6), eh(23/4), te(72/6);
	Doub si(29/8), ez(22/6), tu(62/5);
	Doub su(67/9), er(9/2), ti(16/5);
	Doub so(27/9), ek(9/2), ta(36/5);
	
	charac uz(2), is(1), ot(3);
	charac ut(2), it(1), oz(3);
	charac ux(2), im(3), ox(3);
	charac uw(70), iq(3), oc(3);
	charac uq(70), ir(3), op(8);
	
	cout<<"Enteros"<<endl;
	cout<<lily.getName()+agt.getName()+mon.getName();
	cout<<endl;
	cout<<loly.getName()-amt.getName()-mun.getName();
	cout<<endl;
	cout<<laly.getName()*ast.getName()*men.getName();
	cout<<endl;
	cout<<lely.getName()/art.getName()/min.getName();cout<<endl;
	cout<<luly.getName()*luly.getName()<<endl;
	cout<<axt.getName()*axt.getName()<<endl;
	cout<<man.getName()*man.getName();
	cout<<endl;
	cout<<endl;
	
	cout<<"Decimales"<<endl;
	cout<<le.getName()+ag.getName()+mo.getName();
	cout<<endl;	
	cout<<la.getName()-ah.getName()-me.getName();
	cout<<endl;
	cout<<li.getName()*az.getName()*mu.getName();
	cout<<endl;
	cout<<lu.getName()/ar.getName()/mi.getName()<<endl;
	cout<<lo.getName()*lo.getName()<<endl;
	cout<<al.getName()*al.getName()<<endl;
	cout<<ma.getName()*ma.getName()<<endl;
	cout<<endl;
	
	cout<<"Doubles"<<endl;
	cout<<se.getName()+eg.getName()+to.getName();
	cout<<endl;	
	cout<<sa.getName()-eh.getName()-te.getName();
	cout<<endl;
	cout<<si.getName()*ez.getName()*tu.getName();
	cout<<endl;
	cout<<su.getName()/er.getName()/ti.getName()<<endl;
	cout<<so.getName()*so.getName()<<endl;
	cout<<ek.getName()*ek.getName()<<endl;
	cout<<ta.getName()*ta.getName()<<endl;
	cout<<endl;
	
	cout<<"Char"<<endl;
	cout<<uz.getName()+is.getName()+ot.getName();
	cout<<endl;	
	cout<<ut.getName()-it.getName()-oz.getName();
	cout<<endl;
	cout<<ux.getName()*im.getName()*ox.getName();
	cout<<endl;
	cout<<uw.getName()/iq.getName()/oc.getName()<<endl;
	cout<<uq.getName()*uq.getName()<<endl;
	cout<<ir.getName()*ir.getName()<<endl;
	cout<<op.getName()*op.getName();
	cout<<endl;
	cout<<endl;
	
	return 0;
	
}









