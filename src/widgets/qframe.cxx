//  header block begin
// /usr/include/qt/QtWidgets/qframe.h
#include <qframe.h>
#include <QtWidgets>

// QFrame is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:111
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN6QFrame5eventEP6QEvent = 0;
extern "C" void set_callback_ZN6QFrame5eventEP6QEvent(void*cbfn)
{ callback_ZN6QFrame5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:112
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN6QFrame10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN6QFrame10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN6QFrame10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:113
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN6QFrame11changeEventEP6QEvent = 0;
extern "C" void set_callback_ZN6QFrame11changeEventEP6QEvent(void*cbfn)
{ callback_ZN6QFrame11changeEventEP6QEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:114
// [-2] void drawFrame(class QPainter *)
extern "C"
void* callback_ZN6QFrame9drawFrameEP8QPainter = 0;
extern "C" void set_callback_ZN6QFrame9drawFrameEP8QPainter(void*cbfn)
{ callback_ZN6QFrame9drawFrameEP8QPainter = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:119
// [-2] void initStyleOption(class QStyleOptionFrame *)
extern "C"
void* callback_ZNK6QFrame15initStyleOptionEP17QStyleOptionFrame = 0;
extern "C" void set_callback_ZNK6QFrame15initStyleOptionEP17QStyleOptionFrame(void*cbfn)
{ callback_ZNK6QFrame15initStyleOptionEP17QStyleOptionFrame = cbfn; }

class MyQFrame : public QFrame {
public:
MyQFrame(QWidget * parent, QFlags<Qt::WindowType> f) : QFrame(parent, f) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN6QFrame5eventEP6QEvent != 0) {
  // callback_ZN6QFrame5eventEP6QEvent(e);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * arg0) {
  if (callback_ZN6QFrame10paintEventEP11QPaintEvent != 0) {
  // callback_ZN6QFrame10paintEventEP11QPaintEvent(arg0);
}}
// void changeEvent(class QEvent *)
// void changeEvent(class QEvent *)
virtual void changeEvent(QEvent * arg0) {
  if (callback_ZN6QFrame11changeEventEP6QEvent != 0) {
  // callback_ZN6QFrame11changeEventEP6QEvent(arg0);
}}
// void drawFrame(class QPainter *)
// void drawFrame(class QPainter *)
virtual void drawFrame(QPainter * arg0) {
  if (callback_ZN6QFrame9drawFrameEP8QPainter != 0) {
  // callback_ZN6QFrame9drawFrameEP8QPainter(arg0);
}}
// void initStyleOption(class QStyleOptionFrame *)
// void initStyleOption(class QStyleOptionFrame *)
virtual void initStyleOption(QStyleOptionFrame * option) {
  if (callback_ZNK6QFrame15initStyleOptionEP17QStyleOptionFrame != 0) {
  // callback_ZNK6QFrame15initStyleOptionEP17QStyleOptionFrame(option);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK6QFrame10metaObjectEv(void *this_) {
  return (void*)((QFrame*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:64
// [-2] void QFrame(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN6QFrameC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  (MyQFrame*)(0);
  return  new MyQFrame(parent, f);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:65
// [-2] void ~QFrame()
extern "C"
void C_ZN6QFrameD1Ev(void *this_) {
  delete (QFrame*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:67
// [4] int frameStyle()
extern "C"
int C_ZNK6QFrame10frameStyleEv(void *this_) {
  return (int)((QFrame*)this_)->frameStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:68
// [-2] void setFrameStyle(int)
extern "C"
void C_ZN6QFrame13setFrameStyleEi(void *this_, int arg0) {
  ((QFrame*)this_)->setFrameStyle(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:70
// [4] int frameWidth()
extern "C"
int C_ZNK6QFrame10frameWidthEv(void *this_) {
  return (int)((QFrame*)this_)->frameWidth();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:72
// [8] QSize sizeHint()
extern "C"
void* C_ZNK6QFrame8sizeHintEv(void *this_) {
  auto rv = ((QFrame*)this_)->sizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:96
// [4] QFrame::Shape frameShape()
extern "C"
QFrame::Shape C_ZNK6QFrame10frameShapeEv(void *this_) {
  return (QFrame::Shape)((QFrame*)this_)->frameShape();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:97
// [-2] void setFrameShape(enum QFrame::Shape)
extern "C"
void C_ZN6QFrame13setFrameShapeENS_5ShapeE(void *this_, QFrame::Shape arg0) {
  ((QFrame*)this_)->setFrameShape(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:98
// [4] QFrame::Shadow frameShadow()
extern "C"
QFrame::Shadow C_ZNK6QFrame11frameShadowEv(void *this_) {
  return (QFrame::Shadow)((QFrame*)this_)->frameShadow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:99
// [-2] void setFrameShadow(enum QFrame::Shadow)
extern "C"
void C_ZN6QFrame14setFrameShadowENS_6ShadowE(void *this_, QFrame::Shadow arg0) {
  ((QFrame*)this_)->setFrameShadow(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:101
// [4] int lineWidth()
extern "C"
int C_ZNK6QFrame9lineWidthEv(void *this_) {
  return (int)((QFrame*)this_)->lineWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:102
// [-2] void setLineWidth(int)
extern "C"
void C_ZN6QFrame12setLineWidthEi(void *this_, int arg0) {
  ((QFrame*)this_)->setLineWidth(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:104
// [4] int midLineWidth()
extern "C"
int C_ZNK6QFrame12midLineWidthEv(void *this_) {
  return (int)((QFrame*)this_)->midLineWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:105
// [-2] void setMidLineWidth(int)
extern "C"
void C_ZN6QFrame15setMidLineWidthEi(void *this_, int arg0) {
  ((QFrame*)this_)->setMidLineWidth(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:107
// [16] QRect frameRect()
extern "C"
void* C_ZNK6QFrame9frameRectEv(void *this_) {
  auto rv = ((QFrame*)this_)->frameRect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qframe.h:108
// [-2] void setFrameRect(const class QRect &)
extern "C"
void C_ZN6QFrame12setFrameRectERK5QRect(void *this_, const QRect & arg0) {
  ((QFrame*)this_)->setFrameRect(arg0);
}
//  main block end
