//  header block begin
// /usr/include/qt/QtCore/qbytearraymatcher.h
#include <qbytearraymatcher.h>
#include <QtCore>

// QStaticByteArrayMatcherBase is pure virtual: false
// QStaticByteArrayMatcherBase has virtual projected: true
//  header block end

//  main block begin
// Protected inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:93
// [-2] void QStaticByteArrayMatcherBase(const char *, uint)
extern "C"
void* callback_ZN27QStaticByteArrayMatcherBaseC1EPKcj_fnptr = 0;
extern "C" void set_callback_ZN27QStaticByteArrayMatcherBaseC1EPKcj(void*cbfn)
{ callback_ZN27QStaticByteArrayMatcherBaseC1EPKcj_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:98
// [4] int indexOfIn(const char *, uint, const char *, int, int)
extern "C"
void* callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii_fnptr = 0;
extern "C" void set_callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii(void*cbfn)
{ callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii_fnptr = cbfn; }

class MyQStaticByteArrayMatcherBase : public QStaticByteArrayMatcherBase {
public:
  virtual ~MyQStaticByteArrayMatcherBase() {}
// void QStaticByteArrayMatcherBase(const char *, uint)
MyQStaticByteArrayMatcherBase(const char * pattern, uint n) : QStaticByteArrayMatcherBase(pattern, n) {}
// int indexOfIn(const char *, uint, const char *, int, int)
  virtual int indexOfIn(const char * needle, uint nlen, const char * haystack, int hlen, int from) {
    auto fnptr = ((int (*)(void* , const char *, uint, const char *, int, int))(callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii_fnptr));
    if (fnptr != 0) {
      fnptr(this , needle, nlen, haystack, hlen, from);
    }
    return QStaticByteArrayMatcherBase::indexOfIn(needle, nlen, haystack, hlen, from);
  }
};


extern "C"
void C_ZN27QStaticByteArrayMatcherBaseD2Ev(void *this_) {
  delete (QStaticByteArrayMatcherBase*)(this_);
}
//  main block end
