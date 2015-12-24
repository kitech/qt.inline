// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qstandarditemmodel.h
// dst-file: /src/gui/qstandarditemmodel.cxx
//

// header block begin =>
#include <qstandarditemmodel.h>

extern "C" {

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

  // proto:  void QStandardItem::setCheckState(Qt::CheckState checkState);
void _ZN13QStandardItem13setCheckStateEN2Qt10CheckStateE(void *that, Qt::CheckState checkState)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setCheckState(checkState);
}

  // proto:  void QStandardItem::setChild(int row, QStandardItem * item);
void _ZN13QStandardItem8setChildEiPS_(void *that, int row, QStandardItem * item)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setChild(row, item);
}

  // proto:  QString QStandardItem::whatsThis();
QString* _ZNK13QStandardItem9whatsThisEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->whatsThis();
  return new QString(recret);
}

  // proto:  void QStandardItem::setForeground(const QBrush & brush);
void _ZN13QStandardItem13setForegroundERK6QBrush(void *that, const QBrush & brush)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setForeground(brush);
}

  // proto:  bool QStandardItem::isEditable();
bool _ZNK13QStandardItem10isEditableEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isEditable();
}

  // proto:  QIcon QStandardItem::icon();
QIcon* _ZNK13QStandardItem4iconEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->icon();
  return new QIcon(recret);
}

  // proto:  void QStandardItem::setWhatsThis(const QString & whatsThis);
void _ZN13QStandardItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  bool QStandardItem::isCheckable();
bool _ZNK13QStandardItem11isCheckableEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isCheckable();
}

  // proto:  QString QStandardItem::text();
QString* _ZNK13QStandardItem4textEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->text();
  return new QString(recret);
}

  // proto:  bool QStandardItem::isDropEnabled();
bool _ZNK13QStandardItem13isDropEnabledEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isDropEnabled();
}

  // proto:  QString QStandardItem::statusTip();
QString* _ZNK13QStandardItem9statusTipEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->statusTip();
  return new QString(recret);
}

  // proto:  void QStandardItem::setStatusTip(const QString & statusTip);
void _ZN13QStandardItem12setStatusTipERK7QString(void *that, const QString & statusTip)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setStatusTip(statusTip);
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

  // proto:  void QStandardItem::appendColumn(const QList<QStandardItem *> & items);
void _ZN13QStandardItem12appendColumnERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendColumn(items);
}

  // proto:  QBrush QStandardItem::background();
QBrush* _ZNK13QStandardItem10backgroundEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->background();
  return new QBrush(recret);
}

  // proto:  bool QStandardItem::isSelectable();
bool _ZNK13QStandardItem12isSelectableEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isSelectable();
}

  // proto:  void QStandardItem::appendRows(const QList<QStandardItem *> & items);
void _ZN13QStandardItem10appendRowsERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRows(items);
}

  // proto:  QString QStandardItem::toolTip();
QString* _ZNK13QStandardItem7toolTipEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->toolTip();
  return new QString(recret);
}

  // proto:  bool QStandardItem::isDragEnabled();
bool _ZNK13QStandardItem13isDragEnabledEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isDragEnabled();
}

  // proto:  void QStandardItem::setAccessibleText(const QString & accessibleText);
void _ZN13QStandardItem17setAccessibleTextERK7QString(void *that, const QString & accessibleText)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setAccessibleText(accessibleText);
}

  // proto:  void QStandardItem::setTextAlignment(Qt::Alignment textAlignment);
void _ZN13QStandardItem16setTextAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment textAlignment)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setTextAlignment(textAlignment);
}

  // proto:  bool QStandardItem::isTristate();
bool _ZNK13QStandardItem10isTristateEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isTristate();
}

  // proto:  void QStandardItem::insertRow(int row, QStandardItem * item);
void _ZN13QStandardItem9insertRowEiPS_(void *that, int row, QStandardItem * item)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->insertRow(row, item);
}

  // proto:  void QStandardItem::setFont(const QFont & font);
void _ZN13QStandardItem7setFontERK5QFont(void *that, const QFont & font)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setFont(font);
}

  // proto:  void QStandardItem::appendRow(const QList<QStandardItem *> & items);
void _ZN13QStandardItem9appendRowERK5QListIPS_E(void *that, const QList<QStandardItem *> & items)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->appendRow(items);
}

  // proto:  QFont QStandardItem::font();
QFont* _ZNK13QStandardItem4fontEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->font();
  return new QFont(recret);
}

  // proto:  void QStandardItem::setText(const QString & text);
void _ZN13QStandardItem7setTextERK7QString(void *that, const QString & text)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setText(text);
}

  // proto:  bool QStandardItem::isEnabled();
bool _ZNK13QStandardItem9isEnabledEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  return cthat->isEnabled();
}

  // proto:  QString QStandardItem::accessibleText();
QString* _ZNK13QStandardItem14accessibleTextEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->accessibleText();
  return new QString(recret);
}

  // proto:  QBrush QStandardItem::foreground();
QBrush* _ZNK13QStandardItem10foregroundEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->foreground();
  return new QBrush(recret);
}

  // proto:  QSize QStandardItem::sizeHint();
QSize* _ZNK13QStandardItem8sizeHintEv(void *that)

{
  QStandardItem *cthat = (QStandardItem *)that;
  auto recret = cthat->sizeHint();
  return new QSize(recret);
}

  // proto:  void QStandardItem::setBackground(const QBrush & brush);
void _ZN13QStandardItem13setBackgroundERK6QBrush(void *that, const QBrush & brush)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setBackground(brush);
}

  // proto:  void QStandardItem::setAccessibleDescription(const QString & accessibleDescription);
void _ZN13QStandardItem24setAccessibleDescriptionERK7QString(void *that, const QString & accessibleDescription)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setAccessibleDescription(accessibleDescription);
}

  // proto:  void QStandardItem::setSizeHint(const QSize & sizeHint);
void _ZN13QStandardItem11setSizeHintERK5QSize(void *that, const QSize & sizeHint)

{
  QStandardItem *cthat = (QStandardItem *)that;
   cthat->setSizeHint(sizeHint);
}

  // proto:  QString QStandardItem::accessibleDescription();
QString* _ZNK13QStandardItem21accessibleDescriptionEv(void *that)

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
// <= body block end

