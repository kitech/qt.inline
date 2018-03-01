//  header block begin
// /usr/include/qt/QtWidgets/qsplitter.h
#ifndef protected
#define protected public
#endif
#include <qsplitter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplitterHandle is pure virtual: false
// QSplitterHandle has virtual projected: true
//  header block end

//  main block begin

class MyQSplitterHandle : public QSplitterHandle {
public:
  virtual ~MyQSplitterHandle() {}
// void QSplitterHandle(Qt::Orientation, class QSplitter *)
MyQSplitterHandle(Qt::Orientation o, QSplitter * parent) : QSplitterHandle(o, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitterHandle::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitterHandle::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitterHandle::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitterHandle::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitterHandle::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSplitterHandle::event(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// void moveSplitter(int)
  virtual void moveSplitter(int p) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveSplitter", &handled, 1, (uint64_t)p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitterHandle::moveSplitter(p);
  }
  }

// Protected Visibility=Default Availability=Available
// int closestLegalPosition(int)
  virtual int closestLegalPosition(int p) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closestLegalPosition", &handled, 1, (uint64_t)p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSplitterHandle::closestLegalPosition(p);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:151
// [-2] void paintEvent(class QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:152
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:153
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:154
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:155
// [-2] void resizeEvent(class QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:156
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QSplitterHandle5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QSplitterHandle*)this_)->QSplitterHandle::event(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:158
// [-2] void moveSplitter(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle12moveSplitterEi(void *this_, int p) {
  ((QSplitterHandle*)this_)->QSplitterHandle::moveSplitter(p);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:159
// [4] int closestLegalPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZN15QSplitterHandle20closestLegalPositionEi(void *this_, int p) {
  return (int)((QSplitterHandle*)this_)->QSplitterHandle::closestLegalPosition(p);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:138
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSplitterHandle10metaObjectEv(void *this_) {
  return (void*)((QSplitterHandle*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:140
// [-2] void QSplitterHandle(Qt::Orientation, class QSplitter *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSplitterHandleC2EN2Qt11OrientationEP9QSplitter(Qt::Orientation o, QSplitter * parent) {
  auto _nilp = (MyQSplitterHandle*)(0);
  return  new MyQSplitterHandle(o, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:141
// [-2] void ~QSplitterHandle()
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandleD2Ev(void *this_) {
  delete (QSplitterHandle*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:143
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation o) {
  ((QSplitterHandle*)this_)->setOrientation(o);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:144
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK15QSplitterHandle11orientationEv(void *this_) {
  return (Qt::Orientation)((QSplitterHandle*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:145
// [1] bool opaqueResize()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSplitterHandle12opaqueResizeEv(void *this_) {
  return (bool)((QSplitterHandle*)this_)->opaqueResize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:146
// [8] QSplitter * splitter()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSplitterHandle8splitterEv(void *this_) {
  return (void*)((QSplitterHandle*)this_)->splitter();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:148
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSplitterHandle8sizeHintEv(void *this_) {
  auto rv = ((QSplitterHandle*)this_)->sizeHint();
return new QSize(rv);
}

//  main block end
