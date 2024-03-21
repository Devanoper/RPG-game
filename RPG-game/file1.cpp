#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{	
	//----------------------INITIALIZE------------------------------------------//
	ContextSettings settings;
	settings.antialiasingLevel = 9;
	RenderWindow window(VideoMode(800, 600),"RPGgame",Style::Default,settings);
	//----------------------INITIALIZE------------------------------------------//

//----------------------LOAD------------------------------------------//
	Texture playerTexture;
	Sprite playerSprite;

	int Xindex = 0, Yindex = 0;

	if (playerTexture.loadFromFile("Assets/Player/Textures/BODY_skeleton.png"))
	{
		playerSprite.setTexture(playerTexture);
		playerSprite.setTextureRect(IntRect(Xindex * 64, Yindex * 64, 64, 64));
	}
	else
	{
		exit(0);
	}
	
//----------------------LOAD------------------------------------------//


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


		//MOVEMENT
		if (Keyboard::isKeyPressed(Keyboard::D))
		{
			Vector2f position = playerSprite.getPosition();
			playerSprite.setPosition(position + Vector2f(0.5, 0));
		}
		if (Keyboard::isKeyPressed(Keyboard::S))
		{
			Vector2f position = playerSprite.getPosition();
			playerSprite.setPosition(position + Vector2f(0, 0.5));
		}
		if (Keyboard::isKeyPressed(Keyboard::A))
		{
			Vector2f position = playerSprite.getPosition();
			playerSprite.setPosition(position + Vector2f(-0.5, 0));
		}
		if (Keyboard::isKeyPressed(Keyboard::W))
		{
			Vector2f position = playerSprite.getPosition();
			playerSprite.setPosition(position + Vector2f(0, -0.5));
		}
		//MOVEMENT//
		

		//--------------------------------UPDATE----------------------------------------//


		//--------------- ----------------------DRAW----------------------------------------//
		window.clear(Color::Black);
		window.draw(playerSprite);
		window.display();
		//-------------------------------------DRAW----------------------------------------//
	}
}
   