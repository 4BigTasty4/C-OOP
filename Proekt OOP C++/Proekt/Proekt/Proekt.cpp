#include <SFML/Graphics.hpp>
#include <iostream> 

using namespace std;
using namespace sf;

//const int mapHeight = 25;
//const int mapWidth = 40;


//sf::String gameMap[mapHeight] = {
//"0000000000000000000000000000000000000000",
//"0                                      0",
//"0   ssssssssssss               sssss   0",
//"0                                  s   0",
//"0                                  s   0",
//"0                                  s   0",
//"0   s                              s   0",
//"0   s        sssssssssss           s   0",
//"0   s                              s   0",
//"0   s                                  0",
//"0   s                   ss             0",
//"0   s                   ss             0",
//"0   s                   ss             0",
//"0   s                   ss             0",
//"0   s                   ss             0",
//"0   s                   ss             0",
//"0   s                                  0",
//"0                                      0",
//"0                                      0",
//"0     sssssssssssss         ssssssss   0",
//"0                           ssssssss   0",
//"0                           ssssssss   0",
//"0                           ssssssss   0",
//"0                                      0",
//"0000000000000000000000000000000000000000",
//};
//
//
//int main()
//{
//	RenderWindow window(sf::VideoMode(1280, 800), "SFML");
//
//	sf::Texture tankTexture = sf::Texture();
//	tankTexture.loadFromFile("images/tiink.png");
//	sf::Sprite tankSprite = sf::Sprite(tankTexture);
//	tankSprite.setTextureRect(sf::IntRect(0, 3, 28, 29));
//	tankSprite.setPosition(400, 400);
//
//	sf::Image mapImage = sf::Image();
//	mapImage.loadFromFile("images/map.png");
//	sf::Texture mapTxt = sf::Texture();
//	mapTxt.loadFromImage(mapImage);
//	sf::Sprite mapSprite = sf::Sprite();
//	mapSprite.setTexture(mapTxt);
//
//	while (window.isOpen())
//	{
//
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//		}
//
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
//
//			tankSprite.move(-0.3, 0);
//
//			tankSprite.setTextureRect(sf::IntRect(65, 3, 33, 29));
//
//		}
//
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
//
//			tankSprite.move(0.3, 0);
//
//			tankSprite.setTextureRect(sf::IntRect(65 + 65, 3, -33, 29));
//
//		}
//
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
//
//			tankSprite.move(0, -0.3);
//
//			tankSprite.setTextureRect(sf::IntRect(0, 3, 28, 29));
//
//		}
//
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
//
//			tankSprite.move(0, 0.3);
//
//			tankSprite.setTextureRect(sf::IntRect(65 * 3, 3, -28, 29));
//
//		}
//
//		window.clear(sf::Color::Black);
//
//		for (int i = 0; i < mapHeight; i++)
//			for (int j = 0; j < mapWidth; j++)
//			{
//				if (gameMap[i][j] == ' ') {
//
//					mapSprite.setTextureRect(IntRect(0, 0, 32, 32));
//
//				}
//				if (gameMap[i][j] == 's') {
//					mapSprite.setTextureRect(IntRect(32, 0, 32, 32));
//				}
//				if ((gameMap[i][j] == '0')) {
//					mapSprite.setTextureRect(IntRect(64, 0, 32, 32));
//
//				}
//				mapSprite.setPosition(j * 32, i * 32);
//
//				window.draw(mapSprite);
//			}
//
//
//		window.draw(tankSprite);
//		window.display();
//	}
//
//	return 0;
//}

const int mapHeight = 25;
const int mapWidth = 40;

sf::String gameMap[mapHeight] = {
"0000000000000000000000000000000000000000",
"0                                      0",
"0   ssssssssssss               sssss   0",
"0                                  s   0",
"0                                  s   0",
"0                                  s   0",
"0   s                              s   0",
"0   s        sssssssssss           s   0",
"0   s                              s   0",
"0   s                                  0",
"0   s                   ss             0",
"0   s                   ss             0",
"0   s                   ss             0",
"0   s                   ss             0",
"0   s                   ss             0",
"0   s                   ss             0",
"0   s                                  0",
"0                                      0",
"0                                      0",
"0     sssssssssssss         ssssssss   0",
"0                           ssssssss   0",
"0                           ssssssss   0",
"0                           ssssssss   0",
"0                                      0",
"0000000000000000000000000000000000000000",
};

