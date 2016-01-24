// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qgenericpluginfactory.h
// dst-file: /src/gui/qgenericpluginfactory.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgenericpluginfactory.h>


#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qgenericpluginfactory_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGenericPluginFactory_Class_Size()
{
  return sizeof(QGenericPluginFactory);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qgenericpluginfactory.h', line 49, column 21>
//   // proto: static QObject * QGenericPluginFactory::create(const QString & , const QString & );
// _ZN21QGenericPluginFactory6createERK7QStringS2_ create(const class QString &, const class QString &)
extern "C"
void*
C_ZN21QGenericPluginFactory6createERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QGenericPluginFactory::create(*((const QString*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qgenericpluginfactory.h', line 48, column 24>
//   // proto: static QStringList QGenericPluginFactory::keys();
// _ZN21QGenericPluginFactory4keysEv keys()
extern "C"
QStringList*
C_ZN21QGenericPluginFactory4keysEv() {
  auto ret =
  QGenericPluginFactory::keys();
  return new QStringList(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

