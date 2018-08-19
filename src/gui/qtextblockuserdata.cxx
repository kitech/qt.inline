//  header block begin
// since 0x040100
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlockUserData is pure virtual: false
// QTextBlockUserData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextBlockUserData : public QTextBlockUserData {
public:
  virtual ~MyQTextBlockUserData() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:198
// [-2] void ~QTextBlockUserData()
extern "C" Q_DECL_EXPORT
void C_ZN18QTextBlockUserDataD2Ev(void *this_) {
  delete (QTextBlockUserData*)(this_);
}
//  main block end
