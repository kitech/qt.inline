// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qtablewidget.h
// dst-file: /src/widgets/qtablewidget.cxx
//

// header block begin =>
#include <qtablewidget.h>

extern "C" {

int QTableWidgetSelectionRange_Class_Size()
{
  return sizeof(QTableWidgetSelectionRange);
}

// QTableWidgetSelectionRange(int, int, int, int)
QTableWidgetSelectionRange* dector_ZN26QTableWidgetSelectionRangeC1Eiiii(int top, int left, int bottom, int right)
{
  // static_assert(sizeof(QTableWidgetSelectionRange) == 32, "tyszerr");
  QTableWidgetSelectionRange* rthis = new QTableWidgetSelectionRange(top, left, bottom, right);
  return rthis;
}

// ~QTableWidgetSelectionRange()
void dedtor_ZN26QTableWidgetSelectionRangeD0Ev(QTableWidgetSelectionRange* that)
{
  QTableWidgetSelectionRange* rthis = (QTableWidgetSelectionRange*)that;
  delete rthis;
}

// QTableWidgetSelectionRange()
QTableWidgetSelectionRange* dector_ZN26QTableWidgetSelectionRangeC1Ev()
{
  // static_assert(sizeof(QTableWidgetSelectionRange) == 32, "tyszerr");
  QTableWidgetSelectionRange* rthis = new QTableWidgetSelectionRange();
  return rthis;
}

// QTableWidgetSelectionRange(const class QTableWidgetSelectionRange &)
QTableWidgetSelectionRange* dector_ZN26QTableWidgetSelectionRangeC1ERKS_(const QTableWidgetSelectionRange & other)
{
  // static_assert(sizeof(QTableWidgetSelectionRange) == 32, "tyszerr");
  QTableWidgetSelectionRange* rthis = new QTableWidgetSelectionRange(other);
  return rthis;
}

  // proto:  int QTableWidgetSelectionRange::columnCount();
int demth_ZNK26QTableWidgetSelectionRange11columnCountEv(void *that)
{
  QTableWidgetSelectionRange *cthat = (QTableWidgetSelectionRange *)that;
  return cthat->columnCount();
}

  // proto:  int QTableWidgetSelectionRange::rowCount();
int demth_ZNK26QTableWidgetSelectionRange8rowCountEv(void *that)
{
  QTableWidgetSelectionRange *cthat = (QTableWidgetSelectionRange *)that;
  return cthat->rowCount();
}

  // proto:  int QTableWidgetSelectionRange::leftColumn();
int demth_ZNK26QTableWidgetSelectionRange10leftColumnEv(void *that)
{
  QTableWidgetSelectionRange *cthat = (QTableWidgetSelectionRange *)that;
  return cthat->leftColumn();
}

  // proto:  int QTableWidgetSelectionRange::topRow();
int demth_ZNK26QTableWidgetSelectionRange6topRowEv(void *that)
{
  QTableWidgetSelectionRange *cthat = (QTableWidgetSelectionRange *)that;
  return cthat->topRow();
}

  // proto:  int QTableWidgetSelectionRange::rightColumn();
int demth_ZNK26QTableWidgetSelectionRange11rightColumnEv(void *that)
{
  QTableWidgetSelectionRange *cthat = (QTableWidgetSelectionRange *)that;
  return cthat->rightColumn();
}

  // proto:  int QTableWidgetSelectionRange::bottomRow();
int demth_ZNK26QTableWidgetSelectionRange9bottomRowEv(void *that)
{
  QTableWidgetSelectionRange *cthat = (QTableWidgetSelectionRange *)that;
  return cthat->bottomRow();
}

int QTableWidget_Class_Size()
{
  return sizeof(QTableWidget);
}

// ~QTableWidget()
void dedtor_ZN12QTableWidgetD0Ev(QTableWidget* that)
{
  QTableWidget* rthis = (QTableWidget*)that;
  delete rthis;
}

// QTableWidget(int, int, class QWidget *)
QTableWidget* dector_ZN12QTableWidgetC1EiiP7QWidget(int rows, int columns, QWidget * parent)
{
  // static_assert(sizeof(QTableWidget) == 32, "tyszerr");
  QTableWidget* rthis = new QTableWidget(rows, columns, parent);
  return rthis;
}

// QTableWidget(class QWidget *)
QTableWidget* dector_ZN12QTableWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTableWidget) == 32, "tyszerr");
  QTableWidget* rthis = new QTableWidget(parent);
  return rthis;
}

  // proto:  void QTableWidget::removeCellWidget(int row, int column);
