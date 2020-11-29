#include <iostream>

#include "animal.hpp"

using namespace std;


Animal::Animal(){
  this->classe = "A definir";
}//construtor padrão

Animal::Animal(string nome, string classe, string especie, string sexo, string habitat, string extincao, string veterinario, string tratador):classe(classe), especie(especie), sexo(sexo), habitat(habitat), extincao(extincao), veterinario(veterinario), tratador(tratador){}//construtor parametrizado

Animal::~Animal(){
  cout << "Arquivo fechado" << endl;//destrutor
}
string Animal::getNome(){
  return this->nome;
}
void Animal::setNome(string nome){
  this->nome = nome;
}
string Animal::getClasse(){
  return this->classe;
}
void Animal::setClasse(string classe){
  this->classe = classe;
}
string Animal::getEspecie(){
  return this->especie;
}
void Animal::setEspecie(string especie){
  this->especie = especie;
}
string Animal::getSexo(){
  return this->sexo;
}
void Animal::setSexo(string sexo){
  this->sexo = sexo;
}
string Animal::getHabitat(){
  return this->habitat;
}
void Animal::setHabitat(string habitat){
  this->habitat = habitat;
}
string Animal::getExtincao(){
  return this->extincao;
}
void Animal::setExtincao(string extincao){
  this->extincao = extincao;
}
string Animal::getVeterinario(){
  return this->veterinario;
}
void Animal::setVeterinario(string veterinario){
  this->veterinario = veterinario;
}
string Animal::getTratador(){
  return this->tratador;
}
void Animal::setTratador(string tratador){
  this->tratador = tratador;
}