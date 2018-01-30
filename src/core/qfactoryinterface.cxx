//  header block begin
// /usr/include/qt/QtCore/qfactoryinterface.h
#include <qfactoryinterface.h>
#include <QtCore>

// QFactoryInterface is pure virtual: true
// QFactoryInterface has virtual projected: false
//  header block end

//  main block begin

class MyQFactoryInterface : public QFactoryInterface {
public:
  virtual ~MyQFactoryInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfactoryinterface.h:51
// [-2] void ~QFactoryInterface()
extern "C"
void C_ZN17QFactoryInterfaceD2Ev(void *this_) {
  delete (QFactoryInterface*)(this_);
}
//  main block end
