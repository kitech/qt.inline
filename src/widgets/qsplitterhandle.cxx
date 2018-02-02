//  header block begin
// /usr/include/qt/QtWidgets/qsplitter.h
#include <qsplitter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplitterHandle is pure virtual: false
// QSplitterHandle has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent(void*cbfn)
// { callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent_fnptr = cbfn; }
// void* callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent(void*cbfn)
// { callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent(void*cbfn)
// { callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent(void*cbfn)
// { callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent(void*cbfn)
// { callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent_fnptr = cbfn; }
// void* callback_ZN15QSplitterHandle5eventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle5eventEP6QEvent(void*cbfn)
// { callback_ZN15QSplitterHandle5eventEP6QEvent_fnptr = cbfn; }
// void* callback_ZN15QSplitterHandle12moveSplitterEi_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle12moveSplitterEi(void*cbfn)
// { callback_ZN15QSplitterHandle12moveSplitterEi_fnptr = cbfn; }
// void* callback_ZN15QSplitterHandle20closestLegalPositionEi_fnptr = 0;
// extern "C" void set_callback_ZN15QSplitterHandle20closestLegalPositionEi(void*cbfn)
// { callback_ZN15QSplitterHandle20closestLegalPositionEi_fnptr = cbfn; }

class MyQSplitterHandle : public QSplitterHandle {
public:
  virtual ~MyQSplitterHandle() {}
// void QSplitterHandle(Qt::Orientation, class QSplitter *)
MyQSplitterHandle(Qt::Orientation o, QSplitter * parent) : QSplitterHandle(o, parent) {}
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN15QSplitterHandle10paintEventEP11QPaintEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QSplitterHandle::paintEvent(arg0);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QSplitterHandle::mouseMoveEvent(arg0);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QSplitterHandle::mousePressEvent(arg0);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QSplitterHandle::mouseReleaseEvent(arg0);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QResizeEvent *))(callback_ZN15QSplitterHandle11resizeEventEP12QResizeEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QSplitterHandle::resizeEvent(arg0);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN15QSplitterHandle5eventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    return QSplitterHandle::event(arg0);
  }
  }
// void moveSplitter(int)
  virtual void moveSplitter(int p) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveSplitter", &handled, 1, (uint64_t)p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , int))(callback_ZN15QSplitterHandle12moveSplitterEi_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , p);
    // }
    QSplitterHandle::moveSplitter(p);
  }
  }
// int closestLegalPosition(int)
  virtual int closestLegalPosition(int p) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closestLegalPosition", &handled, 1, (uint64_t)p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    // auto fnptr = ((int (*)(void* , int))(callback_ZN15QSplitterHandle20closestLegalPositionEi_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , p);
    // }
    return QSplitterHandle::closestLegalPosition(p);
  }
  }
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
void* C_ZN15QSplitterHandleC2EN2Qt11OrientationEP9QSplitter(Qt::Orientation o, QSplitter * parent) {
  auto _nilp = (MyQSplitterHandle*)(0);
  return  new MyQSplitterHandle(o, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:141
// [-2] void ~QSplitterHandle()
extern "C"
void C_ZN15QSplitterHandleD2Ev(void *this_) {
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
