// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qlistwidget.h
// dst-file: /src/widgets/qlistwidget.cxx
//

// header block begin =>
#include <qlistwidget.h>

extern "C" {

int QListWidgetItem_Class_Size()
{
  return sizeof(QListWidgetItem);
}

// ~QListWidgetItem()
void dedtor_ZN15QListWidgetItemD0Ev(QListWidgetItem* that)
{
  QListWidgetItem* rthis = (QListWidgetItem*)that;
  delete rthis;
}

// QListWidgetItem(class QListWidget *, int)
QListWidgetItem* dector_ZN15QListWidgetItemC1EP11QListWidgeti(QListWidget * view, int type)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(view, type);
  return rthis;
}

// QListWidgetItem(const class QIcon &, const class QString &, class QListWidget *, int)
QListWidgetItem* dector_ZN15QListWidgetItemC1ERK5QIconRK7QStringP11QListWidgeti(const QIcon & icon, const QString & text, QListWidget * view, int type)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(icon, text, view, type);
  return rthis;
}

// QListWidgetItem(const class QString &, class QListWidget *, int)
QListWidgetItem* dector_ZN15QListWidgetItemC1ERK7QStringP11QListWidgeti(const QString & text, QListWidget * view, int type)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(text, view, type);
  return rthis;
}

// QListWidgetItem(const class QListWidgetItem &)
QListWidgetItem* dector_ZN15QListWidgetItemC1ERKS_(const QListWidgetItem & other)
{
  // static_assert(sizeof(QListWidgetItem) == 32, "tyszerr");
  QListWidgetItem* rthis = new QListWidgetItem(other);
  return rthis;
}

  // proto:  bool QListWidgetItem::isHidden();
bool demth_ZNK15QListWidgetItem8isHiddenEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->isHidden();
}

  // proto:  void QListWidgetItem::setBackground(const QBrush & brush);
void demth_ZN15QListWidgetItem13setBackgroundERK6QBrush(void *that, const QBrush & brush)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setBackground(brush);
}

  // proto:  void QListWidgetItem::setSelected(bool select);
void demth_ZN15QListWidgetItem11setSelectedEb(void *that, bool select)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  QFont QListWidgetItem::font();
QFont* demth_ZNK15QListWidgetItem4fontEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->font();
  return new QFont(recret);
}

  // proto:  void QListWidgetItem::setTextAlignment(int alignment);
void demth_ZN15QListWidgetItem16setTextAlignmentEi(void *that, int alignment)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setTextAlignment(alignment);
}

  // proto:  QString QListWidgetItem::whatsThis();
QString* demth_ZNK15QListWidgetItem9whatsThisEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->whatsThis();
  return new QString(recret);
}

  // proto:  int QListWidgetItem::type();
int demth_ZNK15QListWidgetItem4typeEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->type();
}

  // proto:  QIcon QListWidgetItem::icon();
QIcon* demth_ZNK15QListWidgetItem4iconEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->icon();
  return new QIcon(recret);
}

  // proto:  QColor QListWidgetItem::textColor();
QColor* demth_ZNK15QListWidgetItem9textColorEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->textColor();
  return new QColor(recret);
}

  // proto:  QBrush QListWidgetItem::foreground();
QBrush* demth_ZNK15QListWidgetItem10foregroundEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->foreground();
  return new QBrush(recret);
}

  // proto:  QBrush QListWidgetItem::background();
QBrush* demth_ZNK15QListWidgetItem10backgroundEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->background();
  return new QBrush(recret);
}

  // proto:  void QListWidgetItem::setStatusTip(const QString & statusTip);
void demth_ZN15QListWidgetItem12setStatusTipERK7QString(void *that, const QString & statusTip)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setStatusTip(statusTip);
}

  // proto:  QString QListWidgetItem::text();
QString* demth_ZNK15QListWidgetItem4textEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->text();
  return new QString(recret);
}

  // proto:  QColor QListWidgetItem::backgroundColor();
QColor* demth_ZNK15QListWidgetItem15backgroundColorEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->backgroundColor();
  return new QColor(recret);
}

  // proto:  bool QListWidgetItem::isSelected();
