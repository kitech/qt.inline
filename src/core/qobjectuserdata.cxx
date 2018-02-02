//  header block begin
// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObjectUserData is pure virtual: false
// QObjectUserData has virtual projected: false
//  header block end

//  main block begin

class MyQObjectUserData : public QObjectUserData {
public:
  virtual ~MyQObjectUserData() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:478
// [-2] void ~QObjectUserData()
extern "C"
void C_ZN15QObjectUserDataD2Ev(void *this_) {
  delete (QObjectUserData*)(this_);
}
//  main block end
