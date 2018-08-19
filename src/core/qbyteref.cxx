//  header block begin
// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteRef is pure virtual: false
// QByteRef has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQByteRef : public QByteRef {
public:
  virtual ~MyQByteRef() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:535
// [16] QByteRef & operator=(char)
extern "C" Q_DECL_EXPORT
void* C_ZN8QByteRefaSEc(void *this_, char c) {
  auto& rv = ((QByteRef*)this_)->operator=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:538
// [16] QByteRef & operator=(const QByteRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QByteRefaSERKS_(void *this_, QByteRef* c) {
  auto& rv = ((QByteRef*)this_)->operator=(*c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:541
// [1] bool operator==(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QByteRefeqEc(void *this_, char c) {
  return (bool)((QByteRef*)this_)->operator==(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:543
// [1] bool operator!=(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QByteRefneEc(void *this_, char c) {
  return (bool)((QByteRef*)this_)->operator!=(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:545
// [1] bool operator>(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QByteRefgtEc(void *this_, char c) {
  return (bool)((QByteRef*)this_)->operator>(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:547
// [1] bool operator>=(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QByteRefgeEc(void *this_, char c) {
  return (bool)((QByteRef*)this_)->operator>=(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:549
// [1] bool operator<(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QByteRefltEc(void *this_, char c) {
  return (bool)((QByteRef*)this_)->operator<(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:551
// [1] bool operator<=(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QByteRefleEc(void *this_, char c) {
  return (bool)((QByteRef*)this_)->operator<=(c);
}


extern "C" Q_DECL_EXPORT
void C_ZN8QByteRefD2Ev(void *this_) {
  delete (QByteRef*)(this_);
}
//  main block end
