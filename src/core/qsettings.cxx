// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtCore/qsettings.h
// dst-file: /src/core/qsettings.cxx
//

// header block begin =>
#include <qsettings.h>

extern "C" {

int QSettings_Class_Size()
{
  return sizeof(QSettings);
}

// QSettings(class QObject *)
QSettings* dector_ZN9QSettingsC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSettings) == 32, "tyszerr");
  QSettings* rthis = new QSettings(parent);
  return rthis;
}

// QSettings(const class QString &, const class QString &, class QObject *)
QSettings* dector_ZN9QSettingsC1ERK7QStringS2_P7QObject(const QString & organization, const QString & application, QObject * parent)
{
  // static_assert(sizeof(QSettings) == 32, "tyszerr");
  QSettings* rthis = new QSettings(organization, application, parent);
  return rthis;
}

// QSettings(enum QSettings::Format, enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
QSettings* dector_ZN9QSettingsC1ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent)
{
  // static_assert(sizeof(QSettings) == 32, "tyszerr");
  QSettings* rthis = new QSettings(format, scope, organization, application, parent);
  return rthis;
}

// ~QSettings()
void dedtor_ZN9QSettingsD0Ev(QSettings* that)
{
  QSettings* rthis = (QSettings*)that;
  delete rthis;
}

// QSettings(const class QString &, enum QSettings::Format, class QObject *)
QSettings* dector_ZN9QSettingsC1ERK7QStringNS_6FormatEP7QObject(const QString & fileName, QSettings::Format format, QObject * parent)
{
  // static_assert(sizeof(QSettings) == 32, "tyszerr");
  QSettings* rthis = new QSettings(fileName, format, parent);
  return rthis;
}

// QSettings(enum QSettings::Scope, const class QString &, const class QString &, class QObject *)
QSettings* dector_ZN9QSettingsC1ENS_5ScopeERK7QStringS3_P7QObject(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent)
{
  // static_assert(sizeof(QSettings) == 32, "tyszerr");
  QSettings* rthis = new QSettings(scope, organization, application, parent);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

