// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qgraphicseffect.h
// dst-file: /src/widgets/qgraphicseffect.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicseffect.h>


#include <qglobal.h>
#include <qcolor.h>
#include <qrect.h>
#include <qpoint.h>
#include <qbrush.h>
// <= header block end

// main block begin =>
void __keep_qgraphicseffect_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 224, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setYOffset(qreal dy);
if (true) {
  auto f = [](QGraphicsDropShadowEffect flythis, qreal arg1) {
    ((QGraphicsDropShadowEffect*)0)->setYOffset(arg1);
    flythis.setYOffset(arg1);
  };
  if (f == nullptr){}
}
// _ZN25QGraphicsDropShadowEffect10setYOffsetEd setYOffset(qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 203, column 18>
//   // proto:  qreal QGraphicsDropShadowEffect::xOffset();
if (true) {
  auto f = [](QGraphicsDropShadowEffect flythis) {
    ((QGraphicsDropShadowEffect*)0)->xOffset();
    flythis.xOffset();
  };
  if (f == nullptr){}
}
// _ZNK25QGraphicsDropShadowEffect7xOffsetEv xOffset()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 215, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setOffset(qreal dx, qreal dy);
if (true) {
  auto f = [](QGraphicsDropShadowEffect flythis, qreal arg1, qreal arg2) {
    ((QGraphicsDropShadowEffect*)0)->setOffset(arg1, arg2);
    flythis.setOffset(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN25QGraphicsDropShadowEffect9setOffsetEdd setOffset(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 218, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setOffset(qreal d);
if (true) {
  auto f = [](QGraphicsDropShadowEffect flythis, qreal arg1) {
    ((QGraphicsDropShadowEffect*)0)->setOffset(arg1);
    flythis.setOffset(arg1);
  };
  if (f == nullptr){}
}
// _ZN25QGraphicsDropShadowEffect9setOffsetEd setOffset(qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 206, column 18>
//   // proto:  qreal QGraphicsDropShadowEffect::yOffset();
if (true) {
  auto f = [](QGraphicsDropShadowEffect flythis) {
    ((QGraphicsDropShadowEffect*)0)->yOffset();
    flythis.yOffset();
  };
  if (f == nullptr){}
}
// _ZNK25QGraphicsDropShadowEffect7yOffsetEv yOffset()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 221, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setXOffset(qreal dx);
if (true) {
  auto f = [](QGraphicsDropShadowEffect flythis, qreal arg1) {
    ((QGraphicsDropShadowEffect*)0)->setXOffset(arg1);
    flythis.setXOffset(arg1);
  };
  if (f == nullptr){}
}
// _ZN25QGraphicsDropShadowEffect10setXOffsetEd setXOffset(qreal)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsColorizeEffect_Class_Size()
{
  return sizeof(QGraphicsColorizeEffect);
}

extern "C"
int QGraphicsEffect_Class_Size()
{
  return sizeof(QGraphicsEffect);
}

extern "C"
int QGraphicsDropShadowEffect_Class_Size()
{
  return sizeof(QGraphicsDropShadowEffect);
}

extern "C"
int QGraphicsOpacityEffect_Class_Size()
{
  return sizeof(QGraphicsOpacityEffect);
}

extern "C"
int QGraphicsBlurEffect_Class_Size()
{
  return sizeof(QGraphicsBlurEffect);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 132, column 10>
//   // proto:  void QGraphicsColorizeEffect::setColor(const QColor & c);
// _ZN23QGraphicsColorizeEffect8setColorERK6QColor setColor(const class QColor &)
extern "C"
void
C_ZN23QGraphicsColorizeEffect8setColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QGraphicsColorizeEffect*)qthis)->setColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 137, column 10>
//   // proto:  void QGraphicsColorizeEffect::strengthChanged(qreal strength);
// _ZN23QGraphicsColorizeEffect15strengthChangedEd strengthChanged(qreal)
extern "C"
void
C_ZN23QGraphicsColorizeEffect15strengthChangedEd(void *qthis,
qreal arg1) {
  ((QGraphicsColorizeEffect*)qthis)->strengthChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 133, column 10>
//   // proto:  void QGraphicsColorizeEffect::setStrength(qreal strength);
// _ZN23QGraphicsColorizeEffect11setStrengthEd setStrength(qreal)
extern "C"
void
C_ZN23QGraphicsColorizeEffect11setStrengthEd(void *qthis,
qreal arg1) {
  ((QGraphicsColorizeEffect*)qthis)->setStrength(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 125, column 5>
//   // proto:  void QGraphicsColorizeEffect::QGraphicsColorizeEffect(QObject * parent);
extern "C"
QGraphicsColorizeEffect*
C_ZN23QGraphicsColorizeEffectC2EP7QObject(QObject * arg1) {
  auto ret = new QGraphicsColorizeEffect(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 129, column 11>
//   // proto:  qreal QGraphicsColorizeEffect::strength();
// _ZNK23QGraphicsColorizeEffect8strengthEv strength()
extern "C"
double
C_ZNK23QGraphicsColorizeEffect8strengthEv(void *qthis) {
  auto ret =
  ((QGraphicsColorizeEffect*)qthis)->strength();
  return ret; // 0 TypeKind.DOUBLE
}
//   // proto:  void QGraphicsColorizeEffect::~QGraphicsColorizeEffect();
extern "C"
void C_ZN23QGraphicsColorizeEffectD2Ev(void *qthis) {
  delete (QGraphicsColorizeEffect*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 136, column 10>
//   // proto:  void QGraphicsColorizeEffect::colorChanged(const QColor & color);
// _ZN23QGraphicsColorizeEffect12colorChangedERK6QColor colorChanged(const class QColor &)
extern "C"
void
C_ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(void *qthis,
const QColor* arg1) {
  ((QGraphicsColorizeEffect*)qthis)->colorChanged(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 128, column 12>
//   // proto:  QColor QGraphicsColorizeEffect::color();
// _ZNK23QGraphicsColorizeEffect5colorEv color()
extern "C"
QColor*
C_ZNK23QGraphicsColorizeEffect5colorEv(void *qthis) {
  auto ret =
  ((QGraphicsColorizeEffect*)qthis)->color();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 121, column 5>
//   // proto:  const QMetaObject * QGraphicsColorizeEffect::metaObject();
// _ZNK23QGraphicsColorizeEffect10metaObjectEv metaObject()
extern "C"
void*
C_ZNK23QGraphicsColorizeEffect10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsColorizeEffect*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 78, column 20>
//   // proto:  QRectF QGraphicsEffect::boundingRectFor(const QRectF & sourceRect);
// _ZNK15QGraphicsEffect15boundingRectForERK6QRectF boundingRectFor(const class QRectF &)
extern "C"
QRectF*
C_ZNK15QGraphicsEffect15boundingRectForERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsEffect*)qthis)->boundingRectFor(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 113, column 28>
//   // proto:  QGraphicsEffectSource * QGraphicsEffect::source();
// _ZNK15QGraphicsEffect6sourceEv source()
extern "C"
void*
C_ZNK15QGraphicsEffect6sourceEv(void *qthis) {
  auto ret =
  ((QGraphicsEffect*)qthis)->source();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 85, column 10>
//   // proto:  void QGraphicsEffect::update();
// _ZN15QGraphicsEffect6updateEv update()
extern "C"
void
C_ZN15QGraphicsEffect6updateEv(void *qthis) {
  ((QGraphicsEffect*)qthis)->update();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 84, column 10>
//   // proto:  void QGraphicsEffect::setEnabled(bool enable);
// _ZN15QGraphicsEffect10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN15QGraphicsEffect10setEnabledEb(void *qthis,
bool arg1) {
  ((QGraphicsEffect*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 88, column 10>
//   // proto:  void QGraphicsEffect::enabledChanged(bool enabled);
// _ZN15QGraphicsEffect14enabledChangedEb enabledChanged(_Bool)
extern "C"
void
C_ZN15QGraphicsEffect14enabledChangedEb(void *qthis,
bool arg1) {
  ((QGraphicsEffect*)qthis)->enabledChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 57, column 5>
//   // proto:  const QMetaObject * QGraphicsEffect::metaObject();
// _ZNK15QGraphicsEffect10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QGraphicsEffect10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsEffect*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 81, column 10>
//   // proto:  bool QGraphicsEffect::isEnabled();
// _ZNK15QGraphicsEffect9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK15QGraphicsEffect9isEnabledEv(void *qthis) {
  auto ret =
  ((QGraphicsEffect*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 79, column 12>
//   // proto:  QRectF QGraphicsEffect::boundingRect();
// _ZNK15QGraphicsEffect12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK15QGraphicsEffect12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsEffect*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
//   // proto:  void QGraphicsEffect::~QGraphicsEffect();
extern "C"
void C_ZN15QGraphicsEffectD2Ev(void *qthis) {
  delete (QGraphicsEffect*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 75, column 5>
//   // proto:  void QGraphicsEffect::QGraphicsEffect(QObject * parent);
extern "C"
QGraphicsEffect*
C_ZN15QGraphicsEffectC2EP7QObject(QObject * arg1) {
  // auto ret = new QGraphicsEffect(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 232, column 10>
//   // proto:  void QGraphicsDropShadowEffect::blurRadiusChanged(qreal blurRadius);
// _ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd blurRadiusChanged(qreal)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(void *qthis,
qreal arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->blurRadiusChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 190, column 5>
//   // proto:  const QMetaObject * QGraphicsDropShadowEffect::metaObject();
// _ZNK25QGraphicsDropShadowEffect10metaObjectEv metaObject()
extern "C"
void*
C_ZNK25QGraphicsDropShadowEffect10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsDropShadowEffect*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 200, column 12>
//   // proto:  QRectF QGraphicsDropShadowEffect::boundingRectFor(const QRectF & rect);
// _ZNK25QGraphicsDropShadowEffect15boundingRectForERK6QRectF boundingRectFor(const class QRectF &)
extern "C"
QRectF*
C_ZNK25QGraphicsDropShadowEffect15boundingRectForERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsDropShadowEffect*)qthis)->boundingRectFor(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 197, column 5>
//   // proto:  void QGraphicsDropShadowEffect::QGraphicsDropShadowEffect(QObject * parent);
extern "C"
QGraphicsDropShadowEffect*
C_ZN25QGraphicsDropShadowEffectC2EP7QObject(QObject * arg1) {
  auto ret = new QGraphicsDropShadowEffect(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 201, column 13>
//   // proto:  QPointF QGraphicsDropShadowEffect::offset();
// _ZNK25QGraphicsDropShadowEffect6offsetEv offset()
extern "C"
QPointF*
C_ZNK25QGraphicsDropShadowEffect6offsetEv(void *qthis) {
  auto ret =
  ((QGraphicsDropShadowEffect*)qthis)->offset();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 224, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setYOffset(qreal dy);
// _ZN25QGraphicsDropShadowEffect10setYOffsetEd setYOffset(qreal)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect10setYOffsetEd(void *qthis,
qreal arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->setYOffset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 203, column 18>
//   // proto:  qreal QGraphicsDropShadowEffect::xOffset();
// _ZNK25QGraphicsDropShadowEffect7xOffsetEv xOffset()
extern "C"
double
C_ZNK25QGraphicsDropShadowEffect7xOffsetEv(void *qthis) {
  auto ret =
  ((QGraphicsDropShadowEffect*)qthis)->xOffset();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 209, column 11>
//   // proto:  qreal QGraphicsDropShadowEffect::blurRadius();
// _ZNK25QGraphicsDropShadowEffect10blurRadiusEv blurRadius()
extern "C"
double
C_ZNK25QGraphicsDropShadowEffect10blurRadiusEv(void *qthis) {
  auto ret =
  ((QGraphicsDropShadowEffect*)qthis)->blurRadius();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 210, column 12>
//   // proto:  QColor QGraphicsDropShadowEffect::color();
// _ZNK25QGraphicsDropShadowEffect5colorEv color()
extern "C"
QColor*
C_ZNK25QGraphicsDropShadowEffect5colorEv(void *qthis) {
  auto ret =
  ((QGraphicsDropShadowEffect*)qthis)->color();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 228, column 10>
//   // proto:  void QGraphicsDropShadowEffect::setColor(const QColor & color);
// _ZN25QGraphicsDropShadowEffect8setColorERK6QColor setColor(const class QColor &)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect8setColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->setColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 213, column 10>
//   // proto:  void QGraphicsDropShadowEffect::setOffset(const QPointF & ofs);
// _ZN25QGraphicsDropShadowEffect9setOffsetERK7QPointF setOffset(const class QPointF &)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect9setOffsetERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->setOffset(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 231, column 10>
//   // proto:  void QGraphicsDropShadowEffect::offsetChanged(const QPointF & offset);
// _ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF offsetChanged(const class QPointF &)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->offsetChanged(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 215, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setOffset(qreal dx, qreal dy);
// _ZN25QGraphicsDropShadowEffect9setOffsetEdd setOffset(qreal, qreal)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect9setOffsetEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsDropShadowEffect*)qthis)->setOffset(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 218, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setOffset(qreal d);
// _ZN25QGraphicsDropShadowEffect9setOffsetEd setOffset(qreal)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect9setOffsetEd(void *qthis,
qreal arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->setOffset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 233, column 10>
//   // proto:  void QGraphicsDropShadowEffect::colorChanged(const QColor & color);
// _ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor colorChanged(const class QColor &)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(void *qthis,
const QColor* arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->colorChanged(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 206, column 18>
//   // proto:  qreal QGraphicsDropShadowEffect::yOffset();
// _ZNK25QGraphicsDropShadowEffect7yOffsetEv yOffset()
extern "C"
double
C_ZNK25QGraphicsDropShadowEffect7yOffsetEv(void *qthis) {
  auto ret =
  ((QGraphicsDropShadowEffect*)qthis)->yOffset();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 221, column 17>
//   // proto:  void QGraphicsDropShadowEffect::setXOffset(qreal dx);
// _ZN25QGraphicsDropShadowEffect10setXOffsetEd setXOffset(qreal)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect10setXOffsetEd(void *qthis,
qreal arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->setXOffset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 227, column 10>
//   // proto:  void QGraphicsDropShadowEffect::setBlurRadius(qreal blurRadius);
// _ZN25QGraphicsDropShadowEffect13setBlurRadiusEd setBlurRadius(qreal)
extern "C"
void
C_ZN25QGraphicsDropShadowEffect13setBlurRadiusEd(void *qthis,
qreal arg1) {
  ((QGraphicsDropShadowEffect*)qthis)->setBlurRadius(arg1);
}
//   // proto:  void QGraphicsDropShadowEffect::~QGraphicsDropShadowEffect();
extern "C"
void C_ZN25QGraphicsDropShadowEffectD2Ev(void *qthis) {
  delete (QGraphicsDropShadowEffect*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 250, column 5>
//   // proto:  void QGraphicsOpacityEffect::QGraphicsOpacityEffect(QObject * parent);
extern "C"
QGraphicsOpacityEffect*
C_ZN22QGraphicsOpacityEffectC2EP7QObject(QObject * arg1) {
  auto ret = new QGraphicsOpacityEffect(arg1);
  return ret;
}
//   // proto:  void QGraphicsOpacityEffect::~QGraphicsOpacityEffect();
extern "C"
void C_ZN22QGraphicsOpacityEffectD2Ev(void *qthis) {
  delete (QGraphicsOpacityEffect*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 258, column 10>
//   // proto:  void QGraphicsOpacityEffect::setOpacityMask(const QBrush & mask);
// _ZN22QGraphicsOpacityEffect14setOpacityMaskERK6QBrush setOpacityMask(const class QBrush &)
extern "C"
void
C_ZN22QGraphicsOpacityEffect14setOpacityMaskERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QGraphicsOpacityEffect*)qthis)->setOpacityMask(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 254, column 12>
//   // proto:  QBrush QGraphicsOpacityEffect::opacityMask();
// _ZNK22QGraphicsOpacityEffect11opacityMaskEv opacityMask()
extern "C"
QBrush*
C_ZNK22QGraphicsOpacityEffect11opacityMaskEv(void *qthis) {
  auto ret =
  ((QGraphicsOpacityEffect*)qthis)->opacityMask();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 261, column 10>
//   // proto:  void QGraphicsOpacityEffect::opacityChanged(qreal opacity);
// _ZN22QGraphicsOpacityEffect14opacityChangedEd opacityChanged(qreal)
extern "C"
void
C_ZN22QGraphicsOpacityEffect14opacityChangedEd(void *qthis,
qreal arg1) {
  ((QGraphicsOpacityEffect*)qthis)->opacityChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 262, column 10>
//   // proto:  void QGraphicsOpacityEffect::opacityMaskChanged(const QBrush & mask);
// _ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush opacityMaskChanged(const class QBrush &)
extern "C"
void
C_ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QGraphicsOpacityEffect*)qthis)->opacityMaskChanged(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 246, column 5>
//   // proto:  const QMetaObject * QGraphicsOpacityEffect::metaObject();
// _ZNK22QGraphicsOpacityEffect10metaObjectEv metaObject()
extern "C"
void*
C_ZNK22QGraphicsOpacityEffect10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsOpacityEffect*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 253, column 11>
//   // proto:  qreal QGraphicsOpacityEffect::opacity();
// _ZNK22QGraphicsOpacityEffect7opacityEv opacity()
extern "C"
double
C_ZNK22QGraphicsOpacityEffect7opacityEv(void *qthis) {
  auto ret =
  ((QGraphicsOpacityEffect*)qthis)->opacity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 257, column 10>
//   // proto:  void QGraphicsOpacityEffect::setOpacity(qreal opacity);
// _ZN22QGraphicsOpacityEffect10setOpacityEd setOpacity(qreal)
extern "C"
void
C_ZN22QGraphicsOpacityEffect10setOpacityEd(void *qthis,
qreal arg1) {
  ((QGraphicsOpacityEffect*)qthis)->setOpacity(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 167, column 15>
//   // proto:  BlurHints QGraphicsBlurEffect::blurHints();
// _ZNK19QGraphicsBlurEffect9blurHintsEv blurHints()
extern "C"
QFlags<QGraphicsBlurEffect::BlurHint>*
C_ZNK19QGraphicsBlurEffect9blurHintsEv(void *qthis) {
  auto ret =
  ((QGraphicsBlurEffect*)qthis)->blurHints();
  return new QFlags<QGraphicsBlurEffect::BlurHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 171, column 10>
//   // proto:  void QGraphicsBlurEffect::setBlurHints(BlurHints hints);
// _ZN19QGraphicsBlurEffect12setBlurHintsE6QFlagsINS_8BlurHintEE setBlurHints(BlurHints)
extern "C"
void
C_ZN19QGraphicsBlurEffect12setBlurHintsE6QFlagsINS_8BlurHintEE(void *qthis,
QGraphicsBlurEffect::BlurHints arg1) {
  ((QGraphicsBlurEffect*)qthis)->setBlurHints(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 166, column 11>
//   // proto:  qreal QGraphicsBlurEffect::blurRadius();
// _ZNK19QGraphicsBlurEffect10blurRadiusEv blurRadius()
extern "C"
double
C_ZNK19QGraphicsBlurEffect10blurRadiusEv(void *qthis) {
  auto ret =
  ((QGraphicsBlurEffect*)qthis)->blurRadius();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 170, column 10>
//   // proto:  void QGraphicsBlurEffect::setBlurRadius(qreal blurRadius);
// _ZN19QGraphicsBlurEffect13setBlurRadiusEd setBlurRadius(qreal)
extern "C"
void
C_ZN19QGraphicsBlurEffect13setBlurRadiusEd(void *qthis,
qreal arg1) {
  ((QGraphicsBlurEffect*)qthis)->setBlurRadius(arg1);
}
//   // proto:  void QGraphicsBlurEffect::~QGraphicsBlurEffect();
extern "C"
void C_ZN19QGraphicsBlurEffectD2Ev(void *qthis) {
  delete (QGraphicsBlurEffect*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 150, column 5>
//   // proto:  const QMetaObject * QGraphicsBlurEffect::metaObject();
// _ZNK19QGraphicsBlurEffect10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QGraphicsBlurEffect10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsBlurEffect*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 165, column 12>
//   // proto:  QRectF QGraphicsBlurEffect::boundingRectFor(const QRectF & rect);
// _ZNK19QGraphicsBlurEffect15boundingRectForERK6QRectF boundingRectFor(const class QRectF &)
extern "C"
QRectF*
C_ZNK19QGraphicsBlurEffect15boundingRectForERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsBlurEffect*)qthis)->boundingRectFor(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 175, column 10>
//   // proto:  void QGraphicsBlurEffect::blurHintsChanged(BlurHints hints);
// _ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE blurHintsChanged(BlurHints)
extern "C"
void
C_ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(void *qthis,
QGraphicsBlurEffect::BlurHints arg1) {
  ((QGraphicsBlurEffect*)qthis)->blurHintsChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 162, column 5>
//   // proto:  void QGraphicsBlurEffect::QGraphicsBlurEffect(QObject * parent);
extern "C"
QGraphicsBlurEffect*
C_ZN19QGraphicsBlurEffectC2EP7QObject(QObject * arg1) {
  auto ret = new QGraphicsBlurEffect(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicseffect.h', line 174, column 10>
//   // proto:  void QGraphicsBlurEffect::blurRadiusChanged(qreal blurRadius);
// _ZN19QGraphicsBlurEffect17blurRadiusChangedEd blurRadiusChanged(qreal)
extern "C"
void
C_ZN19QGraphicsBlurEffect17blurRadiusChangedEd(void *qthis,
qreal arg1) {
  ((QGraphicsBlurEffect*)qthis)->blurRadiusChanged(arg1);
}
// <= ext block end

// body block begin =>
// QGraphicsColorizeEffect_SlotProxy here
class QGraphicsColorizeEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsColorizeEffect_SlotProxy():QObject(){}

public slots:
  // strengthChanged(qreal)
  void slot_proxy_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(qreal arg0);
public:
  void (*slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // colorChanged(const class QColor &)
  void slot_proxy_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsColorizeEffect_SlotProxy* QGraphicsColorizeEffect_SlotProxy_new()
  {
    return new QGraphicsColorizeEffect_SlotProxy();
  }
};

void QGraphicsColorizeEffect_SlotProxy::slot_proxy_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(qreal arg0) {
  if (this->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsColorizeEffect_SlotProxy_connect__ZN23QGraphicsColorizeEffect15strengthChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsColorizeEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd = (decltype(that->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd))ffifptr;
  QObject::connect((QGraphicsColorizeEffect*)sender, SIGNAL(strengthChanged(qreal)), that, SLOT(slot_proxy_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsColorizeEffect_SlotProxy_disconnect__ZN23QGraphicsColorizeEffect15strengthChangedEd(QGraphicsColorizeEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsColorizeEffect_SlotProxy::slot_proxy_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsColorizeEffect_SlotProxy_connect__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsColorizeEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor = (decltype(that->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor))ffifptr;
  QObject::connect((QGraphicsColorizeEffect*)sender, SIGNAL(colorChanged(const class QColor &)), that, SLOT(slot_proxy_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QGraphicsColorizeEffect_SlotProxy_disconnect__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(QGraphicsColorizeEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsEffect_SlotProxy here
class QGraphicsEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsEffect_SlotProxy():QObject(){}

public slots:
  // enabledChanged(_Bool)
  void slot_proxy_func__ZN15QGraphicsEffect14enabledChangedEb(bool arg0);
public:
  void (*slot_func__ZN15QGraphicsEffect14enabledChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsEffect_SlotProxy* QGraphicsEffect_SlotProxy_new()
  {
    return new QGraphicsEffect_SlotProxy();
  }
};

void QGraphicsEffect_SlotProxy::slot_proxy_func__ZN15QGraphicsEffect14enabledChangedEb(bool arg0) {
  if (this->slot_func__ZN15QGraphicsEffect14enabledChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsEffect14enabledChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsEffect_SlotProxy_connect__ZN15QGraphicsEffect14enabledChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsEffect14enabledChangedEb = (decltype(that->slot_func__ZN15QGraphicsEffect14enabledChangedEb))ffifptr;
  QObject::connect((QGraphicsEffect*)sender, SIGNAL(enabledChanged(_Bool)), that, SLOT(slot_proxy_func__ZN15QGraphicsEffect14enabledChangedEb(bool arg0)));
  return that;
}
extern "C"
void QGraphicsEffect_SlotProxy_disconnect__ZN15QGraphicsEffect14enabledChangedEb(QGraphicsEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsDropShadowEffect_SlotProxy here
class QGraphicsDropShadowEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsDropShadowEffect_SlotProxy():QObject(){}

public slots:
  // blurRadiusChanged(qreal)
  void slot_proxy_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(qreal arg0);
public:
  void (*slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // colorChanged(const class QColor &)
  void slot_proxy_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public slots:
  // offsetChanged(const class QPointF &)
  void slot_proxy_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(const QPointF & arg0);
public:
  void (*slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF)(void* rsfptr, const QPointF & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsDropShadowEffect_SlotProxy* QGraphicsDropShadowEffect_SlotProxy_new()
  {
    return new QGraphicsDropShadowEffect_SlotProxy();
  }
};

void QGraphicsDropShadowEffect_SlotProxy::slot_proxy_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(qreal arg0) {
  if (this->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsDropShadowEffect_SlotProxy_connect__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsDropShadowEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd = (decltype(that->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd))ffifptr;
  QObject::connect((QGraphicsDropShadowEffect*)sender, SIGNAL(blurRadiusChanged(qreal)), that, SLOT(slot_proxy_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsDropShadowEffect_SlotProxy_disconnect__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(QGraphicsDropShadowEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsDropShadowEffect_SlotProxy::slot_proxy_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsDropShadowEffect_SlotProxy_connect__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsDropShadowEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor = (decltype(that->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor))ffifptr;
  QObject::connect((QGraphicsDropShadowEffect*)sender, SIGNAL(colorChanged(const class QColor &)), that, SLOT(slot_proxy_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QGraphicsDropShadowEffect_SlotProxy_disconnect__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(QGraphicsDropShadowEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsDropShadowEffect_SlotProxy::slot_proxy_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(const QPointF & arg0) {
  if (this->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF != NULL) {
    // do smth...
    this->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsDropShadowEffect_SlotProxy_connect__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsDropShadowEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF = (decltype(that->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF))ffifptr;
  QObject::connect((QGraphicsDropShadowEffect*)sender, SIGNAL(offsetChanged(const class QPointF &)), that, SLOT(slot_proxy_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(const QPointF & arg0)));
  return that;
}
extern "C"
void QGraphicsDropShadowEffect_SlotProxy_disconnect__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(QGraphicsDropShadowEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsOpacityEffect_SlotProxy here
class QGraphicsOpacityEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsOpacityEffect_SlotProxy():QObject(){}

public slots:
  // opacityChanged(qreal)
  void slot_proxy_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(qreal arg0);
public:
  void (*slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // opacityMaskChanged(const class QBrush &)
  void slot_proxy_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(const QBrush & arg0);
public:
  void (*slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush)(void* rsfptr, const QBrush & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsOpacityEffect_SlotProxy* QGraphicsOpacityEffect_SlotProxy_new()
  {
    return new QGraphicsOpacityEffect_SlotProxy();
  }
};

void QGraphicsOpacityEffect_SlotProxy::slot_proxy_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(qreal arg0) {
  if (this->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsOpacityEffect_SlotProxy_connect__ZN22QGraphicsOpacityEffect14opacityChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsOpacityEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd = (decltype(that->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd))ffifptr;
  QObject::connect((QGraphicsOpacityEffect*)sender, SIGNAL(opacityChanged(qreal)), that, SLOT(slot_proxy_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsOpacityEffect_SlotProxy_disconnect__ZN22QGraphicsOpacityEffect14opacityChangedEd(QGraphicsOpacityEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsOpacityEffect_SlotProxy::slot_proxy_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(const QBrush & arg0) {
  if (this->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush != NULL) {
    // do smth...
    this->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsOpacityEffect_SlotProxy_connect__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsOpacityEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush = (decltype(that->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush))ffifptr;
  QObject::connect((QGraphicsOpacityEffect*)sender, SIGNAL(opacityMaskChanged(const class QBrush &)), that, SLOT(slot_proxy_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(const QBrush & arg0)));
  return that;
}
extern "C"
void QGraphicsOpacityEffect_SlotProxy_disconnect__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(QGraphicsOpacityEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsBlurEffect_SlotProxy here
class QGraphicsBlurEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsBlurEffect_SlotProxy():QObject(){}

public slots:
  // blurHintsChanged(BlurHints)
  void slot_proxy_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect::BlurHints arg0);
public:
  void (*slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE)(void* rsfptr, QGraphicsBlurEffect::BlurHints arg0) = NULL;
public slots:
  // blurRadiusChanged(qreal)
  void slot_proxy_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(qreal arg0);
public:
  void (*slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd)(void* rsfptr, qreal arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicseffect.moc"

extern "C" {
  QGraphicsBlurEffect_SlotProxy* QGraphicsBlurEffect_SlotProxy_new()
  {
    return new QGraphicsBlurEffect_SlotProxy();
  }
};

void QGraphicsBlurEffect_SlotProxy::slot_proxy_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect::BlurHints arg0) {
  if (this->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE != NULL) {
    // do smth...
    this->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsBlurEffect_SlotProxy_connect__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsBlurEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE = (decltype(that->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE))ffifptr;
  QObject::connect((QGraphicsBlurEffect*)sender, SIGNAL(blurHintsChanged(BlurHints)), that, SLOT(slot_proxy_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect::BlurHints arg0)));
  return that;
}
extern "C"
void QGraphicsBlurEffect_SlotProxy_disconnect__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsBlurEffect_SlotProxy::slot_proxy_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(qreal arg0) {
  if (this->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsBlurEffect_SlotProxy_connect__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsBlurEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd = (decltype(that->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd))ffifptr;
  QObject::connect((QGraphicsBlurEffect*)sender, SIGNAL(blurRadiusChanged(qreal)), that, SLOT(slot_proxy_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsBlurEffect_SlotProxy_disconnect__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(QGraphicsBlurEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

