//  header block begin
// /usr/include/qt/QtWidgets/qscrollarea.h
#include <qscrollarea.h>
#include <QtWidgets>

// QScrollArea is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:81
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QScrollArea5eventEP6QEvent = 0;
extern "C" void set_callback_ZN11QScrollArea5eventEP6QEvent(void*cbfn)
{ callback_ZN11QScrollArea5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:82
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN11QScrollArea11eventFilterEP7QObjectP6QEvent = 0;
extern "C" void set_callback_ZN11QScrollArea11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN11QScrollArea11eventFilterEP7QObjectP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:83
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN11QScrollArea11resizeEventEP12QResizeEvent = 0;
extern "C" void set_callback_ZN11QScrollArea11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN11QScrollArea11resizeEventEP12QResizeEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:84
// [-2] void scrollContentsBy(int, int)
extern "C"
void* callback_ZN11QScrollArea16scrollContentsByEii = 0;
extern "C" void set_callback_ZN11QScrollArea16scrollContentsByEii(void*cbfn)
{ callback_ZN11QScrollArea16scrollContentsByEii = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:86
// [8] QSize viewportSizeHint()
extern "C"
void* callback_ZNK11QScrollArea16viewportSizeHintEv = 0;
extern "C" void set_callback_ZNK11QScrollArea16viewportSizeHintEv(void*cbfn)
{ callback_ZNK11QScrollArea16viewportSizeHintEv = cbfn; }

class MyQScrollArea : public QScrollArea {
public:
MyQScrollArea(QWidget * parent) : QScrollArea(parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * arg0) {
  if (callback_ZN11QScrollArea5eventEP6QEvent != 0) {
  // callback_ZN11QScrollArea5eventEP6QEvent(arg0);
}}
// bool eventFilter(class QObject *, class QEvent *)
// bool eventFilter(class QObject *, class QEvent *)
virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
  if (callback_ZN11QScrollArea11eventFilterEP7QObjectP6QEvent != 0) {
  // callback_ZN11QScrollArea11eventFilterEP7QObjectP6QEvent(arg0, arg1);
}}
// void resizeEvent(class QResizeEvent *)
// void resizeEvent(class QResizeEvent *)
virtual void resizeEvent(QResizeEvent * arg0) {
  if (callback_ZN11QScrollArea11resizeEventEP12QResizeEvent != 0) {
  // callback_ZN11QScrollArea11resizeEventEP12QResizeEvent(arg0);
}}
// void scrollContentsBy(int, int)
// void scrollContentsBy(int, int)
virtual void scrollContentsBy(int dx, int dy) {
  if (callback_ZN11QScrollArea16scrollContentsByEii != 0) {
  // callback_ZN11QScrollArea16scrollContentsByEii(dx, dy);
}}
// QSize viewportSizeHint()
// QSize viewportSizeHint()
virtual QSize viewportSizeHint() {
  if (callback_ZNK11QScrollArea16viewportSizeHintEv != 0) {
  // callback_ZNK11QScrollArea16viewportSizeHintEv();
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QScrollArea10metaObjectEv(void *this_) {
  return (void*)((QScrollArea*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:59
// [-2] void QScrollArea(class QWidget *)
extern "C"
void* C_ZN11QScrollAreaC1EP7QWidget(QWidget * parent) {
  (MyQScrollArea*)(0);
  return  new MyQScrollArea(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:60
// [-2] void ~QScrollArea()
extern "C"
void C_ZN11QScrollAreaD1Ev(void *this_) {
  delete (QScrollArea*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:62
// [8] QWidget * widget()
extern "C"
void* C_ZNK11QScrollArea6widgetEv(void *this_) {
  return (void*)((QScrollArea*)this_)->widget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:63
// [-2] void setWidget(class QWidget *)
extern "C"
void C_ZN11QScrollArea9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QScrollArea*)this_)->setWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:64
// [8] QWidget * takeWidget()
extern "C"
void* C_ZN11QScrollArea10takeWidgetEv(void *this_) {
  return (void*)((QScrollArea*)this_)->takeWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:66
// [1] bool widgetResizable()
extern "C"
bool C_ZNK11QScrollArea15widgetResizableEv(void *this_) {
  return (bool)((QScrollArea*)this_)->widgetResizable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:67
// [-2] void setWidgetResizable(_Bool)
extern "C"
void C_ZN11QScrollArea18setWidgetResizableEb(void *this_, bool resizable) {
  ((QScrollArea*)this_)->setWidgetResizable(resizable);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:69
// [8] QSize sizeHint()
extern "C"
void* C_ZNK11QScrollArea8sizeHintEv(void *this_) {
  auto rv = ((QScrollArea*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:71
// [1] bool focusNextPrevChild(_Bool)
extern "C"
bool C_ZN11QScrollArea18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QScrollArea*)this_)->focusNextPrevChild(next);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:73
// [4] Qt::Alignment alignment()
extern "C"
Qt::Alignment C_ZNK11QScrollArea9alignmentEv(void *this_) {
  return (Qt::Alignment)((QScrollArea*)this_)->alignment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:76
// [-2] void ensureVisible(int, int, int, int)
extern "C"
void C_ZN11QScrollArea13ensureVisibleEiiii(void *this_, int x, int y, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureVisible(x, y, xmargin, ymargin);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:77
// [-2] void ensureWidgetVisible(class QWidget *, int, int)
extern "C"
void C_ZN11QScrollArea19ensureWidgetVisibleEP7QWidgetii(void *this_, QWidget * childWidget, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureWidgetVisible(childWidget, xmargin, ymargin);
}
//  main block end
