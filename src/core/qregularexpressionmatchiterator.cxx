//  header block begin
// /usr/include/qt/QtCore/qregularexpression.h
#include <qregularexpression.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qregularexpression.h:234
// void QRegularExpressionMatchIterator()
extern "C"
void* C_ZN31QRegularExpressionMatchIteratorC1Ev() {
  return new QRegularExpressionMatchIterator();
}
// /usr/include/qt/QtCore/qregularexpression.h:235
// void ~QRegularExpressionMatchIterator()
extern "C"
void C_ZN31QRegularExpressionMatchIteratorD1Ev(void *this_) {
  delete (QRegularExpressionMatchIterator*)(this_);
}
// inline
// /usr/include/qt/QtCore/qregularexpression.h:242
// void swap(class QRegularExpressionMatchIterator &)
extern "C"
void C_ZN31QRegularExpressionMatchIterator4swapERS_(void *this_, QRegularExpressionMatchIterator & other) {
  ((QRegularExpressionMatchIterator*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qregularexpression.h:244
// bool isValid()
extern "C"
void C_ZNK31QRegularExpressionMatchIterator7isValidEv(void *this_) {
  /*return*/ ((QRegularExpressionMatchIterator*)this_)->isValid();
}
// /usr/include/qt/QtCore/qregularexpression.h:246
// bool hasNext()
extern "C"
void C_ZNK31QRegularExpressionMatchIterator7hasNextEv(void *this_) {
  /*return*/ ((QRegularExpressionMatchIterator*)this_)->hasNext();
}
// /usr/include/qt/QtCore/qregularexpression.h:247
// QRegularExpressionMatch next()
extern "C"
void C_ZN31QRegularExpressionMatchIterator4nextEv(void *this_) {
  /*return*/ ((QRegularExpressionMatchIterator*)this_)->next();
}
// /usr/include/qt/QtCore/qregularexpression.h:248
// QRegularExpressionMatch peekNext()
extern "C"
void C_ZNK31QRegularExpressionMatchIterator8peekNextEv(void *this_) {
  /*return*/ ((QRegularExpressionMatchIterator*)this_)->peekNext();
}
// /usr/include/qt/QtCore/qregularexpression.h:250
// QRegularExpression regularExpression()
extern "C"
void C_ZNK31QRegularExpressionMatchIterator17regularExpressionEv(void *this_) {
  /*return*/ ((QRegularExpressionMatchIterator*)this_)->regularExpression();
}
// /usr/include/qt/QtCore/qregularexpression.h:251
// QRegularExpression::MatchType matchType()
extern "C"
void C_ZNK31QRegularExpressionMatchIterator9matchTypeEv(void *this_) {
  /*return*/ ((QRegularExpressionMatchIterator*)this_)->matchType();
}
// /usr/include/qt/QtCore/qregularexpression.h:252
// QRegularExpression::MatchOptions matchOptions()
extern "C"
void C_ZNK31QRegularExpressionMatchIterator12matchOptionsEv(void *this_) {
  /*return*/ ((QRegularExpressionMatchIterator*)this_)->matchOptions();
}
//  main block end
