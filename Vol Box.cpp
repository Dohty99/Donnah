#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Box{

int length;
int width;
int height;
public:
Box(){
	length=0;
	width=0;
	height=0;
	cout<<"construct called\n";
	}
	Box(int l,int w,int h){
		length=l;
		width=w;
		height=h;
		cout<<"Parameterized construct called\n ";
		}
		int volume(){
			return length*width*height;
		}
	};
	int main()
	{
		Box phone_box(10,20,30);
		Box fridge_box(100,200,300);
		cout<<phone_box.volume()<<endl;
		cout<<fridge_box.volume()<<endl;
		return 0;
	}

