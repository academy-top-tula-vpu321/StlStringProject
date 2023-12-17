#include <iostream>
#include <string>

int main()
{
    std::string str1 = "Hello world";
    std::cout << str1 << "\n";

    std::string str2 = "Good by people";
    std::cout << str2 << "\n";


    /*for (int i{}; i < str.length() + 5; i++)
    {
        try
        {
            std::cout << str[i] << "\n";
        }
        catch (std::exception e)
        {
            std::cerr << "Error: " << e.what() << "\n";
        }
    }*/

    //for (auto it{ str1.begin() }; it != str1.end(); it++)
    //    //std::cout << *it << " ";
    //    *it = '$';

    

    std::cout << "\n";

    for(auto item : str1)
       item = '$';

    std::cout << str1 << "\n";

    std::cout << "\n";
    /*
    str.clear();
    std::cout << str << "\n";*/

    //auto it = str1.begin();
    //it++; it++; it++;
    //str1.insert(4, 10, '*');
    //str1.replace(3, 5, "$#@");
    //str1.swap(str2);
    //swap(str1, str2);
    /*std::cout << str1.find("o", 5) << "\n";
    std::cout << str1.find_first_not_of("Hoeauyi") << "\n";

    std::string s1 = "***** Hello -----";
    std::string s2 = "------";

    std::cout << std::boolalpha << s1.ends_with(s2) << "\n";*/

    /*std::string name;
    std::cout << "input name: ";
    std::getline(std::cin, name);

    std::cout << name << "\n";

    int num{ 1234 };
    name = name + std::to_string(num);*/
 
}
