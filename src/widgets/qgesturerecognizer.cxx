// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qgesturerecognizer.h
// dst-file: /src/widgets/qgesturerecognizer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgesturerecognizer.h>


#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qgesturerecognizer_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGestureRecognizer_Class_Size()
{
  return sizeof(QGestureRecognizer);
}

// <= use block end

// ext block begin =>
//   // proto:  void QGestureRecognizer::~QGestureRecognizer();
extern "C"
void C_ZN18QGestureRecognizerD2Ev(void *qthis) {
  delete (QGestureRecognizer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesturerecognizer.h', line 71, column 5>
//   // proto:  void QGestureRecognizer::QGestureRecognizer();
extern "C"
QGestureRecognizer*
C_ZN18QGestureRecognizerC2Ev() {
  // auto ret = new QGestureRecognizer();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesturerecognizer.h', line 79, column 28>
//   // proto: static Qt::GestureType QGestureRecognizer::registerRecognizer(QGestureRecognizer * recognizer);
// _ZN18QGestureRecognizer18registerRecognizerEPS_ registerRecognizer(class QGestureRecognizer *)
extern "C"
Qt::GestureType
C_ZN18QGestureRecognizer18registerRecognizerEPS_(QGestureRecognizer * arg1) {
  auto ret =
  QGestureRecognizer::registerRecognizer(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesturerecognizer.h', line 77, column 18>
//   // proto:  void QGestureRecognizer::reset(QGesture * state);
// _ZN18QGestureRecognizer5resetEP8QGesture reset(class QGesture *)
extern "C"
void
C_ZN18QGestureRecognizer5resetEP8QGesture(void *qthis,
QGesture * arg1) {
  ((QGestureRecognizer*)qthis)->reset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesturerecognizer.h', line 75, column 20>
//   // proto:  Result QGestureRecognizer::recognize(QGesture * state, QObject * watched, QEvent * event);
// _ZN18QGestureRecognizer9recognizeEP8QGestureP7QObjectP6QEvent recognize(class QGesture *, class QObject *, class QEvent *)
extern "C"
QFlags<QGestureRecognizer::ResultFlag>*
C_ZN18QGestureRecognizer9recognizeEP8QGestureP7QObjectP6QEvent(void *qthis,
QGesture * arg1,
QObject * arg2,
QEvent * arg3) {
  auto ret =
  ((QGestureRecognizer*)qthis)->recognize(arg1,
arg2,
arg3);
  return new QFlags<QGestureRecognizer::ResultFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesturerecognizer.h', line 74, column 23>
//   // proto:  QGesture * QGestureRecognizer::create(QObject * target);
// _ZN18QGestureRecognizer6createEP7QObject create(class QObject *)
extern "C"
void*
C_ZN18QGestureRecognizer6createEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QGestureRecognizer*)qthis)->create(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesturerecognizer.h', line 80, column 17>
//   // proto: static void QGestureRecognizer::unregisterRecognizer(Qt::GestureType type);
// _ZN18QGestureRecognizer20unregisterRecognizerEN2Qt11GestureTypeE unregisterRecognizer(Qt::GestureType)
extern "C"
void
C_ZN18QGestureRecognizer20unregisterRecognizerEN2Qt11GestureTypeE(Qt::GestureType* arg1) {
  QGestureRecognizer::unregisterRecognizer(*((Qt::GestureType*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

