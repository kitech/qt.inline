#include <qsize.h>
#include <qwindowdefs.h>
#include <qfont.h>
#include <qfontmetrics.h>
#include <qfontinfo.h>
#include <qnamespace.h>
#include <qrect.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qwidget.h
// dst-file: /src/widgets/qwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qwidget.h>

extern "C" {

int QWidget_Class_Size()
{
  return sizeof(QWidget);
}

int QWidgetData_Class_Size()
{
  return sizeof(QWidgetData);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qwidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 227, column 10>
//   // proto:  bool QWidget::isEnabledToTLW();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isEnabledToTLW();
  };
}
// _ZNK7QWidget14isEnabledToTLWEv isEnabledToTLW()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 272, column 10>
//   // proto:  void QWidget::setSizeIncrement(const QSize & );
if (false) {
  auto f = [](const QSize & arg1) {
    ((QWidget*)0)->setSizeIncrement(arg1);
  };
}
// _ZN7QWidget16setSizeIncrementERK5QSize setSizeIncrement(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 218, column 10>
//   // proto:  bool QWidget::isTopLevel();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isTopLevel();
  };
}
// _ZNK7QWidget10isTopLevelEv isTopLevel()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 219, column 10>
//   // proto:  bool QWidget::isWindow();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isWindow();
  };
}
// _ZNK7QWidget8isWindowEv isWindow()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 485, column 10>
//   // proto:  bool QWidget::isVisible();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isVisible();
  };
}
// _ZNK7QWidget9isVisibleEv isVisible()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 502, column 17>
//   // proto:  void QWidget::setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical);
if (false) {
  auto f = [](QSizePolicy::Policy arg1, QSizePolicy::Policy arg2) {
    ((QWidget*)0)->setSizePolicy(arg1, arg2);
  };
}
// _ZN7QWidget13setSizePolicyEN11QSizePolicy6PolicyES1_ setSizePolicy(class QSizePolicy::Policy, class QSizePolicy::Policy)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 255, column 9>
//   // proto:  int QWidget::minimumHeight();
if (false) {
  auto f = []() {
    ((QWidget*)0)->minimumHeight();
  };
}
// _ZNK7QWidget13minimumHeightEv minimumHeight()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 449, column 17>
//   // proto:  void QWidget::update(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QWidget*)0)->update(arg1, arg2, arg3, arg4);
  };
}
// _ZN7QWidget6updateEiiii update(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 248, column 18>
//   // proto:  QRect QWidget::rect();
if (false) {
  auto f = []() {
    ((QWidget*)0)->rect();
  };
}
// _ZNK7QWidget4rectEv rect()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 258, column 10>
//   // proto:  void QWidget::setMinimumSize(const QSize & );
if (false) {
  auto f = [](const QSize & arg1) {
    ((QWidget*)0)->setMinimumSize(arg1);
  };
}
// _ZN7QWidget14setMinimumSizeERK5QSize setMinimumSize(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 402, column 17>
//   // proto:  void QWidget::setFocus();
if (false) {
  auto f = []() {
    ((QWidget*)0)->setFocus();
  };
}
// _ZN7QWidget8setFocusEv setFocus()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 553, column 28>
//   // proto:  Qt::WindowFlags QWidget::windowFlags();
if (false) {
  auto f = []() {
    ((QWidget*)0)->windowFlags();
  };
}
// _ZNK7QWidget11windowFlagsEv windowFlags()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 221, column 10>
//   // proto:  bool QWidget::isModal();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isModal();
  };
}
// _ZNK7QWidget7isModalEv isModal()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 238, column 18>
//   // proto:  const QRect & QWidget::geometry();
if (false) {
  auto f = []() {
    ((QWidget*)0)->geometry();
  };
}
// _ZNK7QWidget8geometryEv geometry()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 318, column 10>
//   // proto:  bool QWidget::hasMouseTracking();
if (false) {
  auto f = []() {
    ((QWidget*)0)->hasMouseTracking();
  };
}
// _ZNK7QWidget16hasMouseTrackingEv hasMouseTracking()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 487, column 17>
//   // proto:  bool QWidget::isHidden();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isHidden();
  };
}
// _ZNK7QWidget8isHiddenEv isHidden()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 559, column 21>
//   // proto:  QWidget * QWidget::childAt(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QWidget*)0)->childAt(arg1, arg2);
  };
}
// _ZNK7QWidget7childAtEii childAt(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 399, column 17>
//   // proto:  bool QWidget::isLeftToRight();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isLeftToRight();
  };
}
// _ZNK7QWidget13isLeftToRightEv isLeftToRight()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 246, column 16>
//   // proto:  int QWidget::width();
if (false) {
  auto f = []() {
    ((QWidget*)0)->width();
  };
}
// _ZNK7QWidget5widthEv width()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 225, column 10>
//   // proto:  bool QWidget::isEnabled();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isEnabled();
  };
}
// _ZNK7QWidget9isEnabledEv isEnabled()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 556, column 27>
//   // proto:  Qt::WindowType QWidget::windowType();
if (false) {
  auto f = []() {
    ((QWidget*)0)->windowType();
  };
}
// _ZNK7QWidget10windowTypeEv windowType()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 254, column 9>
//   // proto:  int QWidget::minimumWidth();
if (false) {
  auto f = []() {
    ((QWidget*)0)->minimumWidth();
  };
}
// _ZNK7QWidget12minimumWidthEv minimumWidth()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 309, column 15>
//   // proto:  QFontInfo QWidget::fontInfo();
if (false) {
  auto f = []() {
    ((QWidget*)0)->fontInfo();
  };
}
// _ZNK7QWidget8fontInfoEv fontInfo()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 308, column 18>
//   // proto:  QFontMetrics QWidget::fontMetrics();
if (false) {
  auto f = []() {
    ((QWidget*)0)->fontMetrics();
  };
}
// _ZNK7QWidget11fontMetricsEv fontMetrics()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 437, column 17>
//   // proto:  bool QWidget::updatesEnabled();
if (false) {
  auto f = []() {
    ((QWidget*)0)->updatesEnabled();
  };
}
// _ZNK7QWidget14updatesEnabledEv updatesEnabled()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 306, column 18>
//   // proto:  const QFont & QWidget::font();
if (false) {
  auto f = []() {
    ((QWidget*)0)->font();
  };
}
// _ZNK7QWidget4fontEv font()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 210, column 16>
//   // proto:  WId QWidget::internalWinId();
if (false) {
  auto f = []() {
    ((QWidget*)0)->internalWinId();
  };
}
// _ZNK7QWidget13internalWinIdEv internalWinId()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 260, column 10>
//   // proto:  void QWidget::setMaximumSize(const QSize & );
if (false) {
  auto f = [](const QSize & arg1) {
    ((QWidget*)0)->setMaximumSize(arg1);
  };
}
// _ZN7QWidget14setMaximumSizeERK5QSize setMaximumSize(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 478, column 10>
//   // proto:  void QWidget::resize(int w, int h);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QWidget*)0)->resize(arg1, arg2);
  };
}
// _ZN7QWidget6resizeEii resize(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 550, column 14>
//   // proto:  QWidget * QWidget::parentWidget();
if (false) {
  auto f = []() {
    ((QWidget*)0)->parentWidget();
  };
}
// _ZNK7QWidget12parentWidgetEv parentWidget()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 480, column 17>
//   // proto:  void QWidget::setGeometry(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QWidget*)0)->setGeometry(arg1, arg2, arg3, arg4);
  };
}
// _ZN7QWidget11setGeometryEiiii setGeometry(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 317, column 10>
//   // proto:  void QWidget::setMouseTracking(bool enable);
if (false) {
  auto f = [](bool arg1) {
    ((QWidget*)0)->setMouseTracking(arg1);
  };
}
// _ZN7QWidget16setMouseTrackingEb setMouseTracking(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 275, column 10>
//   // proto:  void QWidget::setBaseSize(const QSize & );
if (false) {
  auto f = [](const QSize & arg1) {
    ((QWidget*)0)->setBaseSize(arg1);
  };
}
// _ZN7QWidget11setBaseSizeERK5QSize setBaseSize(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 257, column 9>
//   // proto:  int QWidget::maximumHeight();
if (false) {
  auto f = []() {
    ((QWidget*)0)->maximumHeight();
  };
}
// _ZNK7QWidget13maximumHeightEv maximumHeight()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 476, column 10>
//   // proto:  void QWidget::move(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QWidget*)0)->move(arg1, arg2);
  };
}
// _ZN7QWidget4moveEii move(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 294, column 21>
//   // proto:  QWidget * QWidget::topLevelWidget();
if (false) {
  auto f = []() {
    ((QWidget*)0)->topLevelWidget();
  };
}
// _ZNK7QWidget14topLevelWidgetEv topLevelWidget()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 319, column 10>
//   // proto:  bool QWidget::underMouse();
if (false) {
  auto f = []() {
    ((QWidget*)0)->underMouse();
  };
}
// _ZNK7QWidget10underMouseEv underMouse()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 573, column 17>
//   // proto:  bool QWidget::testAttribute(Qt::WidgetAttribute );
if (false) {
  auto f = [](Qt::WidgetAttribute arg1) {
    ((QWidget*)0)->testAttribute(arg1);
  };
}
// _ZNK7QWidget13testAttributeEN2Qt15WidgetAttributeE testAttribute(Qt::WidgetAttribute)
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 247, column 16>
//   // proto:  int QWidget::height();
if (false) {
  auto f = []() {
    ((QWidget*)0)->height();
  };
}
// _ZNK7QWidget6heightEv height()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 245, column 11>
//   // proto:  QSize QWidget::size();
if (false) {
  auto f = []() {
    ((QWidget*)0)->size();
  };
}
// _ZNK7QWidget4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 256, column 9>
//   // proto:  int QWidget::maximumWidth();
if (false) {
  auto f = []() {
    ((QWidget*)0)->maximumWidth();
  };
}
// _ZNK7QWidget12maximumWidthEv maximumWidth()
// <SourceLocation file '/usr/include/qt/QtWidgets/qwidget.h', line 398, column 17>
//   // proto:  bool QWidget::isRightToLeft();
if (false) {
  auto f = []() {
    ((QWidget*)0)->isRightToLeft();
  };
}
// _ZNK7QWidget13isRightToLeftEv isRightToLeft()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QWidget_SlotProxy here
class QWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QWidget_SlotProxy():QObject(){}

