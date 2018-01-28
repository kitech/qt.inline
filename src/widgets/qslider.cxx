//  header block begin
// /usr/include/qt/QtWidgets/qslider.h
#include <qslider.h>
#include <QtWidgets>

// QSlider is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:88
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN7QSlider10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN7QSlider10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN7QSlider10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:89
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN7QSlider15mousePressEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN7QSlider15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN7QSlider15mousePressEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:90
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void* callback_ZN7QSlider17mouseReleaseEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN7QSlider17mouseReleaseEventEP11QMouseEvent(void*cbfn)
{ callback_ZN7QSlider17mouseReleaseEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:91
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN7QSlider14mouseMoveEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN7QSlider14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN7QSlider14mouseMoveEventEP11QMouseEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:92
// [-2] void initStyleOption(class QStyleOptionSlider *)
extern "C"
void* callback_ZNK7QSlider15initStyleOptionEP18QStyleOptionSlider = 0;
extern "C" void set_callback_ZNK7QSlider15initStyleOptionEP18QStyleOptionSlider(void*cbfn)
{ callback_ZNK7QSlider15initStyleOptionEP18QStyleOptionSlider = cbfn; }

class MyQSlider : public QSlider {
public:
MyQSlider(QWidget * parent) : QSlider(parent) {}
MyQSlider(Qt::Orientation orientation, QWidget * parent) : QSlider(orientation, parent) {}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * ev) {
  if (callback_ZN7QSlider10paintEventEP11QPaintEvent != 0) {
  // callback_ZN7QSlider10paintEventEP11QPaintEvent(ev);
}}
// void mousePressEvent(class QMouseEvent *)
// void mousePressEvent(class QMouseEvent *)
virtual void mousePressEvent(QMouseEvent * ev) {
  if (callback_ZN7QSlider15mousePressEventEP11QMouseEvent != 0) {
  // callback_ZN7QSlider15mousePressEventEP11QMouseEvent(ev);
}}
// void mouseReleaseEvent(class QMouseEvent *)
// void mouseReleaseEvent(class QMouseEvent *)
virtual void mouseReleaseEvent(QMouseEvent * ev) {
  if (callback_ZN7QSlider17mouseReleaseEventEP11QMouseEvent != 0) {
  // callback_ZN7QSlider17mouseReleaseEventEP11QMouseEvent(ev);
}}
// void mouseMoveEvent(class QMouseEvent *)
// void mouseMoveEvent(class QMouseEvent *)
virtual void mouseMoveEvent(QMouseEvent * ev) {
  if (callback_ZN7QSlider14mouseMoveEventEP11QMouseEvent != 0) {
  // callback_ZN7QSlider14mouseMoveEventEP11QMouseEvent(ev);
}}
// void initStyleOption(class QStyleOptionSlider *)
// void initStyleOption(class QStyleOptionSlider *)
virtual void initStyleOption(QStyleOptionSlider * option) {
  if (callback_ZNK7QSlider15initStyleOptionEP18QStyleOptionSlider != 0) {
  // callback_ZNK7QSlider15initStyleOptionEP18QStyleOptionSlider(option);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QSlider10metaObjectEv(void *this_) {
  return (void*)((QSlider*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:71
// [-2] void QSlider(class QWidget *)
extern "C"
void* C_ZN7QSliderC1EP7QWidget(QWidget * parent) {
  (MyQSlider*)(0);
  return  new MyQSlider(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:72
// [-2] void QSlider(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN7QSliderC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  (MyQSlider*)(0);
  return  new MyQSlider(orientation, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:74
// [-2] void ~QSlider()
extern "C"
void C_ZN7QSliderD1Ev(void *this_) {
  delete (QSlider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:76
// [8] QSize sizeHint()
extern "C"
void* C_ZNK7QSlider8sizeHintEv(void *this_) {
  auto rv = ((QSlider*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:77
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK7QSlider15minimumSizeHintEv(void *this_) {
  auto rv = ((QSlider*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:79
// [-2] void setTickPosition(enum QSlider::TickPosition)
extern "C"
void C_ZN7QSlider15setTickPositionENS_12TickPositionE(void *this_, QSlider::TickPosition position) {
  ((QSlider*)this_)->setTickPosition(position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:80
// [4] QSlider::TickPosition tickPosition()
extern "C"
QSlider::TickPosition C_ZNK7QSlider12tickPositionEv(void *this_) {
  return (QSlider::TickPosition)((QSlider*)this_)->tickPosition();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:82
// [-2] void setTickInterval(int)
extern "C"
void C_ZN7QSlider15setTickIntervalEi(void *this_, int ti) {
  ((QSlider*)this_)->setTickInterval(ti);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:83
// [4] int tickInterval()
extern "C"
int C_ZNK7QSlider12tickIntervalEv(void *this_) {
  return (int)((QSlider*)this_)->tickInterval();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:85
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN7QSlider5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSlider*)this_)->event(event);
}
//  main block end
