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
void* callback_ZN9QSizeGrip10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN9QSizeGrip10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:63
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:64
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:65
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void* callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent(void*cbfn)
{ callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:66
// [-2] void moveEvent(class QMoveEvent *)
extern "C"
void* callback_ZN9QSizeGrip9moveEventEP10QMoveEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip9moveEventEP10QMoveEvent(void*cbfn)
{ callback_ZN9QSizeGrip9moveEventEP10QMoveEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:67
// [-2] void showEvent(class QShowEvent *)
extern "C"
void* callback_ZN9QSizeGrip9showEventEP10QShowEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip9showEventEP10QShowEvent(void*cbfn)
{ callback_ZN9QSizeGrip9showEventEP10QShowEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:68
// [-2] void hideEvent(class QHideEvent *)
extern "C"
void* callback_ZN9QSizeGrip9hideEventEP10QHideEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip9hideEventEP10QHideEvent(void*cbfn)
{ callback_ZN9QSizeGrip9hideEventEP10QHideEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:69
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:70
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN9QSizeGrip5eventEP6QEvent = 0;
extern "C" void set_callback_ZN9QSizeGrip5eventEP6QEvent(void*cbfn)
{ callback_ZN9QSizeGrip5eventEP6QEvent = cbfn; }

class MyQSizeGrip : public QSizeGrip {
public:
  virtual ~MyQSizeGrip() {}
// void QSizeGrip(class QWidget *)
MyQSizeGrip(QWidget * parent) : QSizeGrip(parent) {}
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    if (callback_ZN9QSizeGrip10paintEventEP11QPaintEvent != 0) {
      // callback_ZN9QSizeGrip10paintEventEP11QPaintEvent(arg0);
    }
    QSizeGrip::paintEvent(arg0);
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    if (callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent != 0) {
      // callback_ZN9QSizeGrip15mousePressEventEP11QMouseEvent(arg0);
    }
    QSizeGrip::mousePressEvent(arg0);
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    if (callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent != 0) {
      // callback_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent(arg0);
    }
    QSizeGrip::mouseMoveEvent(arg0);
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * mouseEvent) {
    if (callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent != 0) {
      // callback_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent(mouseEvent);
    }
    QSizeGrip::mouseReleaseEvent(mouseEvent);
  }
// void moveEvent(class QMoveEvent *)
  virtual void moveEvent(QMoveEvent * moveEvent) {
    if (callback_ZN9QSizeGrip9moveEventEP10QMoveEvent != 0) {
      // callback_ZN9QSizeGrip9moveEventEP10QMoveEvent(moveEvent);
    }
    QSizeGrip::moveEvent(moveEvent);
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent) {
    if (callback_ZN9QSizeGrip9showEventEP10QShowEvent != 0) {
      // callback_ZN9QSizeGrip9showEventEP10QShowEvent(showEvent);
    }
    QSizeGrip::showEvent(showEvent);
  }
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * hideEvent) {
    if (callback_ZN9QSizeGrip9hideEventEP10QHideEvent != 0) {
      // callback_ZN9QSizeGrip9hideEventEP10QHideEvent(hideEvent);
    }
    QSizeGrip::hideEvent(hideEvent);
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    if (callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent != 0) {
      // callback_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent(arg0, arg1);
    }
    return QSizeGrip::eventFilter(arg0, arg1);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    if (callback_ZN9QSizeGrip5eventEP6QEvent != 0) {
      // callback_ZN9QSizeGrip5eventEP6QEvent(arg0);
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
