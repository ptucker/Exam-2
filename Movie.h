//I affirm that all code given below was written solely by me, Grant Bingham, 
//and that any help I received adheredto the rules stated for this exam.
#include <iostream>
#include <string>
#include "Theater.h"
using namespace std;

class Movie
{
	private:
	
	string Title;
	string Genre;
	int ShowTime;

	public:
	
	Movie()
	{
		string Title = "Star Wars";
		string Genre = "Comedy";
		int ShowTime = 12;
	}
     
	Movie(string setTitle, string setGenre, int setShowTime)
	{
		Title = setTitle;
		Genre = setGenre;
		ShowTime = setShowTime;
	}


	string GetTitle()
	{
		return Title;
	}			

	string GetGenre()	
	{
		return Genre;
	}

	int GetShowtime()	
	{
		return ShowTime;
	}
};
