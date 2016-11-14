// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>

// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:80
// void QGraphicsAnchorLayout(class QGraphicsLayoutItem *)
extern "C"
void* C_ZN21QGraphicsAnchorLayoutC1EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  return new QGraphicsAnchorLayout(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:81
// void ~QGraphicsAnchorLayout()
extern "C"
void C_ZN21QGraphicsAnchorLayoutD1Ev(void *this_) {
  delete (QGraphicsAnchorLayout*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:83
// QGraphicsAnchor * addAnchor(class QGraphicsLayoutItem *, Qt::AnchorPoint, class QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C"
void C_ZN21QGraphicsAnchorLayout9addAnchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  /*return*/ ((QGraphicsAnchorLayout*)this_)->addAnchor(firstItem, firstEdge, secondItem, secondEdge);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:85
// QGraphicsAnchor * anchor(class QGraphicsLayoutItem *, Qt::AnchorPoint, class QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C"
void C_ZN21QGraphicsAnchorLayout6anchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  /*return*/ ((QGraphicsAnchorLayout*)this_)->anchor(firstItem, firstEdge, secondItem, secondEdge);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:88
// void addCornerAnchors(class QGraphicsLayoutItem *, Qt::Corner, class QGraphicsLayoutItem *, Qt::Corner)
extern "C"
void C_ZN21QGraphicsAnchorLayout16addCornerAnchorsEP19QGraphicsLayoutItemN2Qt6CornerES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem * secondItem, Qt::Corner secondCorner) {
  ((QGraphicsAnchorLayout*)this_)->addCornerAnchors(firstItem, firstCorner, secondItem, secondCorner);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:91
// void addAnchors(class QGraphicsLayoutItem *, class QGraphicsLayoutItem *, Qt::Orientations)
extern "C"
void C_ZN21QGraphicsAnchorLayout10addAnchorsEP19QGraphicsLayoutItemS1_6QFlagsIN2Qt11OrientationEE(void *this_, QGraphicsLayoutItem * firstItem, QGraphicsLayoutItem * secondItem, QFlags<Qt::Orientation> orientations) {
  ((QGraphicsAnchorLayout*)this_)->addAnchors(firstItem, secondItem, orientations);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:95
// void setHorizontalSpacing(qreal)
extern "C"
void C_ZN21QGraphicsAnchorLayout20setHorizontalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setHorizontalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:96
// void setVerticalSpacing(qreal)
extern "C"
void C_ZN21QGraphicsAnchorLayout18setVerticalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setVerticalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:97
// void setSpacing(qreal)
extern "C"
void C_ZN21QGraphicsAnchorLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:98
// qreal horizontalSpacing()
extern "C"
void C_ZNK21QGraphicsAnchorLayout17horizontalSpacingEv(void *this_) {
  /*return*/ ((QGraphicsAnchorLayout*)this_)->horizontalSpacing();
}
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:99
// qreal verticalSpacing()
extern "C"
void C_ZNK21QGraphicsAnchorLayout15verticalSpacingEv(void *this_) {
  /*return*/ ((QGraphicsAnchorLayout*)this_)->verticalSpacing();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:101
// void removeAt(int)
extern "C"
void C_ZN21QGraphicsAnchorLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsAnchorLayout*)this_)->removeAt(index);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:102
// void setGeometry(const class QRectF &)
extern "C"
void C_ZN21QGraphicsAnchorLayout11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsAnchorLayout*)this_)->setGeometry(rect);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:103
// int count()
extern "C"
void C_ZNK21QGraphicsAnchorLayout5countEv(void *this_) {
  /*return*/ ((QGraphicsAnchorLayout*)this_)->count();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:104
// QGraphicsLayoutItem * itemAt(int)
extern "C"
void C_ZNK21QGraphicsAnchorLayout6itemAtEi(void *this_, int index) {
  /*return*/ ((QGraphicsAnchorLayout*)this_)->itemAt(index);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:106
// void invalidate()
extern "C"
void C_ZN21QGraphicsAnchorLayout10invalidateEv(void *this_) {
  ((QGraphicsAnchorLayout*)this_)->invalidate();
}