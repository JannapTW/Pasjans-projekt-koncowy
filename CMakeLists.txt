cmake_minimum_required(VERSION 3.13)
project(Pasjans_projekt_koncowy)

set(CMAKE_CXX_STANDARD 14)

set(SFML_DIR "C:/Users/janna/OneDrive/Dokumenty/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2 REQUIRED system window graphics network audio)

add_executable(Pasjans_projekt_koncowy main.cpp talia.cpp talia.h boardView.cpp boardView.h boardController.cpp boardController.h introView.cpp introView.h introController.cpp introController.h solitaireManager.cpp solitaireManager.h card.cpp card.h solitaireBoard.cpp solitaireBoard.h segregacja.cpp segregacja.h plansza.cpp plansza.h)
target_link_libraries(Pasjans_projekt_koncowy sfml-graphics sfml-window sfml-system sfml-audio sfml-network)