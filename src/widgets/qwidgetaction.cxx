// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qwidgetaction.h
// dst-file: /src/widgets/qwidgetaction.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qwidgetaction.h>


// <= header block end

// main block begin =>
void __keep_qwidgetaction_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QWidgetAction_Class_Size()
{
  return sizeof(QWidgetAction);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidgetaction.h', line 48, column 5>
//   // proto:  const QMetaObject * QWidgetAction::metaObject();
// _ZNK13QWidgetAction10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QWidgetAction10metaObjectEv(void *qthis) {
  auto ret =
  ((QWidgetAction*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QWidgetAction::~QWidgetAction();
extern "C"
void C_ZN13QWidgetActionD2Ev(void *qthis) {
  delete (QWidgetAction*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidgetaction.h', line 55, column 10>
//   // proto:  void QWidgetAction::setDefaultWidget(QWidget * w);
// _ZN13QWidgetAction16setDefaultWidgetEP7QWidget setDefaultWidget(class QWidget *)
extern "C"
void
C_ZN13QWidgetAction16setDefaultWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QWidgetAction*)qthis)->setDefaultWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidgetaction.h', line 59, column 10>
//   // proto:  void QWidgetAction::releaseWidget(QWidget * widget);
// _ZN13QWidgetAction13releaseWidgetEP7QWidget releaseWidget(class QWidget *)
extern "C"
void
C_ZN13QWidgetAction13releaseWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QWidgetAction*)qthis)->releaseWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidgetaction.h', line 52, column 14>
//   // proto:  void QWidgetAction::QWidgetAction(QObject * parent);
extern "C"
QWidgetAction*
C_ZN13QWidgetActionC2EP7QObject(QObject * arg1) {
  auto ret = new QWidgetAction(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidgetaction.h', line 58, column 14>
//   // proto:  QWidget * QWidgetAction::requestWidget(QWidget * parent);
// _ZN13QWidgetAction13requestWidgetEP7QWidget requestWidget(class QWidget *)
extern "C"
void*
C_ZN13QWidgetAction13requestWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QWidgetAction*)qthis)->requestWidget(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidgetaction.h', line 56, column 14>
//   // proto:  QWidget * QWidgetAction::defaultWidget();
// _ZNK13QWidgetAction13defaultWidgetEv defaultWidget()
extern "C"
void*
C_ZNK13QWidgetAction13defaultWidgetEv(void *qthis) {
  auto ret =
  ((QWidgetAction*)qthis)->defaultWidget();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QWidgetAction_SlotProxy here
class QWidgetAction_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QWidgetAction_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qwidgetaction.moc"

extern "C" {
  QWidgetAction_SlotProxy* QWidgetAction_SlotProxy_new()
  {
    return new QWidgetAction_SlotProxy();
  }
};

// <= body block end

