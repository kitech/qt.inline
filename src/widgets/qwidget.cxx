// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qwidget.h
// dst-file: /src/widgets/qwidget.cxx
//

// header block begin =>
#include <qwidget.h>

extern "C" {

int QWidget_Class_Size()
{
  return sizeof(QWidget);
}

// QWidget(class QWidget *, Qt::WindowFlags)
QWidget* dector_ZN7QWidgetC1EPS_6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QWidget) == 32, "tyszerr");
  QWidget* rthis = new QWidget(parent, f);
  return rthis;
}

// ~QWidget()
void dedtor_ZN7QWidgetD0Ev(QWidget* that)
{
  QWidget* rthis = (QWidget*)that;
  delete rthis;
}

  // proto:  bool QWidget::isEnabledToTLW();
bool demth_ZNK7QWidget14isEnabledToTLWEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isEnabledToTLW();
}

  // proto:  void QWidget::setSizeIncrement(const QSize & );
void demth_ZN7QWidget16setSizeIncrementERK5QSize(void *that, const QSize & arg1)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setSizeIncrement(arg1);
}

  // proto:  bool QWidget::isTopLevel();
bool demth_ZNK7QWidget10isTopLevelEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isTopLevel();
}

  // proto:  bool QWidget::isWindow();
bool demth_ZNK7QWidget8isWindowEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isWindow();
}

  // proto:  bool QWidget::isVisible();
bool demth_ZNK7QWidget9isVisibleEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isVisible();
}

  // proto:  void QWidget::setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical);
void demth_ZN7QWidget13setSizePolicyEN11QSizePolicy6PolicyES1_(void *that, QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setSizePolicy(horizontal, vertical);
}

  // proto:  int QWidget::minimumHeight();
int demth_ZNK7QWidget13minimumHeightEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->minimumHeight();
}

  // proto:  void QWidget::update(int x, int y, int w, int h);
void demth_ZN7QWidget6updateEiiii(void *that, int x, int y, int w, int h)
{
  QWidget *cthat = (QWidget *)that;
   cthat->update(x, y, w, h);
}

  // proto:  QRect QWidget::rect();
QRect* demth_ZNK7QWidget4rectEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  auto recret = cthat->rect();
  return new QRect(recret);
}

  // proto:  void QWidget::setMinimumSize(const QSize & );
void demth_ZN7QWidget14setMinimumSizeERK5QSize(void *that, const QSize & arg1)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setMinimumSize(arg1);
}

  // proto:  void QWidget::setFocus();
void demth_ZN7QWidget8setFocusEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setFocus();
}

  // proto:  bool QWidget::isModal();
bool demth_ZNK7QWidget7isModalEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isModal();
}

  // proto:  const QRect & QWidget::geometry();
const QRect * demth_ZNK7QWidget8geometryEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return &cthat->geometry();
}

  // proto:  bool QWidget::hasMouseTracking();
bool demth_ZNK7QWidget16hasMouseTrackingEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->hasMouseTracking();
}

  // proto:  bool QWidget::isHidden();
bool demth_ZNK7QWidget8isHiddenEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isHidden();
}

  // proto:  QWidget * QWidget::childAt(int x, int y);
QWidget * demth_ZNK7QWidget7childAtEii(void *that, int x, int y)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->childAt(x, y);
}

  // proto:  bool QWidget::isLeftToRight();
bool demth_ZNK7QWidget13isLeftToRightEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isLeftToRight();
}

  // proto:  int QWidget::width();
int demth_ZNK7QWidget5widthEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->width();
}

  // proto:  bool QWidget::isEnabled();
bool demth_ZNK7QWidget9isEnabledEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isEnabled();
}

  // proto:  int QWidget::minimumWidth();
int demth_ZNK7QWidget12minimumWidthEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->minimumWidth();
}

  // proto:  QFontInfo QWidget::fontInfo();
QFontInfo* demth_ZNK7QWidget8fontInfoEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  auto recret = cthat->fontInfo();
  return new QFontInfo(recret);
}

  // proto:  QFontMetrics QWidget::fontMetrics();
QFontMetrics* demth_ZNK7QWidget11fontMetricsEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  auto recret = cthat->fontMetrics();
  return new QFontMetrics(recret);
}

  // proto:  bool QWidget::updatesEnabled();
bool demth_ZNK7QWidget14updatesEnabledEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->updatesEnabled();
}

  // proto:  const QFont & QWidget::font();
const QFont * demth_ZNK7QWidget4fontEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return &cthat->font();
}

  // proto:  void QWidget::setMaximumSize(const QSize & );
void demth_ZN7QWidget14setMaximumSizeERK5QSize(void *that, const QSize & arg1)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setMaximumSize(arg1);
}

  // proto:  void QWidget::resize(int w, int h);
void demth_ZN7QWidget6resizeEii(void *that, int w, int h)
{
  QWidget *cthat = (QWidget *)that;
   cthat->resize(w, h);
}

  // proto:  QWidget * QWidget::parentWidget();
QWidget * demth_ZNK7QWidget12parentWidgetEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->parentWidget();
}

  // proto:  void QWidget::setGeometry(int x, int y, int w, int h);
void demth_ZN7QWidget11setGeometryEiiii(void *that, int x, int y, int w, int h)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setGeometry(x, y, w, h);
}

  // proto:  void QWidget::setMouseTracking(bool enable);
void demth_ZN7QWidget16setMouseTrackingEb(void *that, bool enable)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setMouseTracking(enable);
}

  // proto:  void QWidget::setBaseSize(const QSize & );
void demth_ZN7QWidget11setBaseSizeERK5QSize(void *that, const QSize & arg1)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setBaseSize(arg1);
}

  // proto:  int QWidget::maximumHeight();
int demth_ZNK7QWidget13maximumHeightEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->maximumHeight();
}

  // proto:  void QWidget::move(int x, int y);
void demth_ZN7QWidget4moveEii(void *that, int x, int y)
{
  QWidget *cthat = (QWidget *)that;
   cthat->move(x, y);
}

  // proto:  QWidget * QWidget::topLevelWidget();
QWidget * demth_ZNK7QWidget14topLevelWidgetEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->topLevelWidget();
}

  // proto:  bool QWidget::underMouse();
bool demth_ZNK7QWidget10underMouseEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->underMouse();
}

  // proto:  bool QWidget::testAttribute(Qt::WidgetAttribute );
bool demth_ZNK7QWidget13testAttributeEN2Qt15WidgetAttributeE(void *that, Qt::WidgetAttribute arg1)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->testAttribute(arg1);
}

  // proto:  int QWidget::height();
int demth_ZNK7QWidget6heightEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->height();
}

  // proto:  QSize QWidget::size();
QSize* demth_ZNK7QWidget4sizeEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  auto recret = cthat->size();
  return new QSize(recret);
}

  // proto:  int QWidget::maximumWidth();
int demth_ZNK7QWidget12maximumWidthEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->maximumWidth();
}

  // proto:  bool QWidget::isRightToLeft();
bool demth_ZNK7QWidget13isRightToLeftEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isRightToLeft();
}

int QWidgetData_Class_Size()
{
  return sizeof(QWidgetData);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
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

