//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qregularexpression.h
#ifndef protected
#define protected public
#endif
#include <qregularexpression.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegularExpressionMatchIterator is pure virtual: false
// QRegularExpressionMatchIterator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRegularExpressionMatchIterator : public QRegularExpressionMatchIterator {
public:
  virtual ~MyQRegularExpressionMatchIterator() {}
// void QRegularExpressionMatchIterator()
MyQRegularExpressionMatchIterator() : QRegularExpressionMatchIterator() {}
// void QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator &)
MyQRegularExpressionMatchIterator(const QRegularExpressionMatchIterator & iterator) : QRegularExpressionMatchIterator(iterator) {}
};

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qregularexpression.h:249
// [-2] void QRegularExpressionMatchIterator()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZN31QRegularExpressionMatchIteratorC2Ev() {
  return  new QRegularExpressionMatchIterator();
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:250
// [-2] void ~QRegularExpressionMatchIterator()
extern "C" Q_DECL_EXPORT
void C_ZN31QRegularExpressionMatchIteratorD2Ev(void *this_) {
  delete (QRegularExpressionMatchIterator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:251
// [-2] void QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator &)
extern "C" Q_DECL_EXPORT
void* C_ZN31QRegularExpressionMatchIteratorC2ERKS_(QRegularExpressionMatchIterator* iterator) {
  return  new QRegularExpressionMatchIterator(*iterator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:252
// [8] QRegularExpressionMatchIterator & operator=(const QRegularExpressionMatchIterator &)
extern "C" Q_DECL_EXPORT
void* C_ZN31QRegularExpressionMatchIteratoraSERKS_(void *this_, QRegularExpressionMatchIterator* iterator) {
  auto& rv = ((QRegularExpressionMatchIterator*)this_)->operator=(*iterator);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:254
// [8] QRegularExpressionMatchIterator & operator=(QRegularExpressionMatchIterator &&)
extern "C" Q_DECL_EXPORT
void* C_ZN31QRegularExpressionMatchIteratoraSEOS_(void *this_, QRegularExpressionMatchIterator && iterator) {
  auto& rv = ((QRegularExpressionMatchIterator*)this_)->operator=(iterator);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:257
// [-2] void swap(QRegularExpressionMatchIterator &)
extern "C" Q_DECL_EXPORT
void C_ZN31QRegularExpressionMatchIterator4swapERS_(void *this_, QRegularExpressionMatchIterator* other) {
  ((QRegularExpressionMatchIterator*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:259
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK31QRegularExpressionMatchIterator7isValidEv(void *this_) {
  return (bool)((QRegularExpressionMatchIterator*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:261
// [1] bool hasNext()
extern "C" Q_DECL_EXPORT
bool C_ZNK31QRegularExpressionMatchIterator7hasNextEv(void *this_) {
  return (bool)((QRegularExpressionMatchIterator*)this_)->hasNext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:262
// [8] QRegularExpressionMatch next()
extern "C" Q_DECL_EXPORT
void* C_ZN31QRegularExpressionMatchIterator4nextEv(void *this_) {
  auto rv = ((QRegularExpressionMatchIterator*)this_)->next();
return new QRegularExpressionMatch(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:263
// [8] QRegularExpressionMatch peekNext()
extern "C" Q_DECL_EXPORT
void* C_ZNK31QRegularExpressionMatchIterator8peekNextEv(void *this_) {
  auto rv = ((QRegularExpressionMatchIterator*)this_)->peekNext();
return new QRegularExpressionMatch(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:265
// [8] QRegularExpression regularExpression()
extern "C" Q_DECL_EXPORT
void* C_ZNK31QRegularExpressionMatchIterator17regularExpressionEv(void *this_) {
  auto rv = ((QRegularExpressionMatchIterator*)this_)->regularExpression();
return new QRegularExpression(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:266
// [4] QRegularExpression::MatchType matchType()
extern "C" Q_DECL_EXPORT
QRegularExpression::MatchType C_ZNK31QRegularExpressionMatchIterator9matchTypeEv(void *this_) {
  return (QRegularExpression::MatchType)((QRegularExpressionMatchIterator*)this_)->matchType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:267
// [4] QRegularExpression::MatchOptions matchOptions()
extern "C" Q_DECL_EXPORT
QRegularExpression::MatchOptions C_ZNK31QRegularExpressionMatchIterator12matchOptionsEv(void *this_) {
  return (QRegularExpression::MatchOptions)((QRegularExpressionMatchIterator*)this_)->matchOptions();
}

//  main block end
