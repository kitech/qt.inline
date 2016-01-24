// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qpauseanimation.h
// dst-file: /src/core/qpauseanimation.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpauseanimation.h>


// <= header block end

// main block begin =>
void __keep_qpauseanimation_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPauseAnimation_Class_Size()
{
  return sizeof(QPauseAnimation);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qpauseanimation.h', line 56, column 10>
//   // proto:  void QPauseAnimation::setDuration(int msecs);
// _ZN15QPauseAnimation11setDurationEi setDuration(int)
extern "C"
void
C_ZN15QPauseAnimation11setDurationEi(void *qthis,
int arg1) {
  ((QPauseAnimation*)qthis)->setDuration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qpauseanimation.h', line 51, column 5>
//   // proto:  void QPauseAnimation::QPauseAnimation(QObject * parent);
extern "C"
QPauseAnimation*
C_ZN15QPauseAnimationC2EP7QObject(QObject * arg1) {
  auto ret = new QPauseAnimation(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpauseanimation.h', line 52, column 5>
//   // proto:  void QPauseAnimation::QPauseAnimation(int msecs, QObject * parent);
extern "C"
QPauseAnimation*
C_ZN15QPauseAnimationC2EiP7QObject(int arg1,
QObject * arg2) {
  auto ret = new QPauseAnimation(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpauseanimation.h', line 55, column 9>
//   // proto:  int QPauseAnimation::duration();
// _ZNK15QPauseAnimation8durationEv duration()
extern "C"
int
C_ZNK15QPauseAnimation8durationEv(void *qthis) {
  auto ret =
  ((QPauseAnimation*)qthis)->duration();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qpauseanimation.h', line 48, column 5>
//   // proto:  const QMetaObject * QPauseAnimation::metaObject();
// _ZNK15QPauseAnimation10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QPauseAnimation10metaObjectEv(void *qthis) {
  auto ret =
  ((QPauseAnimation*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QPauseAnimation::~QPauseAnimation();
extern "C"
void C_ZN15QPauseAnimationD2Ev(void *qthis) {
  delete (QPauseAnimation*)qthis;
}
// <= ext block end

// body block begin =>
// QPauseAnimation_SlotProxy here
class QPauseAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPauseAnimation_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qpauseanimation.moc"

extern "C" {
  QPauseAnimation_SlotProxy* QPauseAnimation_SlotProxy_new()
  {
    return new QPauseAnimation_SlotProxy();
  }
};

// <= body block end

