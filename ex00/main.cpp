#include "whatever.hpp"
/*
class Awesome 
{
	public:
		Awesome ():_n(0) {}
		Awesome(int n): _n(n) {}
		Awesome(Awesome &rhs): _n(rhs._n) {}
		bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n); }
		bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n); }
		bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n); }
		bool operator<(Awesome const & rhs) const { return (this->_n < rhs._n); }
		bool operator>=(Awesome const & rhs) const { return (this->_n >= rhs._n); }
		bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n); }
		Awesome &operator=(Awesome const & rhs) { this->_n = rhs._n; return (*this); }
		int getN() const { return (this->_n);}
	private:
		int _n;
};

std::ostream& operator<<(std::ostream &out, const Awesome& origin)
{
	out << origin.getN();
	return (out);
}
*/
int main( void ) 
{
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	/*
	Awesome one(5);
	Awesome two(10);
	std::cout << "Awesome one: "  << one << std::endl;
	std::cout << "Awesome two: "  << two << std::endl;
	swap(one, two);
	std::cout << "Awesome one: "  << one << std::endl;
	std::cout << "Awesome two: "  << two << std::endl;
	std::cout << "min( one, two ) = " << ::min( one, two ) << std::endl;
	std::cout << "max( one, two ) = " << ::max( one, two ) << std::endl;
	*/
return 0;
}
