//  header block begin
// /usr/include/qt/QtCore/qstringliteral.h
#ifndef protected
#define protected public
#endif
#include <qstringliteral.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringDataPtr is pure virtual: false
// QStringDataPtr has virtual projected: false
//  header block end

//  main block begin

class MyQStringDataPtr : public QStringDataPtr {
public:
  virtual ~MyQStringDataPtr() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN14QStringDataPtrD2Ev(void *this_) {
  delete (QStringDataPtr*)(this_);
}
//  main block end
