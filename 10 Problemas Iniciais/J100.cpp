#include <cmath>
#include <iostream>
 
struct Coord{
	double x,y;
};
 
struct Coord getTileCoordinates(double tileNum) {
 	double doubleRoot=floor(sqrt(tileNum));
    struct Coord result;
 	result.x =(round(doubleRoot/2)*pow(-1,doubleRoot+1))+(pow(-1,doubleRoot+1)*(((doubleRoot*(doubleRoot+1))-tileNum)-std::abs((doubleRoot*(doubleRoot+1))-tileNum))/2);
 	result.y =(round(doubleRoot/2)*pow(-1,doubleRoot))+(pow(-1,doubleRoot+1)*(((doubleRoot*(doubleRoot+1))-tileNum)+std::abs((doubleRoot*(doubleRoot+1))-tileNum))/2);
    return result;
}
 
 
int main()
{
	int n;
	scanf("%d",&n);
	struct Coord result = getTileCoordinates(n-1);
	std::cout<<'('<<result.x<<","<<result.y<<')'<<std::endl;
	return 0;
}


