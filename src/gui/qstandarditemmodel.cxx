// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qstandarditemmodel.h
// dst-file: /src/gui/qstandarditemmodel.cxx
//

// header block begin =>
#include <qstandarditemmodel.h>

extern "C" {

int QStandardItemModel_Class_Size()
{
  return sizeof(QStandardItemModel);
}

// QStandardItemModel(int, int, class QObject *)
QStandardItemModel* dector_ZN18QStandardItemModelC1EiiP7QObject(int rows, int columns, QObject * parent)
{
  // static_assert(sizeof(QStandardItemModel) == 32, "tyszerr");
  QStandardItemModel* rthis = new QStandardItemModel(rows, columns, parent);
  return rthis;
}

// QStandardItemModel(class QObject *)
QStandardItemModel* dector_ZN18QStandardItemModelC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QStandardItemModel) == 32, "tyszerr");
  QStandardItemModel* rthis = new QStandardItemModel(parent);
  return rthis;
}

// ~QStandardItemModel()
void dedtor_ZN18QStandardItemModelD0Ev(QStandardItemModel* that)
{
  QStandardItemModel* rthis = (QStandardItemModel*)that;
  delete rthis;
}

  // proto:  bool QStandardItemModel::insertRow(int row, const QModelIndex & parent);
bool demth_ZN18QStandardItemModel9insertRowEiRK11QModelIndex(void *that, int row, const QModelIndex & parent)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
  return cthat->insertRow(row, parent);
}

  // proto:  void QStandardItemModel::setItem(int row, QStandardItem * item);
void demth_ZN18QStandardItemModel7setItemEiP13QStandardItem(void *that, int row, QStandardItem * item)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
   cthat->setItem(row, item);
}

  // proto:  bool QStandardItemModel::insertColumn(int column, const QModelIndex & parent);
bool demth_ZN18QStandardItemModel12insertColumnEiRK11QModelIndex(void *that, int column, const QModelIndex & parent)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
  return cthat->insertColumn(column, parent);
}

  // proto:  void QStandardItemModel::insertRow(int row, QStandardItem * item);
void demth_ZN18QStandardItemModel9insertRowEiP13QStandardItem(void *that, int row, QStandardItem * item)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
   cthat->insertRow(row, item);
}

  // proto:  void QStandardItemModel::appendRow(QStandardItem * item);
void demth_ZN18QStandardItemModel9appendRowEP13QStandardItem(void *that, QStandardItem * item)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
   cthat->appendRow(item);
}

int QStandardItem_Class_Size()
{
  return sizeof(QStandardItem);
}

// QStandardItem(const class QString &)
QStandardItem* dector_ZN13QStandardItemC1ERK7QString(const QString & text)
{
  // static_assert(sizeof(QStandardItem) == 32, "tyszerr");
  QStandardItem* rthis = new QStandardItem(text);
  return rthis;
}

// QStandardItem(const class QIcon &, const class QString &)
QStandardItem* dector_ZN13QStandardItemC1ERK5QIconRK7QString(const QIcon & icon, const QString & text)
{
  // static_assert(sizeof(QStandardItem) == 32, "tyszerr");
  QStandardItem* rthis = new QStandardItem(icon, text);
  return rthis;
}

// ~QStandardItem()
void dedtor_ZN13QStandardItemD0Ev(QStandardItem* that)
{
  QStandardItem* rthis = (QStandardItem*)that;
  delete rthis;
}

// QStandardItem()
QStandardItem* dector_ZN13QStandardItemC1Ev()
{
  // static_assert(sizeof(QStandardItem) == 32, "tyszerr");
  QStandardItem* rthis = new QStandardItem();
  return rthis;
}

// QStandardItem(int, int)
QStandardItem* dector_ZN13QStandardItemC1Eii(int rows, int columns)
{
  // static_assert(sizeof(QStandardItem) == 32, "tyszerr");
  QStandardItem* rthis = new QStandardItem(rows, columns);
  return rthis;
}

  // proto:  void QStandardItem::setCheckState(Qt::CheckState checkState);
