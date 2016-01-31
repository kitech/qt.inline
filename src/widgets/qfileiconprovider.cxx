// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qfileiconprovider.h
// dst-file: /src/widgets/qfileiconprovider.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfileiconprovider.h>


#include <qstring.h>
#include <qicon.h>
// <= header block end

// main block begin =>
void __keep_qfileiconprovider_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFileIconProvider_Class_Size()
{
  return sizeof(QFileIconProvider);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qfileiconprovider.h', line 62, column 10>
//   // proto:  void QFileIconProvider::setOptions(Options options);
// _ZN17QFileIconProvider10setOptionsE6QFlagsINS_6OptionEE setOptions(Options)
extern "C"
void
C_ZN17QFileIconProvider10setOptionsE6QFlagsINS_6OptionEE(void *qthis,
QFileIconProvider::Options arg1) {
  ((QFileIconProvider*)qthis)->setOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfileiconprovider.h', line 63, column 13>
//   // proto:  Options QFileIconProvider::options();
// _ZNK17QFileIconProvider7optionsEv options()
extern "C"
QFlags<QFileIconProvider::Option>*
C_ZNK17QFileIconProvider7optionsEv(void *qthis) {
  auto ret =
  ((QFileIconProvider*)qthis)->options();
  return new QFlags<QFileIconProvider::Option>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfileiconprovider.h', line 60, column 21>
//   // proto:  QString QFileIconProvider::type(const QFileInfo & info);
// _ZNK17QFileIconProvider4typeERK9QFileInfo type(const class QFileInfo &)
extern "C"
QString*
C_ZNK17QFileIconProvider4typeERK9QFileInfo(void *qthis,
const QFileInfo* arg1) {
  auto ret =
  ((QFileIconProvider*)qthis)->type(*((const QFileInfo*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfileiconprovider.h', line 59, column 19>
//   // proto:  QIcon QFileIconProvider::icon(const QFileInfo & info);
// _ZNK17QFileIconProvider4iconERK9QFileInfo icon(const class QFileInfo &)
extern "C"
QIcon*
C_ZNK17QFileIconProvider4iconERK9QFileInfo(void *qthis,
const QFileInfo* arg1) {
  auto ret =
  ((QFileIconProvider*)qthis)->icon(*((const QFileInfo*)arg1));
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfileiconprovider.h', line 49, column 5>
//   // proto:  void QFileIconProvider::QFileIconProvider();
extern "C"
QFileIconProvider*
C_ZN17QFileIconProviderC2Ev() {
  auto ret = new QFileIconProvider();
  return ret;
}
//   // proto:  void QFileIconProvider::~QFileIconProvider();
extern "C"
void C_ZN17QFileIconProviderD2Ev(void *qthis) {
  delete (QFileIconProvider*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfileiconprovider.h', line 58, column 19>
//   // proto:  QIcon QFileIconProvider::icon(QFileIconProvider::IconType type);
// _ZNK17QFileIconProvider4iconENS_8IconTypeE icon(enum QFileIconProvider::IconType)
extern "C"
QIcon*
C_ZNK17QFileIconProvider4iconENS_8IconTypeE(void *qthis,
QFileIconProvider::IconType arg1) {
  auto ret =
  ((QFileIconProvider*)qthis)->icon(arg1);
  return new QIcon(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

