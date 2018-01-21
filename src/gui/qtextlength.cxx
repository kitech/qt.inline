//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qtextformat.h:88
// void QTextLength()
extern "C"
void* C_ZN11QTextLengthC1Ev() {
  return new QTextLength();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:90
// void QTextLength(enum QTextLength::Type, qreal)
extern "C"
void* C_ZN11QTextLengthC1ENS_4TypeEd(QTextLength::Type type, qreal value) {
  return new QTextLength(type, value);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:92
// QTextLength::Type type()
extern "C"
void C_ZNK11QTextLength4typeEv(void *this_) {
  /*return*/ ((QTextLength*)this_)->type();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:93
// qreal value(qreal)
extern "C"
void C_ZNK11QTextLength5valueEd(void *this_, qreal maximumLength) {
  /*return*/ ((QTextLength*)this_)->value(maximumLength);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:103
// qreal rawValue()
extern "C"
void C_ZNK11QTextLength8rawValueEv(void *this_) {
  /*return*/ ((QTextLength*)this_)->rawValue();
}
//  main block end
