//  header block begin
// /usr/include/qt/QtCore/qtextstream.h
#include <qtextstream.h>
#include <QtCore>

// QTextStreamManipulator is pure virtual: false
// QTextStreamManipulator has virtual projected: false
//  header block end

//  main block begin

class MyQTextStreamManipulator : public QTextStreamManipulator {
public:
  virtual ~MyQTextStreamManipulator() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:217
// [-2] void exec(class QTextStream &)
extern "C"
void C_ZN22QTextStreamManipulator4execER11QTextStream(void *this_, QTextStream* s) {
  ((QTextStreamManipulator*)this_)->exec(*s);
}

extern "C"
void C_ZN22QTextStreamManipulatorD2Ev(void *this_) {
  delete (QTextStreamManipulator*)(this_);
}
//  main block end
