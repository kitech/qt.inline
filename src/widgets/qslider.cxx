//  header block begin
// /usr/include/qt/QtWidgets/qslider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qslider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSlider is pure virtual: false
// QSlider has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSlider : public QSlider {
public:
  virtual ~MyQSlider() {}
// void QSlider(QWidget *)
MyQSlider(QWidget * parent) : QSlider(parent) {}
// void QSlider(Qt::Orientation, QWidget *)
MyQSlider(Qt::Orientation orientation, QWidget * parent) : QSlider(orientation, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSlider::paintEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSlider::mousePressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSlider::mouseReleaseEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSlider::mouseMoveEvent(ev);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:88
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSlider10paintEventEP11QPaintEvent(void *this_, QPaintEvent * ev) {
  ((QSlider*)this_)->QSlider::paintEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:89
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSlider15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QSlider*)this_)->QSlider::mousePressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:90
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSlider17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QSlider*)this_)->QSlider::mouseReleaseEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:91
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSlider14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QSlider*)this_)->QSlider::mouseMoveEvent(ev);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSlider10metaObjectEv(void *this_) {
  return (void*)((QSlider*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSlider11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSlider*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QSlider11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSlider*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSlider2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSlider::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSlider6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSlider::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:71
// [-2] void QSlider(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSliderC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSlider*)(0);
  return  new MyQSlider(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:72
// [-2] void QSlider(Qt::Orientation, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSliderC2EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQSlider*)(0);
  return  new MyQSlider(orientation, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:74
// [-2] void ~QSlider()
extern "C" Q_DECL_EXPORT
void C_ZN7QSliderD2Ev(void *this_) {
  delete (QSlider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:76
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSlider8sizeHintEv(void *this_) {
  auto rv = ((QSlider*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:77
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSlider15minimumSizeHintEv(void *this_) {
  auto rv = ((QSlider*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:79
// [-2] void setTickPosition(QSlider::TickPosition)
extern "C" Q_DECL_EXPORT
void C_ZN7QSlider15setTickPositionENS_12TickPositionE(void *this_, QSlider::TickPosition position) {
  ((QSlider*)this_)->setTickPosition(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:80
// [4] QSlider::TickPosition tickPosition()
extern "C" Q_DECL_EXPORT
QSlider::TickPosition C_ZNK7QSlider12tickPositionEv(void *this_) {
  return (QSlider::TickPosition)((QSlider*)this_)->tickPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:82
// [-2] void setTickInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QSlider15setTickIntervalEi(void *this_, int ti) {
  ((QSlider*)this_)->setTickInterval(ti);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:83
// [4] int tickInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK7QSlider12tickIntervalEv(void *this_) {
  return (int)((QSlider*)this_)->tickInterval();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:85
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QSlider5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSlider*)this_)->event(event);
}

//  main block end