bool demth_ZNK15QListWidgetItem10isSelectedEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->isSelected();
}

  // proto:  void QListWidgetItem::setFont(const QFont & font);
void demth_ZN15QListWidgetItem7setFontERK5QFont(void *that, const QFont & font)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setFont(font);
}

  // proto:  void QListWidgetItem::setCheckState(Qt::CheckState state);
void demth_ZN15QListWidgetItem13setCheckStateEN2Qt10CheckStateE(void *that, Qt::CheckState state)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setCheckState(state);
}

  // proto:  void QListWidgetItem::setText(const QString & text);
void demth_ZN15QListWidgetItem7setTextERK7QString(void *that, const QString & text)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setText(text);
}

  // proto:  QSize QListWidgetItem::sizeHint();
QSize* demth_ZNK15QListWidgetItem8sizeHintEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->sizeHint();
  return new QSize(recret);
}

  // proto:  void QListWidgetItem::setWhatsThis(const QString & whatsThis);
void demth_ZN15QListWidgetItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  void QListWidgetItem::setTextColor(const QColor & color);
void demth_ZN15QListWidgetItem12setTextColorERK6QColor(void *that, const QColor & color)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setTextColor(color);
}

  // proto:  void QListWidgetItem::setSizeHint(const QSize & size);
void demth_ZN15QListWidgetItem11setSizeHintERK5QSize(void *that, const QSize & size)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setSizeHint(size);
}

  // proto:  QListWidget * QListWidgetItem::listWidget();
QListWidget * demth_ZNK15QListWidgetItem10listWidgetEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->listWidget();
}

  // proto:  void QListWidgetItem::setIcon(const QIcon & icon);
void demth_ZN15QListWidgetItem7setIconERK5QIcon(void *that, const QIcon & icon)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setIcon(icon);
}

  // proto:  void QListWidgetItem::setBackgroundColor(const QColor & color);
void demth_ZN15QListWidgetItem18setBackgroundColorERK6QColor(void *that, const QColor & color)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setBackgroundColor(color);
}

  // proto:  void QListWidgetItem::setForeground(const QBrush & brush);
void demth_ZN15QListWidgetItem13setForegroundERK6QBrush(void *that, const QBrush & brush)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setForeground(brush);
}

  // proto:  void QListWidgetItem::setHidden(bool hide);
void demth_ZN15QListWidgetItem9setHiddenEb(void *that, bool hide)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setHidden(hide);
}

  // proto:  QString QListWidgetItem::toolTip();
QString* demth_ZNK15QListWidgetItem7toolTipEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->toolTip();
  return new QString(recret);
}

  // proto:  int QListWidgetItem::textAlignment();
int demth_ZNK15QListWidgetItem13textAlignmentEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->textAlignment();
}

  // proto:  QString QListWidgetItem::statusTip();
QString* demth_ZNK15QListWidgetItem9statusTipEv(void *that)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->statusTip();
  return new QString(recret);
}

  // proto:  void QListWidgetItem::setToolTip(const QString & toolTip);
void demth_ZN15QListWidgetItem10setToolTipERK7QString(void *that, const QString & toolTip)
{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setToolTip(toolTip);
}

int QListWidget_Class_Size()
{
  return sizeof(QListWidget);
}

// QListWidget(class QWidget *)
QListWidget* dector_ZN11QListWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QListWidget) == 32, "tyszerr");
  QListWidget* rthis = new QListWidget(parent);
  return rthis;
}

// ~QListWidget()
void dedtor_ZN11QListWidgetD0Ev(QListWidget* that)
{
  QListWidget* rthis = (QListWidget*)that;
  delete rthis;
}

  // proto:  void QListWidget::addItem(QListWidgetItem * item);
void demth_ZN11QListWidget7addItemEP15QListWidgetItem(void *that, QListWidgetItem * item)
{
  QListWidget *cthat = (QListWidget *)that;
   cthat->addItem(item);
}

  // proto:  void QListWidget::addItems(const QStringList & labels);
void demth_ZN11QListWidget8addItemsERK11QStringList(void *that, const QStringList & labels)
{
  QListWidget *cthat = (QListWidget *)that;
   cthat->addItems(labels);
}

  // proto:  void QListWidget::removeItemWidget(QListWidgetItem * item);