public slots:
  // customContextMenuRequested(const class QPoint &)
  void slot_proxy_func__ZN7QWidget26customContextMenuRequestedERK6QPoint(const QPoint & arg0);
public:
  void (*slot_func__ZN7QWidget26customContextMenuRequestedERK6QPoint)(void* rsfptr, const QPoint & arg0) = NULL;
public slots:
  // windowIconChanged(const class QIcon &)
  void slot_proxy_func__ZN7QWidget17windowIconChangedERK5QIcon(const QIcon & arg0);
public:
  void (*slot_func__ZN7QWidget17windowIconChangedERK5QIcon)(void* rsfptr, const QIcon & arg0) = NULL;
public slots:
  // windowIconTextChanged(const class QString &)
  void slot_proxy_func__ZN7QWidget21windowIconTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN7QWidget21windowIconTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // windowTitleChanged(const class QString &)
  void slot_proxy_func__ZN7QWidget18windowTitleChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN7QWidget18windowTitleChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qwidget.moc"

extern "C" {
  QWidget_SlotProxy* QWidget_SlotProxy_new()
  {
    return new QWidget_SlotProxy();
  }
};

void QWidget_SlotProxy::slot_proxy_func__ZN7QWidget26customContextMenuRequestedERK6QPoint(const QPoint & arg0) {
  if (this->slot_func__ZN7QWidget26customContextMenuRequestedERK6QPoint != NULL) {
    // do smth...
    this->slot_func__ZN7QWidget26customContextMenuRequestedERK6QPoint(this->rsfptr, arg0);
  }
}
extern "C"
void* QWidget_SlotProxy_connect__ZN7QWidget26customContextMenuRequestedERK6QPoint(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWidget26customContextMenuRequestedERK6QPoint = (decltype(that->slot_func__ZN7QWidget26customContextMenuRequestedERK6QPoint))ffifptr;
  QObject::connect((QWidget*)sender, SIGNAL(customContextMenuRequested(const class QPoint &)), that, SLOT(slot_proxy_func__ZN7QWidget26customContextMenuRequestedERK6QPoint(const QPoint & arg0)));
  return that;
}
extern "C"
void QWidget_SlotProxy_disconnect__ZN7QWidget26customContextMenuRequestedERK6QPoint(QWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWidget_SlotProxy::slot_proxy_func__ZN7QWidget17windowIconChangedERK5QIcon(const QIcon & arg0) {
  if (this->slot_func__ZN7QWidget17windowIconChangedERK5QIcon != NULL) {
    // do smth...
    this->slot_func__ZN7QWidget17windowIconChangedERK5QIcon(this->rsfptr, arg0);
  }
}
extern "C"
void* QWidget_SlotProxy_connect__ZN7QWidget17windowIconChangedERK5QIcon(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWidget17windowIconChangedERK5QIcon = (decltype(that->slot_func__ZN7QWidget17windowIconChangedERK5QIcon))ffifptr;
  QObject::connect((QWidget*)sender, SIGNAL(windowIconChanged(const class QIcon &)), that, SLOT(slot_proxy_func__ZN7QWidget17windowIconChangedERK5QIcon(const QIcon & arg0)));
  return that;
}
extern "C"
void QWidget_SlotProxy_disconnect__ZN7QWidget17windowIconChangedERK5QIcon(QWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWidget_SlotProxy::slot_proxy_func__ZN7QWidget21windowIconTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN7QWidget21windowIconTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN7QWidget21windowIconTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QWidget_SlotProxy_connect__ZN7QWidget21windowIconTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWidget21windowIconTextChangedERK7QString = (decltype(that->slot_func__ZN7QWidget21windowIconTextChangedERK7QString))ffifptr;
  QObject::connect((QWidget*)sender, SIGNAL(windowIconTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN7QWidget21windowIconTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QWidget_SlotProxy_disconnect__ZN7QWidget21windowIconTextChangedERK7QString(QWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWidget_SlotProxy::slot_proxy_func__ZN7QWidget18windowTitleChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN7QWidget18windowTitleChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN7QWidget18windowTitleChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QWidget_SlotProxy_connect__ZN7QWidget18windowTitleChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWidget18windowTitleChangedERK7QString = (decltype(that->slot_func__ZN7QWidget18windowTitleChangedERK7QString))ffifptr;
  QObject::connect((QWidget*)sender, SIGNAL(windowTitleChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN7QWidget18windowTitleChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QWidget_SlotProxy_disconnect__ZN7QWidget18windowTitleChangedERK7QString(QWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

