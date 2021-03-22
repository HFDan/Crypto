#include <iostream>
#include <cryptopp.8.5.0/aes.h>

enum class EEncType {

	AES256

};

EEncType EncType = EEncType::AES256;

int main(int argc, char* argv[]) {

	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], "-aes256") == 0) {
			EncType = EEncType::AES256;
		}
		else {
			exit(1);
		}
	}

	exit(0);

}