void demth_ZN12QTableWidget16removeCellWidgetEii(void *that, int row, int column)
{
  QTableWidget *cthat = (QTableWidget *)that;
   cthat->removeCellWidget(row, column);
}

  // proto:  QTableWidgetItem * QTableWidget::itemAt(int x, int y);
QTableWidgetItem * demth_ZNK12QTableWidget6itemAtEii(void *that, int x, int y)
{
  QTableWidget *cthat = (QTableWidget *)that;
  return cthat->itemAt(x, y);
}

int QTableWidgetItem_Class_Size()
{
  return sizeof(QTableWidgetItem);
}

// ~QTableWidgetItem()
void dedtor_ZN16QTableWidgetItemD0Ev(QTableWidgetItem* that)
{
  QTableWidgetItem* rthis = (QTableWidgetItem*)that;
  delete rthis;
}

// QTableWidgetItem(const class QTableWidgetItem &)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1ERKS_(const QTableWidgetItem & other)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(other);
  return rthis;
}

// QTableWidgetItem(const class QString &, int)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1ERK7QStringi(const QString & text, int type)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(text, type);
  return rthis;
}

// QTableWidgetItem(int)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1Ei(int type)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(type);
  return rthis;
}

// QTableWidgetItem(const class QIcon &, const class QString &, int)
QTableWidgetItem* dector_ZN16QTableWidgetItemC1ERK5QIconRK7QStringi(const QIcon & icon, const QString & text, int type)
{
  // static_assert(sizeof(QTableWidgetItem) == 32, "tyszerr");
  QTableWidgetItem* rthis = new QTableWidgetItem(icon, text, type);
  return rthis;
}

  // proto:  QColor QTableWidgetItem::backgroundColor();
QColor* demth_ZNK16QTableWidgetItem15backgroundColorEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->backgroundColor();
  return new QColor(recret);
}

  // proto:  void QTableWidgetItem::setSelected(bool select);
void demth_ZN16QTableWidgetItem11setSelectedEb(void *that, bool select)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  void QTableWidgetItem::setStatusTip(const QString & statusTip);
void demth_ZN16QTableWidgetItem12setStatusTipERK7QString(void *that, const QString & statusTip)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setStatusTip(statusTip);
}

  // proto:  QColor QTableWidgetItem::textColor();
QColor* demth_ZNK16QTableWidgetItem9textColorEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->textColor();
  return new QColor(recret);
}

  // proto:  void QTableWidgetItem::setCheckState(Qt::CheckState state);
void demth_ZN16QTableWidgetItem13setCheckStateEN2Qt10CheckStateE(void *that, Qt::CheckState state)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setCheckState(state);
}

  // proto:  QString QTableWidgetItem::text();
QString* demth_ZNK16QTableWidgetItem4textEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->text();
  return new QString(recret);
}

  // proto:  void QTableWidgetItem::setSizeHint(const QSize & size);
void demth_ZN16QTableWidgetItem11setSizeHintERK5QSize(void *that, const QSize & size)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setSizeHint(size);
}

  // proto:  QBrush QTableWidgetItem::foreground();
QBrush* demth_ZNK16QTableWidgetItem10foregroundEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->foreground();
  return new QBrush(recret);
}

  // proto:  int QTableWidgetItem::type();
int demth_ZNK16QTableWidgetItem4typeEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->type();
}

  // proto:  int QTableWidgetItem::column();
int demth_ZNK16QTableWidgetItem6columnEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->column();
}

  // proto:  void QTableWidgetItem::setTextAlignment(int alignment);
void demth_ZN16QTableWidgetItem16setTextAlignmentEi(void *that, int alignment)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setTextAlignment(alignment);
}

  // proto:  QFont QTableWidgetItem::font();
QFont* demth_ZNK16QTableWidgetItem4fontEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->font();
  return new QFont(recret);
}

  // proto:  QIcon QTableWidgetItem::icon();
QIcon* demth_ZNK16QTableWidgetItem4iconEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->icon();
  return new QIcon(recret);
}

  // proto:  QBrush QTableWidgetItem::background();
QBrush* demth_ZNK16QTableWidgetItem10backgroundEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->background();
  return new QBrush(recret);
}

  // proto:  void QTableWidgetItem::setIcon(const QIcon & icon);
