//#include <Game.h>
//
//Game::Game() : window(VideoMode(800, 600), "OpenGL")
//{
//	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
//	glMatrixMode(GL_MODELVIEW);
//}
//
//Game::~Game() {}
//
//void Game::run()
//{
//
//	initialize();
//
//	Event event;
//
//	while (isRunning) {
//
//		cout << "Game running..." << endl;
//
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//			{
//				isRunning = false;
//			}
//		}
//		update();
//		draw();
//	}
//
//}
//
//void Game::initialize()
//{
//	isRunning = true;
//}
//
//void Game::update()
//{
//	cout << "Update up" << endl;
//
//	m_count++;
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && m_count > 100)
//	{
//		shapeType++;
//		m_count = 0;
//
//		if (shapeType > 10)
//		{
//			shapeType = 0;
//		}
//	}
//}
//
//void Game::draw()
//{
//
//	cout << "Draw up" << endl;
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	switch (shapeType)
//	{
//	case 0:
//		glBegin(GL_POINTS);
//		{
//			glColor3f(0, 1, 0);
//
//			glVertex3f(0.0, 2.0, -5.0);
//			glVertex3f(-2.0, -2.0, -5.0);
//			glVertex3f(2.0, -2.0, -5.0);
//		}
//		glEnd();
//
//		break;
//	case 1:
//		glBegin(GL_LINES);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(0.0, 2.0, -5.0);
//			glVertex3f(-2.0, -2.0, -5.0);
//			glVertex3f(2.0, -2.0, -5.0);
//			glVertex3f(1.0, 2.0, -5.0);
//		}
//		glEnd();
//		break;
//	case 2:
//		glBegin(GL_LINE_STRIP);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(0.0, 2.0, -5.0);
//			glVertex3f(-2.0, -2.0, -5.0);
//			glVertex3f(2.0, -2.0, -5.0);
//			glVertex3f(1.0, 2.0, -5.0);
//			glVertex3f(0.0, 0.0, -5.0);
//		}
//		glEnd();
//		break;
//	case 3:
//		glBegin(GL_LINE_LOOP);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(0.0, 2.0, -5.0);
//			glVertex3f(-2.0, -2.0, -5.0);
//			glVertex3f(2.0, -2.0, -5.0);
//			glVertex3f(1.0, 2.0, -5.0);
//			glVertex3f(0.0, 0.0, -5.0);
//		}
//		glEnd();
//		break;
//	case 4:
//		glBegin(GL_TRIANGLES);
//		{
//			glColor3f(0, 1, 0);
//
//			glVertex3f(0.0, 2.0, -5.0);
//			glVertex3f(-2.0, -2.0, -5.0);
//			glVertex3f(2.0, -2.0, -5.0);
//		}
//		glEnd();
//		break;
//	case 5:
//		glBegin(GL_TRIANGLE_STRIP);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(0.0, 0.0, -10.0);
//			glVertex3f(2.0, 2.0, -10.0);
//			glVertex3f(-2.0, 2.0, -10.0);
//			glVertex3f(2.0, 4.0, -10.0);
//			glVertex3f(4.0, 4.0, -10.0);
//		}
//		glEnd();
//		break;
//	case 6:
//		glBegin(GL_TRIANGLE_FAN);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(0.0, 0.0, -10.0);
//			glVertex3f(2.0, 2.0, -10.0);
//			glVertex3f(-2.0, 2.0, -10.0);
//			glVertex3f(-1.0, -2.0, -10.0);
//			glVertex3f(2.0, -2.0, -10.0);
//		}
//		glEnd();
//		break;
//	case 7:
//		glBegin(GL_QUADS);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(2.0, 2.0, -10.0);
//			glVertex3f(-2, 2, -10.0);
//			glVertex3f(-2.0, -2.0, -10.0);
//			glVertex3f(2.0, -2.0, -10.0);
//		}
//		glEnd();
//		break;
//	case 8:
//		glBegin(GL_QUAD_STRIP);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(2.0, 2.0, -10.0);
//			glVertex3f(-2, 2, -10.0);
//
//			glVertex3f(3.0, 0.0, -10.0);
//			glVertex3f(-3.0, 0.0, -10.0);
//
//			glVertex3f(1.0, -3.0, -10.0);
//			glVertex3f(-1.0, -3.0, -10.0);
//		}
//		glEnd();
//		break;
//	case 9:
//		glBegin(GL_POLYGON);
//		{
//			glColor3f(0, 1, 0);
//			glVertex3f(2.0, 2.0, -10.0);
//			glVertex3f(-2, 2, -10.0);
//			glVertex3f(3.0, 0.0, -10.0);
//			glVertex3f(-3.0, 0.0, -10.0);
//			glVertex3f(2.0, -2.0, -10.0);
//			glVertex3f(-2.0, -2.0, -10.0);
//		}
//		glEnd();
//		break;
//	default:
//		break;
//	}
//
//
//	window.display();
//}
//
//void Game::unload()
//{
//	cout << "Cleaning up" << endl;
//}
//
