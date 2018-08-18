//  header block begin
// /usr/include/qt/QtCore/qbytearraymatcher.h
#ifndef protected
#define protected public
#endif
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArrayMatcher is pure virtual: false
// QByteArrayMatcher has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQByteArrayMatcher : public QByteArrayMatcher {
public:
  virtual ~MyQByteArrayMatcher() {}
// void QByteArrayMatcher()
MyQByteArrayMatcher() : QByteArrayMatcher() {}
// void QByteArrayMatcher(const QByteArray &)
MyQByteArrayMatcher(const QByteArray & pattern) : QByteArrayMatcher(pattern) {}
// void QByteArrayMatcher(const char *, int)
MyQByteArrayMatcher(const char * pattern, int length) : QByteArrayMatcher(pattern, length) {}
// void QByteArrayMatcher(const QByteArrayMatcher &)
MyQByteArrayMatcher(const QByteArrayMatcher & other) : QByteArrayMatcher(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:53
// [-2] void QByteArrayMatcher()
extern "C" Q_DECL_EXPORT
void* C_ZN17QByteArrayMatcherC2Ev() {
  return  new QByteArrayMatcher();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:54
// [-2] void QByteArrayMatcher(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QByteArrayMatcherC2ERK10QByteArray(QByteArray* pattern) {
  return  new QByteArrayMatcher(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:55
// [-2] void QByteArrayMatcher(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QByteArrayMatcherC2EPKci(const char * pattern, int length) {
  return  new QByteArrayMatcher(pattern, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:56
// [-2] void QByteArrayMatcher(const QByteArrayMatcher &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QByteArrayMatcherC2ERKS_(QByteArrayMatcher* other) {
  return  new QByteArrayMatcher(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:57
// [-2] void ~QByteArrayMatcher()
extern "C" Q_DECL_EXPORT
void C_ZN17QByteArrayMatcherD2Ev(void *this_) {
  delete (QByteArrayMatcher*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:59
// [1040] QByteArrayMatcher & operator=(const QByteArrayMatcher &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QByteArrayMatcheraSERKS_(void *this_, QByteArrayMatcher* other) {
  auto& rv = ((QByteArrayMatcher*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:61
// [-2] void setPattern(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN17QByteArrayMatcher10setPatternERK10QByteArray(void *this_, QByteArray* pattern) {
  ((QByteArrayMatcher*)this_)->setPattern(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:63
// [4] int indexIn(const QByteArray &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK17QByteArrayMatcher7indexInERK10QByteArrayi(void *this_, QByteArray* ba, int from) {
  return (int)((QByteArrayMatcher*)this_)->indexIn(*ba, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:64
// [4] int indexIn(const char *, int, int)
extern "C" Q_DECL_EXPORT
int C_ZNK17QByteArrayMatcher7indexInEPKcii(void *this_, const char * str, int len_, int from) {
  return (int)((QByteArrayMatcher*)this_)->indexIn(str, len_, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:65
// [8] QByteArray pattern()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QByteArrayMatcher7patternEv(void *this_) {
  auto rv = ((QByteArrayMatcher*)this_)->pattern();
return new QByteArray(rv);
}

//  main block end
