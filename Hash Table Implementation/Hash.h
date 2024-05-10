
#include <iostream>
#include<string>
#include<list>
#include <tuple>

// Average of registration numbers = 3644
#define zz 64
#define yy 44
#define q 4
#define c (3644/5000)


using namespace std;

class HashTable {

	//std::list < std::pair< int, std::string > >list;

private:
	list < tuple < string, string , string >> *Hash_list_elements;
	int size;

	//hash function 
	int hash_function(string key) {

		int sum = 0;
		int index = 0;
		for (int i = 0; i < key.length(); i++)
		{
			sum = sum + (int)(key[i]);
		}
		index = (q*sum) % size; //(q* ASCII sum of key) mod(Hash array size)
		return index;
	}

public:
	HashTable() {
		this->size = (15) + ((yy)%(50));
		Hash_list_elements = new list< tuple <string,string,string >> [this->size];
	}
	HashTable(int size) {
		this->size = (15) + ((yy) % (50));
		Hash_list_elements = new list< tuple <string, string, string >>[this->size];
	}
	~HashTable() {
		delete[] Hash_list_elements;
	}

	//insert function
	void insert(string key,string value1,string value2) {

		int Hash_Array_Pos = hash_function(key);
		auto t = make_tuple(key, value1,value2);
		Hash_list_elements[Hash_Array_Pos].push_back(t);
	
	}
	
   // delete function
   void remove(string key) {

	    int flag = 0;
		int Hash_Array_Pos = hash_function(key);
		for (auto it = Hash_list_elements[Hash_Array_Pos].begin(); it != Hash_list_elements[Hash_Array_Pos].end(); ) {
			if (get<0>(*it) == key) {
				it = Hash_list_elements[Hash_Array_Pos].erase(it);
				flag = 1;
			}
			else
				++it;
		}
		if (flag == 0)
			cout << "key does not exist" << endl;

	}

   //search function
	bool search(string key) {

		int flag = 0;
		int Hash_Array_Pos = hash_function(key);
		for (auto it = Hash_list_elements[Hash_Array_Pos].begin(); it != Hash_list_elements[Hash_Array_Pos].end(); ) {
			if (get<0>(*it) == key) {
				cout << "Key is found" << endl; // the item is in the hash table
				return true;
				flag = 1;
			}
			else
				++it;
		}
		if (flag == 0)
			cout << "Key is not found" << endl;// the item is not in the hash table
			return false;
	}

	//print function
	void print() {

		cout << " \t\t\t\t\t\t\t\t\t\t========= The Hash Table can be printed as below ==========" << endl;
		cout << "\n\n";
		int count = 0;
		for (int i = 0; i < size; i++) {
			cout << i << ": ";
			for (auto it = Hash_list_elements[i].begin(); it != Hash_list_elements[i].end(); it++) {

				if (count > 0)
					cout << "  ==>  ";
				cout << "[";
				cout << "key: " << get<0>(*it) << " , ";
				cout << "manufacturer: " << get<1>(*it) << " , ";
				cout << "engine capacity: " << get<2>(*it) << " ";
				cout << "]  ";
				count++;
			}
			cout << endl;
			count = 0;
		}
	}

};

#pragma once
