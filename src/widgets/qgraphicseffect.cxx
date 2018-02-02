//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsEffect is pure virtual: true
// QGraphicsEffect has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN15QGraphicsEffect4drawEP8QPainter_fnptr = 0;
// extern "C" void set_callback_ZN15QGraphicsEffect4drawEP8QPainter(void*cbfn)
// { callback_ZN15QGraphicsEffect4drawEP8QPainter_fnptr = cbfn; }
// void* callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE_fnptr = 0;
// extern "C" void set_callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE(void*cbfn)
// { callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE_fnptr = cbfn; }
// void* callback_ZN15QGraphicsEffect18updateBoundingRectEv_fnptr = 0;
// extern "C" void set_callback_ZN15QGraphicsEffect18updateBoundingRectEv(void*cbfn)
// { callback_ZN15QGraphicsEffect18updateBoundingRectEv_fnptr = cbfn; }
// void* callback_ZNK15QGraphicsEffect14sourceIsPixmapEv_fnptr = 0;
// extern "C" void set_callback_ZNK15QGraphicsEffect14sourceIsPixmapEv(void*cbfn)
// { callback_ZNK15QGraphicsEffect14sourceIsPixmapEv_fnptr = cbfn; }
// void* callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE_fnptr = 0;
// extern "C" void set_callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE(void*cbfn)
// { callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE_fnptr = cbfn; }
// void* callback_ZN15QGraphicsEffect10drawSourceEP8QPainter_fnptr = 0;
// extern "C" void set_callback_ZN15QGraphicsEffect10drawSourceEP8QPainter(void*cbfn)
// { callback_ZN15QGraphicsEffect10drawSourceEP8QPainter_fnptr = cbfn; }
// void* callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE_fnptr = 0;
// extern "C" void set_callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE(void*cbfn)
// { callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE_fnptr = cbfn; }

class MyQGraphicsEffect : public QGraphicsEffect {
public:
  virtual ~MyQGraphicsEffect() {}
// void QGraphicsEffect(class QObject *)
MyQGraphicsEffect(QObject * parent) : QGraphicsEffect(parent) {}
// void draw(class QPainter *)
  virtual void draw(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPainter *))(callback_ZN15QGraphicsEffect4drawEP8QPainter_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , painter);
    // }
    QGraphicsEffect::draw(painter);
  }
  }
// void sourceChanged(QGraphicsEffect::ChangeFlags)
  virtual void sourceChanged(QFlags<QGraphicsEffect::ChangeFlag> flags) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sourceChanged", &handled, 1, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QFlags<QGraphicsEffect::ChangeFlag>))(callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , flags);
    // }
    QGraphicsEffect::sourceChanged(flags);
  }
  }
// void updateBoundingRect()
  virtual void updateBoundingRect() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateBoundingRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* ))(callback_ZN15QGraphicsEffect18updateBoundingRectEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    QGraphicsEffect::updateBoundingRect();
  }
  }
// bool sourceIsPixmap()
  virtual bool sourceIsPixmap() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sourceIsPixmap", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* ))(callback_ZNK15QGraphicsEffect14sourceIsPixmapEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QGraphicsEffect::sourceIsPixmap();
  }
  }
// QRectF sourceBoundingRect(Qt::CoordinateSystem)
  virtual QRectF sourceBoundingRect(Qt::CoordinateSystem system) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sourceBoundingRect", &handled, 1, (uint64_t)system, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRectF*)(irv);
      // RecordRecordQRectF
    } else {
    // auto fnptr = ((QRectF (*)(void* , Qt::CoordinateSystem))(callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , system);
    // }
    return QGraphicsEffect::sourceBoundingRect(system);
  }
  }
// void drawSource(class QPainter *)
  virtual void drawSource(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawSource", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPainter *))(callback_ZN15QGraphicsEffect10drawSourceEP8QPainter_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , painter);
    // }
    QGraphicsEffect::drawSource(painter);
  }
  }
// QPixmap sourcePixmap(Qt::CoordinateSystem, class QPoint *, enum QGraphicsEffect::PixmapPadMode)
  virtual QPixmap sourcePixmap(Qt::CoordinateSystem system, QPoint * offset, QGraphicsEffect::PixmapPadMode mode) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sourcePixmap", &handled, 3, (uint64_t)system, (uint64_t)offset, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QPixmap*)(irv);
      // RecordRecordQPixmap
    } else {
    // auto fnptr = ((QPixmap (*)(void* , Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode))(callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , system, offset, mode);
    // }
    return QGraphicsEffect::sourcePixmap(system, offset, mode);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QGraphicsEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsEffect*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:82
// [-2] void QGraphicsEffect(class QObject *)
extern "C"
void* C_ZN15QGraphicsEffectC1EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsEffect*)(0);
  return 0; // new MyQGraphicsEffect(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:83
// [-2] void ~QGraphicsEffect()
extern "C"
void C_ZN15QGraphicsEffectD2Ev(void *this_) {
  delete (QGraphicsEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:85
// [32] QRectF boundingRectFor(const class QRectF &)
extern "C"
void* C_ZNK15QGraphicsEffect15boundingRectForERK6QRectF(void *this_, QRectF* sourceRect) {
  auto rv = ((QGraphicsEffect*)this_)->boundingRectFor(*sourceRect);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:86
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK15QGraphicsEffect12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsEffect*)this_)->boundingRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:88
// [1] bool isEnabled()
extern "C"
bool C_ZNK15QGraphicsEffect9isEnabledEv(void *this_) {
  return (bool)((QGraphicsEffect*)this_)->isEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:91
// [-2] void setEnabled(_Bool)
extern "C"
void C_ZN15QGraphicsEffect10setEnabledEb(void *this_, bool enable) {
  ((QGraphicsEffect*)this_)->setEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:92
// [-2] void update()
extern "C"
void C_ZN15QGraphicsEffect6updateEv(void *this_) {
  ((QGraphicsEffect*)this_)->update();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:95
// [-2] void enabledChanged(_Bool)
extern "C"
void C_ZN15QGraphicsEffect14enabledChangedEb(void *this_, bool enabled) {
  ((QGraphicsEffect*)this_)->enabledChanged(enabled);
}
//  main block end