class TankMove {

public:

	virtual void Show(sf::RenderWindow& window) = 0;

};

class Tank : public TankMove{

	sf::Sprite tankSprite;
	sf::IntRect tankRect;
	sf::Vector2f tankPos;

public:



	Tank(sf::Texture& texture) {

		this->tankPos = sf::Vector2f(640, 400);
		this->tankRect = sf::IntRect(0, 3, 29, 29);
		this->tankSprite = sf::Sprite(texture, tankRect);
		tankSprite.setTextureRect(tankRect);
		tankSprite.setPosition(tankPos);
		tankSprite.setTexture(texture);
	}

	void tankMove(sf::Event& moveEvent) {

		switch (moveEvent.key.control)
		{
		case sf::Keyboard::Right:
			this->tankSprite.move(0.1, 0);
			//this->tankPos.x -= 50;
			this->tankSprite.setTextureRect(sf::IntRect(65*2, 3, -33, 29));

			break;
		case sf::Keyboard::Left:
			this->tankSprite.move(0.1, 0);
			this->tankSprite.setTextureRect(sf::IntRect(65, 3, 33, 29));
			break;
		case sf::Keyboard::Up:
			this->tankSprite.move(0, -0.1);
			this->tankSprite.setTextureRect(sf::IntRect(0, 3, 28, 29));
			break;
		case sf::Keyboard::Down:
			this->tankSprite.move(0, 0.1);
			this->tankSprite.setTextureRect(sf::IntRect(65 * 3, 3, -28, 29));
			break;
		}
		
		this->tankSprite.setPosition(tankPos);
	}

	void Show (sf::RenderWindow& window) override {

		window.draw(tankSprite);

	}

};

int main()
{

	RenderWindow window(sf::VideoMode(1280, 800), "SFML");

	sf::Image mapImage = sf::Image();
	mapImage.loadFromFile("images/map.png");
	sf::Texture map = sf::Texture();
	map.loadFromImage(mapImage);
	sf::Sprite mapSprite = sf::Sprite();
	mapSprite.setTexture(map);

	sf::Texture tankTexture = sf::Texture();
	tankTexture.loadFromFile("images/tiink.png");
	sf::Sprite tankSprite = sf::Sprite(tankTexture);
	 
	Tank tankMoving = Tank(tankTexture);
	TankMove* tank = new Tank(tankTexture);

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed) {
				tankMoving.tankMove(event);
			}
		}

		/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {

			tankSprite.move(-0.1, 0);

			tankSprite.setTextureRect(sf::IntRect(65, 3, 33, 29));

		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {

			tankSprite.move(0.1, 0);

			tankSprite.setTextureRect(sf::IntRect(65 + 65, 3, -33, 29));

		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {

			tankSprite.move(0, -0.1);

			tankSprite.setTextureRect(sf::IntRect(0, 3, 28, 29));

		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {

			tankSprite.move(0, 0.1);

			tankSprite.setTextureRect(sf::IntRect(65 * 3, 3, -28, 29));

		}*/
		
		//tankMoving.tankMove(event);

		window.clear(sf::Color::Black);

		
		for (int i = 0; i < mapHeight; i++)
			for (int j = 0; j < mapWidth; j++)
			{
				if (gameMap[i][j] == ' ') {

					mapSprite.setTextureRect(IntRect(0, 0, 32, 32));

				}
				if (gameMap[i][j] == 's') {
					mapSprite.setTextureRect(IntRect(32, 0, 32, 32));
				}
				if ((gameMap[i][j] == '0')) {
					mapSprite.setTextureRect(IntRect(64, 0, 32, 32));

				}
				mapSprite.setPosition(j * 32, i * 32);

				window.draw(mapSprite);
			}
		//window.clear();
		tank->Show(window);
		window.display();
	}

	return 0;
}