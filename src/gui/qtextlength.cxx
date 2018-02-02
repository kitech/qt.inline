//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

// QTextLength is pure virtual: false
// QTextLength has virtual projected: false
//  header block end

//  main block begin

class MyQTextLength : public QTextLength {
public:
  virtual ~MyQTextLength() {}
// void QTextLength()
MyQTextLength() : QTextLength() {}
// void QTextLength(enum QTextLength::Type, qreal)
MyQTextLength(QTextLength::Type type, qreal value) : QTextLength(type, value) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:89
// [-2] void QTextLength()
extern "C"
void* C_ZN11QTextLengthC2Ev() {
  return  new QTextLength();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:91
// [-2] void QTextLength(enum QTextLength::Type, qreal)
extern "C"
void* C_ZN11QTextLengthC2ENS_4TypeEd(QTextLength::Type type, qreal value) {
  return  new QTextLength(type, value);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:93
// [4] QTextLength::Type type()
extern "C"
QTextLength::Type C_ZNK11QTextLength4typeEv(void *this_) {
  return (QTextLength::Type)((QTextLength*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:94
// [8] qreal value(qreal)
extern "C"
qreal C_ZNK11QTextLength5valueEd(void *this_, qreal maximumLength) {
  return (qreal)((QTextLength*)this_)->value(maximumLength);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:104
// [8] qreal rawValue()
extern "C"
qreal C_ZNK11QTextLength8rawValueEv(void *this_) {
  return (qreal)((QTextLength*)this_)->rawValue();
}

extern "C"
void C_ZN11QTextLengthD2Ev(void *this_) {
  delete (QTextLength*)(this_);
}
//  main block end
