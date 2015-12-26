// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qcommandlineoption.h
// dst-file: /src/core/qcommandlineoption.cxx
//

// header block begin =>
#include <qcommandlineoption.h>

extern "C" {

int QCommandLineOption_Class_Size()
{
  return sizeof(QCommandLineOption);
}

// QCommandLineOption(const class QCommandLineOption &)
QCommandLineOption* dector_ZN18QCommandLineOptionC1ERKS_(const QCommandLineOption & other)
{
  // static_assert(sizeof(QCommandLineOption) == 32, "tyszerr");
  QCommandLineOption* rthis = new QCommandLineOption(other);
  return rthis;
}

// QCommandLineOption(const class QString &, const class QString &, const class QString &, const class QString &)
QCommandLineOption* dector_ZN18QCommandLineOptionC1ERK7QStringS2_S2_S2_(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue)
{
  // static_assert(sizeof(QCommandLineOption) == 32, "tyszerr");
  QCommandLineOption* rthis = new QCommandLineOption(name, description, valueName, defaultValue);
  return rthis;
}

// QCommandLineOption(const class QStringList &, const class QString &, const class QString &, const class QString &)
QCommandLineOption* dector_ZN18QCommandLineOptionC1ERK11QStringListRK7QStringS5_S5_(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue)
{
  // static_assert(sizeof(QCommandLineOption) == 32, "tyszerr");
  QCommandLineOption* rthis = new QCommandLineOption(names, description, valueName, defaultValue);
  return rthis;
}

// ~QCommandLineOption()
void dedtor_ZN18QCommandLineOptionD0Ev(QCommandLineOption* that)
{
  QCommandLineOption* rthis = (QCommandLineOption*)that;
  delete rthis;
}

// QCommandLineOption(const class QStringList &)
QCommandLineOption* dector_ZN18QCommandLineOptionC1ERK11QStringList(const QStringList & names)
{
  // static_assert(sizeof(QCommandLineOption) == 32, "tyszerr");
  QCommandLineOption* rthis = new QCommandLineOption(names);
  return rthis;
}

// QCommandLineOption(const class QString &)
QCommandLineOption* dector_ZN18QCommandLineOptionC1ERK7QString(const QString & name)
{
  // static_assert(sizeof(QCommandLineOption) == 32, "tyszerr");
  QCommandLineOption* rthis = new QCommandLineOption(name);
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

