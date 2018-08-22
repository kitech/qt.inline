//  header block begin
// /usr/include/qt/QtCore/qbytearraymatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QStaticByteArrayMatcherBase is pure virtual: false
// QStaticByteArrayMatcherBase has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStaticByteArrayMatcherBase : public QStaticByteArrayMatcherBase {
public:
  virtual ~MyQStaticByteArrayMatcherBase() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN27QStaticByteArrayMatcherBaseD2Ev(void *this_) {
  delete (QStaticByteArrayMatcherBase*)(this_);
}
//  main block end
