// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qiconengineplugin.h
// dst-file: /src/gui/qiconengineplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qiconengineplugin.h>


// <= header block end

// main block begin =>
void __keep_qiconengineplugin_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QIconEnginePlugin_Class_Size()
{
  return sizeof(QIconEnginePlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qiconengineplugin.h', line 55, column 5>
//   // proto:  const QMetaObject * QIconEnginePlugin::metaObject();
// _ZNK17QIconEnginePlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QIconEnginePlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QIconEnginePlugin*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengineplugin.h', line 57, column 5>
//   // proto:  void QIconEnginePlugin::QIconEnginePlugin(QObject * parent);
extern "C"
QIconEnginePlugin*
C_ZN17QIconEnginePluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QIconEnginePlugin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengineplugin.h', line 60, column 26>
//   // proto:  QIconEngine * QIconEnginePlugin::create(const QString & filename);
// _ZN17QIconEnginePlugin6createERK7QString create(const class QString &)
extern "C"
void*
C_ZN17QIconEnginePlugin6createERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QIconEnginePlugin*)qthis)->create(*((const QString*)arg1));
  return (void*)ret;
}
//   // proto:  void QIconEnginePlugin::~QIconEnginePlugin();
extern "C"
void C_ZN17QIconEnginePluginD2Ev(void *qthis) {
  delete (QIconEnginePlugin*)qthis;
}
// <= ext block end

// body block begin =>
// QIconEnginePlugin_SlotProxy here
class QIconEnginePlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QIconEnginePlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qiconengineplugin.moc"

extern "C" {
  QIconEnginePlugin_SlotProxy* QIconEnginePlugin_SlotProxy_new()
  {
    return new QIconEnginePlugin_SlotProxy();
  }
};

// <= body block end

