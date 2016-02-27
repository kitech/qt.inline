// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qstyleplugin.h
// dst-file: /src/widgets/qstyleplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstyleplugin.h>


// <= header block end

// main block begin =>
void __keep_qstyleplugin_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStylePlugin_Class_Size()
{
  return sizeof(QStylePlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleplugin.h', line 54, column 21>
//   // proto:  QStyle * QStylePlugin::create(const QString & key);
// _ZN12QStylePlugin6createERK7QString create(const class QString &)
extern "C"
void*
C_ZN12QStylePlugin6createERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QStylePlugin*)qthis)->create(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleplugin.h', line 49, column 5>
//   // proto:  const QMetaObject * QStylePlugin::metaObject();
// _ZNK12QStylePlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QStylePlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QStylePlugin*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleplugin.h', line 51, column 14>
//   // proto:  void QStylePlugin::QStylePlugin(QObject * parent);
extern "C"
QStylePlugin*
C_ZN12QStylePluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QStylePlugin(arg1);
}
//   // proto:  void QStylePlugin::~QStylePlugin();
extern "C"
void C_ZN12QStylePluginD2Ev(void *qthis) {
  delete (QStylePlugin*)qthis;
}
// <= ext block end

// body block begin =>
// QStylePlugin_SlotProxy here
class QStylePlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStylePlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qstyleplugin.moc"

extern "C" {
  QStylePlugin_SlotProxy* QStylePlugin_SlotProxy_new()
  {
    return new QStylePlugin_SlotProxy();
  }
};

// <= body block end

