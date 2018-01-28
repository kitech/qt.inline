//  header block begin
// /usr/include/qt/QtWidgets/qsplitter.h
#include <qsplitter.h>
#include <QtWidgets>

// QSplitterHandle is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:151
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:152
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:153
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:154
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void* callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent(void*cbfn)
{ callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:155
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent = 0;
extern "C" void set_callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:156
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN15QSplitterHandle5eventEP6QEvent = 0;
extern "C" void set_callback_ZN15QSplitterHandle5eventEP6QEvent(void*cbfn)
{ callback_ZN15QSplitterHandle5eventEP6QEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:158
// [-2] void moveSplitter(int)
extern "C"
void* callback_ZN15QSplitterHandle12moveSplitterEi = 0;
extern "C" void set_callback_ZN15QSplitterHandle12moveSplitterEi(void*cbfn)
{ callback_ZN15QSplitterHandle12moveSplitterEi = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:159
// [4] int closestLegalPosition(int)
extern "C"
void* callback_ZN15QSplitterHandle20closestLegalPositionEi = 0;
extern "C" void set_callback_ZN15QSplitterHandle20closestLegalPositionEi(void*cbfn)
{ callback_ZN15QSplitterHandle20closestLegalPositionEi = cbfn; }

class MyQSplitterHandle : public QSplitterHandle {
public:
MyQSplitterHandle(Qt::Orientation o, QSplitter * parent) : QSplitterHandle(o, parent) {}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * arg0) {
  if (callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent != 0) {
  // callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent(arg0);
}}
// void mouseMoveEvent(class QMouseEvent *)
// void mouseMoveEvent(class QMouseEvent *)
virtual void mouseMoveEvent(QMouseEvent * arg0) {
  if (callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent != 0) {
  // callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent(arg0);
}}
// void mousePressEvent(class QMouseEvent *)
// void mousePressEvent(class QMouseEvent *)
virtual void mousePressEvent(QMouseEvent * arg0) {
  if (callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent != 0) {
  // callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent(arg0);
}}
// void mouseReleaseEvent(class QMouseEvent *)
// void mouseReleaseEvent(class QMouseEvent *)
virtual void mouseReleaseEvent(QMouseEvent * arg0) {
  if (callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent != 0) {
  // callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent(arg0);
}}
// void resizeEvent(class QResizeEvent *)
// void resizeEvent(class QResizeEvent *)
virtual void resizeEvent(QResizeEvent * arg0) {
  if (callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent != 0) {
  // callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent(arg0);
}}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * arg0) {
  if (callback_ZN15QSplitterHandle5eventEP6QEvent != 0) {
  // callback_ZN15QSplitterHandle5eventEP6QEvent(arg0);
}}
// void moveSplitter(int)
// void moveSplitter(int)
virtual void moveSplitter(int p) {
  if (callback_ZN15QSplitterHandle12moveSplitterEi != 0) {
  // callback_ZN15QSplitterHandle12moveSplitterEi(p);
}}
// int closestLegalPosition(int)
// int closestLegalPosition(int)
virtual int closestLegalPosition(int p) {
  if (callback_ZN15QSplitterHandle20closestLegalPositionEi != 0) {
  // callback_ZN15QSplitterHandle20closestLegalPositionEi(p);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:138
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QSplitterHandle10metaObjectEv(void *this_) {
  return (void*)((QSplitterHandle*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:140
// [-2] void QSplitterHandle(Qt::Orientation, class QSplitter *)
extern "C"
void* C_ZN15QSplitterHandleC1EN2Qt11OrientationEP9QSplitter(Qt::Orientation o, QSplitter * parent) {
  (MyQSplitterHandle*)(0);
  return  new MyQSplitterHandle(o, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:141
// [-2] void ~QSplitterHandle()
extern "C"
void C_ZN15QSplitterHandleD1Ev(void *this_) {
  delete (QSplitterHandle*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:143
// [-2] void setOrientation(Qt::Orientation)
extern "C"
void C_ZN15QSplitterHandle14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation o) {
  ((QSplitterHandle*)this_)->setOrientation(o);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:144
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK15QSplitterHandle11orientationEv(void *this_) {
  return (Qt::Orientation)((QSplitterHandle*)this_)->orientation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:145
// [1] bool opaqueResize()
extern "C"
bool C_ZNK15QSplitterHandle12opaqueResizeEv(void *this_) {
  return (bool)((QSplitterHandle*)this_)->opaqueResize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:146
// [8] QSplitter * splitter()
extern "C"
void* C_ZNK15QSplitterHandle8splitterEv(void *this_) {
  return (void*)((QSplitterHandle*)this_)->splitter();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:148
// [8] QSize sizeHint()
extern "C"
void* C_ZNK15QSplitterHandle8sizeHintEv(void *this_) {
  auto rv = ((QSplitterHandle*)this_)->sizeHint();
return new QSize(rv);
}
//  main block end
