//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionComplex is pure virtual: false
// QStyleOptionComplex has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOptionComplex : public QStyleOptionComplex {
public:
  virtual ~MyQStyleOptionComplex() {}
// void QStyleOptionComplex(int, int)
MyQStyleOptionComplex(int version, int type) : QStyleOptionComplex(version, type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:509
// [-2] void QStyleOptionComplex(int, int)
extern "C"
void* C_ZN19QStyleOptionComplexC2Eii(int version, int type) {
  return  new QStyleOptionComplex(version, type);
}
//  main block end
