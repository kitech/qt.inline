// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qgraphicsproxywidget.h
// dst-file: /src/widgets/qgraphicsproxywidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicsproxywidget.h>


#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qgraphicsproxywidget_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsProxyWidget_Class_Size()
{
  return sizeof(QGraphicsProxyWidget);
}

// <= use block end

// ext block begin =>
//   // proto:  void QGraphicsProxyWidget::~QGraphicsProxyWidget();
extern "C"
void C_ZN20QGraphicsProxyWidgetD2Ev(void *qthis) {
  delete (QGraphicsProxyWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 73, column 27>
//   // proto:  QGraphicsProxyWidget * QGraphicsProxyWidget::createProxyForChildWidget(QWidget * child);
// _ZN20QGraphicsProxyWidget25createProxyForChildWidgetEP7QWidget createProxyForChildWidget(class QWidget *)
extern "C"
void*
C_ZN20QGraphicsProxyWidget25createProxyForChildWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QGraphicsProxyWidget*)qthis)->createProxyForChildWidget(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 59, column 10>
//   // proto:  void QGraphicsProxyWidget::setWidget(QWidget * widget);
// _ZN20QGraphicsProxyWidget9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN20QGraphicsProxyWidget9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QGraphicsProxyWidget*)qthis)->setWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 62, column 12>
//   // proto:  QRectF QGraphicsProxyWidget::subWidgetRect(const QWidget * widget);
// _ZNK20QGraphicsProxyWidget13subWidgetRectEPK7QWidget subWidgetRect(const class QWidget *)
extern "C"
QRectF*
C_ZNK20QGraphicsProxyWidget13subWidgetRectEPK7QWidget(void *qthis,
const QWidget * arg1) {
  auto ret =
  ((QGraphicsProxyWidget*)qthis)->subWidgetRect(arg1);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 54, column 5>
//   // proto:  const QMetaObject * QGraphicsProxyWidget::metaObject();
// _ZNK20QGraphicsProxyWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK20QGraphicsProxyWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsProxyWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 66, column 10>
//   // proto:  void QGraphicsProxyWidget::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN20QGraphicsProxyWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN20QGraphicsProxyWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsProxyWidget*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 64, column 10>
//   // proto:  void QGraphicsProxyWidget::setGeometry(const QRectF & rect);
// _ZN20QGraphicsProxyWidget11setGeometryERK6QRectF setGeometry(const class QRectF &)
extern "C"
void
C_ZN20QGraphicsProxyWidget11setGeometryERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsProxyWidget*)qthis)->setGeometry(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 60, column 14>
//   // proto:  QWidget * QGraphicsProxyWidget::widget();
// _ZNK20QGraphicsProxyWidget6widgetEv widget()
extern "C"
void*
C_ZNK20QGraphicsProxyWidget6widgetEv(void *qthis) {
  auto ret =
  ((QGraphicsProxyWidget*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 71, column 9>
//   // proto:  int QGraphicsProxyWidget::type();
// _ZNK20QGraphicsProxyWidget4typeEv type()
extern "C"
int
C_ZNK20QGraphicsProxyWidget4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsProxyWidget*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsproxywidget.h', line 56, column 5>
//   // proto:  void QGraphicsProxyWidget::QGraphicsProxyWidget(QGraphicsItem * parent, Qt::WindowFlags wFlags);
extern "C"
QGraphicsProxyWidget*
C_ZN20QGraphicsProxyWidgetC2EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QGraphicsProxyWidget(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <= ext block end

// body block begin =>
// QGraphicsProxyWidget_SlotProxy here
class QGraphicsProxyWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsProxyWidget_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsproxywidget.moc"

extern "C" {
  QGraphicsProxyWidget_SlotProxy* QGraphicsProxyWidget_SlotProxy_new()
  {
    return new QGraphicsProxyWidget_SlotProxy();
  }
};

// <= body block end

