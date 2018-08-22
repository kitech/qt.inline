//  header block begin
// /usr/include/qt/QtWidgets/qrubberband.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrubberband.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRubberBand is pure virtual: false
// QRubberBand has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRubberBand : public QRubberBand {
public:
  virtual ~MyQRubberBand() {}
// void QRubberBand(QRubberBand::Shape, QWidget *)
MyQRubberBand(QRubberBand::Shape arg0, QWidget * arg1) : QRubberBand(arg0, arg1) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QRubberBand::event(e);
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
    QRubberBand::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::changeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void moveEvent(QMoveEvent *)
  virtual void moveEvent(QMoveEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::moveEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOptionRubberBand *)
  virtual void initStyleOption(QStyleOptionRubberBand * option) const  {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:76
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QRubberBand5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QRubberBand*)this_)->QRubberBand::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:77
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:78
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:79
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:80
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:81
// [-2] void moveEvent(QMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand9moveEventEP10QMoveEvent(void *this_, QMoveEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::moveEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:82
// [-2] void initStyleOption(QStyleOptionRubberBand *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QRubberBand15initStyleOptionEP22QStyleOptionRubberBand(void *this_, QStyleOptionRubberBand * option) {
  ((QRubberBand*)this_)->QRubberBand::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRubberBand10metaObjectEv(void *this_) {
  return (void*)((QRubberBand*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBand11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRubberBand*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QRubberBand11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRubberBand*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBand2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRubberBand::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBand6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRubberBand::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:59
// [-2] void QRubberBand(QRubberBand::Shape, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBandC2ENS_5ShapeEP7QWidget(QRubberBand::Shape arg0, QWidget * arg1) {
  auto _nilp = (MyQRubberBand*)(0);
  return  new MyQRubberBand(arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:60
// [-2] void ~QRubberBand()
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBandD2Ev(void *this_) {
  delete (QRubberBand*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:62
// [4] QRubberBand::Shape shape()
extern "C" Q_DECL_EXPORT
QRubberBand::Shape C_ZNK11QRubberBand5shapeEv(void *this_) {
  return (QRubberBand::Shape)((QRubberBand*)this_)->shape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:64
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11setGeometryERK5QRect(void *this_, QRect* r) {
  ((QRubberBand*)this_)->setGeometry(*r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:66
// [-2] void setGeometry(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11setGeometryEiiii(void *this_, int x, int y, int w, int h) {
  ((QRubberBand*)this_)->setGeometry(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:67
// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand4moveEii(void *this_, int x, int y) {
  ((QRubberBand*)this_)->move(x, y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:68
// [-2] void move(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand4moveERK6QPoint(void *this_, QPoint* p) {
  ((QRubberBand*)this_)->move(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:70
// [-2] void resize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand6resizeEii(void *this_, int w, int h) {
  ((QRubberBand*)this_)->resize(w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:72
// [-2] void resize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand6resizeERK5QSize(void *this_, QSize* s) {
  ((QRubberBand*)this_)->resize(*s);
}

//  main block end
