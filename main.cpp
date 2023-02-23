#include <iostream>
using namespace std;

class NFSCar{

int engine;
int doors;
int capacity;
int topSpeed;

public:
  //GETTERS
  virtual int GetEngine(){
    return engine;
  }
  virtual int GetDoors(){
    return doors;
  }
  virtual int GetCapacity(){
    return capacity;
  }
  virtual int GetTopSpeed(){
    return topSpeed;
  }

  //SETTERS
  virtual void SetEngine(int e){
    engine = e;
  }
  virtual void SetDoors(int d){
    doors = d;
  }
  virtual void SetCapacity(int c){
    capacity = c;
  }
  virtual void SetTopSpeed(int t){
    topSpeed = t;
  }

  virtual string VehicleType() = 0;

  virtual void StartVehicle(){
      cout << "\nStarting my " << VehicleType() << endl;
    }
  virtual void Accelerate(){
      cout << "Acceleration of my " << VehicleType() << " is beyond rookies!" << endl;
    }
  virtual void CarCrashed(){
      cout << "\nIt can't be happening that my " << VehicleType() << " has crashed!" << endl;
    }
  virtual void StopVehicle(){
      cout << "Stopping my " << VehicleType() << endl;}

};

class Lamborghini : public NFSCar{
public:
  string VehicleType(){
    return "Lamborghini";
  }
Lamborghini(){
  SetEngine(4000);
  SetDoors(2);
  SetCapacity(2);
  SetTopSpeed(370);

  StartVehicle();

  cout << "Lamborghini's engine capacity is: " << GetEngine() <<endl;
  cout << "No. of doors are: " << GetDoors() << endl;;
  cout << "Passenger Capacity: " << GetCapacity() << endl;
  cout << "Top Speed: " << GetTopSpeed() << endl;

  Accelerate();
  StopVehicle();
}

~Lamborghini(){
  CarCrashed();
}
};

class Mercedes : public NFSCar{
public:
    string VehicleType(){
    return "Mercedes";
  }
Mercedes(){
  SetEngine(2000);
  SetDoors(5);
  SetCapacity(4);
  SetTopSpeed(250);

  StartVehicle();

  cout << "Mercedes's engine capacity is: " << GetEngine() <<endl;
  cout << "No. of doors are: " << GetDoors() << endl;;
  cout << "Passenger Capacity: " << GetCapacity() << endl;
  cout << "Top Speed: " << GetTopSpeed() << endl;
  
  Accelerate();
  StopVehicle();
}
~Mercedes(){
  CarCrashed();
}
};

class BMW : public NFSCar{
public:
    string VehicleType(){
    return "BMW";
  }
BMW(){
  SetEngine(4000);
  SetDoors(3);
  SetCapacity(2);
  SetTopSpeed(350);

  StartVehicle();

  cout << "BMW's engine capacity is: " << GetEngine() <<endl;
  cout << "No. of doors are: " << GetDoors() << endl;;
  cout << "Passenger Capacity: " << GetCapacity() << endl;
  cout << "Top Speed: " << GetTopSpeed() << endl;

  Accelerate();
  StopVehicle();
}
~BMW(){
  CarCrashed();
}
};


int main() {
  Lamborghini* lamborghini = new Lamborghini;
  Mercedes* mercedes = new Mercedes;
  BMW* bmw = new BMW;

  NFSCar* nfscar;

  nfscar = lamborghini;
  delete lamborghini;
  
  nfscar = mercedes;
  delete mercedes;
  
  nfscar = bmw;
  delete bmw;
  
  return 0;
}