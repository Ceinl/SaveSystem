#include <fstream>
#include <string>
using namespace std;
class _saveSystem {
  string filename, inputVar;
  void writeToFile() {
    ofstream $file;
    $file.open(filename, ios::out | ios::app);
    $file << inputVar << endl;
    $file.close();
  }
  void clearfile() {
    ofstream $file;
    $file.open(filename);
    $file << endl;
    $file.close();
  }
  //*************************************************
  // READ FROM FILE
  template <typename t> t readword(int line) {
    t a;
    ifstream $file;
    $file.open(filename);
    for (int i = 0; i < line; i++) {
      $file >> a;
    }
    $file.close();
    return a;
  };
  template <typename t> t readline(int line) {
    t a;
    ifstream $file;
    $file.open(filename);
    for (int i = 0; i < line; i++) {
      getline($file, a);
    }
    $file.close();
    return a;
  }
  //*************************************************
  // SEARCH IN FILE
  template <typename t> t searching_by_word(string s) {
    t return_value;
    int a = 1;
    while (true) {
      return_value = readword<typeof(return_value)>(a);
      if (return_value == s) {
        return_value = readline<typeof(return_value)>(a);
        return return_value;
      } else {
        a++;
      }
    }
  }

public:
  _saveSystem(string s) { filename = s; }
  //*************************************************
  // WRITE TO FILE
  void int_to_flie(int a) {
    inputVar = to_string(a);
    writeToFile();
  };
  void float_to_file(float a) {
    inputVar = to_string(a);
    writeToFile();
  };
  void bool_to_file(bool a) {
    inputVar = to_string(a);
    writeToFile();
  };
  void char_to_file(char a) {
    inputVar = a;
    writeToFile();
  };
  void string_to_file(string a) {
    inputVar = a;
    writeToFile();
  };
  //*************************************************
  template <typename t> t readfromfile(int mode, int line) {
    t ret;
    switch (mode) {
    case 1:
      ret = readline<typeof(t)>(line);
      break;
    case 2:
      ret = readword<typeof(t)>(line);
      break;
    default:
      printf("Wrong\n");
    }
    return ret;
  }
  void cld() { clearfile(); };
  template <typename t> t find_in_file(string s) {
    return searching_by_word<typeof(t)>(s);
  }
};
