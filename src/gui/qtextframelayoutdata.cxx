//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFrameLayoutData is pure virtual: false
// QTextFrameLayoutData has virtual projected: false
//  header block end

//  main block begin

class MyQTextFrameLayoutData : public QTextFrameLayoutData {
public:
  virtual ~MyQTextFrameLayoutData() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:114
// [-2] void ~QTextFrameLayoutData()
extern "C"
void C_ZN20QTextFrameLayoutDataD2Ev(void *this_) {
  delete (QTextFrameLayoutData*)(this_);
}
//  main block end
