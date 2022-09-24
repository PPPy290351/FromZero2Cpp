#include <systemc>
using namespace std;

SC_MODULE(HelloWorld) {

  SC_CTOR(HelloWorld) {
    // Nothing in constructor
    cout << "This is SystemC module constructor" << endl;
    cout << "HelloWorld is constructed at this point" << endl;
  }

  void say_hello();
};
//Modules =============================================================
void HelloWorld::say_hello() {
  // Print "Hello World" to the console.
  cout << name() << ": Hello World." << endl;
  // ! name() is come from instance name, initialized in sc_main()
}
//Main =============================================================
int sc_main(int argc, char *argv[]) {
  HelloWorld hello("hello");
  // Print the hello world
  hello.say_hello();
  return (0);
}
