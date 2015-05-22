#include <cmath>
#include <iostream>

using namespace std;

struct Coord{
	double x,y;
};

struct Coord coordenadas(double tileNum) {
 	double doubleRoot=floor(sqrt(tileNum));
    struct Coord result;
 	result.x =(round(doubleRoot/2)*pow(-1,doubleRoot+1))+(pow(-1,doubleRoot+1)*(((doubleRoot*(doubleRoot+1))-tileNum)-abs((doubleRoot*(doubleRoot+1))-tileNum))/2);
 	result.y =(round(doubleRoot/2)*pow(-1,doubleRoot))+(pow(-1,doubleRoot+1)*(((doubleRoot*(doubleRoot+1))-tileNum)+abs((doubleRoot*(doubleRoot+1))-tileNum))/2);
    return result;
}


int main()
{
	int n;
	cin >> n;
	struct Coord result = coordenadas(n-1);
	cout << '(' << result.x << "," << result.y << ')' << endl;
	return 0;
}


