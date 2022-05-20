class Customer
{
	protected:
		char name[50];
		char email[50];
		char NIC[12];
		char contactNo[10];
		
		Feedback *feedback[];
		
	public:
		User();
		User(const char uname[], const char uemail[], const char uNIC[],
		const char ucontactNo[]);
		void displayDetails();
		void searchparks();
		void addFeedback(Feedback*0);
		~User();
};

Customer::Customer()
{
	    strcpy(name,"");
	    strcpy(email,"");
	    strcpy(NIC,"");
	    strcpy (contactNo,"0000000000");
}

Customer::Customer(const char uname[], const char uemail[], const char uNIC[], 
const char ucontactNo[])
{
	    strcpy(name, uname);
	    strcpy(email, uemail);
	    strcpy(NIC, uNIC);
	    strcpy (contactNo, ucontactNo);
}    

void Customer::displayDetails()
{
	
}

void Customer::searchparks()
{
	
}

void Customer::addFeedback(Feedback*0)
{
	
}

Customer::~User()
{
	//Destructor
}
