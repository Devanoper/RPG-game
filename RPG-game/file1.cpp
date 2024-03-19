#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{	
	//----------------------INITIALIZE------------------------------------------//
	ContextSettings settings;
	settings.antialiasingLevel = 9;

	RenderWindow window(VideoMode(800, 600),"RPGgame",Style::Default,settings);

	CircleShape shapeone(20,20);
	shapeone.setFillColor(Color::Yellow);
	shapeone.setPosition(Vector2f(350,250));
	//----------------------INITIALIZE------------------------------------------//


	//run program as long as window is open
	while (window.isOpen())
	{


		//--------------------------------UPDATE----------------------------------------//
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
		}
		//--------------------------------UPDATE----------------------------------------//


		//--------------- ----------------------DRAW----------------------------------------//
		window.clear(Color::Black);
		window.draw(shapeone);
		window.display();
		//-------------------------------------DRAW----------------------------------------//
	}
}
   