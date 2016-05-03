#include<iostream>
using namespace std;
class Complex
{

	float re;
	float im;
public:
	Complex()
	{
		this->re = 0;
		this->im = 0;
	}
	Complex (Complex& A)
	{
		this->re = A.re;
		this->im = A.im;
	}
	Complex operator + (Complex& A)
	{
		Complex S;
		S.re = A.re + this->re;
		S.im = A.im + this->im;
		return S;
	}
	float get_re()
	{
		return this->re;
	}
	float get_im()
	{
		return this->im;
	}
	void set_re( float r)
	{
		this->re = r;
	}
	void set_im(float _im)
	{
		this->im = _im;
	}

};
class Matrix
{

	Complex* data;
	int n, m;
public:
	Matrix()
	{
		n = 0;
		m = 0;
		data->set_im(0);
		data->set_re(0);
	}
	Matrix (int _n, int _m)
	{
		n = _n;
		m = _m;
		data = new Complex [_n*_m];
		for (int i(0); i < n*m; i++)
		{
			this->data[i].set_im(i);
			this->data[i].set_re(i);
		}
	}
	Complex get(int i,int j)
	{
		return data[i*n + j];
	}
	ostream& print (ostream& o)
	{
		for (int i(0); i < n; i++)
	{
		for (int j(0); j < m; j++)
		{
			o << this->get(i,j).get_re()<<" + i"<<this->get(i,j).get_im()<<'\t';

		}
		o<<'\n';
	}
		return o;
	}
};
int main()
{
Matrix M();
Matrix P(3,3);
P.print(cout);

}
