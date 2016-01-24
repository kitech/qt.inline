// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qstylefactory.h
// dst-file: /src/widgets/qstylefactory.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstylefactory.h>


#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qstylefactory_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStyleFactory_Class_Size()
{
  return sizeof(QStyleFactory);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylefactory.h', line 48, column 20>
//   // proto: static QStyle * QStyleFactory::create(const QString & );
// _ZN13QStyleFactory6createERK7QString create(const class QString &)
extern "C"
void*
C_ZN13QStyleFactory6createERK7QString(const QString* arg1) {
  auto ret =
  QStyleFactory::create(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylefactory.h', line 47, column 24>
//   // proto: static QStringList QStyleFactory::keys();
// _ZN13QStyleFactory4keysEv keys()
extern "C"
QStringList*
C_ZN13QStyleFactory4keysEv() {
  auto ret =
  QStyleFactory::keys();
  return new QStringList(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

