//I affirm that all code given below was written solely by me, Grant Bingham, 
//and that any help I received adheredto the rules stated for this exam.
#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

class Theater
{
	private:
	string Name;
	string Phone;
	int Popcorn;
	int Coke;
	int NumberOfMovies;

	public:
	Theater()
	{
		string Name = "The Garland";
		string Phone = "509-327-2509";
		int Popcorn = 5;
		int Coke = 3;
		int NumberOfMovies = 0;
	}

	Theater(string setName, string setPhone)
	{
		Name = setName;
		Phone = setPhone;
	}

	void Addmovie(Movie& Movie)
	{
		NumberOfMovies++;
	}
	
	string GetMovieForHour(int hour)
	{
		return Title;
	}

	int GetShowTimeForGenre(string Genre)
	{
		return Time;
	}
						
	int GetPopcornPrice(int NumberOfBags)
	{
		int Price = NumberOfBags * Popcorn;
		return Price;
	}

	int GetCokePrice(int NumberOfCups)
	{
		int Price = NumberOfCups * Popcorn;
		return Price;
	}
}