#include <iostream>
#include <bitset>
#include <string>
#include <stdint.h>

using namespace std;

int main() {
	bitset<8> bit; // init bitset

	int num1 = 50;
	bitset<8> bit2(num1); // init bitset
	cout << "bit2 init : " << bit2 << "\n";

	string str = "11010101";
	bitset<8> bit3(str); // init bitset
	cout << "bit3 init : " << bit3 << "\n";

	bit.reset(); // all bit set 0
	cout << "bit.reset() : " << bit << "\n";

	bit.set(); // all bit set 1
	cout << "bit.set() : " << bit << "\n";

	size_t size = bit.size();
	cout << "bit.size() : " << size << "\n";

	bit.flip(4); // bit flip
	cout << "bit.flip(4) : " << bit << "\n";

	bit.set(0, false); // idx 0 bit -> 0
	cout << "bit.set(0,0) : " << bit << "\n";

	bit.flip(); // all bit flip
	cout << "bit.flip() : " << bit << "\n";

	string str2 = bit.to_string(); // bit to string
	cout << "bit.to_string() : " << str2 << "\n";

	uint64_t num2 = bit.to_ullong(); // bit to unsigned long long
	cout << "bit.to_ullong() : " << num2 << "\n";

	uint32_t num3 = bit.to_ulong(); // bit to unsigned long
	cout << "bit.to_ulong() : " << num3 << "\n";

	cout << "bit.count() : " << bit.count() << "\n"; // count 1 bit

	cout << "count 0 bit : " << bit.size() - bit.count() << "\n"; // count 0 bit

	cout << "bit.test(0) : " << bit.test(1) << "\n"; // idx 1 bit

	/*
	bit.none() : 비트 set이 모두가 0이어야 1을 반환	
	bit.any() : 비트 set중 하나라도 1이면 1을 반환, 모두 0일때만 0을 반환

	*/
}
