#include "rectangle.h"


inline int add_areas (int areaa, int areab){return areaa + areab;}


int main() {

 Rectangle rectanglea;
 Rectangle rectangleb;

 rectanglea.init(90,70);
 rectangleb.init(10,12);

 int areaa = rectanglea.calculate_area();
 int areab = rectangleb.calculate_area();

 cout<<"Rectangle a area is: "<<areaa<<'\n';
 cout<<"Rectangle b area is: "<<areab<<'\n';

 int total_area = add_areas(areaa, areab);
 cout<<"Total area is: "<<total_area<<'\n';

}
