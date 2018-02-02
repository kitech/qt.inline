//  header block begin
// /usr/include/qt/QtCore/qregularexpression.h
#include <qregularexpression.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegularExpressionMatchIterator is pure virtual: false
// QRegularExpressionMatchIterator has virtual projected: false
//  header block end

//  main block begin

class MyQRegularExpressionMatchIterator : public QRegularExpressionMatchIterator {
public:
  virtual ~MyQRegularExpressionMatchIterator() {}
// void QRegularExpressionMatchIterator()
MyQRegularExpressionMatchIterator() : QRegularExpressionMatchIterator() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:249
// [-2] void QRegularExpressionMatchIterator()
extern "C"
void* C_ZN31QRegularExpressionMatchIteratorC2Ev() {
  return  new QRegularExpressionMatchIterator();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:250
// [-2] void ~QRegularExpressionMatchIterator()
extern "C"
void C_ZN31QRegularExpressionMatchIteratorD2Ev(void *this_) {
  delete (QRegularExpressionMatchIterator*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:257
// [-2] void swap(class QRegularExpressionMatchIterator &)
extern "C"
void C_ZN31QRegularExpressionMatchIterator4swapERS_(void *this_, QRegularExpressionMatchIterator* other) {
  ((QRegularExpressionMatchIterator*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:259
// [1] bool isValid()
extern "C"
bool C_ZNK31QRegularExpressionMatchIterator7isValidEv(void *this_) {
  return (bool)((QRegularExpressionMatchIterator*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:261
// [1] bool hasNext()
extern "C"
bool C_ZNK31QRegularExpressionMatchIterator7hasNextEv(void *this_) {
  return (bool)((QRegularExpressionMatchIterator*)this_)->hasNext();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:262
// [8] QRegularExpressionMatch next()
extern "C"
void* C_ZN31QRegularExpressionMatchIterator4nextEv(void *this_) {
  auto rv = ((QRegularExpressionMatchIterator*)this_)->next();
return new QRegularExpressionMatch(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:263
// [8] QRegularExpressionMatch peekNext()
extern "C"
void* C_ZNK31QRegularExpressionMatchIterator8peekNextEv(void *this_) {
  auto rv = ((QRegularExpressionMatchIterator*)this_)->peekNext();
return new QRegularExpressionMatch(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:265
// [8] QRegularExpression regularExpression()
extern "C"
void* C_ZNK31QRegularExpressionMatchIterator17regularExpressionEv(void *this_) {
  auto rv = ((QRegularExpressionMatchIterator*)this_)->regularExpression();
return new QRegularExpression(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:266
// [4] QRegularExpression::MatchType matchType()
extern "C"
QRegularExpression::MatchType C_ZNK31QRegularExpressionMatchIterator9matchTypeEv(void *this_) {
  return (QRegularExpression::MatchType)((QRegularExpressionMatchIterator*)this_)->matchType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:267
// [4] QRegularExpression::MatchOptions matchOptions()
extern "C"
QRegularExpression::MatchOptions C_ZNK31QRegularExpressionMatchIterator12matchOptionsEv(void *this_) {
  return (QRegularExpression::MatchOptions)((QRegularExpressionMatchIterator*)this_)->matchOptions();
}
//  main block end
