// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qgraphicswidget.h
// dst-file: /src/widgets/qgraphicswidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicswidget.h>


#include <qnamespace.h>
#include <qrect.h>
#include <qsize.h>
#include <qpalette.h>
#include <qpainterpath.h>
#include <qstring.h>
#include <qfont.h>
#include <qlist.h>
#include <qfontdatabase.h>
// <= header block end

// main block begin =>
void __keep_qgraphicswidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 111, column 19>
//   // proto:  QRectF QGraphicsWidget::rect();
if (true) {
  auto f = [](QGraphicsWidget flythis) {
    ((QGraphicsWidget*)0)->rect();
    flythis.rect();
  };
  if (f == nullptr){}
}
// _ZNK15QGraphicsWidget4rectEv rect()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 106, column 17>
//   // proto:  void QGraphicsWidget::resize(qreal w, qreal h);
if (true) {
  auto f = [](QGraphicsWidget flythis, qreal arg1, qreal arg2) {
    ((QGraphicsWidget*)0)->resize(arg1, arg2);
    flythis.resize(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QGraphicsWidget6resizeEdd resize(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 110, column 17>
//   // proto:  void QGraphicsWidget::setGeometry(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QGraphicsWidget flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsWidget*)0)->setGeometry(arg1, arg2, arg3, arg4);
    flythis.setGeometry(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN15QGraphicsWidget11setGeometryEdddd setGeometry(qreal, qreal, qreal, qreal)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsWidget_Class_Size()
{
  return sizeof(QGraphicsWidget);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 103, column 10>
//   // proto:  void QGraphicsWidget::setAutoFillBackground(bool enabled);
// _ZN15QGraphicsWidget21setAutoFillBackgroundEb setAutoFillBackground(_Bool)
extern "C"
void
C_ZN15QGraphicsWidget21setAutoFillBackgroundEb(void *qthis,
bool arg1) {
  ((QGraphicsWidget*)qthis)->setAutoFillBackground(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 124, column 20>
//   // proto:  Qt::WindowType QGraphicsWidget::windowType();
// _ZNK15QGraphicsWidget10windowTypeEv windowType()
extern "C"
Qt::WindowType
C_ZNK15QGraphicsWidget10windowTypeEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->windowType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 127, column 10>
//   // proto:  void QGraphicsWidget::setWindowTitle(const QString & title);
// _ZN15QGraphicsWidget14setWindowTitleERK7QString setWindowTitle(const class QString &)
extern "C"
void
C_ZN15QGraphicsWidget14setWindowTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QGraphicsWidget*)qthis)->setWindowTitle(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 86, column 10>
//   // proto:  void QGraphicsWidget::setLayout(QGraphicsLayout * layout);
// _ZN15QGraphicsWidget9setLayoutEP15QGraphicsLayout setLayout(class QGraphicsLayout *)
extern "C"
void
C_ZN15QGraphicsWidget9setLayoutEP15QGraphicsLayout(void *qthis,
QGraphicsLayout * arg1) {
  ((QGraphicsWidget*)qthis)->setLayout(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 109, column 10>
//   // proto:  void QGraphicsWidget::setGeometry(const QRectF & rect);
// _ZN15QGraphicsWidget11setGeometryERK6QRectF setGeometry(const class QRectF &)
extern "C"
void
C_ZN15QGraphicsWidget11setGeometryERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsWidget*)qthis)->setGeometry(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 159, column 10>
//   // proto:  bool QGraphicsWidget::testAttribute(Qt::WidgetAttribute attribute);
// _ZNK15QGraphicsWidget13testAttributeEN2Qt15WidgetAttributeE testAttribute(Qt::WidgetAttribute)
extern "C"
bool
C_ZNK15QGraphicsWidget13testAttributeEN2Qt15WidgetAttributeE(void *qthis,
Qt::WidgetAttribute* arg1) {
  auto ret =
  ((QGraphicsWidget*)qthis)->testAttribute(*((Qt::WidgetAttribute*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 111, column 19>
//   // proto:  QRectF QGraphicsWidget::rect();
// _ZNK15QGraphicsWidget4rectEv rect()
extern "C"
QRectF*
C_ZNK15QGraphicsWidget4rectEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->rect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 107, column 12>
//   // proto:  QSizeF QGraphicsWidget::size();
// _ZNK15QGraphicsWidget4sizeEv size()
extern "C"
QSizeF*
C_ZNK15QGraphicsWidget4sizeEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->size();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 83, column 5>
//   // proto:  void QGraphicsWidget::QGraphicsWidget(QGraphicsItem * parent, Qt::WindowFlags wFlags);
extern "C"
QGraphicsWidget*
C_ZN15QGraphicsWidgetC2EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QGraphicsWidget(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 138, column 10>
//   // proto:  void QGraphicsWidget::releaseShortcut(int id);
// _ZN15QGraphicsWidget15releaseShortcutEi releaseShortcut(int)
extern "C"
void
C_ZN15QGraphicsWidget15releaseShortcutEi(void *qthis,
int arg1) {
  ((QGraphicsWidget*)qthis)->releaseShortcut(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 116, column 10>
//   // proto:  void QGraphicsWidget::setWindowFrameMargins(qreal left, qreal top, qreal right, qreal bottom);
// _ZN15QGraphicsWidget21setWindowFrameMarginsEdddd setWindowFrameMargins(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN15QGraphicsWidget21setWindowFrameMarginsEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsWidget*)qthis)->setWindowFrameMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 164, column 9>
//   // proto:  int QGraphicsWidget::type();
// _ZNK15QGraphicsWidget4typeEv type()
extern "C"
int
C_ZNK15QGraphicsWidget4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 125, column 10>
//   // proto:  void QGraphicsWidget::setWindowFlags(Qt::WindowFlags wFlags);
// _ZN15QGraphicsWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE setWindowFlags(Qt::WindowFlags)
extern "C"
void
C_ZN15QGraphicsWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *qthis,
Qt::WindowFlags* arg1) {
  ((QGraphicsWidget*)qthis)->setWindowFlags(*((Qt::WindowFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 91, column 10>
//   // proto:  void QGraphicsWidget::unsetLayoutDirection();
// _ZN15QGraphicsWidget20unsetLayoutDirectionEv unsetLayoutDirection()
extern "C"
void
C_ZN15QGraphicsWidget20unsetLayoutDirectionEv(void *qthis) {
  ((QGraphicsWidget*)qthis)->unsetLayoutDirection();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 119, column 12>
//   // proto:  QRectF QGraphicsWidget::windowFrameGeometry();
// _ZNK15QGraphicsWidget19windowFrameGeometryEv windowFrameGeometry()
extern "C"
QRectF*
C_ZNK15QGraphicsWidget19windowFrameGeometryEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->windowFrameGeometry();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 106, column 17>
//   // proto:  void QGraphicsWidget::resize(qreal w, qreal h);
// _ZN15QGraphicsWidget6resizeEdd resize(qreal, qreal)
extern "C"
void
C_ZN15QGraphicsWidget6resizeEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsWidget*)qthis)->resize(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 120, column 12>
//   // proto:  QRectF QGraphicsWidget::windowFrameRect();
// _ZNK15QGraphicsWidget15windowFrameRectEv windowFrameRect()
extern "C"
QRectF*
C_ZNK15QGraphicsWidget15windowFrameRectEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->windowFrameRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 166, column 10>
//   // proto:  void QGraphicsWidget::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN15QGraphicsWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN15QGraphicsWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsWidget*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 87, column 10>
//   // proto:  void QGraphicsWidget::adjustSize();
// _ZN15QGraphicsWidget10adjustSizeEv adjustSize()
extern "C"
void
C_ZN15QGraphicsWidget10adjustSizeEv(void *qthis) {
  ((QGraphicsWidget*)qthis)->adjustSize();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 158, column 10>
//   // proto:  void QGraphicsWidget::setAttribute(Qt::WidgetAttribute attribute, bool on);
// _ZN15QGraphicsWidget12setAttributeEN2Qt15WidgetAttributeEb setAttribute(Qt::WidgetAttribute, _Bool)
extern "C"
void
C_ZN15QGraphicsWidget12setAttributeEN2Qt15WidgetAttributeEb(void *qthis,
Qt::WidgetAttribute* arg1,
bool arg2) {
  ((QGraphicsWidget*)qthis)->setAttribute(*((Qt::WidgetAttribute*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 167, column 18>
//   // proto:  void QGraphicsWidget::paintWindowFrame(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN15QGraphicsWidget16paintWindowFrameEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paintWindowFrame(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN15QGraphicsWidget16paintWindowFrameEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsWidget*)qthis)->paintWindowFrame(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 150, column 10>
//   // proto:  void QGraphicsWidget::addActions(QList<QAction *> actions);
// _ZN15QGraphicsWidget10addActionsE5QListIP7QActionE addActions(QList<class QAction *>)
extern "C"
void
C_ZN15QGraphicsWidget10addActionsE5QListIP7QActionE(void *qthis,
QList<QAction *>* arg1) {
  ((QGraphicsWidget*)qthis)->addActions(*((QList<QAction *>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 99, column 14>
//   // proto:  QPalette QGraphicsWidget::palette();
// _ZNK15QGraphicsWidget7paletteEv palette()
extern "C"
QPalette*
C_ZNK15QGraphicsWidget7paletteEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->palette();
  return new QPalette(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 118, column 10>
//   // proto:  void QGraphicsWidget::unsetWindowFrameMargins();
// _ZN15QGraphicsWidget23unsetWindowFrameMarginsEv unsetWindowFrameMargins()
extern "C"
void
C_ZN15QGraphicsWidget23unsetWindowFrameMarginsEv(void *qthis) {
  ((QGraphicsWidget*)qthis)->unsetWindowFrameMargins();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 105, column 10>
//   // proto:  void QGraphicsWidget::resize(const QSizeF & size);
// _ZN15QGraphicsWidget6resizeERK6QSizeF resize(const class QSizeF &)
extern "C"
void
C_ZN15QGraphicsWidget6resizeERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QGraphicsWidget*)qthis)->resize(*((const QSizeF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 100, column 10>
//   // proto:  void QGraphicsWidget::setPalette(const QPalette & palette);
// _ZN15QGraphicsWidget10setPaletteERK8QPalette setPalette(const class QPalette &)
extern "C"
void
C_ZN15QGraphicsWidget10setPaletteERK8QPalette(void *qthis,
const QPalette* arg1) {
  ((QGraphicsWidget*)qthis)->setPalette(*((const QPalette*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 102, column 10>
//   // proto:  bool QGraphicsWidget::autoFillBackground();
// _ZNK15QGraphicsWidget18autoFillBackgroundEv autoFillBackground()
extern "C"
bool
C_ZNK15QGraphicsWidget18autoFillBackgroundEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->autoFillBackground();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 93, column 13>
//   // proto:  QStyle * QGraphicsWidget::style();
// _ZNK15QGraphicsWidget5styleEv style()
extern "C"
void*
C_ZNK15QGraphicsWidget5styleEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->style();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 169, column 18>
//   // proto:  QPainterPath QGraphicsWidget::shape();
// _ZNK15QGraphicsWidget5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK15QGraphicsWidget5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 139, column 10>
//   // proto:  void QGraphicsWidget::setShortcutEnabled(int id, bool enabled);
// _ZN15QGraphicsWidget18setShortcutEnabledEib setShortcutEnabled(int, _Bool)
extern "C"
void
C_ZN15QGraphicsWidget18setShortcutEnabledEib(void *qthis,
int arg1,
bool arg2) {
  ((QGraphicsWidget*)qthis)->setShortcutEnabled(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 154, column 10>
//   // proto:  void QGraphicsWidget::removeAction(QAction * action);
// _ZN15QGraphicsWidget12removeActionEP7QAction removeAction(class QAction *)
extern "C"
void
C_ZN15QGraphicsWidget12removeActionEP7QAction(void *qthis,
QAction * arg1) {
  ((QGraphicsWidget*)qthis)->removeAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 153, column 10>
//   // proto:  void QGraphicsWidget::insertAction(QAction * before, QAction * action);
// _ZN15QGraphicsWidget12insertActionEP7QActionS1_ insertAction(class QAction *, class QAction *)
extern "C"
void
C_ZN15QGraphicsWidget12insertActionEP7QActionS1_(void *qthis,
QAction * arg1,
QAction * arg2) {
  ((QGraphicsWidget*)qthis)->insertAction(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 123, column 21>
//   // proto:  Qt::WindowFlags QGraphicsWidget::windowFlags();
// _ZNK15QGraphicsWidget11windowFlagsEv windowFlags()
extern "C"
QFlags<Qt::WindowType>*
C_ZNK15QGraphicsWidget11windowFlagsEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->windowFlags();
  return new QFlags<Qt::WindowType>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 182, column 10>
//   // proto:  bool QGraphicsWidget::close();
// _ZN15QGraphicsWidget5closeEv close()
extern "C"
bool
C_ZN15QGraphicsWidget5closeEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->close();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 66, column 5>
//   // proto:  const QMetaObject * QGraphicsWidget::metaObject();
// _ZNK15QGraphicsWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QGraphicsWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 168, column 12>
//   // proto:  QRectF QGraphicsWidget::boundingRect();
// _ZNK15QGraphicsWidget12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK15QGraphicsWidget12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 113, column 10>
//   // proto:  void QGraphicsWidget::setContentsMargins(qreal left, qreal top, qreal right, qreal bottom);
// _ZN15QGraphicsWidget18setContentsMarginsEdddd setContentsMargins(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN15QGraphicsWidget18setContentsMarginsEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsWidget*)qthis)->setContentsMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 97, column 10>
//   // proto:  void QGraphicsWidget::setFont(const QFont & font);
// _ZN15QGraphicsWidget7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN15QGraphicsWidget7setFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QGraphicsWidget*)qthis)->setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 178, column 10>
//   // proto:  void QGraphicsWidget::geometryChanged();
// _ZN15QGraphicsWidget15geometryChangedEv geometryChanged()
extern "C"
void
C_ZN15QGraphicsWidget15geometryChangedEv(void *qthis) {
  ((QGraphicsWidget*)qthis)->geometryChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 131, column 21>
//   // proto:  Qt::FocusPolicy QGraphicsWidget::focusPolicy();
// _ZNK15QGraphicsWidget11focusPolicyEv focusPolicy()
extern "C"
Qt::FocusPolicy
C_ZNK15QGraphicsWidget11focusPolicyEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->focusPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 128, column 13>
//   // proto:  QString QGraphicsWidget::windowTitle();
// _ZNK15QGraphicsWidget11windowTitleEv windowTitle()
extern "C"
QString*
C_ZNK15QGraphicsWidget11windowTitleEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->windowTitle();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 85, column 22>
//   // proto:  QGraphicsLayout * QGraphicsWidget::layout();
// _ZNK15QGraphicsWidget6layoutEv layout()
extern "C"
void*
C_ZNK15QGraphicsWidget6layoutEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->layout();
  return (void*)ret;
}
//   // proto:  void QGraphicsWidget::~QGraphicsWidget();
extern "C"
void C_ZN15QGraphicsWidgetD2Ev(void *qthis) {
  delete (QGraphicsWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 134, column 22>
//   // proto:  QGraphicsWidget * QGraphicsWidget::focusWidget();
// _ZNK15QGraphicsWidget11focusWidgetEv focusWidget()
extern "C"
void*
C_ZNK15QGraphicsWidget11focusWidgetEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->focusWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 137, column 9>
//   // proto:  int QGraphicsWidget::grabShortcut(const QKeySequence & sequence, Qt::ShortcutContext context);
// _ZN15QGraphicsWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE grabShortcut(const class QKeySequence &, Qt::ShortcutContext)
extern "C"
int
C_ZN15QGraphicsWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE(void *qthis,
const QKeySequence* arg1,
Qt::ShortcutContext* arg2) {
  auto ret =
  ((QGraphicsWidget*)qthis)->grabShortcut(*((const QKeySequence*)arg1),
*((Qt::ShortcutContext*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 132, column 10>
//   // proto:  void QGraphicsWidget::setFocusPolicy(Qt::FocusPolicy policy);
// _ZN15QGraphicsWidget14setFocusPolicyEN2Qt11FocusPolicyE setFocusPolicy(Qt::FocusPolicy)
extern "C"
void
C_ZN15QGraphicsWidget14setFocusPolicyEN2Qt11FocusPolicyE(void *qthis,
Qt::FocusPolicy* arg1) {
  ((QGraphicsWidget*)qthis)->setFocusPolicy(*((Qt::FocusPolicy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 145, column 10>
//   // proto:  void QGraphicsWidget::addAction(QAction * action);
// _ZN15QGraphicsWidget9addActionEP7QAction addAction(class QAction *)
extern "C"
void
C_ZN15QGraphicsWidget9addActionEP7QAction(void *qthis,
QAction * arg1) {
  ((QGraphicsWidget*)qthis)->addAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 96, column 11>
//   // proto:  QFont QGraphicsWidget::font();
// _ZNK15QGraphicsWidget4fontEv font()
extern "C"
QFont*
C_ZNK15QGraphicsWidget4fontEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 155, column 21>
//   // proto:  QList<QAction *> QGraphicsWidget::actions();
// _ZNK15QGraphicsWidget7actionsEv actions()
extern "C"
QList<QAction *>*
C_ZNK15QGraphicsWidget7actionsEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->actions();
  return new QList<QAction *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 151, column 10>
//   // proto:  void QGraphicsWidget::insertActions(QAction * before, QList<QAction *> actions);
// _ZN15QGraphicsWidget13insertActionsEP7QAction5QListIS1_E insertActions(class QAction *, QList<class QAction *>)
extern "C"
void
C_ZN15QGraphicsWidget13insertActionsEP7QAction5QListIS1_E(void *qthis,
QAction * arg1,
QList<QAction *>* arg2) {
  ((QGraphicsWidget*)qthis)->insertActions(arg1,
*((QList<QAction *>*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 89, column 25>
//   // proto:  Qt::LayoutDirection QGraphicsWidget::layoutDirection();
// _ZNK15QGraphicsWidget15layoutDirectionEv layoutDirection()
extern "C"
Qt::LayoutDirection
C_ZNK15QGraphicsWidget15layoutDirectionEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->layoutDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 179, column 10>
//   // proto:  void QGraphicsWidget::layoutChanged();
// _ZN15QGraphicsWidget13layoutChangedEv layoutChanged()
extern "C"
void
C_ZN15QGraphicsWidget13layoutChangedEv(void *qthis) {
  ((QGraphicsWidget*)qthis)->layoutChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 140, column 10>
//   // proto:  void QGraphicsWidget::setShortcutAutoRepeat(int id, bool enabled);
// _ZN15QGraphicsWidget21setShortcutAutoRepeatEib setShortcutAutoRepeat(int, _Bool)
extern "C"
void
C_ZN15QGraphicsWidget21setShortcutAutoRepeatEib(void *qthis,
int arg1,
bool arg2) {
  ((QGraphicsWidget*)qthis)->setShortcutAutoRepeat(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 133, column 17>
//   // proto: static void QGraphicsWidget::setTabOrder(QGraphicsWidget * first, QGraphicsWidget * second);
// _ZN15QGraphicsWidget11setTabOrderEPS_S0_ setTabOrder(class QGraphicsWidget *, class QGraphicsWidget *)
extern "C"
void
C_ZN15QGraphicsWidget11setTabOrderEPS_S0_(QGraphicsWidget * arg1,
QGraphicsWidget * arg2) {
  QGraphicsWidget::setTabOrder(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 117, column 10>
//   // proto:  void QGraphicsWidget::getWindowFrameMargins(qreal * left, qreal * top, qreal * right, qreal * bottom);
// _ZNK15QGraphicsWidget21getWindowFrameMarginsEPdS0_S0_S0_ getWindowFrameMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void
C_ZNK15QGraphicsWidget21getWindowFrameMarginsEPdS0_S0_S0_(void *qthis,
qreal * arg1,
qreal * arg2,
qreal * arg3,
qreal * arg4) {
  ((QGraphicsWidget*)qthis)->getWindowFrameMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 94, column 10>
//   // proto:  void QGraphicsWidget::setStyle(QStyle * style);
// _ZN15QGraphicsWidget8setStyleEP6QStyle setStyle(class QStyle *)
extern "C"
void
C_ZN15QGraphicsWidget8setStyleEP6QStyle(void *qthis,
QStyle * arg1) {
  ((QGraphicsWidget*)qthis)->setStyle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 114, column 10>
//   // proto:  void QGraphicsWidget::getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom);
// _ZNK15QGraphicsWidget18getContentsMarginsEPdS0_S0_S0_ getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void
C_ZNK15QGraphicsWidget18getContentsMarginsEPdS0_S0_S0_(void *qthis,
qreal * arg1,
qreal * arg2,
qreal * arg3,
qreal * arg4) {
  ((QGraphicsWidget*)qthis)->getContentsMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 90, column 10>
//   // proto:  void QGraphicsWidget::setLayoutDirection(Qt::LayoutDirection direction);
// _ZN15QGraphicsWidget18setLayoutDirectionEN2Qt15LayoutDirectionE setLayoutDirection(Qt::LayoutDirection)
extern "C"
void
C_ZN15QGraphicsWidget18setLayoutDirectionEN2Qt15LayoutDirectionE(void *qthis,
Qt::LayoutDirection* arg1) {
  ((QGraphicsWidget*)qthis)->setLayoutDirection(*((Qt::LayoutDirection*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 126, column 10>
//   // proto:  bool QGraphicsWidget::isActiveWindow();
// _ZNK15QGraphicsWidget14isActiveWindowEv isActiveWindow()
extern "C"
bool
C_ZNK15QGraphicsWidget14isActiveWindowEv(void *qthis) {
  auto ret =
  ((QGraphicsWidget*)qthis)->isActiveWindow();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 110, column 17>
//   // proto:  void QGraphicsWidget::setGeometry(qreal x, qreal y, qreal w, qreal h);
// _ZN15QGraphicsWidget11setGeometryEdddd setGeometry(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN15QGraphicsWidget11setGeometryEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsWidget*)qthis)->setGeometry(arg1,
arg2,
arg3,
arg4);
}
// <= ext block end

// body block begin =>
// QGraphicsWidget_SlotProxy here
class QGraphicsWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsWidget_SlotProxy():QObject(){}

public slots:
  // layoutChanged()
  void slot_proxy_func__ZN15QGraphicsWidget13layoutChangedEv();
public:
  void (*slot_func__ZN15QGraphicsWidget13layoutChangedEv)(void* rsfptr) = NULL;
public slots:
  // geometryChanged()
  void slot_proxy_func__ZN15QGraphicsWidget15geometryChangedEv();
public:
  void (*slot_func__ZN15QGraphicsWidget15geometryChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicswidget.moc"

extern "C" {
  QGraphicsWidget_SlotProxy* QGraphicsWidget_SlotProxy_new()
  {
    return new QGraphicsWidget_SlotProxy();
  }
};

void QGraphicsWidget_SlotProxy::slot_proxy_func__ZN15QGraphicsWidget13layoutChangedEv() {
  if (this->slot_func__ZN15QGraphicsWidget13layoutChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsWidget13layoutChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsWidget_SlotProxy_connect__ZN15QGraphicsWidget13layoutChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsWidget13layoutChangedEv = (decltype(that->slot_func__ZN15QGraphicsWidget13layoutChangedEv))ffifptr;
  QObject::connect((QGraphicsWidget*)sender, SIGNAL(layoutChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsWidget13layoutChangedEv()));
  return that;
}
extern "C"
void QGraphicsWidget_SlotProxy_disconnect__ZN15QGraphicsWidget13layoutChangedEv(QGraphicsWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsWidget_SlotProxy::slot_proxy_func__ZN15QGraphicsWidget15geometryChangedEv() {
  if (this->slot_func__ZN15QGraphicsWidget15geometryChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsWidget15geometryChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsWidget_SlotProxy_connect__ZN15QGraphicsWidget15geometryChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsWidget15geometryChangedEv = (decltype(that->slot_func__ZN15QGraphicsWidget15geometryChangedEv))ffifptr;
  QObject::connect((QGraphicsWidget*)sender, SIGNAL(geometryChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsWidget15geometryChangedEv()));
  return that;
}
extern "C"
void QGraphicsWidget_SlotProxy_disconnect__ZN15QGraphicsWidget15geometryChangedEv(QGraphicsWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

