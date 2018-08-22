//  header block begin
// /usr/include/qt/QtWidgets/qsizegrip.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsizegrip.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSizeGrip is pure virtual: false
// QSizeGrip has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSizeGrip : public QSizeGrip {
public:
  virtual ~MyQSizeGrip() {}
// void QSizeGrip(QWidget *)
MyQSizeGrip(QWidget * parent) : QSizeGrip(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * mouseEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::mouseReleaseEvent(mouseEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void moveEvent(QMoveEvent *)
  virtual void moveEvent(QMoveEvent * moveEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveEvent", &handled, 1, (uint64_t)moveEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::moveEvent(moveEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)showEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::showEvent(showEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * hideEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)hideEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::hideEvent(hideEvent);
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
    return QSizeGrip::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSizeGrip::event(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:62
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:63
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:64
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:65
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * mouseEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::mouseReleaseEvent(mouseEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:66
// [-2] void moveEvent(QMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip9moveEventEP10QMoveEvent(void *this_, QMoveEvent * moveEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::moveEvent(moveEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:67
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip9showEventEP10QShowEvent(void *this_, QShowEvent * showEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::showEvent(showEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:68
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip9hideEventEP10QHideEvent(void *this_, QHideEvent * hideEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::hideEvent(hideEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:69
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QSizeGrip*)this_)->QSizeGrip::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:70
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSizeGrip5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QSizeGrip*)this_)->QSizeGrip::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSizeGrip10metaObjectEv(void *this_) {
  return (void*)((QSizeGrip*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGrip11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSizeGrip*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QSizeGrip11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSizeGrip*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGrip2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSizeGrip::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGrip6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSizeGrip::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:55
// [-2] void QSizeGrip(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGripC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSizeGrip*)(0);
  return  new MyQSizeGrip(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:56
// [-2] void ~QSizeGrip()
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGripD2Ev(void *this_) {
  delete (QSizeGrip*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:58
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSizeGrip8sizeHintEv(void *this_) {
  auto rv = ((QSizeGrip*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:59
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip10setVisibleEb(void *this_, bool arg0) {
  ((QSizeGrip*)this_)->setVisible(arg0);
}

//  main block end
