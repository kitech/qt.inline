//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>

// QGraphicsAnchorLayout is pure virtual: false
// QGraphicsAnchorLayout has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:107
// [16] QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
void* callback_ZNK21QGraphicsAnchorLayout8sizeHintEN2Qt8SizeHintERK6QSizeF = 0;
extern "C" void set_callback_ZNK21QGraphicsAnchorLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void*cbfn)
{ callback_ZNK21QGraphicsAnchorLayout8sizeHintEN2Qt8SizeHintERK6QSizeF = cbfn; }

class MyQGraphicsAnchorLayout : public QGraphicsAnchorLayout {
public:
  virtual ~MyQGraphicsAnchorLayout() {}
// void QGraphicsAnchorLayout(class QGraphicsLayoutItem *)
MyQGraphicsAnchorLayout(QGraphicsLayoutItem * parent) : QGraphicsAnchorLayout(parent) {}
// QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) {
    if (callback_ZNK21QGraphicsAnchorLayout8sizeHintEN2Qt8SizeHintERK6QSizeF != 0) {
      // callback_ZNK21QGraphicsAnchorLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(which, constraint);
    }
    return QGraphicsAnchorLayout::sizeHint(which, constraint);
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:79
// [-2] void QGraphicsAnchorLayout(class QGraphicsLayoutItem *)
extern "C"
void* C_ZN21QGraphicsAnchorLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  auto _nilp = (MyQGraphicsAnchorLayout*)(0);
  return  new MyQGraphicsAnchorLayout(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:80
// [-2] void ~QGraphicsAnchorLayout()
extern "C"
void C_ZN21QGraphicsAnchorLayoutD2Ev(void *this_) {
  delete (QGraphicsAnchorLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:82
// [8] QGraphicsAnchor * addAnchor(class QGraphicsLayoutItem *, Qt::AnchorPoint, class QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C"
void* C_ZN21QGraphicsAnchorLayout9addAnchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return (void*)((QGraphicsAnchorLayout*)this_)->addAnchor(firstItem, firstEdge, secondItem, secondEdge);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:84
// [8] QGraphicsAnchor * anchor(class QGraphicsLayoutItem *, Qt::AnchorPoint, class QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C"
void* C_ZN21QGraphicsAnchorLayout6anchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return (void*)((QGraphicsAnchorLayout*)this_)->anchor(firstItem, firstEdge, secondItem, secondEdge);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:87
// [-2] void addCornerAnchors(class QGraphicsLayoutItem *, Qt::Corner, class QGraphicsLayoutItem *, Qt::Corner)
extern "C"
void C_ZN21QGraphicsAnchorLayout16addCornerAnchorsEP19QGraphicsLayoutItemN2Qt6CornerES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem * secondItem, Qt::Corner secondCorner) {
  ((QGraphicsAnchorLayout*)this_)->addCornerAnchors(firstItem, firstCorner, secondItem, secondCorner);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:94
// [-2] void setHorizontalSpacing(qreal)
extern "C"
void C_ZN21QGraphicsAnchorLayout20setHorizontalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setHorizontalSpacing(spacing);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:95
// [-2] void setVerticalSpacing(qreal)
extern "C"
void C_ZN21QGraphicsAnchorLayout18setVerticalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setVerticalSpacing(spacing);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:96
// [-2] void setSpacing(qreal)
extern "C"
void C_ZN21QGraphicsAnchorLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setSpacing(spacing);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:97
// [8] qreal horizontalSpacing()
extern "C"
qreal C_ZNK21QGraphicsAnchorLayout17horizontalSpacingEv(void *this_) {
  return (qreal)((QGraphicsAnchorLayout*)this_)->horizontalSpacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:98
// [8] qreal verticalSpacing()
extern "C"
qreal C_ZNK21QGraphicsAnchorLayout15verticalSpacingEv(void *this_) {
  return (qreal)((QGraphicsAnchorLayout*)this_)->verticalSpacing();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:100
// [-2] void removeAt(int)
extern "C"
void C_ZN21QGraphicsAnchorLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsAnchorLayout*)this_)->removeAt(index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:101
// [-2] void setGeometry(const class QRectF &)
extern "C"
void C_ZN21QGraphicsAnchorLayout11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsAnchorLayout*)this_)->setGeometry(rect);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:102
// [4] int count()
extern "C"
int C_ZNK21QGraphicsAnchorLayout5countEv(void *this_) {
  return (int)((QGraphicsAnchorLayout*)this_)->count();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:103
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C"
void* C_ZNK21QGraphicsAnchorLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGraphicsAnchorLayout*)this_)->itemAt(index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:105
// [-2] void invalidate()
extern "C"
void C_ZN21QGraphicsAnchorLayout10invalidateEv(void *this_) {
  ((QGraphicsAnchorLayout*)this_)->invalidate();
}
//  main block end
