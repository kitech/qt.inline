//  header block begin
// /usr/include/qt/QtWidgets/qsizegrip.h
#include <qsizegrip.h>
#include <QtWidgets>

// QSizeGrip is pure virtual: false
// QSizeGrip has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:62
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN9QSizeGrip10paintEventEP11QPaintEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN9QSizeGrip10paintEventEP11QPaintEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:63
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:64
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:65
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void* callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent(void*cbfn)
{ callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:66
// [-2] void moveEvent(class QMoveEvent *)
extern "C"
void* callback_ZN9QSizeGrip9moveEventEP10QMoveEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip9moveEventEP10QMoveEvent(void*cbfn)
{ callback_ZN9QSizeGrip9moveEventEP10QMoveEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:67
// [-2] void showEvent(class QShowEvent *)
extern "C"
void* callback_ZN9QSizeGrip9showEventEP10QShowEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip9showEventEP10QShowEvent(void*cbfn)
{ callback_ZN9QSizeGrip9showEventEP10QShowEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:68
// [-2] void hideEvent(class QHideEvent *)
extern "C"
void* callback_ZN9QSizeGrip9hideEventEP10QHideEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip9hideEventEP10QHideEvent(void*cbfn)
{ callback_ZN9QSizeGrip9hideEventEP10QHideEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:69
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:70
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN9QSizeGrip5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN9QSizeGrip5eventEP6QEvent(void*cbfn)
{ callback_ZN9QSizeGrip5eventEP6QEvent_fnptr = cbfn; }

class MyQSizeGrip : public QSizeGrip {
public:
  virtual ~MyQSizeGrip() {}
// void QSizeGrip(class QWidget *)
MyQSizeGrip(QWidget * parent) : QSizeGrip(parent) {}
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN9QSizeGrip10paintEventEP11QPaintEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QSizeGrip::paintEvent(arg0);
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QSizeGrip::mousePressEvent(arg0);
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QSizeGrip::mouseMoveEvent(arg0);
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * mouseEvent) {
    auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , mouseEvent);
    }
    QSizeGrip::mouseReleaseEvent(mouseEvent);
  }
// void moveEvent(class QMoveEvent *)
  virtual void moveEvent(QMoveEvent * moveEvent) {
    auto fnptr = ((void (*)(void* , QMoveEvent *))(callback_ZN9QSizeGrip9moveEventEP10QMoveEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , moveEvent);
    }
    QSizeGrip::moveEvent(moveEvent);
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent) {
    auto fnptr = ((void (*)(void* , QShowEvent *))(callback_ZN9QSizeGrip9showEventEP10QShowEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , showEvent);
    }
    QSizeGrip::showEvent(showEvent);
  }
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * hideEvent) {
    auto fnptr = ((void (*)(void* , QHideEvent *))(callback_ZN9QSizeGrip9hideEventEP10QHideEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , hideEvent);
    }
    QSizeGrip::hideEvent(hideEvent);
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    auto fnptr = ((bool (*)(void* , QObject *, QEvent *))(callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0, arg1);
    }
    return QSizeGrip::eventFilter(arg0, arg1);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN9QSizeGrip5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    return QSizeGrip::event(arg0);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QSizeGrip10metaObjectEv(void *this_) {
  return (void*)((QSizeGrip*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:55
// [-2] void QSizeGrip(class QWidget *)
extern "C"
void* C_ZN9QSizeGripC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSizeGrip*)(0);
  return  new MyQSizeGrip(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:56
// [-2] void ~QSizeGrip()
extern "C"
void C_ZN9QSizeGripD2Ev(void *this_) {
  delete (QSizeGrip*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:58
// [8] QSize sizeHint()
extern "C"
void* C_ZNK9QSizeGrip8sizeHintEv(void *this_) {
  auto rv = ((QSizeGrip*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:59
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN9QSizeGrip10setVisibleEb(void *this_, bool arg0) {
  ((QSizeGrip*)this_)->setVisible(arg0);
}
//  main block end
