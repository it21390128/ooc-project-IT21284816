//Kumarasinghe P.K.M.S
//IT21390128
class GuestUser:public Customer
{
	private:
		int regNo;
	public:
		GuestUser();
		GuestUser(int gregNo, const char uname[], const char uemail[], 
		          const char uNIC[], const char ucontactNo[]);
		void guestregister();
		void displayDetails();
		~GuestUser();
};

GuestUser::GuestUser()
{
	RegNo = 0;
}
	
GuestUser::GuestUser(int gregNo, const char uname[], const char uemail[], 
		            const char uNIC[], const char ucontactNo[])
				    :Customer(uname, uemail, uNIC, ucontactNo)
{
	regNo = gregNo;
}

void GuestUser::guestregister()
{
	
}
void GuestUser::displayDetails()
{
	
}
GuestUser::~GuestUser()
{
	//Destructor
}
