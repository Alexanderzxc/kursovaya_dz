#include <SFML/Graphics.hpp>

using namespace sf;




int main()
{
    int i, j, temp;
    int b[5];
    bool flag;
    int a[5], post = 0, n;
    srand(time(0));
    for (int i = 0; i < 5; i++) { a[i] = rand() % 5; }
    while (true) {
        flag = true;
        for (int i = 0; i < 4; i++)
            for (int j = i + 1; j < 5; j++)
            {
                if (a[i] == a[j])
                {
                    a[i] = rand() % 5;
                    flag = false;
                }
            }
        if (flag)
            break;
    }
    for (i = 0; i < 5; i++)
        b[i] = a[i];

    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }


    sf::Font font;
    if (!font.loadFromFile("arialmt.ttf"))
    {
        //=(
    }
    RenderWindow window(VideoMode(800, 800), L"Новый проект", Style::Default);

    window.setVerticalSyncEnabled(true);

    RectangleShape robot(sf::Vector2f(100, 50));
    CircleShape item_1(50);
    CircleShape item_2(50);
    CircleShape item_3(50);
    CircleShape item_4(50);
    CircleShape item_5(50);
    robot.setPosition(350, 600);
    //   int random = rand() % 10;
    item_1.setPosition(80, 100);
    item_2.setPosition(200, 100);
    item_3.setPosition(320, 100);
    item_5.setPosition(560, 100);
    item_4.setPosition(440, 100);
    robot.setFillColor(Color::Magenta);

    sf::Text text_1;
    text_1.setFont(font);
    text_1.setString(std::to_string(b[0]));
    text_1.setCharacterSize(24);
    text_1.setFillColor(Color::Black);
    text_1.setStyle(Text::Bold);

    sf::Text text_2;
    text_2.setFont(font);
    text_2.setString(std::to_string(b[1]));
    text_2.setCharacterSize(24);
    text_2.setFillColor(Color::Black);
    text_2.setStyle(Text::Bold);

    sf::Text text_3;
    text_3.setFont(font);
    text_3.setString(std::to_string(b[2]));
    text_3.setCharacterSize(24);
    text_3.setFillColor(Color::Black);
    text_3.setStyle(Text::Bold);

    sf::Text text_4;
    text_4.setFont(font);
    text_4.setString(std::to_string(b[3]));
    text_4.setCharacterSize(24);
    text_4.setFillColor(Color::Black);
    text_4.setStyle(Text::Bold);

    sf::Text text_5;
    text_5.setFont(font);
    text_5.setString(std::to_string(b[4]));
    text_5.setCharacterSize(24);
    text_5.setFillColor(Color::Black);
    text_5.setStyle(Text::Bold);

    int robot_y_pos, robot_x_pos;

    robot_y_pos = robot.getPosition().y;
    robot_x_pos = robot.getPosition().x;



    while (window.isOpen())
    {
        text_1.setPosition(item_1.getPosition().x + 42, item_1.getPosition().y + 35);
        text_2.setPosition(item_2.getPosition().x + 42, item_2.getPosition().y + 35);
        text_3.setPosition(item_3.getPosition().x + 42, item_3.getPosition().y + 35);
        text_4.setPosition(item_4.getPosition().x + 42, item_4.getPosition().y + 35);
        text_5.setPosition(item_5.getPosition().x + 42, item_5.getPosition().y + 35);


        int i = 0;
        while (i < 5)
        {
            window.clear(Color::Blue);
            window.draw(robot);
            window.draw(item_1);
            window.draw(item_2);
            window.draw(item_3);
            window.draw(item_4);
            window.draw(item_5);
            window.draw(text_1);
            window.draw(text_2);
            window.draw(text_3);
            window.draw(text_4);
            window.draw(text_5);
            window.display();

            for (int j = 0; j < 5; j++)
            {
                if (b[i] == a[j])
                {
                    switch (j)
                    {
                    case 0:
                        switch (i)
                        {
                        case 0:
                            while (robot_x_pos > item_1.getPosition().x) {
                                robot_x_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos > item_1.getPosition().y + 100) {
                                robot_y_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos < 700)
                            {
                                robot_y_pos += 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();

                            }
                            i += 1;
                            continue;
                            
                        case 1:
                            while (robot_x_pos > item_2.getPosition().x) {
                                robot_x_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos > item_2.getPosition().y + 100) {
                                robot_y_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos < 700)
                            {
                                robot_y_pos += 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();

                            }
                            i += 1;
                            continue;
                        case 2:
                            while (robot_x_pos > item_3.getPosition().x) {
                                robot_x_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos > item_3.getPosition().y + 100) {
                                robot_y_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos < 700)
                            {
                                robot_y_pos += 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();

                            }
                            i += 1;
                            continue;
                        case 3:
                            while (robot_x_pos < item_4.getPosition().x) {
                                robot_x_pos += 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos > item_4.getPosition().y + 100) {
                                robot_y_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos < 700)
                            {
                                robot_y_pos += 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();

                            }
                            i += 1;
                            continue;
                        case 4:
                            while (robot_x_pos < item_5.getPosition().x) {
                                robot_x_pos += 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos > item_5.getPosition().y + 100) {
                                robot_y_pos -= 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();
                            }
                            while (robot_y_pos < 700)
                            {
                                robot_y_pos += 1;
                                robot.setPosition(robot_x_pos, robot_y_pos);
                                window.clear(Color::Blue);
                                window.draw(robot);
                                window.draw(item_1);
                                window.draw(item_2);
                                window.draw(item_3);
                                window.draw(item_4);
                                window.draw(item_5);
                                window.draw(text_1);
                                window.draw(text_2);
                                window.draw(text_3);
                                window.draw(text_4);
                                window.draw(text_5);
                                window.display();

                            }

                        }
                    }
                }
            }
        }

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear(Color::Blue);
        window.draw(robot);
        window.draw(item_1);
        window.draw(item_2);
        window.draw(item_3);
        window.draw(item_4);
        window.draw(item_5);
        window.draw(text_1);
        window.draw(text_2);
        window.draw(text_3);
        window.draw(text_4);
        window.draw(text_5);
        window.display();


        return 0;
    }
}