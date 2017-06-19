#include "ccc_win.h"
using namespace std; 

int ccc_win_main()
{
	int n; 

	Point P = cwin.get_mouse("click somewhere."); 
	Line L(Point(0, 0), P); 
	cwin << L; 
	n = cwin.get_double("Enter a number between 2 and 100."); 
	
	for (int i = 0; i <= n; i++)
	{
		double dx, dy; 
		dx = (P.get_x() / n); 
		dy = (P.get_y() / n); 
		Point x(i*dx, i*dy); 
		Circle C(x, 0.1); 
		cwin << C; 
	}

	return 0; 

}