void demth_ZN11QListWidget16removeItemWidgetEP15QListWidgetItem(void *that, QListWidgetItem * item)
{
  QListWidget *cthat = (QListWidget *)that;
   cthat->removeItemWidget(item);
}

  // proto:  QListWidgetItem * QListWidget::itemAt(int x, int y);
QListWidgetItem * demth_ZNK11QListWidget6itemAtEii(void *that, int x, int y)
{
  QListWidget *cthat = (QListWidget *)that;
  return cthat->itemAt(x, y);
}

  // proto:  void QListWidget::addItem(const QString & label);
void demth_ZN11QListWidget7addItemERK7QString(void *that, const QString & label)
{
  QListWidget *cthat = (QListWidget *)that;
   cthat->addItem(label);
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
// QListWidget_SlotProxy here
class QListWidget_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QListWidget_SlotProxy():QObject(){}

public slots:
  // itemPressed(class QListWidgetItem *)
  void slot_proxy_func__ZN11QListWidget11itemPressedEP15QListWidgetItem(QListWidgetItem * arg0);
public:
  void (*slot_func__ZN11QListWidget11itemPressedEP15QListWidgetItem)(QListWidgetItem * arg0) = NULL;
public slots:
  // itemClicked(class QListWidgetItem *)
  void slot_proxy_func__ZN11QListWidget11itemClickedEP15QListWidgetItem(QListWidgetItem * arg0);
public:
  void (*slot_func__ZN11QListWidget11itemClickedEP15QListWidgetItem)(QListWidgetItem * arg0) = NULL;
public slots:
  // itemDoubleClicked(class QListWidgetItem *)
  void slot_proxy_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(QListWidgetItem * arg0);
public:
  void (*slot_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem)(QListWidgetItem * arg0) = NULL;
public slots:
  // itemActivated(class QListWidgetItem *)
  void slot_proxy_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem(QListWidgetItem * arg0);
public:
  void (*slot_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem)(QListWidgetItem * arg0) = NULL;
public slots:
  // itemEntered(class QListWidgetItem *)
  void slot_proxy_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem(QListWidgetItem * arg0);
public:
  void (*slot_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem)(QListWidgetItem * arg0) = NULL;
public slots:
  // itemChanged(class QListWidgetItem *)
  void slot_proxy_func__ZN11QListWidget11itemChangedEP15QListWidgetItem(QListWidgetItem * arg0);
public:
  void (*slot_func__ZN11QListWidget11itemChangedEP15QListWidgetItem)(QListWidgetItem * arg0) = NULL;
public slots:
  // currentItemChanged(class QListWidgetItem *, class QListWidgetItem *)
  void slot_proxy_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(QListWidgetItem * arg0, QListWidgetItem * arg1);
public:
  void (*slot_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_)(QListWidgetItem * arg0, QListWidgetItem * arg1) = NULL;
public slots:
  // currentTextChanged(const class QString &)
  void slot_proxy_func__ZN11QListWidget18currentTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QListWidget18currentTextChangedERK7QString)(const QString & arg0) = NULL;
public slots:
  // currentRowChanged(int)
  void slot_proxy_func__ZN11QListWidget17currentRowChangedEi(int arg0);
public:
  void (*slot_func__ZN11QListWidget17currentRowChangedEi)(int arg0) = NULL;
public slots:
  // itemSelectionChanged()
  void slot_proxy_func__ZN11QListWidget20itemSelectionChangedEv();
public:
  void (*slot_func__ZN11QListWidget20itemSelectionChangedEv)() = NULL;
};
#include "src/widgets/qlistwidget.moc"

