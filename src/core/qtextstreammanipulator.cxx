//  header block begin
// /usr/include/qt/QtCore/qtextstream.h
#ifndef protected
#define protected public
#endif
#include <qtextstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextStreamManipulator is pure virtual: false
// QTextStreamManipulator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextStreamManipulator : public QTextStreamManipulator {
public:
  virtual ~MyQTextStreamManipulator() {}
// void QTextStreamManipulator(QTSMFI, int)
MyQTextStreamManipulator(QTSMFI m, int a) : QTextStreamManipulator(m, a) {}
// void QTextStreamManipulator(QTSMFC, QChar)
MyQTextStreamManipulator(QTSMFC m, QChar c) : QTextStreamManipulator(m, c) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:215
// [-2] void QTextStreamManipulator(QTSMFI, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QTextStreamManipulatorC2EM11QTextStreamFviEi(QTSMFI m, int a) {
  return  new QTextStreamManipulator(m, a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:216
// [-2] void QTextStreamManipulator(QTSMFC, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN22QTextStreamManipulatorC2EM11QTextStreamFv5QCharES1_(QTSMFC m, QChar* c) {
  return  new QTextStreamManipulator(m, *c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:217
// [-2] void exec(QTextStream &)
extern "C" Q_DECL_EXPORT
void C_ZN22QTextStreamManipulator4execER11QTextStream(void *this_, QTextStream* s) {
  ((QTextStreamManipulator*)this_)->exec(*s);
}


extern "C" Q_DECL_EXPORT
void C_ZN22QTextStreamManipulatorD2Ev(void *this_) {
  delete (QTextStreamManipulator*)(this_);
}
//  main block end
