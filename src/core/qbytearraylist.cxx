// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qbytearraylist.h
// dst-file: /src/core/qbytearraylist.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qbytearraylist.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qbytearraylist_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraylist.h', line 67, column 23>
//   // proto:  QByteArray QListSpecialMethods<QByteArray>::join(char sep);
if (true) {
  auto f = [](QListSpecialMethods<QByteArray> flythis, char arg1) {
    ((QListSpecialMethods<QByteArray>*)0)->join(arg1);
    flythis.join(arg1);
  };
  if (f == nullptr){}
}
// _ZNK19QListSpecialMethodsI10QByteArrayE4joinEc join(char)
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraylist.h', line 63, column 23>
//   // proto:  QByteArray QListSpecialMethods<QByteArray>::join();
if (true) {
  auto f = [](QListSpecialMethods<QByteArray> flythis) {
    ((QListSpecialMethods<QByteArray>*)0)->join();
    flythis.join();
  };
  if (f == nullptr){}
}
// _ZNK19QListSpecialMethodsI10QByteArrayE4joinEv join()
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraylist.h', line 65, column 23>
//   // proto:  QByteArray QListSpecialMethods<QByteArray>::join(const QByteArray & sep);
if (true) {
  auto f = [](QListSpecialMethods<QByteArray> flythis, const QByteArray & arg1) {
    ((QListSpecialMethods<QByteArray>*)0)->join(arg1);
    flythis.join(arg1);
  };
  if (f == nullptr){}
}
// _ZNK19QListSpecialMethodsI10QByteArrayE4joinERKS0_ join(const class QByteArray &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QListSpecialMethods_QByteArray__Class_Size()
{
  return sizeof(QListSpecialMethods<QByteArray>);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraylist.h', line 67, column 23>
//   // proto:  QByteArray QListSpecialMethods<QByteArray>::join(char sep);
// _ZNK19QListSpecialMethodsI10QByteArrayE4joinEc join(char)
extern "C"
QByteArray*
C_ZNK19QListSpecialMethodsI10QByteArrayE4joinEc(void *qthis,
char arg1) {
  auto ret =
  ((QListSpecialMethods<QByteArray>*)qthis)->join(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraylist.h', line 63, column 23>
//   // proto:  QByteArray QListSpecialMethods<QByteArray>::join();
// _ZNK19QListSpecialMethodsI10QByteArrayE4joinEv join()
extern "C"
QByteArray*
C_ZNK19QListSpecialMethodsI10QByteArrayE4joinEv(void *qthis) {
  auto ret =
  ((QListSpecialMethods<QByteArray>*)qthis)->join();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraylist.h', line 65, column 23>
//   // proto:  QByteArray QListSpecialMethods<QByteArray>::join(const QByteArray & sep);
// _ZNK19QListSpecialMethodsI10QByteArrayE4joinERKS0_ join(const class QByteArray &)
extern "C"
QByteArray*
C_ZNK19QListSpecialMethodsI10QByteArrayE4joinERKS0_(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QListSpecialMethods<QByteArray>*)qthis)->join(*((const QByteArray*)arg1));
  return new QByteArray(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

