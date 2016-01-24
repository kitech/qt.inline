// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qkeyeventtransition.h
// dst-file: /src/widgets/qkeyeventtransition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qkeyeventtransition.h>


#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qkeyeventtransition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QKeyEventTransition_Class_Size()
{
  return sizeof(QKeyEventTransition);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeyeventtransition.h', line 57, column 10>
//   // proto:  void QKeyEventTransition::setKey(int key);
// _ZN19QKeyEventTransition6setKeyEi setKey(int)
extern "C"
void
C_ZN19QKeyEventTransition6setKeyEi(void *qthis,
int arg1) {
  ((QKeyEventTransition*)qthis)->setKey(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeyeventtransition.h', line 47, column 5>
//   // proto:  const QMetaObject * QKeyEventTransition::metaObject();
// _ZNK19QKeyEventTransition10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QKeyEventTransition10metaObjectEv(void *qthis) {
  auto ret =
  ((QKeyEventTransition*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeyeventtransition.h', line 60, column 10>
//   // proto:  void QKeyEventTransition::setModifierMask(Qt::KeyboardModifiers modifiers);
// _ZN19QKeyEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE setModifierMask(Qt::KeyboardModifiers)
extern "C"
void
C_ZN19QKeyEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *qthis,
Qt::KeyboardModifiers* arg1) {
  ((QKeyEventTransition*)qthis)->setModifierMask(*((Qt::KeyboardModifiers*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeyeventtransition.h', line 59, column 27>
//   // proto:  Qt::KeyboardModifiers QKeyEventTransition::modifierMask();
// _ZNK19QKeyEventTransition12modifierMaskEv modifierMask()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZNK19QKeyEventTransition12modifierMaskEv(void *qthis) {
  auto ret =
  ((QKeyEventTransition*)qthis)->modifierMask();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
//   // proto:  void QKeyEventTransition::~QKeyEventTransition();
extern "C"
void C_ZN19QKeyEventTransitionD2Ev(void *qthis) {
  delete (QKeyEventTransition*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeyeventtransition.h', line 56, column 9>
//   // proto:  int QKeyEventTransition::key();
// _ZNK19QKeyEventTransition3keyEv key()
extern "C"
int
C_ZNK19QKeyEventTransition3keyEv(void *qthis) {
  auto ret =
  ((QKeyEventTransition*)qthis)->key();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeyeventtransition.h', line 52, column 5>
//   // proto:  void QKeyEventTransition::QKeyEventTransition(QObject * object, QEvent::Type type, int key, QState * sourceState);
extern "C"
QKeyEventTransition*
C_ZN19QKeyEventTransitionC2EP7QObjectN6QEvent4TypeEiP6QState(QObject * arg1,
QEvent::Type* arg2,
int arg3,
QState * arg4) {
  auto ret = new QKeyEventTransition(arg1,
*((QEvent::Type*)arg2),
arg3,
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeyeventtransition.h', line 51, column 5>
//   // proto:  void QKeyEventTransition::QKeyEventTransition(QState * sourceState);
extern "C"
QKeyEventTransition*
C_ZN19QKeyEventTransitionC2EP6QState(QState * arg1) {
  auto ret = new QKeyEventTransition(arg1);
  return ret;
}
// <= ext block end

// body block begin =>
// QKeyEventTransition_SlotProxy here
class QKeyEventTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QKeyEventTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qkeyeventtransition.moc"

extern "C" {
  QKeyEventTransition_SlotProxy* QKeyEventTransition_SlotProxy_new()
  {
    return new QKeyEventTransition_SlotProxy();
  }
};

// <= body block end

