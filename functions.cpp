#include <iostream>
#include <string>
#include <cmath>
#include "classes.h"

using namespace std;

void linked_list:: add_at_index (int item , int index)
{
    if (index == 0)
    {
        node* nw = new node (item);
        nw -> next = head;
        head = nw;
        return;
    }

    node* current = head;
    node* prev = nullptr;
    int current_index = 0;
    while (current_index != index)
    {
        prev = current;
        current = current -> next;
        current_index ++;

    }

    node* nw = new node (item);
    nw -> next = prev -> next;
    prev -> next = nw;

}


bool linked_list:: Is_empty ()
{
    if (head == nullptr)
        return true;
    else return false;
}

int linked_list::Size ()
{
    node* current = head;
    int index = 0;
    while (current != nullptr)
    {
        current = current -> next;
        index ++;
    }
    return index;
}

void linked_list:: Reverse ()
{
    node* prev = nullptr;
    node* current = head;
    node* upgrade = current->next;

    while (current != nullptr)
    {
        current -> next = prev;
        prev = current;
        current = upgrade;
        upgrade = upgrade -> next;

    }
}

int linked_list:: Agv_value ()
{
    int sum = 0;
    node* current = head;
    while (current != nullptr)
    {
        sum += current -> data;
        current = current -> next ;
    }
    int sizee = 0;
    int avg;
    sizee = Size();
    avg = sum / sizee ;
    return avg;
}

void linked_list:: print_all ()
{
    node * tmp = head;
    while (tmp != nullptr)
    {
        std :: cout << tmp -> data << std ::endl;
        tmp = tmp -> next;
    }
}

int linked_list :: Return_at_index (int index)
{
    node* tmp = head;
    int Count = 0;
    while (Count!= index)
    {
        tmp = tmp -> next;
        Count ++;
    }

    return tmp -> data;

}

void polynomial:: addPolynomial (int* Array_values, int Size_array)
{


    for (int i =0; i<Size_array; i++)
    {
        List.add_at_index(Array_values[i],i);

    }
}

string polynomial :: MultiplyPolynomial (polynomial* Poly)
{
	int size1 = List.Size();
	int size2 = Poly->List.Size();
	int size = size1 + size2 - 1;
	int* array = new int[size]();

	for(int i = 0; i < size1; i++)
	{
		for(int j = 0; j < size2; j++)
		{
			array[i+j] = array[i+j] + List.Return_at_index(i) * Poly->List.Return_at_index(j);
		}
	}

	string result = to_string(array[0]) + "x^" + to_string(size-1);
	for(int i = 1; i < size; i++)
	{
		result = result + " + " + to_string(array[i]) + "x^" + to_string(size-1-i);
	}


	return result;

}

void polynomial:: print_polynomial ()
{
    List.print_all();


}

int polynomial :: subtitute_polynomial(int x)
{
    int sum = 0;
    int size = List.Size();
    for (int i = 0; i<size; i++)
    {
        sum += List.Return_at_index(size - 1 - i) * pow(x, i);
    }


    return sum;

}

polynomial polynomial :: differentiate()
{
	int size = List.Size() - 1;
	int *array = new int[size];
	for(int i = 0; i < size; i++)
	{
		array[i] = List.Return_at_index(i) * (size-i);
	}

	polynomial poly;
	poly.addPolynomial(array, size);

	return poly;
}
