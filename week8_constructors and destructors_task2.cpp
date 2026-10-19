# include <iostream>
using namespace std;
class RoomBooking{
	private:
		string guest_name;
		int room_number;
		int days_booked;
		
		public:
			RoomBooking(string g, int r, int d){
			  guest_name=g;
			  room_number=r;
			  days_booked=d;
			  
			  cout<<"Room booking confirmed:"<<endl;}
			  
			  void displaybooking(){
				  cout<<"enter the guest_name:"<<endl;
				  cin>>guest_name;
				  cout<<"enter the room number:"<<endl;
				  cin>>room_number;
				  cout<<"enter the days booked:"<<endl;
				  cin>>days_booked;
			  }
			  ~RoomBooking(){
				  cout<<"booking endend,room released:"<<endl;
			  }
			  
};
int main(){
	RoomBooking R1("Tabitha", 101, 3);
	R1.displaybooking();
	return 0;
}