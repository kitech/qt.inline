// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlfileselector.h
// dst-file: /src/qml/qqmlfileselector.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlfileselector.h>


// <= header block end

// main block begin =>
void __keep_qqmlfileselector_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlFileSelector_Class_Size()
{
  return sizeof(QQmlFileSelector);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfileselector.h', line 54, column 10>
//   // proto:  void QQmlFileSelector::setExtraSelectors(QStringList & strings);
// _ZN16QQmlFileSelector17setExtraSelectorsER11QStringList setExtraSelectors(class QStringList &)
extern "C"
void
C_ZN16QQmlFileSelector17setExtraSelectorsER11QStringList(void *qthis,
QStringList* arg1) {
  ((QQmlFileSelector*)qthis)->setExtraSelectors(*((QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfileselector.h', line 51, column 5>
//   // proto:  void QQmlFileSelector::QQmlFileSelector(QQmlEngine * engine, QObject * parent);
extern "C"
QQmlFileSelector*
C_ZN16QQmlFileSelectorC2EP10QQmlEngineP7QObject(QQmlEngine * arg1,
QObject * arg2) {
  auto ret = new QQmlFileSelector(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfileselector.h', line 56, column 30>
//   // proto: static QQmlFileSelector * QQmlFileSelector::get(QQmlEngine * );
// _ZN16QQmlFileSelector3getEP10QQmlEngine get(class QQmlEngine *)
extern "C"
void*
C_ZN16QQmlFileSelector3getEP10QQmlEngine(QQmlEngine * arg1) {
  auto ret =
  QQmlFileSelector::get(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfileselector.h', line 53, column 10>
//   // proto:  void QQmlFileSelector::setSelector(QFileSelector * selector);
// _ZN16QQmlFileSelector11setSelectorEP13QFileSelector setSelector(class QFileSelector *)
extern "C"
void
C_ZN16QQmlFileSelector11setSelectorEP13QFileSelector(void *qthis,
QFileSelector * arg1) {
  ((QQmlFileSelector*)qthis)->setSelector(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfileselector.h', line 48, column 5>
//   // proto:  const QMetaObject * QQmlFileSelector::metaObject();
// _ZNK16QQmlFileSelector10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QQmlFileSelector10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlFileSelector*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfileselector.h', line 55, column 10>
//   // proto:  void QQmlFileSelector::setExtraSelectors(const QStringList & strings);
// _ZN16QQmlFileSelector17setExtraSelectorsERK11QStringList setExtraSelectors(const class QStringList &)
extern "C"
void
C_ZN16QQmlFileSelector17setExtraSelectorsERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QQmlFileSelector*)qthis)->setExtraSelectors(*((const QStringList*)arg1));
}
//   // proto:  void QQmlFileSelector::~QQmlFileSelector();
extern "C"
void C_ZN16QQmlFileSelectorD2Ev(void *qthis) {
  delete (QQmlFileSelector*)qthis;
}
// <= ext block end

// body block begin =>
// QQmlFileSelector_SlotProxy here
class QQmlFileSelector_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlFileSelector_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/qml/qqmlfileselector.moc"

extern "C" {
  QQmlFileSelector_SlotProxy* QQmlFileSelector_SlotProxy_new()
  {
    return new QQmlFileSelector_SlotProxy();
  }
};

// <= body block end

