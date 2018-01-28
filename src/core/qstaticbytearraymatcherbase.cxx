//  header block begin
// /usr/include/qt/QtCore/qbytearraymatcher.h
#include <qbytearraymatcher.h>
#include <QtCore>

// QStaticByteArrayMatcherBase is pure virtual: false
//  header block end

//  main block begin
// Protected inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:93
// [-2] void QStaticByteArrayMatcherBase(const char *, uint)
extern "C"
void* callback_ZN27QStaticByteArrayMatcherBaseC1EPKcj = 0;
extern "C" void set_callback_ZN27QStaticByteArrayMatcherBaseC1EPKcj(void*cbfn)
{ callback_ZN27QStaticByteArrayMatcherBaseC1EPKcj = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:98
// [4] int indexOfIn(const char *, uint, const char *, int, int)
extern "C"
void* callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii = 0;
extern "C" void set_callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii(void*cbfn)
{ callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii = cbfn; }

class MyQStaticByteArrayMatcherBase : public QStaticByteArrayMatcherBase {
public:
MyQStaticByteArrayMatcherBase(const char * pattern, uint n) : QStaticByteArrayMatcherBase(pattern, n) {}
// int indexOfIn(const char *, uint, const char *, int, int)
// int indexOfIn(const char *, uint, const char *, int, int)
virtual int indexOfIn(const char * needle, uint nlen, const char * haystack, int hlen, int from) {
  if (callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii != 0) {
  // callback_ZNK27QStaticByteArrayMatcherBase9indexOfInEPKcjS1_ii(needle, nlen, haystack, hlen, from);
}}
};

//  main block end
