#include <iostream>
#include <string>

using namespace std;

class cycles
{
	private:
		string owner;
		string id;
		string user;
		string location;
		int latestTimeByWhichCycleIsToBeReturned;
		const int rent_per_hour=10;
		struct time		//dekh le kuch toh
		{
			int year;
			int month;
			int date;
			int hour;
		}
		time time_taken;
		time time_returned;
		//string condition;
	public:
	cycles(string owner,string id,string user, string location){
		owner=owner;
		id=id;
		user=user;
		location=location;
	};
	int rentHours(time time_returned,time time_taken);		//return no. of hours
	//void setOwner(string Owner);
	time storeTimeTaken();
	
}
