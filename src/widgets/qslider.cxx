// /usr/include/qt/QtWidgets/qslider.h
#include <qslider.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qslider.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QSlider10metaObjectEv(void *this_) {
  /*return*/ ((QSlider*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qslider.h:70
// void QSlider(class QWidget *)
extern "C"
void* C_ZN7QSliderC1EP7QWidget(QWidget * parent) {
  return new QSlider(parent);
}
// /usr/include/qt/QtWidgets/qslider.h:71
// void QSlider(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN7QSliderC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  return new QSlider(orientation, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qslider.h:73
// void ~QSlider()
extern "C"
void C_ZN7QSliderD1Ev(void *this_) {
  delete (QSlider*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qslider.h:75
// QSize sizeHint()
extern "C"
void C_ZNK7QSlider8sizeHintEv(void *this_) {
  /*return*/ ((QSlider*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qslider.h:76
// QSize minimumSizeHint()
extern "C"
void C_ZNK7QSlider15minimumSizeHintEv(void *this_) {
  /*return*/ ((QSlider*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qslider.h:78
// void setTickPosition(enum QSlider::TickPosition)
extern "C"
void C_ZN7QSlider15setTickPositionENS_12TickPositionE(void *this_, QSlider::TickPosition position) {
  ((QSlider*)this_)->setTickPosition(position);
}
// /usr/include/qt/QtWidgets/qslider.h:79
// QSlider::TickPosition tickPosition()
extern "C"
void C_ZNK7QSlider12tickPositionEv(void *this_) {
  /*return*/ ((QSlider*)this_)->tickPosition();
}
// /usr/include/qt/QtWidgets/qslider.h:81
// void setTickInterval(int)
extern "C"
void C_ZN7QSlider15setTickIntervalEi(void *this_, int ti) {
  ((QSlider*)this_)->setTickInterval(ti);
}
// /usr/include/qt/QtWidgets/qslider.h:82
// int tickInterval()
extern "C"
void C_ZNK7QSlider12tickIntervalEv(void *this_) {
  /*return*/ ((QSlider*)this_)->tickInterval();
}
// virtual
// /usr/include/qt/QtWidgets/qslider.h:84
// bool event(class QEvent *)
extern "C"
void C_ZN7QSlider5eventEP6QEvent(void *this_, QEvent * event) {
  /*return*/ ((QSlider*)this_)->event(event);
}