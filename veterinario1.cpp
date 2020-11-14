#include <iostream>
#include "veterinario1.hpp"

using namespace std;

Veterinario::Veterinario(){
  this->nome = "A definir";
}

Veterinario::Veterinario(string nome, string crmv, string data):nome(nome),crmv(crmv),data(data){}

Veterinario::~Veterinario(){
  cout << "Arquivo fechado" << endl;
}

string Veterinario::getNome(){
  return this->nome;
}
void Veterinario::setNome(string nome){
  this->nome = nome;
}
string Veterinario::getCrmv(){
  return this->crmv;
}
void Veterinario::setCrmv(string crmv){
  this->crmv = crmv;
}
string Veterinario::getData(){
  return this->data;
}
void Veterinario::setData(string data){
  this->data = data;
}
