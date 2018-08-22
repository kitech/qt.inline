//  header block begin
// /usr/include/qt/QtWidgets/qfocusframe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfocusframe.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFocusFrame is pure virtual: false
// QFocusFrame has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFocusFrame : public QFocusFrame {
public:
  virtual ~MyQFocusFrame() {}
// void QFocusFrame(QWidget *)
MyQFocusFrame(QWidget * parent) : QFocusFrame(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFocusFrame::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFocusFrame::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFocusFrame::paintEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOption *)
  virtual void initStyleOption(QStyleOption * option) const  {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFocusFrame::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:63
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFocusFrame5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QFocusFrame*)this_)->QFocusFrame::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:65
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QFocusFrame*)this_)->QFocusFrame::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:66
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusFrame10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QFocusFrame*)this_)->QFocusFrame::paintEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:67
// [-2] void initStyleOption(QStyleOption *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption(void *this_, QStyleOption * option) {
  ((QFocusFrame*)this_)->QFocusFrame::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFocusFrame10metaObjectEv(void *this_) {
  return (void*)((QFocusFrame*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrame11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFocusFrame*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QFocusFrame11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFocusFrame*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrame2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFocusFrame::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrame6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFocusFrame::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:56
// [-2] void QFocusFrame(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrameC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQFocusFrame*)(0);
  return  new MyQFocusFrame(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:57
// [-2] void ~QFocusFrame()
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusFrameD2Ev(void *this_) {
  delete (QFocusFrame*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:59
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusFrame9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QFocusFrame*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:60
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFocusFrame6widgetEv(void *this_) {
  return (void*)((QFocusFrame*)this_)->widget();
}

//  main block end
