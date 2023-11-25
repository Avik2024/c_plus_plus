//c++ structure example
/*
#include<iostream>

using namespace std;

struct Rectangle {

	int width, height;

};

int main(){

	struct Rectangle r;
	r.width = 8;
	r.height = 5;
	cout << "Area of rectangle is:" << (r.width * r.height) << endl;
	return 0;

}
*/
/*
#include<iostream>

using namespace std;

struct Rectangle {

	int width, height;
	Rectangle(int w, int h){
	
		width = w;
		height = h;
	
	}
	void areaOfRectangle(){
	
		cout << "Area of Rectangle is :" << (width * height)<<endl;
	
	}

};

int main(void){

	struct Rectangle rec = Rectangle(4,6);
	rec.areaOfRectangle();
	return 0;

}
*/
#include<iostream>
#include<string>

using namespace std;

struct student{
    
    int age;
    int standard;
    string first_name;
    string last_name;
    
};
int main(){
  
    struct student s;
    cin >> s.age >> s.first_name >> s.last_name >> s.standard;
    cout << s.age <<" "<<s.first_name<<" "<<s.last_name<<" "<<s.standard<<endl;
  return 0;  
}




























