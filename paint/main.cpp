
#include "paint.h"
#include "granola.h"

int main()
{
	using std::cout;

	Latex   wallpaint(WHITE);
	Lacquer bicyclepaint(RED);
	Varnish thronepaint(ORANGE);
    Granola granola(BLUE);

	Paint *ar[4];

	ar[0] = &wallpaint;
	ar[1] = &bicyclepaint;
	ar[2] = &thronepaint;
    ar[3] = &granola;

	for (int i = 0; i < 4; i++){
    	ar[i]->apply();
    	cout << "colour: " << ar[i]->get_colour() << "\n";
	}
    
    
	return 0;
}