extern "C" {
  QListWidget_SlotProxy* QListWidget_SlotProxy_new()
  {
    return new QListWidget_SlotProxy();
  }
};

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget11itemPressedEP15QListWidgetItem(QListWidgetItem * arg0) {
  if (this->slot_func__ZN11QListWidget11itemPressedEP15QListWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget11itemPressedEP15QListWidgetItem(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget11itemPressedEP15QListWidgetItem(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget11itemPressedEP15QListWidgetItem = (decltype(that->slot_func__ZN11QListWidget11itemPressedEP15QListWidgetItem))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(itemPressed(class QListWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QListWidget11itemPressedEP15QListWidgetItem(QListWidgetItem * arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget11itemPressedEP15QListWidgetItem(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget11itemClickedEP15QListWidgetItem(QListWidgetItem * arg0) {
  if (this->slot_func__ZN11QListWidget11itemClickedEP15QListWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget11itemClickedEP15QListWidgetItem(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget11itemClickedEP15QListWidgetItem(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget11itemClickedEP15QListWidgetItem = (decltype(that->slot_func__ZN11QListWidget11itemClickedEP15QListWidgetItem))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(itemClicked(class QListWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QListWidget11itemClickedEP15QListWidgetItem(QListWidgetItem * arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget11itemClickedEP15QListWidgetItem(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(QListWidgetItem * arg0) {
  if (this->slot_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem = (decltype(that->slot_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(itemDoubleClicked(class QListWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(QListWidgetItem * arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem(QListWidgetItem * arg0) {
  if (this->slot_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget13itemActivatedEP15QListWidgetItem(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem = (decltype(that->slot_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(itemActivated(class QListWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QListWidget13itemActivatedEP15QListWidgetItem(QListWidgetItem * arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget13itemActivatedEP15QListWidgetItem(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem(QListWidgetItem * arg0) {
  if (this->slot_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget11itemEnteredEP15QListWidgetItem(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem = (decltype(that->slot_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(itemEntered(class QListWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QListWidget11itemEnteredEP15QListWidgetItem(QListWidgetItem * arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget11itemEnteredEP15QListWidgetItem(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget11itemChangedEP15QListWidgetItem(QListWidgetItem * arg0) {
  if (this->slot_func__ZN11QListWidget11itemChangedEP15QListWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget11itemChangedEP15QListWidgetItem(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget11itemChangedEP15QListWidgetItem(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget11itemChangedEP15QListWidgetItem = (decltype(that->slot_func__ZN11QListWidget11itemChangedEP15QListWidgetItem))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(itemChanged(class QListWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QListWidget11itemChangedEP15QListWidgetItem(QListWidgetItem * arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget11itemChangedEP15QListWidgetItem(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(QListWidgetItem * arg0, QListWidgetItem * arg1) {
  if (this->slot_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_ != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(arg0, arg1);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_ = (decltype(that->slot_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(currentItemChanged(class QListWidgetItem *, class QListWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(QListWidgetItem * arg0, QListWidgetItem * arg1)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget18currentTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QListWidget18currentTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget18currentTextChangedERK7QString(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget18currentTextChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget18currentTextChangedERK7QString = (decltype(that->slot_func__ZN11QListWidget18currentTextChangedERK7QString))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(currentTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN11QListWidget18currentTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget18currentTextChangedERK7QString(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget17currentRowChangedEi(int arg0) {
  if (this->slot_func__ZN11QListWidget17currentRowChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget17currentRowChangedEi(arg0);
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget17currentRowChangedEi(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget17currentRowChangedEi = (decltype(that->slot_func__ZN11QListWidget17currentRowChangedEi))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(currentRowChanged(int)), that, SLOT(slot_proxy_func__ZN11QListWidget17currentRowChangedEi(int arg0)));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget17currentRowChangedEi(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QListWidget_SlotProxy::slot_proxy_func__ZN11QListWidget20itemSelectionChangedEv() {
  if (this->slot_func__ZN11QListWidget20itemSelectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QListWidget20itemSelectionChangedEv();
  }
}
extern "C"
void* QListWidget_SlotProxy_connect__ZN11QListWidget20itemSelectionChangedEv(QObject* sender, void* fptr){
  auto that = new QListWidget_SlotProxy();
  that->slot_func__ZN11QListWidget20itemSelectionChangedEv = (decltype(that->slot_func__ZN11QListWidget20itemSelectionChangedEv))fptr;
  QObject::connect((QListWidget*)sender, SIGNAL(itemSelectionChanged()), that, SLOT(slot_proxy_func__ZN11QListWidget20itemSelectionChangedEv()));
  return that;
}
extern "C"
void QListWidget_SlotProxy_disconnect__ZN11QListWidget20itemSelectionChangedEv(QListWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

