//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionComplex is pure virtual: false
//  header block end

//  main block begin

class MyQStyleOptionComplex : public QStyleOptionComplex {
public:
MyQStyleOptionComplex(int version, int type) : QStyleOptionComplex(version, type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:509
// [-2] void QStyleOptionComplex(int, int)
extern "C"
void* C_ZN19QStyleOptionComplexC1Eii(int version, int type) {
  (MyQStyleOptionComplex*)(0);
  return  new MyQStyleOptionComplex(version, type);
}
//  main block end
