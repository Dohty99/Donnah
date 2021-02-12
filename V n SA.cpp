#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Cylinder{
	int radius;
	int height;
	float pie;
	public:
		Cylinder(){
			radius=0;
			height=0;
			pie=3.14;
			cout<<"construct called\n";
		}
		Cylinder(int r,float p,int h){
			radius=r;
			height=h;
			pie=3.142;
			cout<<"Parameterized construct called\n";
		}
		float volume(){
			return pie*radius*radius*height;
				}
				float surfacearea(){
					return 2*pie*radius*height+2*pie*radius*radius;
				}
		
};

int main() {
	Cylinder cylinder(4,3.142,9);
	cout<<cylinder.volume()<<endl;
	cout<<cylinder.surfacearea()<<endl;
	return 0;
}
