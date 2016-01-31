// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qmouseeventtransition.h
// dst-file: /src/widgets/qmouseeventtransition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmouseeventtransition.h>


#include <qnamespace.h>
#include <qpainterpath.h>
// <= header block end

// main block begin =>
void __keep_qmouseeventtransition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMouseEventTransition_Class_Size()
{
  return sizeof(QMouseEventTransition);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 48, column 5>
//   // proto:  const QMetaObject * QMouseEventTransition::metaObject();
// _ZNK21QMouseEventTransition10metaObjectEv metaObject()
extern "C"
void*
C_ZNK21QMouseEventTransition10metaObjectEv(void *qthis) {
  auto ret =
  ((QMouseEventTransition*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 52, column 5>
//   // proto:  void QMouseEventTransition::QMouseEventTransition(QState * sourceState);
extern "C"
QMouseEventTransition*
C_ZN21QMouseEventTransitionC2EP6QState(QState * arg1) {
  auto ret = new QMouseEventTransition(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 60, column 27>
//   // proto:  Qt::KeyboardModifiers QMouseEventTransition::modifierMask();
// _ZNK21QMouseEventTransition12modifierMaskEv modifierMask()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZNK21QMouseEventTransition12modifierMaskEv(void *qthis) {
  auto ret =
  ((QMouseEventTransition*)qthis)->modifierMask();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 58, column 10>
//   // proto:  void QMouseEventTransition::setButton(Qt::MouseButton button);
// _ZN21QMouseEventTransition9setButtonEN2Qt11MouseButtonE setButton(Qt::MouseButton)
extern "C"
void
C_ZN21QMouseEventTransition9setButtonEN2Qt11MouseButtonE(void *qthis,
Qt::MouseButton* arg1) {
  ((QMouseEventTransition*)qthis)->setButton(*((Qt::MouseButton*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 53, column 5>
//   // proto:  void QMouseEventTransition::QMouseEventTransition(QObject * object, QEvent::Type type, Qt::MouseButton button, QState * sourceState);
extern "C"
QMouseEventTransition*
C_ZN21QMouseEventTransitionC2EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState(QObject * arg1,
QEvent::Type* arg2,
Qt::MouseButton* arg3,
QState * arg4) {
  auto ret = new QMouseEventTransition(arg1,
*((QEvent::Type*)arg2),
*((Qt::MouseButton*)arg3),
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 61, column 10>
//   // proto:  void QMouseEventTransition::setModifierMask(Qt::KeyboardModifiers modifiers);
// _ZN21QMouseEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE setModifierMask(Qt::KeyboardModifiers)
extern "C"
void
C_ZN21QMouseEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *qthis,
Qt::KeyboardModifiers* arg1) {
  ((QMouseEventTransition*)qthis)->setModifierMask(*((Qt::KeyboardModifiers*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 57, column 21>
//   // proto:  Qt::MouseButton QMouseEventTransition::button();
// _ZNK21QMouseEventTransition6buttonEv button()
extern "C"
Qt::MouseButton
C_ZNK21QMouseEventTransition6buttonEv(void *qthis) {
  auto ret =
  ((QMouseEventTransition*)qthis)->button();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 64, column 10>
//   // proto:  void QMouseEventTransition::setHitTestPath(const QPainterPath & path);
// _ZN21QMouseEventTransition14setHitTestPathERK12QPainterPath setHitTestPath(const class QPainterPath &)
extern "C"
void
C_ZN21QMouseEventTransition14setHitTestPathERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  ((QMouseEventTransition*)qthis)->setHitTestPath(*((const QPainterPath*)arg1));
}
//   // proto:  void QMouseEventTransition::~QMouseEventTransition();
extern "C"
void C_ZN21QMouseEventTransitionD2Ev(void *qthis) {
  delete (QMouseEventTransition*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmouseeventtransition.h', line 63, column 18>
//   // proto:  QPainterPath QMouseEventTransition::hitTestPath();
// _ZNK21QMouseEventTransition11hitTestPathEv hitTestPath()
extern "C"
QPainterPath*
C_ZNK21QMouseEventTransition11hitTestPathEv(void *qthis) {
  auto ret =
  ((QMouseEventTransition*)qthis)->hitTestPath();
  return new QPainterPath(ret); // 5
}
// <= ext block end

// body block begin =>
// QMouseEventTransition_SlotProxy here
class QMouseEventTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMouseEventTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qmouseeventtransition.moc"

extern "C" {
  QMouseEventTransition_SlotProxy* QMouseEventTransition_SlotProxy_new()
  {
    return new QMouseEventTransition_SlotProxy();
  }
};

// <= body block end

