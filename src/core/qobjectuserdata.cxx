//  header block begin
// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObjectUserData is pure virtual: false
// QObjectUserData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQObjectUserData : public QObjectUserData {
public:
  virtual ~MyQObjectUserData() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:479
// [-2] void ~QObjectUserData()
extern "C" Q_DECL_EXPORT
void C_ZN15QObjectUserDataD2Ev(void *this_) {
  delete (QObjectUserData*)(this_);
}
//  main block end
