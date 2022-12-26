// Провайдер и абонент (интернет: тариф скорость цена)

#include <iostream>
#include <string>
#include <vector>

class User 
{
private:
    
    std::string name;

public:
    User( std::string b)
    {
        
        name = b;
    }
    
    ~User() {}

    
    std::string getName() // Получить имя абонента
    {
        return name;
    }
};

class Provider 
{
private:
    unsigned int id;
    std::string provider_title;
    double speed_internet;
    int cost;
    std::vector<User*> users;

public:
    Provider(int idd, std::string title, double speed, int c) // информация о провайдере
    {
        id = idd;
        provider_title = title;
        speed_internet = speed;
        cost = c;
    }
    ~Provider() {
        for (int i = 0; i < users.size(); i++) {
            delete users[i];
        }
    }

    void getProvInfo() // получить информацию о  провайдере
    {
        std::cout << id << " " << provider_title << " Скорость тарифа: " << speed_internet << " Цена тарифа: " << cost << std::endl;
    }

    void addUsertoProv(User* user) // Добавить абонента к провайдеру
    {
        users.push_back(user);
    }

    void showUsers() // Получить абонентов провайдера
    {
        std::cout << "Пользователи " << provider_title << ":" << std::endl;
        for (int i = 0; i < users.size(); i++)
        {
            std::cout << users[i]->getName() << std::endl;
        }
        std::cout << std::endl;
    }
    

};





int main()
{
    setlocale(LC_ALL, "rus");
    
    // создание провайдеров
    Provider* provider1 = new Provider(1, "Тис-Диалог", 100, 550);
    Provider* provider2 = new Provider(2, "Ростелеком", 250, 1050);
    Provider* provider3 = new Provider(3, "Сователеком", 50, 250);
    Provider* provider4 = new Provider(4, "Etype", 100, 400);

    // ввывод информации о провайдере 
    provider1->getProvInfo();
    provider2->getProvInfo();
    provider3->getProvInfo();
    provider4->getProvInfo();

    // создание абонентов
    User* user1 = new User("Казанцев Никита");
    User* user2 = new User( "Балабанов Степан");
    User* user3 = new User( "Иванов Анатолий");
    User* user4 = new User( "Суворов Руслан");
    User* user5 = new User( "Алексей Марков");
    User* user6 = new User( "Пётр Ян");
    User* user7 = new User( "Андреев Матвей");
    User* user8 = new User( "Иван Иванов");

    std::cout << std::endl;

    // подключение абонентов к провайдерам
    provider1->addUsertoProv(user2);
    provider1->addUsertoProv(user4);
    provider3->addUsertoProv(user3);
    provider4->addUsertoProv(user1);
    provider3->addUsertoProv(user7);
    provider4->addUsertoProv(user6);
    provider2->addUsertoProv(user5);

    // ввывод провайдеров и подключённых к ним абонентов
    provider1->showUsers();
    provider2->showUsers();
    provider3->showUsers();
    provider4->showUsers();

    delete provider1;
    delete provider2;
    delete provider3;
    delete provider4;
  
    
}

