//  header block begin
// /usr/include/qt/QtWidgets/qscrollbar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscrollbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScrollBar is pure virtual: false
// QScrollBar has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQScrollBar : public QScrollBar {
public:
  virtual ~MyQScrollBar() {}
// void QScrollBar(QWidget *)
MyQScrollBar(QWidget * parent) : QScrollBar(parent) {}
// void QScrollBar(Qt::Orientation, QWidget *)
MyQScrollBar(Qt::Orientation arg0, QWidget * parent) : QScrollBar(arg0, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QScrollBar::wheelEvent(arg0);
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
    QScrollBar::paintEvent(arg0);
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
    QScrollBar::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QScrollBar::mouseReleaseEvent(arg0);
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
    QScrollBar::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QScrollBar::hideEvent(arg0);
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
    QScrollBar::sliderChange(change);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QScrollBar::contextMenuEvent(arg0);
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
    QScrollBar::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:68
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * arg0) {
  ((QScrollBar*)this_)->QScrollBar::wheelEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:70
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QScrollBar*)this_)->QScrollBar::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:71
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QScrollBar*)this_)->QScrollBar::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:72
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QScrollBar*)this_)->QScrollBar::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:73
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QScrollBar*)this_)->QScrollBar::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:74
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar9hideEventEP10QHideEvent(void *this_, QHideEvent * arg0) {
  ((QScrollBar*)this_)->QScrollBar::hideEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:75
// [-2] void sliderChange(QAbstractSlider::SliderChange)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar12sliderChangeEN15QAbstractSlider12SliderChangeE(void *this_, QAbstractSlider::SliderChange change) {
  ((QScrollBar*)this_)->QScrollBar::sliderChange(change);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:77
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBar16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QScrollBar*)this_)->QScrollBar::contextMenuEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:79
// [-2] void initStyleOption(QStyleOptionSlider *)
extern "C" Q_DECL_EXPORT
void C_ZNK10QScrollBar15initStyleOptionEP18QStyleOptionSlider(void *this_, QStyleOptionSlider * option) {
  ((QScrollBar*)this_)->QScrollBar::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QScrollBar10metaObjectEv(void *this_) {
  return (void*)((QScrollBar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QScrollBar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QScrollBar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QScrollBar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QScrollBar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QScrollBar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScrollBar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QScrollBar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScrollBar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:59
// [-2] void QScrollBar(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QScrollBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQScrollBar*)(0);
  return  new MyQScrollBar(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:60
// [-2] void QScrollBar(Qt::Orientation, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QScrollBarC2EN2Qt11OrientationEP7QWidget(Qt::Orientation arg0, QWidget * parent) {
  auto _nilp = (MyQScrollBar*)(0);
  return  new MyQScrollBar(arg0, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:61
// [-2] void ~QScrollBar()
extern "C" Q_DECL_EXPORT
void C_ZN10QScrollBarD2Ev(void *this_) {
  delete (QScrollBar*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:63
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QScrollBar8sizeHintEv(void *this_) {
  auto rv = ((QScrollBar*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:64
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QScrollBar5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QScrollBar*)this_)->event(event);
}

//  main block end
