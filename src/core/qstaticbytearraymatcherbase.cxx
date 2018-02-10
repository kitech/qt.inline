//  header block begin
// /usr/include/qt/QtCore/qbytearraymatcher.h
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QStaticByteArrayMatcherBase is pure virtual: false
// QStaticByteArrayMatcherBase has virtual projected: true
//  header block end

//  main block begin

class MyQStaticByteArrayMatcherBase : public QStaticByteArrayMatcherBase {
public:
  virtual ~MyQStaticByteArrayMatcherBase() {}
// void QStaticByteArrayMatcherBase(const char *, uint)
MyQStaticByteArrayMatcherBase(const char * pattern, uint n) : QStaticByteArrayMatcherBase(pattern, n) {}
// int indexOfIn(const char *, uint, const char *, int, int)
  virtual int indexOfIn(const char * needle, uint nlen, const char * haystack, int hlen, int from) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"indexOfIn", &handled, 5, (uint64_t)needle, (uint64_t)nlen, (uint64_t)haystack, (uint64_t)hlen, (uint64_t)from, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QStaticByteArrayMatcherBase::indexOfIn(needle, nlen, haystack, hlen, from);
  }
  }

};


extern "C"
void C_ZN27QStaticByteArrayMatcherBaseD2Ev(void *this_) {
  delete (QStaticByteArrayMatcherBase*)(this_);
}
//  main block end
