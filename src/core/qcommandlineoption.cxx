// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qcommandlineoption.h
// dst-file: /src/core/qcommandlineoption.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcommandlineoption.h>


#include <qstringlist.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qcommandlineoption_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 70, column 10>
//   // proto:  void QCommandLineOption::swap(QCommandLineOption & other);
if (true) {
  auto f = [](QCommandLineOption flythis, QCommandLineOption & arg1) {
    ((QCommandLineOption*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QCommandLineOption4swapERS_ swap(class QCommandLineOption &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCommandLineOption_Class_Size()
{
  return sizeof(QCommandLineOption);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 75, column 10>
//   // proto:  void QCommandLineOption::setValueName(const QString & name);
// _ZN18QCommandLineOption12setValueNameERK7QString setValueName(const class QString &)
extern "C"
void
C_ZN18QCommandLineOption12setValueNameERK7QString(void *qthis,
const QString* arg1) {
  ((QCommandLineOption*)qthis)->setValueName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 73, column 17>
//   // proto:  QStringList QCommandLineOption::names();
// _ZNK18QCommandLineOption5namesEv names()
extern "C"
QStringList*
C_ZNK18QCommandLineOption5namesEv(void *qthis) {
  auto ret =
  ((QCommandLineOption*)qthis)->names();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 61, column 5>
//   // proto:  void QCommandLineOption::QCommandLineOption(const QCommandLineOption & other);
extern "C"
QCommandLineOption*
C_ZN18QCommandLineOptionC2ERKS_(const QCommandLineOption* arg1) {
  auto ret = new QCommandLineOption(*((const QCommandLineOption*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 78, column 10>
//   // proto:  void QCommandLineOption::setDescription(const QString & description);
// _ZN18QCommandLineOption14setDescriptionERK7QString setDescription(const class QString &)
extern "C"
void
C_ZN18QCommandLineOption14setDescriptionERK7QString(void *qthis,
const QString* arg1) {
  ((QCommandLineOption*)qthis)->setDescription(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 86, column 10>
//   // proto:  bool QCommandLineOption::isHidden();
// _ZNK18QCommandLineOption8isHiddenEv isHidden()
extern "C"
bool
C_ZNK18QCommandLineOption8isHiddenEv(void *qthis) {
  auto ret =
  ((QCommandLineOption*)qthis)->isHidden();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 55, column 18>
//   // proto:  void QCommandLineOption::QCommandLineOption(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue);
extern "C"
QCommandLineOption*
C_ZN18QCommandLineOptionC2ERK7QStringS2_S2_S2_(const QString* arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4) {
  auto ret = new QCommandLineOption(*((const QString*)arg1),
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 76, column 13>
//   // proto:  QString QCommandLineOption::valueName();
// _ZNK18QCommandLineOption9valueNameEv valueName()
extern "C"
QString*
C_ZNK18QCommandLineOption9valueNameEv(void *qthis) {
  auto ret =
  ((QCommandLineOption*)qthis)->valueName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 58, column 18>
//   // proto:  void QCommandLineOption::QCommandLineOption(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue);
extern "C"
QCommandLineOption*
C_ZN18QCommandLineOptionC2ERK11QStringListRK7QStringS5_S5_(const QStringList* arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4) {
  auto ret = new QCommandLineOption(*((const QStringList*)arg1),
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 85, column 10>
//   // proto:  void QCommandLineOption::setHidden(bool hidden);
// _ZN18QCommandLineOption9setHiddenEb setHidden(_Bool)
extern "C"
void
C_ZN18QCommandLineOption9setHiddenEb(void *qthis,
bool arg1) {
  ((QCommandLineOption*)qthis)->setHidden(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 70, column 10>
//   // proto:  void QCommandLineOption::swap(QCommandLineOption & other);
// _ZN18QCommandLineOption4swapERS_ swap(class QCommandLineOption &)
extern "C"
void
C_ZN18QCommandLineOption4swapERS_(void *qthis,
QCommandLineOption* arg1) {
  ((QCommandLineOption*)qthis)->swap(*((QCommandLineOption*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 79, column 13>
//   // proto:  QString QCommandLineOption::description();
// _ZNK18QCommandLineOption11descriptionEv description()
extern "C"
QString*
C_ZNK18QCommandLineOption11descriptionEv(void *qthis) {
  auto ret =
  ((QCommandLineOption*)qthis)->description();
  return new QString(ret); // 5
}
//   // proto:  void QCommandLineOption::~QCommandLineOption();
extern "C"
void C_ZN18QCommandLineOptionD2Ev(void *qthis) {
  delete (QCommandLineOption*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 54, column 14>
//   // proto:  void QCommandLineOption::QCommandLineOption(const QStringList & names);
extern "C"
QCommandLineOption*
C_ZN18QCommandLineOptionC2ERK11QStringList(const QStringList* arg1) {
  auto ret = new QCommandLineOption(*((const QStringList*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 81, column 10>
//   // proto:  void QCommandLineOption::setDefaultValue(const QString & defaultValue);
// _ZN18QCommandLineOption15setDefaultValueERK7QString setDefaultValue(const class QString &)
extern "C"
void
C_ZN18QCommandLineOption15setDefaultValueERK7QString(void *qthis,
const QString* arg1) {
  ((QCommandLineOption*)qthis)->setDefaultValue(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 82, column 10>
//   // proto:  void QCommandLineOption::setDefaultValues(const QStringList & defaultValues);
// _ZN18QCommandLineOption16setDefaultValuesERK11QStringList setDefaultValues(const class QStringList &)
extern "C"
void
C_ZN18QCommandLineOption16setDefaultValuesERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QCommandLineOption*)qthis)->setDefaultValues(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 53, column 14>
//   // proto:  void QCommandLineOption::QCommandLineOption(const QString & name);
extern "C"
QCommandLineOption*
C_ZN18QCommandLineOptionC2ERK7QString(const QString* arg1) {
  auto ret = new QCommandLineOption(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineoption.h', line 83, column 17>
//   // proto:  QStringList QCommandLineOption::defaultValues();
// _ZNK18QCommandLineOption13defaultValuesEv defaultValues()
extern "C"
QStringList*
C_ZNK18QCommandLineOption13defaultValuesEv(void *qthis) {
  auto ret =
  ((QCommandLineOption*)qthis)->defaultValues();
  return new QStringList(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

