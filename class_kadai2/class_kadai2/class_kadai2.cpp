
#include <iostream>

class Check final{
public:
	// デストラクタの宣言
	~Check();

	//コンストラクタの宣言
	Check();
	//コンストラクタの宣言
	Check(const char* name, int footNum);
	//コピーコンストラクタの宣言
	Check(const Check& src);

	std::string	name_ = {};
	int					footNum_ = 0;

};



//コンストラクタの定義
Check::Check() {
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	footNum_ = 4;
}

//コンストラクタの定義
Check::Check(const char* name, int footNum) {
	std::cout << "引数付きコンストラクタが呼ばれました" << std::endl;
	name_ = name;
	footNum_ = footNum;
}

Check::Check(const Check& src) {
	std::cout << "コピーコンストラクタが呼ばれました" << std::endl;

	name_ = src.name_;
	footNum_ = src.footNum_;
}

// デストラクタの定義
Check::~Check()
{
	std::cout << "デストラクタが呼ばれました" << std::endl;

	name_ = "破棄済み";
	footNum_ = 0;
}
int main()
{
	Check check1;
	Check check2("猛獣", 2);
	Check check3(check1);
}