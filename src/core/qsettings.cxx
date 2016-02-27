// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qsettings.h
// dst-file: /src/core/qsettings.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsettings.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qsettings_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSettings_Class_Size()
{
  return sizeof(QSettings);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 114, column 14>
//   // proto:  void QSettings::QSettings(QObject * parent);
extern "C"
QSettings*
C_ZN9QSettingsC2EP7QObject(QObject * arg1) {
  auto ret = new QSettings(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 142, column 10>
//   // proto:  bool QSettings::isWritable();
// _ZNK9QSettings10isWritableEv isWritable()
extern "C"
bool
C_ZNK9QSettings10isWritableEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->isWritable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 153, column 13>
//   // proto:  QString QSettings::fileName();
// _ZNK9QSettings8fileNameEv fileName()
extern "C"
QString*
C_ZNK9QSettings8fileNameEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 151, column 10>
//   // proto:  bool QSettings::fallbacksEnabled();
// _ZNK9QSettings16fallbacksEnabledEv fallbacksEnabled()
extern "C"
bool
C_ZNK9QSettings16fallbacksEnabledEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->fallbacksEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 157, column 13>
//   // proto:  QString QSettings::applicationName();
// _ZNK9QSettings15applicationNameEv applicationName()
extern "C"
QString*
C_ZNK9QSettings15applicationNameEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->applicationName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 128, column 12>
//   // proto:  QSettings::Status QSettings::status();
// _ZNK9QSettings6statusEv status()
extern "C"
QSettings::Status
C_ZNK9QSettings6statusEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->status();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 127, column 10>
//   // proto:  void QSettings::sync();
// _ZN9QSettings4syncEv sync()
extern "C"
void
C_ZN9QSettings4syncEv(void *qthis) {
  ((QSettings*)qthis)->sync();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 144, column 10>
//   // proto:  void QSettings::setValue(const QString & key, const QVariant & value);
// _ZN9QSettings8setValueERK7QStringRK8QVariant setValue(const class QString &, const class QVariant &)
extern "C"
void
C_ZN9QSettings8setValueERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QSettings*)qthis)->setValue(*((const QString*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 137, column 10>
//   // proto:  void QSettings::setArrayIndex(int i);
// _ZN9QSettings13setArrayIndexEi setArrayIndex(int)
extern "C"
void
C_ZN9QSettings13setArrayIndexEi(void *qthis,
int arg1) {
  ((QSettings*)qthis)->setArrayIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 107, column 14>
//   // proto:  void QSettings::QSettings(const QString & organization, const QString & application, QObject * parent);
extern "C"
QSettings*
C_ZN9QSettingsC2ERK7QStringS2_P7QObject(const QString* arg1,
const QString* arg2,
QObject * arg3) {
  auto ret = new QSettings(*((const QString*)arg1), *((const QString*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 111, column 5>
//   // proto:  void QSettings::QSettings(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent);
extern "C"
QSettings*
C_ZN9QSettingsC2ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject(QSettings::Format arg1,
QSettings::Scope arg2,
const QString* arg3,
const QString* arg4,
QObject * arg5) {
  auto ret = new QSettings(arg1, arg2, *((const QString*)arg3), *((const QString*)arg4), arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 160, column 10>
//   // proto:  void QSettings::setIniCodec(QTextCodec * codec);
// _ZN9QSettings11setIniCodecEP10QTextCodec setIniCodec(class QTextCodec *)
extern "C"
void
C_ZN9QSettings11setIniCodecEP10QTextCodec(void *qthis,
QTextCodec * arg1) {
  ((QSettings*)qthis)->setIniCodec(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 161, column 10>
//   // proto:  void QSettings::setIniCodec(const char * codecName);
// _ZN9QSettings11setIniCodecEPKc setIniCodec(const char *)
extern "C"
void
C_ZN9QSettings11setIniCodecEPKc(void *qthis,
const char * arg1) {
  ((QSettings*)qthis)->setIniCodec(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 134, column 9>
//   // proto:  int QSettings::beginReadArray(const QString & prefix);
// _ZN9QSettings14beginReadArrayERK7QString beginReadArray(const class QString &)
extern "C"
int
C_ZN9QSettings14beginReadArrayERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QSettings*)qthis)->beginReadArray(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 155, column 11>
//   // proto:  QSettings::Scope QSettings::scope();
// _ZNK9QSettings5scopeEv scope()
extern "C"
QSettings::Scope
C_ZNK9QSettings5scopeEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->scope();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 126, column 10>
//   // proto:  void QSettings::clear();
// _ZN9QSettings5clearEv clear()
extern "C"
void
C_ZN9QSettings5clearEv(void *qthis) {
  ((QSettings*)qthis)->clear();
}
//   // proto:  void QSettings::~QSettings();
extern "C"
void C_ZN9QSettingsD2Ev(void *qthis) {
  delete (QSettings*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 162, column 17>
//   // proto:  QTextCodec * QSettings::iniCodec();
// _ZNK9QSettings8iniCodecEv iniCodec()
extern "C"
void*
C_ZNK9QSettings8iniCodecEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->iniCodec();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 113, column 5>
//   // proto:  void QSettings::QSettings(const QString & fileName, QSettings::Format format, QObject * parent);
extern "C"
QSettings*
C_ZN9QSettingsC2ERK7QStringNS_6FormatEP7QObject(const QString* arg1,
QSettings::Format arg2,
QObject * arg3) {
  auto ret = new QSettings(*((const QString*)arg1), arg2, arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 175, column 19>
//   // proto: static QSettings::Format QSettings::registerFormat(const QString & extension, ReadFunc readFunc, WriteFunc writeFunc, Qt::CaseSensitivity caseSensitivity);
// _ZN9QSettings14registerFormatERK7QStringPFbR9QIODeviceR4QMapIS0_8QVariantEEPFbS4_RKS7_EN2Qt15CaseSensitivityE registerFormat(const class QString &, ReadFunc, WriteFunc, Qt::CaseSensitivity)
extern "C"
QSettings::Format
C_ZN9QSettings14registerFormatERK7QStringPFbR9QIODeviceR4QMapIS0_8QVariantEEPFbS4_RKS7_EN2Qt15CaseSensitivityE(const QString* arg1,
QSettings::ReadFunc arg2,
QSettings::WriteFunc arg3,
Qt::CaseSensitivity* arg4) {
  auto ret =
  QSettings::registerFormat(*((const QString*)arg1),
arg2,
arg3,
*((Qt::CaseSensitivity*)arg4));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 168, column 17>
//   // proto: static void QSettings::setUserIniPath(const QString & dir);
// _ZN9QSettings14setUserIniPathERK7QString setUserIniPath(const class QString &)
extern "C"
void
C_ZN9QSettings14setUserIniPathERK7QString(const QString* arg1) {
  QSettings::setUserIniPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 141, column 17>
//   // proto:  QStringList QSettings::childGroups();
// _ZNK9QSettings11childGroupsEv childGroups()
extern "C"
QStringList*
C_ZNK9QSettings11childGroupsEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->childGroups();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 145, column 14>
//   // proto:  QVariant QSettings::value(const QString & key, const QVariant & defaultValue);
// _ZNK9QSettings5valueERK7QStringRK8QVariant value(const class QString &, const class QVariant &)
extern "C"
QVariant*
C_ZNK9QSettings5valueERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  auto ret =
  ((QSettings*)qthis)->value(*((const QString*)arg1),
*((const QVariant*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 156, column 13>
//   // proto:  QString QSettings::organizationName();
// _ZNK9QSettings16organizationNameEv organizationName()
extern "C"
QString*
C_ZNK9QSettings16organizationNameEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->organizationName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 154, column 12>
//   // proto:  QSettings::Format QSettings::format();
// _ZNK9QSettings6formatEv format()
extern "C"
QSettings::Format
C_ZNK9QSettings6formatEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->format();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 65, column 5>
//   // proto:  const QMetaObject * QSettings::metaObject();
// _ZNK9QSettings10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QSettings10metaObjectEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 150, column 10>
//   // proto:  void QSettings::setFallbacksEnabled(bool b);
// _ZN9QSettings19setFallbacksEnabledEb setFallbacksEnabled(_Bool)
extern "C"
void
C_ZN9QSettings19setFallbacksEnabledEb(void *qthis,
bool arg1) {
  ((QSettings*)qthis)->setFallbacksEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 148, column 10>
//   // proto:  bool QSettings::contains(const QString & key);
// _ZNK9QSettings8containsERK7QString contains(const class QString &)
extern "C"
bool
C_ZNK9QSettings8containsERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QSettings*)qthis)->contains(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 147, column 10>
//   // proto:  void QSettings::remove(const QString & key);
// _ZN9QSettings6removeERK7QString remove(const class QString &)
extern "C"
void
C_ZN9QSettings6removeERK7QString(void *qthis,
const QString* arg1) {
  ((QSettings*)qthis)->remove(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 165, column 17>
//   // proto: static void QSettings::setDefaultFormat(QSettings::Format format);
// _ZN9QSettings16setDefaultFormatENS_6FormatE setDefaultFormat(enum QSettings::Format)
extern "C"
void
C_ZN9QSettings16setDefaultFormatENS_6FormatE(QSettings::Format arg1) {
  QSettings::setDefaultFormat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 131, column 10>
//   // proto:  void QSettings::endGroup();
// _ZN9QSettings8endGroupEv endGroup()
extern "C"
void
C_ZN9QSettings8endGroupEv(void *qthis) {
  ((QSettings*)qthis)->endGroup();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 135, column 10>
//   // proto:  void QSettings::beginWriteArray(const QString & prefix, int size);
// _ZN9QSettings15beginWriteArrayERK7QStringi beginWriteArray(const class QString &, int)
extern "C"
void
C_ZN9QSettings15beginWriteArrayERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  ((QSettings*)qthis)->beginWriteArray(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 169, column 17>
//   // proto: static void QSettings::setPath(QSettings::Format format, QSettings::Scope scope, const QString & path);
// _ZN9QSettings7setPathENS_6FormatENS_5ScopeERK7QString setPath(enum QSettings::Format, enum QSettings::Scope, const class QString &)
extern "C"
void
C_ZN9QSettings7setPathENS_6FormatENS_5ScopeERK7QString(QSettings::Format arg1,
QSettings::Scope arg2,
const QString* arg3) {
  QSettings::setPath(arg1,
arg2,
*((const QString*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 130, column 10>
//   // proto:  void QSettings::beginGroup(const QString & prefix);
// _ZN9QSettings10beginGroupERK7QString beginGroup(const class QString &)
extern "C"
void
C_ZN9QSettings10beginGroupERK7QString(void *qthis,
const QString* arg1) {
  ((QSettings*)qthis)->beginGroup(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 140, column 17>
//   // proto:  QStringList QSettings::childKeys();
// _ZNK9QSettings9childKeysEv childKeys()
extern "C"
QStringList*
C_ZNK9QSettings9childKeysEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->childKeys();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 166, column 19>
//   // proto: static QSettings::Format QSettings::defaultFormat();
// _ZN9QSettings13defaultFormatEv defaultFormat()
extern "C"
QSettings::Format
C_ZN9QSettings13defaultFormatEv() {
  auto ret =
  QSettings::defaultFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 136, column 10>
//   // proto:  void QSettings::endArray();
// _ZN9QSettings8endArrayEv endArray()
extern "C"
void
C_ZN9QSettings8endArrayEv(void *qthis) {
  ((QSettings*)qthis)->endArray();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 109, column 5>
//   // proto:  void QSettings::QSettings(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent);
extern "C"
QSettings*
C_ZN9QSettingsC2ENS_5ScopeERK7QStringS3_P7QObject(QSettings::Scope arg1,
const QString* arg2,
const QString* arg3,
QObject * arg4) {
  auto ret = new QSettings(arg1, *((const QString*)arg2), *((const QString*)arg3), arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 167, column 17>
//   // proto: static void QSettings::setSystemIniPath(const QString & dir);
// _ZN9QSettings16setSystemIniPathERK7QString setSystemIniPath(const class QString &)
extern "C"
void
C_ZN9QSettings16setSystemIniPathERK7QString(const QString* arg1) {
  QSettings::setSystemIniPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 139, column 17>
//   // proto:  QStringList QSettings::allKeys();
// _ZNK9QSettings7allKeysEv allKeys()
extern "C"
QStringList*
C_ZNK9QSettings7allKeysEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->allKeys();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsettings.h', line 132, column 13>
//   // proto:  QString QSettings::group();
// _ZNK9QSettings5groupEv group()
extern "C"
QString*
C_ZNK9QSettings5groupEv(void *qthis) {
  auto ret =
  ((QSettings*)qthis)->group();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// QSettings_SlotProxy here
class QSettings_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSettings_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsettings.moc"

extern "C" {
  QSettings_SlotProxy* QSettings_SlotProxy_new()
  {
    return new QSettings_SlotProxy();
  }
};

// <= body block end

