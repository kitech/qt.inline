//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QList is pure virtual: false
// QList has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQList : public QList<QPointingDeviceUniqueId> {
public:
  virtual ~MyQList() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN5QListD2Ev(void *this_) {
  delete (QList<QPointingDeviceUniqueId>*)(this_);
}
//  main block end
