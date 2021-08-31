#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
int main()
{

  //This program was made to translate any human speech into a whale language
  //Whales pronunce every u‘s and e‘s twice, but we got it to work!
  
  std::cout << "====================\n\n";
  std::cout <<" Enter text : \n\n";
  std::cout << "====================\n\n";
  std::string input;
  getline(std::cin,input);


  std::vector<char> vowels;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector<char> whale_lang;

  for (int i = 0; i < input.size(); i++)
  {
    for (int j = 0; j < vowels.size(); j++)
    {

      if (input[i] == vowels[j])
      {
        whale_lang.push_back(input[i]);
        if (input[i] == 'e' || input [i] == 'u')
        {
        whale_lang.push_back(input[i]);
        }
      }
    }
  }

  system("cls");
  std::cout << "====================\n\n";
  std::cout << "The program translates now into Whale Language....\n\n";
  std::cout << "====================\n\n";

  for (int i = 0; i < whale_lang.size(); i++)
  {
    std::cout << whale_lang[i];
  }
  std::cout << "\n";

}