void demth_ZN16QTableWidgetItem7setIconERK5QIcon(void *that, const QIcon & icon)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setIcon(icon);
}

  // proto:  QString QTableWidgetItem::statusTip();
QString* demth_ZNK16QTableWidgetItem9statusTipEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->statusTip();
  return new QString(recret);
}

  // proto:  void QTableWidgetItem::setWhatsThis(const QString & whatsThis);
void demth_ZN16QTableWidgetItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  QSize QTableWidgetItem::sizeHint();
QSize* demth_ZNK16QTableWidgetItem8sizeHintEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->sizeHint();
  return new QSize(recret);
}

  // proto:  void QTableWidgetItem::setForeground(const QBrush & brush);
void demth_ZN16QTableWidgetItem13setForegroundERK6QBrush(void *that, const QBrush & brush)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setForeground(brush);
}

  // proto:  int QTableWidgetItem::row();
int demth_ZNK16QTableWidgetItem3rowEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->row();
}

  // proto:  QTableWidget * QTableWidgetItem::tableWidget();
QTableWidget * demth_ZNK16QTableWidgetItem11tableWidgetEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->tableWidget();
}

  // proto:  int QTableWidgetItem::textAlignment();
int demth_ZNK16QTableWidgetItem13textAlignmentEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->textAlignment();
}

  // proto:  QString QTableWidgetItem::toolTip();
QString* demth_ZNK16QTableWidgetItem7toolTipEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->toolTip();
  return new QString(recret);
}

  // proto:  bool QTableWidgetItem::isSelected();
bool demth_ZNK16QTableWidgetItem10isSelectedEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  return cthat->isSelected();
}

  // proto:  void QTableWidgetItem::setBackgroundColor(const QColor & color);
void demth_ZN16QTableWidgetItem18setBackgroundColorERK6QColor(void *that, const QColor & color)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setBackgroundColor(color);
}

  // proto:  void QTableWidgetItem::setBackground(const QBrush & brush);
void demth_ZN16QTableWidgetItem13setBackgroundERK6QBrush(void *that, const QBrush & brush)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setBackground(brush);
}

  // proto:  void QTableWidgetItem::setFont(const QFont & font);
void demth_ZN16QTableWidgetItem7setFontERK5QFont(void *that, const QFont & font)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setFont(font);
}

  // proto:  void QTableWidgetItem::setTextColor(const QColor & color);
void demth_ZN16QTableWidgetItem12setTextColorERK6QColor(void *that, const QColor & color)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setTextColor(color);
}

  // proto:  void QTableWidgetItem::setText(const QString & text);
void demth_ZN16QTableWidgetItem7setTextERK7QString(void *that, const QString & text)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setText(text);
}

  // proto:  QString QTableWidgetItem::whatsThis();
QString* demth_ZNK16QTableWidgetItem9whatsThisEv(void *that)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
  auto recret = cthat->whatsThis();
  return new QString(recret);
}

  // proto:  void QTableWidgetItem::setToolTip(const QString & toolTip);
