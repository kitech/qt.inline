//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsEffect is pure virtual: true
// QGraphicsEffect has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsEffect : public QGraphicsEffect {
public:
  virtual ~MyQGraphicsEffect() {}
// void QGraphicsEffect(QObject *)
MyQGraphicsEffect(QObject * parent) : QGraphicsEffect(parent) {}
// void QGraphicsEffect(QGraphicsEffectPrivate &, QObject *)
MyQGraphicsEffect(QGraphicsEffectPrivate & d, QObject * parent) : QGraphicsEffect(d, parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *)
  virtual void draw(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGraphicsEffect::draw(painter);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void sourceChanged(QGraphicsEffect::ChangeFlags)
  virtual void sourceChanged(QFlags<QGraphicsEffect::ChangeFlag> flags) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceChanged", &handled, 1, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsEffect::sourceChanged(flags);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void updateBoundingRect()
  virtual void updateBoundingRect() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateBoundingRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsEffect::updateBoundingRect();
  }
  }

// Protected Visibility=Default Availability=Available
// [1] bool sourceIsPixmap()
  virtual bool sourceIsPixmap() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceIsPixmap", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsEffect::sourceIsPixmap();
  }
  }

// Protected Visibility=Default Availability=Available
// [32] QRectF sourceBoundingRect(Qt::CoordinateSystem)
  virtual QRectF sourceBoundingRect(Qt::CoordinateSystem system) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceBoundingRect", &handled, 1, (uint64_t)system, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRectF*)(irv);
      // Record Record QRectF
    } else {
    return QGraphicsEffect::sourceBoundingRect(system);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void drawSource(QPainter *)
  virtual void drawSource(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawSource", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsEffect::drawSource(painter);
  }
  }

// Protected Visibility=Default Availability=Available
// [32] QPixmap sourcePixmap(Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode)
  virtual QPixmap sourcePixmap(Qt::CoordinateSystem system, QPoint * offset, QGraphicsEffect::PixmapPadMode mode) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourcePixmap", &handled, 3, (uint64_t)system, (uint64_t)offset, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QPixmap*)(irv);
      // Record Record QPixmap
    } else {
    return QGraphicsEffect::sourcePixmap(system, offset, mode);
  }
  }

};

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:99
// [-2] void draw(QPainter *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:100
// [-2] void sourceChanged(QGraphicsEffect::ChangeFlags)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE(void *this_, QFlags<QGraphicsEffect::ChangeFlag> flags) {
  ((QGraphicsEffect*)this_)->QGraphicsEffect::sourceChanged(flags);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:101
// [-2] void updateBoundingRect()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect18updateBoundingRectEv(void *this_) {
  ((QGraphicsEffect*)this_)->QGraphicsEffect::updateBoundingRect();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:103
// [1] bool sourceIsPixmap()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGraphicsEffect14sourceIsPixmapEv(void *this_) {
  return (bool)((QGraphicsEffect*)this_)->QGraphicsEffect::sourceIsPixmap();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:104
// [32] QRectF sourceBoundingRect(Qt::CoordinateSystem)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE(void *this_, Qt::CoordinateSystem system) {
  auto rv = ((QGraphicsEffect*)this_)->QGraphicsEffect::sourceBoundingRect(system);
return new QRectF(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:105
// [-2] void drawSource(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect10drawSourceEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsEffect*)this_)->QGraphicsEffect::drawSource(painter);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:106
// [32] QPixmap sourcePixmap(Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE(void *this_, Qt::CoordinateSystem system, QPoint * offset, QGraphicsEffect::PixmapPadMode mode) {
  auto rv = ((QGraphicsEffect*)this_)->QGraphicsEffect::sourcePixmap(system, offset, mode);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QGraphicsEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:82
// [-2] void QGraphicsEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsEffect*)(0);
  return 0; // new MyQGraphicsEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:83
// [-2] void ~QGraphicsEffect()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffectD2Ev(void *this_) {
  delete (QGraphicsEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:85
// [32] QRectF boundingRectFor(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect15boundingRectForERK6QRectF(void *this_, QRectF* sourceRect) {
  auto rv = ((QGraphicsEffect*)this_)->boundingRectFor(*sourceRect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:86
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsEffect*)this_)->boundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:88
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGraphicsEffect9isEnabledEv(void *this_) {
  return (bool)((QGraphicsEffect*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:91
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect10setEnabledEb(void *this_, bool enable) {
  ((QGraphicsEffect*)this_)->setEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:92
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect6updateEv(void *this_) {
  ((QGraphicsEffect*)this_)->update();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:95
// [-2] void enabledChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect14enabledChangedEb(void *this_, bool enabled) {
  ((QGraphicsEffect*)this_)->enabledChanged(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:120
// [8] QGraphicsEffectSource * source()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect6sourceEv(void *this_) {
  return (void*)((QGraphicsEffect*)this_)->source();
}

//  main block end
