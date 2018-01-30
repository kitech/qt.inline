//  header block begin
// /usr/include/qt/QtCore/qsettings.h
#include <qsettings.h>
#include <QtCore>

// QSettings is pure virtual: false
// QSettings has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:202
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN9QSettings5eventEP6QEvent = 0;
extern "C" void set_callback_ZN9QSettings5eventEP6QEvent(void*cbfn)
{ callback_ZN9QSettings5eventEP6QEvent = cbfn; }

class MyQSettings : public QSettings {
public:
  virtual ~MyQSettings() {}
// void QSettings(const class QString &, const class QString &, class QObject *)
MyQSettings(const QString & organization, const QString & application, QObject * parent) : QSettings(organization, application, parent) {}
// void QSettings(enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
MyQSettings(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) : QSettings(scope, organization, application, parent) {}
// void QSettings(enum QSettings::Format, enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
MyQSettings(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) : QSettings(format, scope, organization, application, parent) {}
// void QSettings(const class QString &, enum QSettings::Format, class QObject *)
MyQSettings(const QString & fileName, QSettings::Format format, QObject * parent) : QSettings(fileName, format, parent) {}
// void QSettings(class QObject *)
MyQSettings(QObject * parent) : QSettings(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    if (callback_ZN9QSettings5eventEP6QEvent != 0) {
      // callback_ZN9QSettings5eventEP6QEvent(event);
    }
    return QSettings::event(event);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:71
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QSettings10metaObjectEv(void *this_) {
  return (void*)((QSettings*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:127
// [-2] void QSettings(const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN9QSettingsC2ERK7QStringS2_P7QObject(const QString & organization, const QString & application, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(organization, application, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:129
// [-2] void QSettings(enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN9QSettingsC2ENS_5ScopeERK7QStringS3_P7QObject(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(scope, organization, application, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:131
// [-2] void QSettings(enum QSettings::Format, enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN9QSettingsC2ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(format, scope, organization, application, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:133
// [-2] void QSettings(const class QString &, enum QSettings::Format, class QObject *)
extern "C"
void* C_ZN9QSettingsC2ERK7QStringNS_6FormatEP7QObject(const QString & fileName, QSettings::Format format, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(fileName, format, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:134
// [-2] void QSettings(class QObject *)
extern "C"
void* C_ZN9QSettingsC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:144
// [-2] void ~QSettings()
extern "C"
void C_ZN9QSettingsD2Ev(void *this_) {
  delete (QSettings*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:146
// [-2] void clear()
extern "C"
void C_ZN9QSettings5clearEv(void *this_) {
  ((QSettings*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:147
// [-2] void sync()
extern "C"
void C_ZN9QSettings4syncEv(void *this_) {
  ((QSettings*)this_)->sync();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:148
// [4] QSettings::Status status()
extern "C"
QSettings::Status C_ZNK9QSettings6statusEv(void *this_) {
  return (QSettings::Status)((QSettings*)this_)->status();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:149
// [1] bool isAtomicSyncRequired()
extern "C"
bool C_ZNK9QSettings20isAtomicSyncRequiredEv(void *this_) {
  return (bool)((QSettings*)this_)->isAtomicSyncRequired();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:150
// [-2] void setAtomicSyncRequired(_Bool)
extern "C"
void C_ZN9QSettings21setAtomicSyncRequiredEb(void *this_, bool enable) {
  ((QSettings*)this_)->setAtomicSyncRequired(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:152
// [-2] void beginGroup(const class QString &)
extern "C"
void C_ZN9QSettings10beginGroupERK7QString(void *this_, const QString & prefix) {
  ((QSettings*)this_)->beginGroup(prefix);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:153
// [-2] void endGroup()
extern "C"
void C_ZN9QSettings8endGroupEv(void *this_) {
  ((QSettings*)this_)->endGroup();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:154
// [8] QString group()
extern "C"
void* C_ZNK9QSettings5groupEv(void *this_) {
  auto rv = ((QSettings*)this_)->group();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:156
// [4] int beginReadArray(const class QString &)
extern "C"
int C_ZN9QSettings14beginReadArrayERK7QString(void *this_, const QString & prefix) {
  return (int)((QSettings*)this_)->beginReadArray(prefix);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:157
// [-2] void beginWriteArray(const class QString &, int)
extern "C"
void C_ZN9QSettings15beginWriteArrayERK7QStringi(void *this_, const QString & prefix, int size) {
  ((QSettings*)this_)->beginWriteArray(prefix, size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:158
// [-2] void endArray()
extern "C"
void C_ZN9QSettings8endArrayEv(void *this_) {
  ((QSettings*)this_)->endArray();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:159
// [-2] void setArrayIndex(int)
extern "C"
void C_ZN9QSettings13setArrayIndexEi(void *this_, int i) {
  ((QSettings*)this_)->setArrayIndex(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:164
// [1] bool isWritable()
extern "C"
bool C_ZNK9QSettings10isWritableEv(void *this_) {
  return (bool)((QSettings*)this_)->isWritable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:166
// [-2] void setValue(const class QString &, const class QVariant &)
extern "C"
void C_ZN9QSettings8setValueERK7QStringRK8QVariant(void *this_, const QString & key, const QVariant & value) {
  ((QSettings*)this_)->setValue(key, value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:167
// [16] QVariant value(const class QString &, const class QVariant &)
extern "C"
void* C_ZNK9QSettings5valueERK7QStringRK8QVariant(void *this_, const QString & key, const QVariant & defaultValue) {
  auto rv = ((QSettings*)this_)->value(key, defaultValue);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:169
// [-2] void remove(const class QString &)
extern "C"
void C_ZN9QSettings6removeERK7QString(void *this_, const QString & key) {
  ((QSettings*)this_)->remove(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:170
// [1] bool contains(const class QString &)
extern "C"
bool C_ZNK9QSettings8containsERK7QString(void *this_, const QString & key) {
  return (bool)((QSettings*)this_)->contains(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:172
// [-2] void setFallbacksEnabled(_Bool)
extern "C"
void C_ZN9QSettings19setFallbacksEnabledEb(void *this_, bool b) {
  ((QSettings*)this_)->setFallbacksEnabled(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:173
// [1] bool fallbacksEnabled()
extern "C"
bool C_ZNK9QSettings16fallbacksEnabledEv(void *this_) {
  return (bool)((QSettings*)this_)->fallbacksEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:175
// [8] QString fileName()
extern "C"
void* C_ZNK9QSettings8fileNameEv(void *this_) {
  auto rv = ((QSettings*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:176
// [4] QSettings::Format format()
extern "C"
QSettings::Format C_ZNK9QSettings6formatEv(void *this_) {
  return (QSettings::Format)((QSettings*)this_)->format();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:177
// [4] QSettings::Scope scope()
extern "C"
QSettings::Scope C_ZNK9QSettings5scopeEv(void *this_) {
  return (QSettings::Scope)((QSettings*)this_)->scope();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:178
// [8] QString organizationName()
extern "C"
void* C_ZNK9QSettings16organizationNameEv(void *this_) {
  auto rv = ((QSettings*)this_)->organizationName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:179
// [8] QString applicationName()
extern "C"
void* C_ZNK9QSettings15applicationNameEv(void *this_) {
  auto rv = ((QSettings*)this_)->applicationName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:182
// [-2] void setIniCodec(class QTextCodec *)
extern "C"
void C_ZN9QSettings11setIniCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QSettings*)this_)->setIniCodec(codec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:183
// [-2] void setIniCodec(const char *)
extern "C"
void C_ZN9QSettings11setIniCodecEPKc(void *this_, const char * codecName) {
  ((QSettings*)this_)->setIniCodec(codecName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:184
// [8] QTextCodec * iniCodec()
extern "C"
void* C_ZNK9QSettings8iniCodecEv(void *this_) {
  return (void*)((QSettings*)this_)->iniCodec();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:187
// [-2] void setDefaultFormat(enum QSettings::Format)
extern "C"
void C_ZN9QSettings16setDefaultFormatENS_6FormatE(QSettings::Format format) {
  QSettings::setDefaultFormat(format);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:188
// [4] QSettings::Format defaultFormat()
extern "C"
QSettings::Format C_ZN9QSettings13defaultFormatEv() {
  return (QSettings::Format)QSettings::defaultFormat();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:189
// [-2] void setSystemIniPath(const class QString &)
extern "C"
void C_ZN9QSettings16setSystemIniPathERK7QString(const QString & dir) {
  QSettings::setSystemIniPath(dir);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:190
// [-2] void setUserIniPath(const class QString &)
extern "C"
void C_ZN9QSettings14setUserIniPathERK7QString(const QString & dir) {
  QSettings::setUserIniPath(dir);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:191
// [-2] void setPath(enum QSettings::Format, enum QSettings::Scope, const class QString &)
extern "C"
void C_ZN9QSettings7setPathENS_6FormatENS_5ScopeERK7QString(QSettings::Format format, QSettings::Scope scope, const QString & path) {
  QSettings::setPath(format, scope, path);
}
//  main block end
