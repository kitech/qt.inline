// /usr/include/qt/QtCore/qsettings.h
#include <qsettings.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qsettings.h:71
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QSettings10metaObjectEv(void *this_) {
  /*return*/ ((QSettings*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsettings.h:118
// void QSettings(const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN9QSettingsC1ERK7QStringS2_P7QObject(const QString & organization, const QString & application, QObject * parent) {
  return new QSettings(organization, application, parent);
}
// /usr/include/qt/QtCore/qsettings.h:120
// void QSettings(enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN9QSettingsC1ENS_5ScopeERK7QStringS3_P7QObject(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) {
  return new QSettings(scope, organization, application, parent);
}
// /usr/include/qt/QtCore/qsettings.h:122
// void QSettings(enum QSettings::Format, enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN9QSettingsC1ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) {
  return new QSettings(format, scope, organization, application, parent);
}
// /usr/include/qt/QtCore/qsettings.h:124
// void QSettings(const class QString &, enum QSettings::Format, class QObject *)
extern "C"
void* C_ZN9QSettingsC1ERK7QStringNS_6FormatEP7QObject(const QString & fileName, QSettings::Format format, QObject * parent) {
  return new QSettings(fileName, format, parent);
}
// /usr/include/qt/QtCore/qsettings.h:125
// void QSettings(class QObject *)
extern "C"
void* C_ZN9QSettingsC1EP7QObject(QObject * parent) {
  return new QSettings(parent);
}
// virtual
// /usr/include/qt/QtCore/qsettings.h:135
// void ~QSettings()
extern "C"
void C_ZN9QSettingsD1Ev(void *this_) {
  delete (QSettings*)(this_);
}
// /usr/include/qt/QtCore/qsettings.h:137
// void clear()
extern "C"
void C_ZN9QSettings5clearEv(void *this_) {
  ((QSettings*)this_)->clear();
}
// /usr/include/qt/QtCore/qsettings.h:138
// void sync()
extern "C"
void C_ZN9QSettings4syncEv(void *this_) {
  ((QSettings*)this_)->sync();
}
// /usr/include/qt/QtCore/qsettings.h:139
// QSettings::Status status()
extern "C"
void C_ZNK9QSettings6statusEv(void *this_) {
  /*return*/ ((QSettings*)this_)->status();
}
// /usr/include/qt/QtCore/qsettings.h:141
// void beginGroup(const class QString &)
extern "C"
void C_ZN9QSettings10beginGroupERK7QString(void *this_, const QString & prefix) {
  ((QSettings*)this_)->beginGroup(prefix);
}
// /usr/include/qt/QtCore/qsettings.h:142
// void endGroup()
extern "C"
void C_ZN9QSettings8endGroupEv(void *this_) {
  ((QSettings*)this_)->endGroup();
}
// /usr/include/qt/QtCore/qsettings.h:143
// QString group()
extern "C"
void C_ZNK9QSettings5groupEv(void *this_) {
  /*return*/ ((QSettings*)this_)->group();
}
// /usr/include/qt/QtCore/qsettings.h:145
// int beginReadArray(const class QString &)
extern "C"
void C_ZN9QSettings14beginReadArrayERK7QString(void *this_, const QString & prefix) {
  /*return*/ ((QSettings*)this_)->beginReadArray(prefix);
}
// /usr/include/qt/QtCore/qsettings.h:146
// void beginWriteArray(const class QString &, int)
extern "C"
void C_ZN9QSettings15beginWriteArrayERK7QStringi(void *this_, const QString & prefix, int size) {
  ((QSettings*)this_)->beginWriteArray(prefix, size);
}
// /usr/include/qt/QtCore/qsettings.h:147
// void endArray()
extern "C"
void C_ZN9QSettings8endArrayEv(void *this_) {
  ((QSettings*)this_)->endArray();
}
// /usr/include/qt/QtCore/qsettings.h:148
// void setArrayIndex(int)
extern "C"
void C_ZN9QSettings13setArrayIndexEi(void *this_, int i) {
  ((QSettings*)this_)->setArrayIndex(i);
}
// /usr/include/qt/QtCore/qsettings.h:150
// QStringList allKeys()
extern "C"
void C_ZNK9QSettings7allKeysEv(void *this_) {
  /*return*/ ((QSettings*)this_)->allKeys();
}
// /usr/include/qt/QtCore/qsettings.h:151
// QStringList childKeys()
extern "C"
void C_ZNK9QSettings9childKeysEv(void *this_) {
  /*return*/ ((QSettings*)this_)->childKeys();
}
// /usr/include/qt/QtCore/qsettings.h:152
// QStringList childGroups()
extern "C"
void C_ZNK9QSettings11childGroupsEv(void *this_) {
  /*return*/ ((QSettings*)this_)->childGroups();
}
// /usr/include/qt/QtCore/qsettings.h:153
// bool isWritable()
extern "C"
void C_ZNK9QSettings10isWritableEv(void *this_) {
  /*return*/ ((QSettings*)this_)->isWritable();
}
// /usr/include/qt/QtCore/qsettings.h:155
// void setValue(const class QString &, const class QVariant &)
extern "C"
void C_ZN9QSettings8setValueERK7QStringRK8QVariant(void *this_, const QString & key, const QVariant & value) {
  ((QSettings*)this_)->setValue(key, value);
}
// /usr/include/qt/QtCore/qsettings.h:156
// QVariant value(const class QString &, const class QVariant &)
extern "C"
void C_ZNK9QSettings5valueERK7QStringRK8QVariant(void *this_, const QString & key, const QVariant & defaultValue) {
  /*return*/ ((QSettings*)this_)->value(key, defaultValue);
}
// /usr/include/qt/QtCore/qsettings.h:158
// void remove(const class QString &)
extern "C"
void C_ZN9QSettings6removeERK7QString(void *this_, const QString & key) {
  ((QSettings*)this_)->remove(key);
}
// /usr/include/qt/QtCore/qsettings.h:159
// bool contains(const class QString &)
extern "C"
void C_ZNK9QSettings8containsERK7QString(void *this_, const QString & key) {
  /*return*/ ((QSettings*)this_)->contains(key);
}
// /usr/include/qt/QtCore/qsettings.h:161
// void setFallbacksEnabled(_Bool)
extern "C"
void C_ZN9QSettings19setFallbacksEnabledEb(void *this_, bool b) {
  ((QSettings*)this_)->setFallbacksEnabled(b);
}
// /usr/include/qt/QtCore/qsettings.h:162
// bool fallbacksEnabled()
extern "C"
void C_ZNK9QSettings16fallbacksEnabledEv(void *this_) {
  /*return*/ ((QSettings*)this_)->fallbacksEnabled();
}
// /usr/include/qt/QtCore/qsettings.h:164
// QString fileName()
extern "C"
void C_ZNK9QSettings8fileNameEv(void *this_) {
  /*return*/ ((QSettings*)this_)->fileName();
}
// /usr/include/qt/QtCore/qsettings.h:165
// QSettings::Format format()
extern "C"
void C_ZNK9QSettings6formatEv(void *this_) {
  /*return*/ ((QSettings*)this_)->format();
}
// /usr/include/qt/QtCore/qsettings.h:166
// QSettings::Scope scope()
extern "C"
void C_ZNK9QSettings5scopeEv(void *this_) {
  /*return*/ ((QSettings*)this_)->scope();
}
// /usr/include/qt/QtCore/qsettings.h:167
// QString organizationName()
extern "C"
void C_ZNK9QSettings16organizationNameEv(void *this_) {
  /*return*/ ((QSettings*)this_)->organizationName();
}
// /usr/include/qt/QtCore/qsettings.h:168
// QString applicationName()
extern "C"
void C_ZNK9QSettings15applicationNameEv(void *this_) {
  /*return*/ ((QSettings*)this_)->applicationName();
}
// /usr/include/qt/QtCore/qsettings.h:171
// void setIniCodec(class QTextCodec *)
extern "C"
void C_ZN9QSettings11setIniCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QSettings*)this_)->setIniCodec(codec);
}
// /usr/include/qt/QtCore/qsettings.h:172
// void setIniCodec(const char *)
extern "C"
void C_ZN9QSettings11setIniCodecEPKc(void *this_, const char * codecName) {
  ((QSettings*)this_)->setIniCodec(codecName);
}
// /usr/include/qt/QtCore/qsettings.h:173
// QTextCodec * iniCodec()
extern "C"
void C_ZNK9QSettings8iniCodecEv(void *this_) {
  /*return*/ ((QSettings*)this_)->iniCodec();
}
// static
// /usr/include/qt/QtCore/qsettings.h:176
// void setDefaultFormat(enum QSettings::Format)
extern "C"
void C_ZN9QSettings16setDefaultFormatENS_6FormatE(QSettings::Format format) {
  QSettings::setDefaultFormat(format);
}
// static
// /usr/include/qt/QtCore/qsettings.h:177
// QSettings::Format defaultFormat()
extern "C"
void C_ZN9QSettings13defaultFormatEv() {
  /*return*/ QSettings::defaultFormat();
}
// static
// /usr/include/qt/QtCore/qsettings.h:178
// void setSystemIniPath(const class QString &)
extern "C"
void C_ZN9QSettings16setSystemIniPathERK7QString(const QString & dir) {
  QSettings::setSystemIniPath(dir);
}
// static
// /usr/include/qt/QtCore/qsettings.h:179
// void setUserIniPath(const class QString &)
extern "C"
void C_ZN9QSettings14setUserIniPathERK7QString(const QString & dir) {
  QSettings::setUserIniPath(dir);
}
// static
// /usr/include/qt/QtCore/qsettings.h:180
// void setPath(enum QSettings::Format, enum QSettings::Scope, const class QString &)
extern "C"
void C_ZN9QSettings7setPathENS_6FormatENS_5ScopeERK7QString(QSettings::Format format, QSettings::Scope scope, const QString & path) {
  QSettings::setPath(format, scope, path);
}