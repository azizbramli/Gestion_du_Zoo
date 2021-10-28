#ifndef GESTION_ANIMAUX_H
#define GESTION_ANIMAUX_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

using namespace std;
class Animaux
{
private:
   QString nom,race,emplacement;
   int age,id_animal,date_entree;

public:
   Animaux();
   Animaux(int,QString,QString,int,int,QString);

   int getid();
   QString getnom();
   QString getrace();
   int getage();
   int getdate();
   QString getemplacement();

   void setid(int);
   void setnom(QString);
   void setrace(QString);
   void setage(int);
   void setdate(int);
   void setemplacement(QString);

   bool ajouter();
   bool modifier();
   bool supprimer(int);
   QSqlQueryModel* afficher();

};

#endif // GESTION_ANIMAUX_H
