#include <Array.hpp>

/*
class Awesome
{
	public:
		Awesome(void): _n( 42 ) { return; }
		int get(void) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<(std::ostream& o, Awesome const & rhs) { o << rhs.get(); return o; }
*/
int main(int, char**)
{
    Array<int> numbers(10);
    for (int i = 0; i < 10; i++)
	{
        numbers[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
        std::cout << numbers[i] << std::endl;
	}

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    try
    {
        numbers[20] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------" << std::endl;
	/*
	Array<Awesome> awesomes2;
	Array<Awesome> awesomes(5);

	for (int i = 0; i < 5; i++)
	{
        awesomes[i] = Awesome();
	}

	for (int i = 0; i < 5; i++)
	{
        std::cout << awesomes[i] << std::endl;
	}

    {
        Array<Awesome> tmp = awesomes;
        Array<Awesome> test(tmp);
    }

    try
    {
        awesomes[20] = Awesome();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	*/
    return 0;
}