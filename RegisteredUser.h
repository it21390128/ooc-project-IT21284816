//IT21284816
//M S D S De Silva
class RegisteredUser :public Customer
{
private:
	int cusId;
	char cuspw[15];
public:
	RegisterUser();
	RegisterUser(int rcusID, const char rcusPw[], const char uname,
		const char uemail, const char uNIC, int ucontactNo)
		void login();
	void displayDetails();
	void logout();
	~RegisteredUser()
};

RegisteredUser::RegisterUser()
{
	cusID = 0;
	ctrcpy(cuspw, "");
}

RegisteredUser::RegisterUser(int rcusID, const char cusPw[], const char uname[],
	const char uemail[], const char uNIC[], const char ucontactNo[])
	:Customer(uname, uemail, uNIC, ucontactNo)
{
	cusID = rcusID;
	strcpy(cuspw, rcusPw);
}

void RegisteredUser::login()
{

}

void RegisteredUser::displayDetails()
{

}

void RegisteredUser::logout()
{

}

RegisteredUser::~RegisteredUser()
{
	//Destructor
}