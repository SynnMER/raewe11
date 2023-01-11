#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Hospital.h"
#include <set>
// class Hospital
// map _patients
// можно добавлять пациентов
// выводить всех пациентов
// и удалять



//std::map<int, std::string> _patients{ {1,"alex"} };
//
//const std::string& getPatients(int key) {
//	const auto it = _patients.find(key);
//	return it->second;
//}
//
//void setPatient(const std::string& name) {
//	_idCounter++;
//	_patients.insert({ _idCounter,name });
//}




int main() {
	//setlocale(LC_ALL, "");
	//std::vector<int> vec;
	//vec.push_back(5);
	//vec.push_back(3);
	////инициализация с помощью листа инициализации
	////(initializer list)
	//std::vector<std::string> vec2{ "alex","john" };

	//vec2.erase(vec2.begin() + 1);// john deleted 

	//// push_back 0(1) - константная сложность
	//// emplace - добавление в середину O(n) n = size
	//// [1][1][1] [2] [1][1][1]
	//// [2][1][1][1][1][1][1] - худший случай
	//// eraze - O(n)

	//// инвалидация итераторов
	//// элементы: 0 1 2 3 4
	//// "alex" "john"
	//

	////for (std::vector<std::string>::const_iterator it = vec2.begin(); it != vec2.end(); it++) {
	////	std::cout << *it << std::endl;
	////	vec2.erase(it); // инвалидация
	////}


	//std::vector<std::string>::const_iterator it = vec2.begin();//
	//vec2.erase(vec2.begin());// инвалидация it(итератора)

	//// Мап (словарь) - контейнер, содержит 
	//// пары: ключ - значение
	//// ключ обязан быть уникальным 
	//std::map<int, std::string> mymap;
	//std::map<int, std::vector<std::string>> bigMap;
	//bigMap.insert({ 1,{"alex","john"} });
	//std::vector<std::string>someVec{ "Harry","Alice" };
	//bigMap.insert({ 2,someVec });

	//mymap.insert({1, "tom"});
	//mymap.insert(std::make_pair(2, "abc"));

	//for (const auto& [key, value] : mymap) {
	//	std::cout << key << " " << value;
	//}
	Hospital h;
	h.addPatient("Alex");
	h.addPatient("Anna");
	h.printAllPatients();
	std::cout << "==========\n";
	h.removePatient(1);
	h.printAllPatients();

	std::set<int> myset;



	return 0;
}