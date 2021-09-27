#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <ctime>
#include <cstdlib> 
#include <fstream>

#include "renderWindow.h"

using namespace std;
using namespace sf;

int aboutautors();

int aboutautors() {
	setlocale(0, "");
	Font font;
	font.loadFromFile("AlumniSans-Bold.ttf");
	Text text("", font, 55);

	View view(FloatRect(0, 0, 1500, 1000));
	Vector2i localPosition = Mouse::getPosition(window);
	Image i1;
	i1.loadFromFile("aboutauthors\\vladAboutAuthors.png");
	Texture h1;
	h1.loadFromImage(i1);
	Sprite s1;
	s1.setTexture(h1);
	s1.setPosition(50, 25);
	Image i2;
	i2.loadFromFile("aboutauthors\\anyaAboutAuthors.png");
	Texture h2;
	h2.loadFromImage(i2);
	Sprite s2;
	s2.setTexture(h2);
	s2.setPosition(1150, 600);

	Image icon;
	icon.loadFromFile("windowIcon.png");
	window.setIcon(512, 512, icon.getPixelsPtr());

	Image i3;
	i3.loadFromFile("aboutauthors\\katyaAboutAuthors.png");
	Texture h3;
	h3.loadFromImage(i3);
	Sprite s3;
	s3.setTexture(h3);
	s3.setPosition(50, 1175);

	Image i4;
	i4.loadFromFile("aboutauthors\\nazarAboutAuthors.png");
	Texture h4;
	h4.loadFromImage(i4);
	Sprite s4;
	s4.setTexture(h4);
	s4.setPosition(1150, 1750);

	Image i5;
	i5.loadFromFile("aboutauthors\\danyaAboutAuthors.png");
	Texture h5;
	h5.loadFromImage(i5);
	Sprite s5;
	s5.setTexture(h5);
	s5.setPosition(50, 2325);



	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			else if (event.type == Event::MouseWheelMoved)
			{
				if (event.mouseWheel.delta == 1 && view.getCenter().y < 2400) view.move(0, 50);
				if (event.mouseWheel.delta == -1 && view.getCenter().y > 150) view.move(0, -50);
			}
		}
		window.clear();
		window.setView(view);

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.draw(s1);
		window.draw(s2);
		window.draw(s3);
		window.draw(s4);
		window.draw(s5);
		text.setString(L"��������� �������, �� �� �������� ������, �� �� \n������ ������,�� �� ����� ��������� � ����� ���������� \n�������, ����� ������ � ������� ��������. \n�� � ���? �������� �� �������! ������ ��������� \n�������� ����� �������� ��������� ����� ���ٻ. ");
		text.setPosition(400, 25);
		window.draw(text);
		text.setString(L"���� ��������, ��� �� ���� ���. �������� �� \n������������� �����. ��������� ������� �� ��������, \n����� �� �������, ������� �� ���������. ���-�� \n�������������, ���-�� �������������. ������ ���������� \n������������: �� ���� ��� ��� �� ����������� � \n�����������.");
		text.setPosition(50, 600);
		window.draw(text);
		text.setString(L"���� �������, ��� �� �������, ��� �� ��������\n���������� ������� � ��� ����� ��������, ������� \n����� ����� ��� ��������� ���� ��������� � ���������� \n� ��� ����. ");
		text.setPosition(400, 1175);
		window.draw(text);
		text.setString(L"����� ��������, �� �� Dufrayn � ������ ����������� \n��������, �������� �� ��� ����� ������� ����� \n��������� �� ����� ����(����� ������ ������ ������� \n����������, ����������). ");
		text.setPosition(50, 1750);
		window.draw(text);
		text.setString(L"����� ������� � �������, ��������� �������� ������� \n����������, ��������� ����� �������� ���� � �� ����� \n���������� ���������� ����� ������ ����������� \n�������. � ����� �������� �� � �������� �����������.");
		text.setPosition(400, 2375);
		window.draw(text);
		text.setString(L"�� � ���-�����, ���������� �������, ������� � ����� � ��������\n���������� � ��������� �������� ������ ������� ��� ����� \n������������. � ��� �� ����� IT-���������. ");
		text.setPosition(50, -275);
		window.draw(text);
		window.display();
	}

	return 0;
}