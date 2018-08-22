//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsObject is pure virtual: false
// QGraphicsObject has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsObject : public QGraphicsObject {
public:
  virtual ~MyQGraphicsObject() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [32] QRectF boundingRect()
  virtual QRectF boundingRect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"boundingRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
  virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paint", &handled, 3, (uint64_t)painter, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGraphicsObject::paint(painter, option, widget);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsObject::event(ev);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:324
// [32] QRectF boundingRect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:344
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:591
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsObject5eventEP6QEvent(void *this_, QEvent * ev) {
  return (bool)((QGraphicsObject*)this_)->QGraphicsObject::event(ev);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsObject10metaObjectEv(void *this_) {
  return (void*)((QGraphicsObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QGraphicsObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:562
// [-2] void ~QGraphicsObject()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObjectD2Ev(void *this_) {
  delete (QGraphicsObject*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:567
// [-2] void grabGesture(Qt::GestureType, Qt::GestureFlags)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject11grabGestureEN2Qt11GestureTypeE6QFlagsINS0_11GestureFlagEE(void *this_, Qt::GestureType type_, QFlags<Qt::GestureFlag> flags) {
  ((QGraphicsObject*)this_)->grabGesture(type_, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:568
// [-2] void ungrabGesture(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject13ungrabGestureEN2Qt11GestureTypeE(void *this_, Qt::GestureType type_) {
  ((QGraphicsObject*)this_)->ungrabGesture(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:575
// [-2] void parentChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject13parentChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->parentChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:576
// [-2] void opacityChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject14opacityChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->opacityChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:577
// [-2] void visibleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject14visibleChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->visibleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:578
// [-2] void enabledChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject14enabledChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->enabledChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:579
// [-2] void xChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject8xChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->xChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:580
// [-2] void yChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject8yChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->yChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:581
// [-2] void zChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject8zChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->zChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:582
// [-2] void rotationChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject15rotationChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->rotationChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:583
// [-2] void scaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject12scaleChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->scaleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:584
// [-2] void childrenChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject15childrenChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->childrenChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:585
// [-2] void widthChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject12widthChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->widthChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:586
// [-2] void heightChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject13heightChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->heightChanged();
}

//  main block end
