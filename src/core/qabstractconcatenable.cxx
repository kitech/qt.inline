//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractConcatenable is pure virtual: true
// QAbstractConcatenable has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractConcatenable : public QAbstractConcatenable {
public:
  virtual ~MyQAbstractConcatenable() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractConcatenableD2Ev(void *this_) {
  delete (QAbstractConcatenable*)(this_);
}
//  main block end
