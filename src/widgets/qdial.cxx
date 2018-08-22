//  header block begin
// /usr/include/qt/QtWidgets/qdial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdial.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDial is pure virtual: false
// QDial has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDial : public QDial {
public:
  virtual ~MyQDial() {}
// void QDial(QWidget *)
MyQDial(QWidget * parent) : QDial(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QDial::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * re)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)re, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::resizeEvent(re);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * pe)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)pe, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::paintEvent(pe);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * me)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::mousePressEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * me)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::mouseReleaseEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * me)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::mouseMoveEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void sliderChange(QAbstractSlider::SliderChange)
  virtual void sliderChange(QAbstractSlider::SliderChange change)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sliderChange", &handled, 1, (uint64_t)change, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::sliderChange(change);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOptionSlider *)
  virtual void initStyleOption(QStyleOptionSlider * option) const  {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:84
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDial5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QDial*)this_)->QDial::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:85
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * re) {
  ((QDial*)this_)->QDial::resizeEvent(re);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:86
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial10paintEventEP11QPaintEvent(void *this_, QPaintEvent * pe) {
  ((QDial*)this_)->QDial::paintEvent(pe);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:88
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mousePressEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:89
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mouseReleaseEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:90
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mouseMoveEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:92
// [-2] void sliderChange(QAbstractSlider::SliderChange)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE(void *this_, QAbstractSlider::SliderChange change) {
  ((QDial*)this_)->QDial::sliderChange(change);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:93
// [-2] void initStyleOption(QStyleOptionSlider *)
extern "C" Q_DECL_EXPORT
void C_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider(void *this_, QStyleOptionSlider * option) {
  ((QDial*)this_)->QDial::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial10metaObjectEv(void *this_) {
  return (void*)((QDial*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDial11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDial*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN5QDial11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDial*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDial2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDial::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDial6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDial::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:64
// [-2] void QDial(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDialC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDial*)(0);
  return  new MyQDial(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:66
// [-2] void ~QDial()
extern "C" Q_DECL_EXPORT
void C_ZN5QDialD2Ev(void *this_) {
  delete (QDial*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:68
// [1] bool wrapping()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QDial8wrappingEv(void *this_) {
  return (bool)((QDial*)this_)->wrapping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:70
// [4] int notchSize()
extern "C" Q_DECL_EXPORT
int C_ZNK5QDial9notchSizeEv(void *this_) {
  return (int)((QDial*)this_)->notchSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:72
// [-2] void setNotchTarget(double)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial14setNotchTargetEd(void *this_, double target) {
  ((QDial*)this_)->setNotchTarget(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:73
// [8] qreal notchTarget()
extern "C" Q_DECL_EXPORT
qreal C_ZNK5QDial11notchTargetEv(void *this_) {
  return (qreal)((QDial*)this_)->notchTarget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:74
// [1] bool notchesVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QDial14notchesVisibleEv(void *this_) {
  return (bool)((QDial*)this_)->notchesVisible();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:76
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial8sizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:77
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial15minimumSizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:80
// [-2] void setNotchesVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial17setNotchesVisibleEb(void *this_, bool visible) {
  ((QDial*)this_)->setNotchesVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:81
// [-2] void setWrapping(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial11setWrappingEb(void *this_, bool on) {
  ((QDial*)this_)->setWrapping(on);
}

//  main block end
