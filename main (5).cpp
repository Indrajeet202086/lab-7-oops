 #include<iostream>
 using namespace std;
 class TIME 
 {
     private:
     int hours;
     int minutes;
     friend TIME add(TIME , TIME);
 public:
   
     void getdata(int a, int b)
     {
        hours = a;
        minutes = b;
     }
 void putdata(void)
 {
     cout<<"value of hours "<<hours<<endl;
     cout<<"value of minutes "<<minutes<<endl; 
     
 }
 
 };
  
 TIME add(TIME t1, TIME t2)
 {
     TIME temp;
     temp.hours = t1.hours + t2.hours;
     temp.minutes = t1.minutes + t2.minutes;
 if(temp.minutes>=60)
 {
     temp.hours+= temp.minutes/60;
     temp.minutes = temp.minutes%60;
 }
     return temp;
 }
 int main()
 {
     TIME t1,t2,t3;
     
     t1.getdata(1,30);
     t2.getdata(4,30);
     t1.putdata();
     t2.putdata();
      
      t3=add(t1,t2);
      t3.putdata();
      return 0;
}