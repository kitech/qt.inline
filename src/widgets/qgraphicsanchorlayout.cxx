// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qgraphicsanchorlayout.h
// dst-file: /src/widgets/qgraphicsanchorlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicsanchorlayout.h>


#include <qglobal.h>
#include <qsizepolicy.h>
// <= header block end

// main block begin =>
void __keep_qgraphicsanchorlayout_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsAnchorLayout_Class_Size()
{
  return sizeof(QGraphicsAnchorLayout);
}

extern "C"
int QGraphicsAnchor_Class_Size()
{
  return sizeof(QGraphicsAnchor);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 74, column 5>
//   // proto:  void QGraphicsAnchorLayout::QGraphicsAnchorLayout(QGraphicsLayoutItem * parent);
extern "C"
QGraphicsAnchorLayout*
C_ZN21QGraphicsAnchorLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * arg1) {
  auto ret = new QGraphicsAnchorLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 85, column 10>
//   // proto:  void QGraphicsAnchorLayout::addAnchors(QGraphicsLayoutItem * firstItem, QGraphicsLayoutItem * secondItem, Qt::Orientations orientations);
// _ZN21QGraphicsAnchorLayout10addAnchorsEP19QGraphicsLayoutItemS1_6QFlagsIN2Qt11OrientationEE addAnchors(class QGraphicsLayoutItem *, class QGraphicsLayoutItem *, Qt::Orientations)
extern "C"
void
C_ZN21QGraphicsAnchorLayout10addAnchorsEP19QGraphicsLayoutItemS1_6QFlagsIN2Qt11OrientationEE(void *qthis,
QGraphicsLayoutItem * arg1,
QGraphicsLayoutItem * arg2,
Qt::Orientations* arg3) {
  ((QGraphicsAnchorLayout*)qthis)->addAnchors(arg1,
arg2,
*((Qt::Orientations*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 82, column 10>
//   // proto:  void QGraphicsAnchorLayout::addCornerAnchors(QGraphicsLayoutItem * firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem * secondItem, Qt::Corner secondCorner);
// _ZN21QGraphicsAnchorLayout16addCornerAnchorsEP19QGraphicsLayoutItemN2Qt6CornerES1_S3_ addCornerAnchors(class QGraphicsLayoutItem *, Qt::Corner, class QGraphicsLayoutItem *, Qt::Corner)
extern "C"
void
C_ZN21QGraphicsAnchorLayout16addCornerAnchorsEP19QGraphicsLayoutItemN2Qt6CornerES1_S3_(void *qthis,
QGraphicsLayoutItem * arg1,
Qt::Corner* arg2,
QGraphicsLayoutItem * arg3,
Qt::Corner* arg4) {
  ((QGraphicsAnchorLayout*)qthis)->addCornerAnchors(arg1,
*((Qt::Corner*)arg2),
arg3,
*((Qt::Corner*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 93, column 11>
//   // proto:  qreal QGraphicsAnchorLayout::verticalSpacing();
// _ZNK21QGraphicsAnchorLayout15verticalSpacingEv verticalSpacing()
extern "C"
double
C_ZNK21QGraphicsAnchorLayout15verticalSpacingEv(void *qthis) {
  auto ret =
  ((QGraphicsAnchorLayout*)qthis)->verticalSpacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 91, column 10>
//   // proto:  void QGraphicsAnchorLayout::setSpacing(qreal spacing);
// _ZN21QGraphicsAnchorLayout10setSpacingEd setSpacing(qreal)
extern "C"
void
C_ZN21QGraphicsAnchorLayout10setSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsAnchorLayout*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 97, column 9>
//   // proto:  int QGraphicsAnchorLayout::count();
// _ZNK21QGraphicsAnchorLayout5countEv count()
extern "C"
int
C_ZNK21QGraphicsAnchorLayout5countEv(void *qthis) {
  auto ret =
  ((QGraphicsAnchorLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 92, column 11>
//   // proto:  qreal QGraphicsAnchorLayout::horizontalSpacing();
// _ZNK21QGraphicsAnchorLayout17horizontalSpacingEv horizontalSpacing()
extern "C"
double
C_ZNK21QGraphicsAnchorLayout17horizontalSpacingEv(void *qthis) {
  auto ret =
  ((QGraphicsAnchorLayout*)qthis)->horizontalSpacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 100, column 10>
//   // proto:  void QGraphicsAnchorLayout::invalidate();
// _ZN21QGraphicsAnchorLayout10invalidateEv invalidate()
extern "C"
void
C_ZN21QGraphicsAnchorLayout10invalidateEv(void *qthis) {
  ((QGraphicsAnchorLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 98, column 26>
//   // proto:  QGraphicsLayoutItem * QGraphicsAnchorLayout::itemAt(int index);
// _ZNK21QGraphicsAnchorLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK21QGraphicsAnchorLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsAnchorLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 90, column 10>
//   // proto:  void QGraphicsAnchorLayout::setVerticalSpacing(qreal spacing);
// _ZN21QGraphicsAnchorLayout18setVerticalSpacingEd setVerticalSpacing(qreal)
extern "C"
void
C_ZN21QGraphicsAnchorLayout18setVerticalSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsAnchorLayout*)qthis)->setVerticalSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 96, column 10>
//   // proto:  void QGraphicsAnchorLayout::setGeometry(const QRectF & rect);
// _ZN21QGraphicsAnchorLayout11setGeometryERK6QRectF setGeometry(const class QRectF &)
extern "C"
void
C_ZN21QGraphicsAnchorLayout11setGeometryERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsAnchorLayout*)qthis)->setGeometry(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 89, column 10>
//   // proto:  void QGraphicsAnchorLayout::setHorizontalSpacing(qreal spacing);
// _ZN21QGraphicsAnchorLayout20setHorizontalSpacingEd setHorizontalSpacing(qreal)
extern "C"
void
C_ZN21QGraphicsAnchorLayout20setHorizontalSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsAnchorLayout*)qthis)->setHorizontalSpacing(arg1);
}
//   // proto:  void QGraphicsAnchorLayout::~QGraphicsAnchorLayout();
extern "C"
void C_ZN21QGraphicsAnchorLayoutD2Ev(void *qthis) {
  delete (QGraphicsAnchorLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 95, column 10>
//   // proto:  void QGraphicsAnchorLayout::removeAt(int index);
// _ZN21QGraphicsAnchorLayout8removeAtEi removeAt(int)
extern "C"
void
C_ZN21QGraphicsAnchorLayout8removeAtEi(void *qthis,
int arg1) {
  ((QGraphicsAnchorLayout*)qthis)->removeAt(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 77, column 22>
//   // proto:  QGraphicsAnchor * QGraphicsAnchorLayout::addAnchor(QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge);
// _ZN21QGraphicsAnchorLayout9addAnchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_ addAnchor(class QGraphicsLayoutItem *, Qt::AnchorPoint, class QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C"
void*
C_ZN21QGraphicsAnchorLayout9addAnchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *qthis,
QGraphicsLayoutItem * arg1,
Qt::AnchorPoint* arg2,
QGraphicsLayoutItem * arg3,
Qt::AnchorPoint* arg4) {
  auto ret =
  ((QGraphicsAnchorLayout*)qthis)->addAnchor(arg1,
*((Qt::AnchorPoint*)arg2),
arg3,
*((Qt::AnchorPoint*)arg4));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 79, column 22>
//   // proto:  QGraphicsAnchor * QGraphicsAnchorLayout::anchor(QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge);
// _ZN21QGraphicsAnchorLayout6anchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_ anchor(class QGraphicsLayoutItem *, Qt::AnchorPoint, class QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C"
void*
C_ZN21QGraphicsAnchorLayout6anchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *qthis,
QGraphicsLayoutItem * arg1,
Qt::AnchorPoint* arg2,
QGraphicsLayoutItem * arg3,
Qt::AnchorPoint* arg4) {
  auto ret =
  ((QGraphicsAnchorLayout*)qthis)->anchor(arg1,
*((Qt::AnchorPoint*)arg2),
arg3,
*((Qt::AnchorPoint*)arg4));
  return (void*)ret;
}
//   // proto:  void QGraphicsAnchor::~QGraphicsAnchor();
extern "C"
void C_ZN15QGraphicsAnchorD2Ev(void *qthis) {
  delete (QGraphicsAnchor*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 57, column 10>
//   // proto:  void QGraphicsAnchor::unsetSpacing();
// _ZN15QGraphicsAnchor12unsetSpacingEv unsetSpacing()
extern "C"
void
C_ZN15QGraphicsAnchor12unsetSpacingEv(void *qthis) {
  ((QGraphicsAnchor*)qthis)->unsetSpacing();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 56, column 10>
//   // proto:  void QGraphicsAnchor::setSpacing(qreal spacing);
// _ZN15QGraphicsAnchor10setSpacingEd setSpacing(qreal)
extern "C"
void
C_ZN15QGraphicsAnchor10setSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsAnchor*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 52, column 5>
//   // proto:  const QMetaObject * QGraphicsAnchor::metaObject();
// _ZNK15QGraphicsAnchor10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QGraphicsAnchor10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsAnchor*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 60, column 25>
//   // proto:  QSizePolicy::Policy QGraphicsAnchor::sizePolicy();
// _ZNK15QGraphicsAnchor10sizePolicyEv sizePolicy()
extern "C"
QSizePolicy::Policy
C_ZNK15QGraphicsAnchor10sizePolicyEv(void *qthis) {
  auto ret =
  ((QGraphicsAnchor*)qthis)->sizePolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 58, column 11>
//   // proto:  qreal QGraphicsAnchor::spacing();
// _ZNK15QGraphicsAnchor7spacingEv spacing()
extern "C"
double
C_ZNK15QGraphicsAnchor7spacingEv(void *qthis) {
  auto ret =
  ((QGraphicsAnchor*)qthis)->spacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsanchorlayout.h', line 59, column 10>
//   // proto:  void QGraphicsAnchor::setSizePolicy(QSizePolicy::Policy policy);
// _ZN15QGraphicsAnchor13setSizePolicyEN11QSizePolicy6PolicyE setSizePolicy(class QSizePolicy::Policy)
extern "C"
void
C_ZN15QGraphicsAnchor13setSizePolicyEN11QSizePolicy6PolicyE(void *qthis,
QSizePolicy::Policy* arg1) {
  ((QGraphicsAnchor*)qthis)->setSizePolicy(*((QSizePolicy::Policy*)arg1));
}
// <= ext block end

// body block begin =>
// QGraphicsAnchor_SlotProxy here
class QGraphicsAnchor_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsAnchor_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsanchorlayout.moc"

extern "C" {
  QGraphicsAnchor_SlotProxy* QGraphicsAnchor_SlotProxy_new()
  {
    return new QGraphicsAnchor_SlotProxy();
  }
};

// <= body block end

