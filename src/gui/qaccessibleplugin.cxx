// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qaccessibleplugin.h
// dst-file: /src/gui/qaccessibleplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qaccessibleplugin.h>


// <= header block end

// main block begin =>
void __keep_qaccessibleplugin_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAccessiblePlugin_Class_Size()
{
  return sizeof(QAccessiblePlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleplugin.h', line 56, column 14>
//   // proto:  void QAccessiblePlugin::QAccessiblePlugin(QObject * parent);
extern "C"
QAccessiblePlugin*
C_ZN17QAccessiblePluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QAccessiblePlugin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleplugin.h', line 54, column 5>
//   // proto:  const QMetaObject * QAccessiblePlugin::metaObject();
// _ZNK17QAccessiblePlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QAccessiblePlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QAccessiblePlugin*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QAccessiblePlugin::~QAccessiblePlugin();
extern "C"
void C_ZN17QAccessiblePluginD2Ev(void *qthis) {
  delete (QAccessiblePlugin*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleplugin.h', line 59, column 35>
//   // proto:  QAccessibleInterface * QAccessiblePlugin::create(const QString & key, QObject * object);
// _ZN17QAccessiblePlugin6createERK7QStringP7QObject create(const class QString &, class QObject *)
extern "C"
void*
C_ZN17QAccessiblePlugin6createERK7QStringP7QObject(void *qthis,
const QString* arg1,
QObject * arg2) {
  auto ret =
  ((QAccessiblePlugin*)qthis)->create(*((const QString*)arg1),
arg2);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QAccessiblePlugin_SlotProxy here
class QAccessiblePlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAccessiblePlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qaccessibleplugin.moc"

extern "C" {
  QAccessiblePlugin_SlotProxy* QAccessiblePlugin_SlotProxy_new()
  {
    return new QAccessiblePlugin_SlotProxy();
  }
};

// <= body block end