void demth_ZN13QStandardItem13setCheckStateEN2Qt10CheckStateE(void *that, Qt::CheckState checkState)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setCheckState(checkState);
}

  // proto:  void QStandardItem::setChild(int row, QStandardItem * item);
void demth_ZN13QStandardItem8setChildEiPS_(void *that, int row, QStandardItem * item)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setChild(row, item);
}

  // proto:  QString QStandardItem::whatsThis();
QString* demth_ZNK13QStandardItem9whatsThisEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->whatsThis();
  return new QString(recret);
}

  // proto:  void QStandardItem::setForeground(const QBrush & brush);
void demth_ZN13QStandardItem13setForegroundERK6QBrush(void *that, const QBrush & brush)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setForeground(brush);
}

  // proto:  bool QStandardItem::isEditable();
bool demth_ZNK13QStandardItem10isEditableEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isEditable();
}

  // proto:  QIcon QStandardItem::icon();
QIcon* demth_ZNK13QStandardItem4iconEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->icon();
  return new QIcon(recret);
}

  // proto:  void QStandardItem::setWhatsThis(const QString & whatsThis);
void demth_ZN13QStandardItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  bool QStandardItem::isCheckable();
bool demth_ZNK13QStandardItem11isCheckableEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isCheckable();
}

  // proto:  QString QStandardItem::text();
QString* demth_ZNK13QStandardItem4textEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->text();
  return new QString(recret);
}

  // proto:  bool QStandardItem::isDropEnabled();
bool demth_ZNK13QStandardItem13isDropEnabledEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isDropEnabled();
}

  // proto:  QString QStandardItem::statusTip();
QString* demth_ZNK13QStandardItem9statusTipEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->statusTip();
  return new QString(recret);
}

  // proto:  void QStandardItem::setStatusTip(const QString & statusTip);
void demth_ZN13QStandardItem12setStatusTipERK7QString(void *that, const QString & statusTip)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setStatusTip(statusTip);
}

  // proto:  void QStandardItem::appendRow(QStandardItem * item);
void demth_ZN13QStandardItem9appendRowEPS_(void *that, QStandardItem * item)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRow(item);
}

  // proto:  void QStandardItem::setIcon(const QIcon & icon);
void demth_ZN13QStandardItem7setIconERK5QIcon(void *that, const QIcon & icon)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setIcon(icon);
}

  // proto:  void QStandardItem::setToolTip(const QString & toolTip);
void demth_ZN13QStandardItem10setToolTipERK7QString(void *that, const QString & toolTip)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setToolTip(toolTip);
}

  // proto:  void QStandardItem::appendColumn(const QList<QStandardItem *> & items);
void demth_ZN13QStandardItem12appendColumnERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendColumn(items);
}

  // proto:  QBrush QStandardItem::background();
QBrush* demth_ZNK13QStandardItem10backgroundEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->background();
  return new QBrush(recret);
}

  // proto:  bool QStandardItem::isSelectable();
bool demth_ZNK13QStandardItem12isSelectableEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isSelectable();
}

  // proto:  void QStandardItem::appendRows(const QList<QStandardItem *> & items);
void demth_ZN13QStandardItem10appendRowsERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRows(items);
}

  // proto:  QString QStandardItem::toolTip();
QString* demth_ZNK13QStandardItem7toolTipEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->toolTip();
  return new QString(recret);
}

  // proto:  bool QStandardItem::isDragEnabled();
bool demth_ZNK13QStandardItem13isDragEnabledEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isDragEnabled();
}

  // proto:  void QStandardItem::setAccessibleText(const QString & accessibleText);
void demth_ZN13QStandardItem17setAccessibleTextERK7QString(void *that, const QString & accessibleText)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setAccessibleText(accessibleText);
}

  // proto:  void QStandardItem::setTextAlignment(Qt::Alignment textAlignment);
