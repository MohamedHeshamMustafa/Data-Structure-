#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
#include <string>
#include "classes.h"

using namespace std;

class node
{
private:
    int data;
    node* next;

public:
    node()
    {
        data = 0;
        next = nullptr;
    }

    node (int d)
    {
        data = d;
        next = nullptr;
    }

    void set_data (int d)
    {
        data = d;
    }
    int get_data  ()
    {
        return data;
    }

    void set_next (node*n)
    {
        next = n;
    }
    node* get_next ()
    {
        return next;
    }

    friend class linked_list;
};

class linked_list
{

private :
    node* head;
public :
    linked_list ()
    {
        head = nullptr;
    }

    void add_at_index (int item , int index);
    bool Is_empty ();
    int Size ();
    void Reverse ();
    int Agv_value ();
    void print_all ();
    int Return_at_index (int index);

};

class polynomial
{

private :

    linked_list List;

public :

    void addPolynomial (int* Array_values, int Size_array);
    string MultiplyPolynomial (polynomial* Poly);
    void print_polynomial();
    int subtitute_polynomial(int x);
	polynomial differentiate();

};



#endif // CLASSES_H_INCLUDED
