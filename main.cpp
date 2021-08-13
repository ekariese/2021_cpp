//
//  main.cpp
//  circle_calculate
//
//  Created by 박이경 on 2021/08/13.
//

#include <iostream>
using namespace std;
class Circle {
    int radius;
public :
    Circle() {radius = 1;}
    ~Circle() {}
    int getArea() {return 3.14*radius*radius;}
    void setRadius(int radius){
        this ->radius = radius;
    }
    int getRadius() {return radius;}
    
};

int main() {
    int n;
    int count = 0;
    cout<< "생성할 원의 개수 : ";
    cin>> n;
    Circle *pC = new Circle[n];
    srand(time(NULL));
    for (int i=0; i<n; i++){
        cout <<"반지름"<<pC[i].getRadius()<<"인 원"<<endl;
    }
    for (int i = 0; i<n ; i++){
        pC[i].setRadius(rand() %100 +1);
    }
    for (int i = 0; i<n; i++ ){
        cout <<"반지름"<<pC[i].getRadius()<<"인 원"<<endl;
        if (pC[i].getArea() >100) count ++;
        
    }
    cout <<"면적이 100보다 큰 원은"<<count<<"개 입니다"<<endl;
    delete [] pC;
}
