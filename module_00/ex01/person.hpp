#ifned PERSON_HPP
#define PERSON_HPP

class Person
{
public:
	Person();
	~Person();
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_phone_number(std::string phone_number);
	void set_darkest_secret(std::string secret);
	void print_info();
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	//todo set index here

	//flag
	int flag_defined = 0;
};

#endif