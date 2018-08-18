//  header block begin
// /usr/include/qt/QtCore/qatomic_cxx11.h
#ifndef protected
#define protected public
#endif
#include <qatomic_cxx11.h>
#include <QtCore>
#include "callback_inherit.h"

// QAtomicOpsSupport is pure virtual: false
// QAtomicOpsSupport has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAtomicOpsSupport : public QAtomicOpsSupport<8> {
public:
  virtual ~MyQAtomicOpsSupport() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN17QAtomicOpsSupportD2Ev(void *this_) {
  delete (QAtomicOpsSupport<8>*)(this_);
}
//  main block end
