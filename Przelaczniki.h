#pragma once
#include<iostream>
using namespace std;

/**
 * @brief Funkcja odczytująca przełączniki.
 * @param argc
 * @param argv
 * @param plikWejsciowy
 * @param plikWyjsciowy
 * @return
*/
bool odczytajPrzelaczniki(int argc, char** argv, string& plikWejsciowy, string& plikWyjsciowy);


//brief Funkcja wyświetlająca pomoc w obsłudze przełączników.

void help();
