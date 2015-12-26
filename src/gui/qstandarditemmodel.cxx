// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
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
bool _ZN18QStandardItemModel9insertRowEiRK11QModelIndex(void *that, int row, const QModelIndex & parent)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
  return cthat->insertRow(row, parent);
}

  // proto:  void QStandardItemModel::setItem(int row, QStandardItem * item);
void _ZN18QStandardItemModel7setItemEiP13QStandardItem(void *that, int row, QStandardItem * item)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
   cthat->setItem(row, item);
}

  // proto:  bool QStandardItemModel::insertColumn(int column, const QModelIndex & parent);
bool _ZN18QStandardItemModel12insertColumnEiRK11QModelIndex(void *that, int column, const QModelIndex & parent)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
  return cthat->insertColumn(column, parent);
}

  // proto:  void QStandardItemModel::insertRow(int row, QStandardItem * item);
void _ZN18QStandardItemModel9insertRowEiP13QStandardItem(void *that, int row, QStandardItem * item)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
   cthat->insertRow(row, item);
}

  // proto:  void QStandardItemModel::appendRow(QStandardItem * item);
void _ZN18QStandardItemModel9appendRowEP13QStandardItem(void *that, QStandardItem * item)
{
  QStandardItemModel *cthat = (QStandardItemModel *)that;
   cthat->appendRow(item);
}

int QStandardItem_Class_Size()
{
  return sizeof(QStandardItem);
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

// QStandardItem(const class QString &)
QStandardItem* dector_ZN13QStandardItemC1ERK7QString(const QString & text)
{
  // static_assert(sizeof(QStandardItem) == 32, "tyszerr");
  QStandardItem* rthis = new QStandardItem(text);
  return rthis;
}

// ~QStandardItem()
void dedtor_ZN13QStandardItemD0Ev(QStandardItem* that)
{
  QStandardItem* rthis = (QStandardItem*)that;
  delete rthis;
}

// QStandardItem(const class QIcon &, const class QString &)
QStandardItem* dector_ZN13QStandardItemC1ERK5QIconRK7QString(const QIcon & icon, const QString & text)
{
  // static_assert(sizeof(QStandardItem) == 32, "tyszerr");
  QStandardItem* rthis = new QStandardItem(icon, text);
  return rthis;
}

  // proto:  void QStandardItem::insertRow(int row, QStandardItem * item);
void _ZN13QStandardItem9insertRowEiPS_(void *that, int row, QStandardItem * item)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->insertRow(row, item);
}

  // proto:  void QStandardItem::setCheckState(Qt::CheckState checkState);
void _ZN13QStandardItem13setCheckStateEN2Qt10CheckStateE(void *that, Qt::CheckState checkState)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setCheckState(checkState);
}

  // proto:  void QStandardItem::setFont(const QFont & font);
void _ZN13QStandardItem7setFontERK5QFont(void *that, const QFont & font)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setFont(font);
}

  // proto:  void QStandardItem::setChild(int row, QStandardItem * item);
void _ZN13QStandardItem8setChildEiPS_(void *that, int row, QStandardItem * item)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setChild(row, item);
}

  // proto:  void QStandardItem::setSizeHint(const QSize & sizeHint);
void _ZN13QStandardItem11setSizeHintERK5QSize(void *that, const QSize & sizeHint)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setSizeHint(sizeHint);
}

  // proto:  void QStandardItem::appendRows(const QList<QStandardItem *> & items);
void _ZN13QStandardItem10appendRowsERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRows(items);
}

  // proto:  void QStandardItem::setText(const QString & text);
void _ZN13QStandardItem7setTextERK7QString(void *that, const QString & text)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setText(text);
}

  // proto:  void QStandardItem::setStatusTip(const QString & statusTip);
void _ZN13QStandardItem12setStatusTipERK7QString(void *that, const QString & statusTip)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setStatusTip(statusTip);
}

  // proto:  void QStandardItem::setForeground(const QBrush & brush);
void _ZN13QStandardItem13setForegroundERK6QBrush(void *that, const QBrush & brush)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setForeground(brush);
}

  // proto:  void QStandardItem::appendRow(QStandardItem * item);
void _ZN13QStandardItem9appendRowEPS_(void *that, QStandardItem * item)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRow(item);
}

  // proto:  void QStandardItem::setIcon(const QIcon & icon);
void _ZN13QStandardItem7setIconERK5QIcon(void *that, const QIcon & icon)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setIcon(icon);
}

  // proto:  void QStandardItem::setToolTip(const QString & toolTip);
void _ZN13QStandardItem10setToolTipERK7QString(void *that, const QString & toolTip)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setToolTip(toolTip);
}

  // proto:  void QStandardItem::setWhatsThis(const QString & whatsThis);
void _ZN13QStandardItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  void QStandardItem::setAccessibleText(const QString & accessibleText);
void _ZN13QStandardItem17setAccessibleTextERK7QString(void *that, const QString & accessibleText)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setAccessibleText(accessibleText);
}

  // proto:  void QStandardItem::setBackground(const QBrush & brush);
void _ZN13QStandardItem13setBackgroundERK6QBrush(void *that, const QBrush & brush)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setBackground(brush);
}

  // proto:  void QStandardItem::appendColumn(const QList<QStandardItem *> & items);
void _ZN13QStandardItem12appendColumnERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendColumn(items);
}

  // proto:  void QStandardItem::setAccessibleDescription(const QString & accessibleDescription);
void _ZN13QStandardItem24setAccessibleDescriptionERK7QString(void *that, const QString & accessibleDescription)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setAccessibleDescription(accessibleDescription);
}

  // proto:  void QStandardItem::setTextAlignment(Qt::Alignment textAlignment);
void _ZN13QStandardItem16setTextAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment textAlignment)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setTextAlignment(textAlignment);
}

  // proto:  void QStandardItem::appendRow(const QList<QStandardItem *> & items);
void _ZN13QStandardItem9appendRowERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)
{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRow(items);
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
// <= body block end