void demth_ZN13QStandardItem16setTextAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment textAlignment)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setTextAlignment(textAlignment);
}

  // proto:  bool QStandardItem::isTristate();
bool demth_ZNK13QStandardItem10isTristateEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isTristate();
}

  // proto:  void QStandardItem::insertRow(int row, QStandardItem * item);
void demth_ZN13QStandardItem9insertRowEiPS_(void *that, int row, QStandardItem * item)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->insertRow(row, item);
}

  // proto:  void QStandardItem::setFont(const QFont & font);
void demth_ZN13QStandardItem7setFontERK5QFont(void *that, const QFont & font)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setFont(font);
}

  // proto:  void QStandardItem::appendRow(const QList<QStandardItem *> & items);
void demth_ZN13QStandardItem9appendRowERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRow(items);
}

  // proto:  QFont QStandardItem::font();
QFont* demth_ZNK13QStandardItem4fontEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->font();
  return new QFont(recret);
}

  // proto:  void QStandardItem::setText(const QString & text);
void demth_ZN13QStandardItem7setTextERK7QString(void *that, const QString & text)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setText(text);
}

  // proto:  bool QStandardItem::isEnabled();
bool demth_ZNK13QStandardItem9isEnabledEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isEnabled();
}

  // proto:  QString QStandardItem::accessibleText();
QString* demth_ZNK13QStandardItem14accessibleTextEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->accessibleText();
  return new QString(recret);
}

  // proto:  QBrush QStandardItem::foreground();
QBrush* demth_ZNK13QStandardItem10foregroundEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->foreground();
  return new QBrush(recret);
}

  // proto:  QSize QStandardItem::sizeHint();
QSize* demth_ZNK13QStandardItem8sizeHintEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->sizeHint();
  return new QSize(recret);
}

  // proto:  void QStandardItem::setBackground(const QBrush & brush);
void demth_ZN13QStandardItem13setBackgroundERK6QBrush(void *that, const QBrush & brush)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setBackground(brush);
}

  // proto:  void QStandardItem::setAccessibleDescription(const QString & accessibleDescription);
void demth_ZN13QStandardItem24setAccessibleDescriptionERK7QString(void *that, const QString & accessibleDescription)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setAccessibleDescription(accessibleDescription);
}

  // proto:  void QStandardItem::setSizeHint(const QSize & sizeHint);
void demth_ZN13QStandardItem11setSizeHintERK5QSize(void *that, const QSize & sizeHint)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setSizeHint(sizeHint);
}

  // proto:  QString QStandardItem::accessibleDescription();
QString* demth_ZNK13QStandardItem21accessibleDescriptionEv(void *that)
{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->accessibleDescription();
  return new QString(recret);
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
// QStandardItemModel_SlotProxy here
class QStandardItemModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStandardItemModel_SlotProxy():QObject(){}

public slots:
  // itemChanged(class QStandardItem *)
  void slot_proxy_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItem * arg0);
public:
  void (*slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem)(void* rsfptr, QStandardItem * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qstandarditemmodel.moc"

extern "C" {
  QStandardItemModel_SlotProxy* QStandardItemModel_SlotProxy_new()
  {
    return new QStandardItemModel_SlotProxy();
  }
};

void QStandardItemModel_SlotProxy::slot_proxy_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItem * arg0) {
  if (this->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem != NULL) {
    // do smth...
    this->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QStandardItemModel_SlotProxy_connect__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStandardItemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem = (decltype(that->slot_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem))ffifptr;
  QObject::connect((QStandardItemModel*)sender, SIGNAL(itemChanged(class QStandardItem *)), that, SLOT(slot_proxy_func__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItem * arg0)));
  return that;
}
extern "C"
void QStandardItemModel_SlotProxy_disconnect__ZN18QStandardItemModel11itemChangedEP13QStandardItem(QStandardItemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

