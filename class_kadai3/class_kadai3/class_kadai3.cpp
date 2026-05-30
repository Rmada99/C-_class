#include <string>
#include <iostream>

static int counter = 0;

class Animal final
{
	//動物クラス

public:

	// デストラクタの宣言
	~Animal();

	//コンストラクタの宣言
	Animal();

	std::string	name_ = {};
	int					footNum_ = 0;

};
//コンストラクタの定義
Animal::Animal() {
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	footNum_ = 4;
	counter++;
}
// デストラクタの定義
Animal::~Animal()
{
	std::cout << "デストラクタが呼ばれました" << std::endl;

	name_ = "破棄済み";
	footNum_ = 0;
	counter--;
}
int main()
{
    
}
