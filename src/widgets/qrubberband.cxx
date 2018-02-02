//  header block begin
// /usr/include/qt/QtWidgets/qrubberband.h
#include <qrubberband.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRubberBand is pure virtual: false
// QRubberBand has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN11QRubberBand5eventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN11QRubberBand5eventEP6QEvent(void*cbfn)
// { callback_ZN11QRubberBand5eventEP6QEvent_fnptr = cbfn; }
// void* callback_ZN11QRubberBand10paintEventEP11QPaintEvent_fnptr = 0;
// extern "C" void set_callback_ZN11QRubberBand10paintEventEP11QPaintEvent(void*cbfn)
// { callback_ZN11QRubberBand10paintEventEP11QPaintEvent_fnptr = cbfn; }
// void* callback_ZN11QRubberBand11changeEventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN11QRubberBand11changeEventEP6QEvent(void*cbfn)
// { callback_ZN11QRubberBand11changeEventEP6QEvent_fnptr = cbfn; }
// void* callback_ZN11QRubberBand9showEventEP10QShowEvent_fnptr = 0;
// extern "C" void set_callback_ZN11QRubberBand9showEventEP10QShowEvent(void*cbfn)
// { callback_ZN11QRubberBand9showEventEP10QShowEvent_fnptr = cbfn; }
// void* callback_ZN11QRubberBand11resizeEventEP12QResizeEvent_fnptr = 0;
// extern "C" void set_callback_ZN11QRubberBand11resizeEventEP12QResizeEvent(void*cbfn)
// { callback_ZN11QRubberBand11resizeEventEP12QResizeEvent_fnptr = cbfn; }
// void* callback_ZN11QRubberBand9moveEventEP10QMoveEvent_fnptr = 0;
// extern "C" void set_callback_ZN11QRubberBand9moveEventEP10QMoveEvent(void*cbfn)
// { callback_ZN11QRubberBand9moveEventEP10QMoveEvent_fnptr = cbfn; }
// void* callback_ZNK11QRubberBand15initStyleOptionEP22QStyleOptionRubberBand_fnptr = 0;
// extern "C" void set_callback_ZNK11QRubberBand15initStyleOptionEP22QStyleOptionRubberBand(void*cbfn)
// { callback_ZNK11QRubberBand15initStyleOptionEP22QStyleOptionRubberBand_fnptr = cbfn; }

class MyQRubberBand : public QRubberBand {
public:
  virtual ~MyQRubberBand() {}
// void QRubberBand(enum QRubberBand::Shape, class QWidget *)
MyQRubberBand(QRubberBand::Shape arg0, QWidget * arg1) : QRubberBand(arg0, arg1) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN11QRubberBand5eventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    return QRubberBand::event(e);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN11QRubberBand10paintEventEP11QPaintEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QRubberBand::paintEvent(arg0);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN11QRubberBand11changeEventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QRubberBand::changeEvent(arg0);
  }
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QShowEvent *))(callback_ZN11QRubberBand9showEventEP10QShowEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QRubberBand::showEvent(arg0);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QResizeEvent *))(callback_ZN11QRubberBand11resizeEventEP12QResizeEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QRubberBand::resizeEvent(arg0);
  }
  }
// void moveEvent(class QMoveEvent *)
  virtual void moveEvent(QMoveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMoveEvent *))(callback_ZN11QRubberBand9moveEventEP10QMoveEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QRubberBand::moveEvent(arg0);
  }
  }
// void initStyleOption(class QStyleOptionRubberBand *)
  virtual void initStyleOption(QStyleOptionRubberBand * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QStyleOptionRubberBand *))(callback_ZNK11QRubberBand15initStyleOptionEP22QStyleOptionRubberBand_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , option);
    // }
    QRubberBand::initStyleOption(option);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QRubberBand10metaObjectEv(void *this_) {
  return (void*)((QRubberBand*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:59
// [-2] void QRubberBand(enum QRubberBand::Shape, class QWidget *)
extern "C"
void* C_ZN11QRubberBandC2ENS_5ShapeEP7QWidget(QRubberBand::Shape arg0, QWidget * arg1) {
  auto _nilp = (MyQRubberBand*)(0);
  return  new MyQRubberBand(arg0, arg1);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:60
// [-2] void ~QRubberBand()
extern "C"
void C_ZN11QRubberBandD2Ev(void *this_) {
  delete (QRubberBand*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:62
// [4] QRubberBand::Shape shape()
extern "C"
QRubberBand::Shape C_ZNK11QRubberBand5shapeEv(void *this_) {
  return (QRubberBand::Shape)((QRubberBand*)this_)->shape();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:64
// [-2] void setGeometry(const class QRect &)
extern "C"
void C_ZN11QRubberBand11setGeometryERK5QRect(void *this_, QRect* r) {
  ((QRubberBand*)this_)->setGeometry(*r);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:66
// [-2] void setGeometry(int, int, int, int)
extern "C"
void C_ZN11QRubberBand11setGeometryEiiii(void *this_, int x, int y, int w, int h) {
  ((QRubberBand*)this_)->setGeometry(x, y, w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:67
// [-2] void move(int, int)
extern "C"
void C_ZN11QRubberBand4moveEii(void *this_, int x, int y) {
  ((QRubberBand*)this_)->move(x, y);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:68
// [-2] void move(const class QPoint &)
extern "C"
void C_ZN11QRubberBand4moveERK6QPoint(void *this_, QPoint* p) {
  ((QRubberBand*)this_)->move(*p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:70
// [-2] void resize(int, int)
extern "C"
void C_ZN11QRubberBand6resizeEii(void *this_, int w, int h) {
  ((QRubberBand*)this_)->resize(w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:72
// [-2] void resize(const class QSize &)
extern "C"
void C_ZN11QRubberBand6resizeERK5QSize(void *this_, QSize* s) {
  ((QRubberBand*)this_)->resize(*s);
}
//  main block end
