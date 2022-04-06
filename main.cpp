#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class homme{
	private:
		string nom;
		string prenom;
		int age;
		string cin;
		string tel;
	public:
		homme(){
			nom=" ";
			prenom=" ";
			age=0;
			cin=" ";
			tel," ";
		}
		homme(string nom ,string prenom  ,int age,string cin ,string tel ){
			 this->nom=nom;
			 this->prenom=prenom;
			 this->age=age;
			 this->cin=cin;
			 this->tel=tel;
		}
		homme(homme *h){
			 this->nom=h->nom;
			 this->prenom=h->prenom;
			 this->age=h->age;
			 this->cin=h->cin;
			 this->tel=h->tel;
		}
		string getNom(){
			return nom;
		}
		void setNom(string nom ){
			 this->nom=nom;
		}
		string getPrenom(){
			return prenom;
		}
		void setPrenom(string prenom ){
			 this->prenom=prenom;
		}
		int getAge(){
			return age;
		}
		void setAge(int age){
			this->age=age;
		}
		string getCin(){
			return cin;
		}
		void setCin(string cin ){
			 this->cin=cin;
		}
		string getTel(){
			return tel;
		}
		void setTel(string tel ){
			 this->tel=tel;
		}
};
class node{
	public:
		homme *data;
		node *next;
		node *prev;
		node(){
			data=NULL;
			next=NULL;
			prev=NULL;
		}
		node(homme *data){
			this->data=data;
		}
		node(node *n){
			this->data=n->data;
			this->next=n->next;
			this->prev=n->prev;
		}
		void push(string nom,string prenom,int age,string cin ,string tel ){
			homme *h=new homme(nom ,prenom,age,cin,tel);
			data=h;
			next=NULL;
			prev=NULL;
		}
};
class LinkedList{
	public:
		node *head;
		int size;
		LinkedList(){
			head=NULL;
			size=0;
		}
		void enqueue(node *heaD){
			node *n=new node(heaD);
			if(size==0){
				head=n;
			}
			else{
				n->next=head;
				head=n;
			}
			size++;
		}
		node *getTop(){
			node *temp=head;
			int i=0;
			while(1){
				temp=temp->next;
				i++;
				if(i==size)
					temp->data=NULL;
			return head;
			}
		}
		void dequeue(){
			if(head==NULL){
				return;
			}
			node *temp=head;
			while(temp){
				if(temp=getTop()){
					temp=NULL;
					cout <<"iefyg";
					return;
				}
				temp=temp->next;
			}
		}
		void display(){
			node *temp=head;
			while(temp != NULL){
				cout << "\n";
				cout << "Nom :" << temp->data->getNom() << "\n";
				cout << "Prenom : " << temp->data->getPrenom() << "\n";
				cout << "Age : " << temp->data->getAge() << "\n";
				cout << "Tel : " << temp->data->getTel() << "\n";
				cout << "Cin : " << temp->data->getCin() << "\n";
				temp=temp->next;
			}
		}
};
int main(){
	homme *h=new homme();
	node *n=new node(h);
		n->push("Achraf","efije",21,"R130419706","0684134782");
		
	homme *h2=new homme();
	node *n2=new node(h2);
		n2->push("Ahmed","Ennaji",25,"G741256","07458219");
		
	LinkedList *l=new LinkedList();
		l->enqueue(n);
		l->enqueue(n2);
		l->enqueue(n2);
		l->display();
		l->dequeue();
		l->display();
	return 0;
}
