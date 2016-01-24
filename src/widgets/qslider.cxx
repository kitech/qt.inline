// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qslider.h
// dst-file: /src/widgets/qslider.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qslider.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qslider_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSlider_Class_Size()
{
  return sizeof(QSlider);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 73, column 18>
//   // proto:  QSlider::TickPosition QSlider::tickPosition();
// _ZNK7QSlider12tickPositionEv tickPosition()
extern "C"
QSlider::TickPosition
C_ZNK7QSlider12tickPositionEv(void *qthis) {
  auto ret =
  ((QSlider*)qthis)->tickPosition();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 48, column 5>
//   // proto:  const QMetaObject * QSlider::metaObject();
// _ZNK7QSlider10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QSlider10metaObjectEv(void *qthis) {
  auto ret =
  ((QSlider*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 72, column 10>
//   // proto:  void QSlider::setTickPosition(QSlider::TickPosition position);
// _ZN7QSlider15setTickPositionENS_12TickPositionE setTickPosition(enum QSlider::TickPosition)
extern "C"
void
C_ZN7QSlider15setTickPositionENS_12TickPositionE(void *qthis,
QSlider::TickPosition arg1) {
  ((QSlider*)qthis)->setTickPosition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 78, column 10>
//   // proto:  bool QSlider::event(QEvent * event);
// _ZN7QSlider5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN7QSlider5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QSlider*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 76, column 9>
//   // proto:  int QSlider::tickInterval();
// _ZNK7QSlider12tickIntervalEv tickInterval()
extern "C"
int
C_ZNK7QSlider12tickIntervalEv(void *qthis) {
  auto ret =
  ((QSlider*)qthis)->tickInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 69, column 11>
//   // proto:  QSize QSlider::sizeHint();
// _ZNK7QSlider8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK7QSlider8sizeHintEv(void *qthis) {
  auto ret =
  ((QSlider*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 75, column 10>
//   // proto:  void QSlider::setTickInterval(int ti);
// _ZN7QSlider15setTickIntervalEi setTickInterval(int)
extern "C"
void
C_ZN7QSlider15setTickIntervalEi(void *qthis,
int arg1) {
  ((QSlider*)qthis)->setTickInterval(arg1);
}
//   // proto:  void QSlider::~QSlider();
extern "C"
void C_ZN7QSliderD2Ev(void *qthis) {
  delete (QSlider*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 65, column 14>
//   // proto:  void QSlider::QSlider(Qt::Orientation orientation, QWidget * parent);
extern "C"
QSlider*
C_ZN7QSliderC2EN2Qt11OrientationEP7QWidget(Qt::Orientation* arg1,
QWidget * arg2) {
  auto ret = new QSlider(*((Qt::Orientation*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 64, column 14>
//   // proto:  void QSlider::QSlider(QWidget * parent);
extern "C"
QSlider*
C_ZN7QSliderC2EP7QWidget(QWidget * arg1) {
  auto ret = new QSlider(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qslider.h', line 70, column 11>
//   // proto:  QSize QSlider::minimumSizeHint();
// _ZNK7QSlider15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK7QSlider15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QSlider*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <= ext block end

// body block begin =>
// QSlider_SlotProxy here
class QSlider_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSlider_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qslider.moc"

extern "C" {
  QSlider_SlotProxy* QSlider_SlotProxy_new()
  {
    return new QSlider_SlotProxy();
  }
};

// <= body block end

