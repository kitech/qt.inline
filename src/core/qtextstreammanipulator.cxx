//  header block begin
// /usr/include/qt/QtCore/qtextstream.h
#include <qtextstream.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qtextstream.h:215
// void QTextStreamManipulator(QTSMFI, int)
extern "C"
void* C_ZN22QTextStreamManipulatorC1EM11QTextStreamFviEi(QTSMFI m, int a) {
  return new QTextStreamManipulator(m, a);
}
// inline
// /usr/include/qt/QtCore/qtextstream.h:216
// void QTextStreamManipulator(QTSMFC, class QChar)
extern "C"
void* C_ZN22QTextStreamManipulatorC1EM11QTextStreamFv5QCharES1_(QTSMFC m, QChar c) {
  return new QTextStreamManipulator(m, c);
}
// inline
// /usr/include/qt/QtCore/qtextstream.h:217
// void exec(class QTextStream &)
extern "C"
void C_ZN22QTextStreamManipulator4execER11QTextStream(void *this_, QTextStream & s) {
  ((QTextStreamManipulator*)this_)->exec(s);
}
//  main block end
