// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qgenericplugin.h
// dst-file: /src/gui/qgenericplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgenericplugin.h>


// <= header block end

// main block begin =>
void __keep_qgenericplugin_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGenericPlugin_Class_Size()
{
  return sizeof(QGenericPlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qgenericplugin.h', line 51, column 14>
//   // proto:  void QGenericPlugin::QGenericPlugin(QObject * parent);
extern "C"
QGenericPlugin*
C_ZN14QGenericPluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QGenericPlugin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qgenericplugin.h', line 54, column 22>
//   // proto:  QObject * QGenericPlugin::create(const QString & name, const QString & spec);
// _ZN14QGenericPlugin6createERK7QStringS2_ create(const class QString &, const class QString &)
extern "C"
void*
C_ZN14QGenericPlugin6createERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QGenericPlugin*)qthis)->create(*((const QString*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
//   // proto:  void QGenericPlugin::~QGenericPlugin();
extern "C"
void C_ZN14QGenericPluginD2Ev(void *qthis) {
  delete (QGenericPlugin*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qgenericplugin.h', line 49, column 5>
//   // proto:  const QMetaObject * QGenericPlugin::metaObject();
// _ZNK14QGenericPlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QGenericPlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QGenericPlugin*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QGenericPlugin_SlotProxy here
class QGenericPlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGenericPlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qgenericplugin.moc"

extern "C" {
  QGenericPlugin_SlotProxy* QGenericPlugin_SlotProxy_new()
  {
    return new QGenericPlugin_SlotProxy();
  }
};

// <= body block end

