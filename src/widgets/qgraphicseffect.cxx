//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

// QGraphicsEffect is pure virtual: true
// QGraphicsEffect has virtual projected: true
//  header block end

//  main block begin
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:99
// [-2] void draw(class QPainter *)
extern "C"
void* callback_ZN15QGraphicsEffect4drawEP8QPainter = 0;
extern "C" void set_callback_ZN15QGraphicsEffect4drawEP8QPainter(void*cbfn)
{ callback_ZN15QGraphicsEffect4drawEP8QPainter = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:100
// [-2] void sourceChanged(QGraphicsEffect::ChangeFlags)
extern "C"
void* callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE = 0;
extern "C" void set_callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE(void*cbfn)
{ callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:101
// [-2] void updateBoundingRect()
extern "C"
void* callback_ZN15QGraphicsEffect18updateBoundingRectEv = 0;
extern "C" void set_callback_ZN15QGraphicsEffect18updateBoundingRectEv(void*cbfn)
{ callback_ZN15QGraphicsEffect18updateBoundingRectEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:103
// [1] bool sourceIsPixmap()
extern "C"
void* callback_ZNK15QGraphicsEffect14sourceIsPixmapEv = 0;
extern "C" void set_callback_ZNK15QGraphicsEffect14sourceIsPixmapEv(void*cbfn)
{ callback_ZNK15QGraphicsEffect14sourceIsPixmapEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:104
// [32] QRectF sourceBoundingRect(Qt::CoordinateSystem)
extern "C"
void* callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE = 0;
extern "C" void set_callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE(void*cbfn)
{ callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:105
// [-2] void drawSource(class QPainter *)
extern "C"
void* callback_ZN15QGraphicsEffect10drawSourceEP8QPainter = 0;
extern "C" void set_callback_ZN15QGraphicsEffect10drawSourceEP8QPainter(void*cbfn)
{ callback_ZN15QGraphicsEffect10drawSourceEP8QPainter = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:106
// [32] QPixmap sourcePixmap(Qt::CoordinateSystem, class QPoint *, enum QGraphicsEffect::PixmapPadMode)
extern "C"
void* callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE = 0;
extern "C" void set_callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE(void*cbfn)
{ callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE = cbfn; }

class MyQGraphicsEffect : public QGraphicsEffect {
public:
  virtual ~MyQGraphicsEffect() {}
// void QGraphicsEffect(class QObject *)
MyQGraphicsEffect(QObject * parent) : QGraphicsEffect(parent) {}
// void draw(class QPainter *)
  virtual void draw(QPainter * painter) {
    if (callback_ZN15QGraphicsEffect4drawEP8QPainter != 0) {
      // callback_ZN15QGraphicsEffect4drawEP8QPainter(painter);
    }
    QGraphicsEffect::draw(painter);
  }
// void sourceChanged(QGraphicsEffect::ChangeFlags)
  virtual void sourceChanged(QFlags<QGraphicsEffect::ChangeFlag> flags) {
    if (callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE != 0) {
      // callback_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE(flags);
    }
    QGraphicsEffect::sourceChanged(flags);
  }
// void updateBoundingRect()
  virtual void updateBoundingRect() {
    if (callback_ZN15QGraphicsEffect18updateBoundingRectEv != 0) {
      // callback_ZN15QGraphicsEffect18updateBoundingRectEv();
    }
    QGraphicsEffect::updateBoundingRect();
  }
// bool sourceIsPixmap()
  virtual bool sourceIsPixmap() {
    if (callback_ZNK15QGraphicsEffect14sourceIsPixmapEv != 0) {
      // callback_ZNK15QGraphicsEffect14sourceIsPixmapEv();
    }
    return QGraphicsEffect::sourceIsPixmap();
  }
// QRectF sourceBoundingRect(Qt::CoordinateSystem)
  virtual QRectF sourceBoundingRect(Qt::CoordinateSystem system) {
    if (callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE != 0) {
      // callback_ZNK15QGraphicsEffect18sourceBoundingRectEN2Qt16CoordinateSystemE(system);
    }
    return QGraphicsEffect::sourceBoundingRect(system);
  }
// void drawSource(class QPainter *)
  virtual void drawSource(QPainter * painter) {
    if (callback_ZN15QGraphicsEffect10drawSourceEP8QPainter != 0) {
      // callback_ZN15QGraphicsEffect10drawSourceEP8QPainter(painter);
    }
    QGraphicsEffect::drawSource(painter);
  }
// QPixmap sourcePixmap(Qt::CoordinateSystem, class QPoint *, enum QGraphicsEffect::PixmapPadMode)
  virtual QPixmap sourcePixmap(Qt::CoordinateSystem system, QPoint * offset, QGraphicsEffect::PixmapPadMode mode) {
    if (callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE != 0) {
      // callback_ZNK15QGraphicsEffect12sourcePixmapEN2Qt16CoordinateSystemEP6QPointNS_13PixmapPadModeE(system, offset, mode);
    }
    return QGraphicsEffect::sourcePixmap(system, offset, mode);
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
void* C_ZNK15QGraphicsEffect15boundingRectForERK6QRectF(void *this_, const QRectF & sourceRect) {
  auto rv = ((QGraphicsEffect*)this_)->boundingRectFor(sourceRect);
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
