//  header block begin
// /usr/include/qt/QtCore/qbytearraymatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QStaticByteArrayMatcherBase is pure virtual: false
// QStaticByteArrayMatcherBase has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStaticByteArrayMatcherBase : public QStaticByteArrayMatcherBase {
public:
  virtual ~MyQStaticByteArrayMatcherBase() {}
// void QStaticByteArrayMatcherBase(const char *, uint)
MyQStaticByteArrayMatcherBase(const char * pattern, uint n) : QStaticByteArrayMatcherBase(pattern, n) {}
// Protected Visibility=Default Availability=Available
// [4] int indexOfIn(const char *, uint, const char *, int, int)
  virtual int indexOfIn(const char * needle, uint nlen, const char * haystack, int hlen, int from) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"indexOfIn", &handled, 5, (uint64_t)needle, (uint64_t)nlen, (uint64_t)haystack, (uint64_t)hlen, (uint64_t)from, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QStaticByteArrayMatcherBase::indexOfIn(needle, nlen, haystack, hlen, from);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:98
// [4] int indexOfIn(const char *, uint, const char *, int, int)
extern "C" Q_DECL_EXPORT
int C_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii(void *this_, const char * needle, uint nlen, const char * haystack, int hlen, int from) {
  return (int)((QStaticByteArrayMatcherBase*)this_)->QStaticByteArrayMatcherBase::indexOfIn(needle, nlen, haystack, hlen, from);
}


extern "C" Q_DECL_EXPORT
void C_ZN27QStaticByteArrayMatcherBaseD2Ev(void *this_) {
  delete (QStaticByteArrayMatcherBase*)(this_);
}
//  main block end
