// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qplugin.h
// dst-file: /src/core/qplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qplugin.h>


#include <qjsonobject.h>
// <= header block end

// main block begin =>
void __keep_qplugin_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStaticPlugin_Class_Size()
{
  return sizeof(QStaticPlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qplugin.h', line 74, column 17>
//   // proto:  QJsonObject QStaticPlugin::metaData();
// _ZNK13QStaticPlugin8metaDataEv metaData()
extern "C"
QJsonObject*
C_ZNK13QStaticPlugin8metaDataEv(void *qthis) {
  auto ret =
  ((QStaticPlugin*)qthis)->metaData();
  return new QJsonObject(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

