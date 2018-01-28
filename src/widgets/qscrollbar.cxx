//  header block begin
// /usr/include/qt/QtWidgets/qscrollbar.h
#include <qscrollbar.h>
#include <QtWidgets>

// QScrollBar is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:68
// [-2] void wheelEvent(class QWheelEvent *)
extern "C"
void* callback_ZN10QScrollBar10wheelEventEP11QWheelEvent = 0;
extern "C" void set_callback_ZN10QScrollBar10wheelEventEP11QWheelEvent(void*cbfn)
{ callback_ZN10QScrollBar10wheelEventEP11QWheelEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:70
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN10QScrollBar10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN10QScrollBar10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN10QScrollBar10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:71
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN10QScrollBar15mousePressEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN10QScrollBar15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN10QScrollBar15mousePressEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:72
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void* callback_ZN10QScrollBar17mouseReleaseEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN10QScrollBar17mouseReleaseEventEP11QMouseEvent(void*cbfn)
{ callback_ZN10QScrollBar17mouseReleaseEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:73
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN10QScrollBar14mouseMoveEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN10QScrollBar14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN10QScrollBar14mouseMoveEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:74
// [-2] void hideEvent(class QHideEvent *)
extern "C"
void* callback_ZN10QScrollBar9hideEventEP10QHideEvent = 0;
extern "C" void set_callback_ZN10QScrollBar9hideEventEP10QHideEvent(void*cbfn)
{ callback_ZN10QScrollBar9hideEventEP10QHideEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:75
// [-2] void sliderChange(enum QAbstractSlider::SliderChange)
extern "C"
void* callback_ZN10QScrollBar12sliderChangeEN15QAbstractSlider12SliderChangeE = 0;
extern "C" void set_callback_ZN10QScrollBar12sliderChangeEN15QAbstractSlider12SliderChangeE(void*cbfn)
{ callback_ZN10QScrollBar12sliderChangeEN15QAbstractSlider12SliderChangeE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:77
// [-2] void contextMenuEvent(class QContextMenuEvent *)
extern "C"
void* callback_ZN10QScrollBar16contextMenuEventEP17QContextMenuEvent = 0;
extern "C" void set_callback_ZN10QScrollBar16contextMenuEventEP17QContextMenuEvent(void*cbfn)
{ callback_ZN10QScrollBar16contextMenuEventEP17QContextMenuEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:79
// [-2] void initStyleOption(class QStyleOptionSlider *)
extern "C"
void* callback_ZNK10QScrollBar15initStyleOptionEP18QStyleOptionSlider = 0;
extern "C" void set_callback_ZNK10QScrollBar15initStyleOptionEP18QStyleOptionSlider(void*cbfn)
{ callback_ZNK10QScrollBar15initStyleOptionEP18QStyleOptionSlider = cbfn; }

class MyQScrollBar : public QScrollBar {
public:
MyQScrollBar(QWidget * parent) : QScrollBar(parent) {}
MyQScrollBar(Qt::Orientation arg0, QWidget * parent) : QScrollBar(arg0, parent) {}
// void wheelEvent(class QWheelEvent *)
// void wheelEvent(class QWheelEvent *)
virtual void wheelEvent(QWheelEvent * arg0) {
  if (callback_ZN10QScrollBar10wheelEventEP11QWheelEvent != 0) {
  // callback_ZN10QScrollBar10wheelEventEP11QWheelEvent(arg0);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * arg0) {
  if (callback_ZN10QScrollBar10paintEventEP11QPaintEvent != 0) {
  // callback_ZN10QScrollBar10paintEventEP11QPaintEvent(arg0);
}}
// void mousePressEvent(class QMouseEvent *)
// void mousePressEvent(class QMouseEvent *)
virtual void mousePressEvent(QMouseEvent * arg0) {
  if (callback_ZN10QScrollBar15mousePressEventEP11QMouseEvent != 0) {
  // callback_ZN10QScrollBar15mousePressEventEP11QMouseEvent(arg0);
}}
// void mouseReleaseEvent(class QMouseEvent *)
// void mouseReleaseEvent(class QMouseEvent *)
virtual void mouseReleaseEvent(QMouseEvent * arg0) {
  if (callback_ZN10QScrollBar17mouseReleaseEventEP11QMouseEvent != 0) {
  // callback_ZN10QScrollBar17mouseReleaseEventEP11QMouseEvent(arg0);
}}
// void mouseMoveEvent(class QMouseEvent *)
// void mouseMoveEvent(class QMouseEvent *)
virtual void mouseMoveEvent(QMouseEvent * arg0) {
  if (callback_ZN10QScrollBar14mouseMoveEventEP11QMouseEvent != 0) {
  // callback_ZN10QScrollBar14mouseMoveEventEP11QMouseEvent(arg0);
}}
// void hideEvent(class QHideEvent *)
// void hideEvent(class QHideEvent *)
virtual void hideEvent(QHideEvent * arg0) {
  if (callback_ZN10QScrollBar9hideEventEP10QHideEvent != 0) {
  // callback_ZN10QScrollBar9hideEventEP10QHideEvent(arg0);
}}
// void sliderChange(enum QAbstractSlider::SliderChange)
// void sliderChange(enum QAbstractSlider::SliderChange)
virtual void sliderChange(QAbstractSlider::SliderChange change) {
  if (callback_ZN10QScrollBar12sliderChangeEN15QAbstractSlider12SliderChangeE != 0) {
  // callback_ZN10QScrollBar12sliderChangeEN15QAbstractSlider12SliderChangeE(change);
}}
// void contextMenuEvent(class QContextMenuEvent *)
// void contextMenuEvent(class QContextMenuEvent *)
virtual void contextMenuEvent(QContextMenuEvent * arg0) {
  if (callback_ZN10QScrollBar16contextMenuEventEP17QContextMenuEvent != 0) {
  // callback_ZN10QScrollBar16contextMenuEventEP17QContextMenuEvent(arg0);
}}
// void initStyleOption(class QStyleOptionSlider *)
// void initStyleOption(class QStyleOptionSlider *)
virtual void initStyleOption(QStyleOptionSlider * option) {
  if (callback_ZNK10QScrollBar15initStyleOptionEP18QStyleOptionSlider != 0) {
  // callback_ZNK10QScrollBar15initStyleOptionEP18QStyleOptionSlider(option);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QScrollBar10metaObjectEv(void *this_) {
  return (void*)((QScrollBar*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:59
// [-2] void QScrollBar(class QWidget *)
extern "C"
void* C_ZN10QScrollBarC1EP7QWidget(QWidget * parent) {
  (MyQScrollBar*)(0);
  return  new MyQScrollBar(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:60
// [-2] void QScrollBar(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN10QScrollBarC1EN2Qt11OrientationEP7QWidget(Qt::Orientation arg0, QWidget * parent) {
  (MyQScrollBar*)(0);
  return  new MyQScrollBar(arg0, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:61
// [-2] void ~QScrollBar()
extern "C"
void C_ZN10QScrollBarD1Ev(void *this_) {
  delete (QScrollBar*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:63
// [8] QSize sizeHint()
extern "C"
void* C_ZNK10QScrollBar8sizeHintEv(void *this_) {
  auto rv = ((QScrollBar*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:64
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN10QScrollBar5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QScrollBar*)this_)->event(event);
}
//  main block end
