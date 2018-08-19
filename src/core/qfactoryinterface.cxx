//  header block begin
// /usr/include/qt/QtCore/qfactoryinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfactoryinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFactoryInterface is pure virtual: true
// QFactoryInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFactoryInterface : public QFactoryInterface {
public:
  virtual ~MyQFactoryInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfactoryinterface.h:51
// [-2] void ~QFactoryInterface()
extern "C" Q_DECL_EXPORT
void C_ZN17QFactoryInterfaceD2Ev(void *this_) {
  delete (QFactoryInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfactoryinterface.h:52
// [8] QStringList keys()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QFactoryInterface4keysEv(void *this_) {
  auto rv = ((QFactoryInterface*)this_)->keys();
return new QStringList(rv);
}

//  main block end