void demth_ZN16QTableWidgetItem10setToolTipERK7QString(void *that, const QString & toolTip)
{
  QTableWidgetItem *cthat = (QTableWidgetItem *)that;
   cthat->setToolTip(toolTip);
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
// QTableWidget_SlotProxy here
class QTableWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTableWidget_SlotProxy():QObject(){}

public slots:
  // itemActivated(class QTableWidgetItem *)
  void slot_proxy_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(QTableWidgetItem * arg0);
public:
  void (*slot_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem)(void* rsfptr, QTableWidgetItem * arg0) = NULL;
public slots:
  // itemSelectionChanged()
  void slot_proxy_func__ZN12QTableWidget20itemSelectionChangedEv();
public:
  void (*slot_func__ZN12QTableWidget20itemSelectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // itemChanged(class QTableWidgetItem *)
  void slot_proxy_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem(QTableWidgetItem * arg0);
public:
  void (*slot_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem)(void* rsfptr, QTableWidgetItem * arg0) = NULL;
public slots:
  // itemPressed(class QTableWidgetItem *)
  void slot_proxy_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem(QTableWidgetItem * arg0);
public:
  void (*slot_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem)(void* rsfptr, QTableWidgetItem * arg0) = NULL;
public slots:
  // currentItemChanged(class QTableWidgetItem *, class QTableWidgetItem *)
  void slot_proxy_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(QTableWidgetItem * arg0, QTableWidgetItem * arg1);
public:
  void (*slot_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_)(void* rsfptr, QTableWidgetItem * arg0, QTableWidgetItem * arg1) = NULL;
public slots:
  // currentCellChanged(int, int, int, int)
  void slot_proxy_func__ZN12QTableWidget18currentCellChangedEiiii(int arg0, int arg1, int arg2, int arg3);
public:
  void (*slot_func__ZN12QTableWidget18currentCellChangedEiiii)(void* rsfptr, int arg0, int arg1, int arg2, int arg3) = NULL;
public slots:
  // itemEntered(class QTableWidgetItem *)
  void slot_proxy_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(QTableWidgetItem * arg0);
public:
  void (*slot_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem)(void* rsfptr, QTableWidgetItem * arg0) = NULL;
public slots:
  // cellEntered(int, int)
  void slot_proxy_func__ZN12QTableWidget11cellEnteredEii(int arg0, int arg1);
public:
  void (*slot_func__ZN12QTableWidget11cellEnteredEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // cellActivated(int, int)
  void slot_proxy_func__ZN12QTableWidget13cellActivatedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN12QTableWidget13cellActivatedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // itemClicked(class QTableWidgetItem *)
  void slot_proxy_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem(QTableWidgetItem * arg0);
public:
  void (*slot_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem)(void* rsfptr, QTableWidgetItem * arg0) = NULL;
public slots:
  // cellClicked(int, int)
  void slot_proxy_func__ZN12QTableWidget11cellClickedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN12QTableWidget11cellClickedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // itemDoubleClicked(class QTableWidgetItem *)
  void slot_proxy_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(QTableWidgetItem * arg0);
public:
  void (*slot_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem)(void* rsfptr, QTableWidgetItem * arg0) = NULL;
public slots:
  // cellDoubleClicked(int, int)
  void slot_proxy_func__ZN12QTableWidget17cellDoubleClickedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN12QTableWidget17cellDoubleClickedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // cellChanged(int, int)
  void slot_proxy_func__ZN12QTableWidget11cellChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN12QTableWidget11cellChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // cellPressed(int, int)
  void slot_proxy_func__ZN12QTableWidget11cellPressedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN12QTableWidget11cellPressedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtablewidget.moc"

extern "C" {
  QTableWidget_SlotProxy* QTableWidget_SlotProxy_new()
  {
    return new QTableWidget_SlotProxy();
  }
};

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(QTableWidgetItem * arg0) {
  if (this->slot_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem = (decltype(that->slot_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(itemActivated(class QTableWidgetItem *)), that, SLOT(slot_proxy_func__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(QTableWidgetItem * arg0)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget20itemSelectionChangedEv() {
  if (this->slot_func__ZN12QTableWidget20itemSelectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget20itemSelectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget20itemSelectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget20itemSelectionChangedEv = (decltype(that->slot_func__ZN12QTableWidget20itemSelectionChangedEv))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(itemSelectionChanged()), that, SLOT(slot_proxy_func__ZN12QTableWidget20itemSelectionChangedEv()));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget20itemSelectionChangedEv(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem(QTableWidgetItem * arg0) {
  if (this->slot_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11itemChangedEP16QTableWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem = (decltype(that->slot_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(itemChanged(class QTableWidgetItem *)), that, SLOT(slot_proxy_func__ZN12QTableWidget11itemChangedEP16QTableWidgetItem(QTableWidgetItem * arg0)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11itemChangedEP16QTableWidgetItem(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem(QTableWidgetItem * arg0) {
  if (this->slot_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11itemPressedEP16QTableWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem = (decltype(that->slot_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(itemPressed(class QTableWidgetItem *)), that, SLOT(slot_proxy_func__ZN12QTableWidget11itemPressedEP16QTableWidgetItem(QTableWidgetItem * arg0)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11itemPressedEP16QTableWidgetItem(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(QTableWidgetItem * arg0, QTableWidgetItem * arg1) {
  if (this->slot_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_ != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_ = (decltype(that->slot_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(currentItemChanged(class QTableWidgetItem *, class QTableWidgetItem *)), that, SLOT(slot_proxy_func__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(QTableWidgetItem * arg0, QTableWidgetItem * arg1)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget18currentCellChangedEiiii(int arg0, int arg1, int arg2, int arg3) {
  if (this->slot_func__ZN12QTableWidget18currentCellChangedEiiii != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget18currentCellChangedEiiii(this->rsfptr, arg0, arg1, arg2, arg3);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget18currentCellChangedEiiii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget18currentCellChangedEiiii = (decltype(that->slot_func__ZN12QTableWidget18currentCellChangedEiiii))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(currentCellChanged(int, int, int, int)), that, SLOT(slot_proxy_func__ZN12QTableWidget18currentCellChangedEiiii(int arg0, int arg1, int arg2, int arg3)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget18currentCellChangedEiiii(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(QTableWidgetItem * arg0) {
  if (this->slot_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem = (decltype(that->slot_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(itemEntered(class QTableWidgetItem *)), that, SLOT(slot_proxy_func__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(QTableWidgetItem * arg0)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11cellEnteredEii(int arg0, int arg1) {
  if (this->slot_func__ZN12QTableWidget11cellEnteredEii != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11cellEnteredEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11cellEnteredEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11cellEnteredEii = (decltype(that->slot_func__ZN12QTableWidget11cellEnteredEii))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(cellEntered(int, int)), that, SLOT(slot_proxy_func__ZN12QTableWidget11cellEnteredEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11cellEnteredEii(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget13cellActivatedEii(int arg0, int arg1) {
  if (this->slot_func__ZN12QTableWidget13cellActivatedEii != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget13cellActivatedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget13cellActivatedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget13cellActivatedEii = (decltype(that->slot_func__ZN12QTableWidget13cellActivatedEii))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(cellActivated(int, int)), that, SLOT(slot_proxy_func__ZN12QTableWidget13cellActivatedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget13cellActivatedEii(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem(QTableWidgetItem * arg0) {
  if (this->slot_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11itemClickedEP16QTableWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem = (decltype(that->slot_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(itemClicked(class QTableWidgetItem *)), that, SLOT(slot_proxy_func__ZN12QTableWidget11itemClickedEP16QTableWidgetItem(QTableWidgetItem * arg0)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11itemClickedEP16QTableWidgetItem(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11cellClickedEii(int arg0, int arg1) {
  if (this->slot_func__ZN12QTableWidget11cellClickedEii != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11cellClickedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11cellClickedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11cellClickedEii = (decltype(that->slot_func__ZN12QTableWidget11cellClickedEii))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(cellClicked(int, int)), that, SLOT(slot_proxy_func__ZN12QTableWidget11cellClickedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11cellClickedEii(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(QTableWidgetItem * arg0) {
  if (this->slot_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem = (decltype(that->slot_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(itemDoubleClicked(class QTableWidgetItem *)), that, SLOT(slot_proxy_func__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(QTableWidgetItem * arg0)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget17cellDoubleClickedEii(int arg0, int arg1) {
  if (this->slot_func__ZN12QTableWidget17cellDoubleClickedEii != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget17cellDoubleClickedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget17cellDoubleClickedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget17cellDoubleClickedEii = (decltype(that->slot_func__ZN12QTableWidget17cellDoubleClickedEii))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(cellDoubleClicked(int, int)), that, SLOT(slot_proxy_func__ZN12QTableWidget17cellDoubleClickedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget17cellDoubleClickedEii(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11cellChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN12QTableWidget11cellChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11cellChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11cellChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11cellChangedEii = (decltype(that->slot_func__ZN12QTableWidget11cellChangedEii))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(cellChanged(int, int)), that, SLOT(slot_proxy_func__ZN12QTableWidget11cellChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11cellChangedEii(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTableWidget_SlotProxy::slot_proxy_func__ZN12QTableWidget11cellPressedEii(int arg0, int arg1) {
  if (this->slot_func__ZN12QTableWidget11cellPressedEii != NULL) {
    // do smth...
    this->slot_func__ZN12QTableWidget11cellPressedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTableWidget_SlotProxy_connect__ZN12QTableWidget11cellPressedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTableWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTableWidget11cellPressedEii = (decltype(that->slot_func__ZN12QTableWidget11cellPressedEii))ffifptr;
  QObject::connect((QTableWidget*)sender, SIGNAL(cellPressed(int, int)), that, SLOT(slot_proxy_func__ZN12QTableWidget11cellPressedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTableWidget_SlotProxy_disconnect__ZN12QTableWidget11cellPressedEii(QTableWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

