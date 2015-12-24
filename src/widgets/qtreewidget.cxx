// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qtreewidget.h
// dst-file: /src/widgets/qtreewidget.cxx
//

// header block begin =>
#include <qtreewidget.h>

extern "C" {

  // proto:  QTreeWidgetItem * QTreeWidget::itemAt(int x, int y);
QTreeWidgetItem * _ZNK11QTreeWidget6itemAtEii(void *that, int x, int y)

{
  QTreeWidget *cthat = (QTreeWidget *)that;
  return cthat->itemAt(x, y);
}

  // proto:  void QTreeWidget::removeItemWidget(QTreeWidgetItem * item, int column);
void _ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi(void *that, QTreeWidgetItem * item, int column)

{
  QTreeWidget *cthat = (QTreeWidget *)that;
   cthat->removeItemWidget(item, column);
}

  // proto:  void QTreeWidget::setHeaderLabel(const QString & label);
void _ZN11QTreeWidget14setHeaderLabelERK7QString(void *that, const QString & label)

{
  QTreeWidget *cthat = (QTreeWidget *)that;
   cthat->setHeaderLabel(label);
}

  // proto:  void QTreeWidgetItem::setFirstColumnSpanned(bool span);
void _ZN15QTreeWidgetItem21setFirstColumnSpannedEb(void *that, bool span)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setFirstColumnSpanned(span);
}

  // proto:  int QTreeWidgetItem::indexOfChild(QTreeWidgetItem * child);
int _ZNK15QTreeWidgetItem12indexOfChildEPS_(void *that, QTreeWidgetItem * child)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->indexOfChild(child);
}

  // proto:  QTreeWidgetItem * QTreeWidgetItem::parent();
QTreeWidgetItem * _ZNK15QTreeWidgetItem6parentEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->parent();
}

  // proto:  void QTreeWidgetItem::setFont(int column, const QFont & font);
void _ZN15QTreeWidgetItem7setFontEiRK5QFont(void *that, int column, const QFont & font)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setFont(column, font);
}

  // proto:  QFont QTreeWidgetItem::font(int column);
QFont* _ZNK15QTreeWidgetItem4fontEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->font(column);
  return new QFont(recret);
}

  // proto:  void QTreeWidgetItem::setStatusTip(int column, const QString & statusTip);
void _ZN15QTreeWidgetItem12setStatusTipEiRK7QString(void *that, int column, const QString & statusTip)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setStatusTip(column, statusTip);
}

  // proto:  void QTreeWidgetItem::setExpanded(bool expand);
void _ZN15QTreeWidgetItem11setExpandedEb(void *that, bool expand)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setExpanded(expand);
}

  // proto:  bool QTreeWidgetItem::isExpanded();
bool _ZNK15QTreeWidgetItem10isExpandedEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isExpanded();
}

  // proto:  void QTreeWidgetItem::setIcon(int column, const QIcon & icon);
void _ZN15QTreeWidgetItem7setIconEiRK5QIcon(void *that, int column, const QIcon & icon)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setIcon(column, icon);
}

  // proto:  QString QTreeWidgetItem::toolTip(int column);
QString* _ZNK15QTreeWidgetItem7toolTipEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->toolTip(column);
  return new QString(recret);
}

  // proto:  QColor QTreeWidgetItem::backgroundColor(int column);
QColor* _ZNK15QTreeWidgetItem15backgroundColorEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->backgroundColor(column);
  return new QColor(recret);
}

  // proto:  QString QTreeWidgetItem::text(int column);
QString* _ZNK15QTreeWidgetItem4textEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->text(column);
  return new QString(recret);
}

  // proto:  bool QTreeWidgetItem::isHidden();
bool _ZNK15QTreeWidgetItem8isHiddenEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isHidden();
}

  // proto:  void QTreeWidgetItem::setTextAlignment(int column, int alignment);
void _ZN15QTreeWidgetItem16setTextAlignmentEii(void *that, int column, int alignment)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setTextAlignment(column, alignment);
}

  // proto:  bool QTreeWidgetItem::isDisabled();
bool _ZNK15QTreeWidgetItem10isDisabledEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isDisabled();
}

  // proto:  void QTreeWidgetItem::setText(int column, const QString & text);
void _ZN15QTreeWidgetItem7setTextEiRK7QString(void *that, int column, const QString & text)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setText(column, text);
}

  // proto:  void QTreeWidgetItem::setTextColor(int column, const QColor & color);
void _ZN15QTreeWidgetItem12setTextColorEiRK6QColor(void *that, int column, const QColor & color)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setTextColor(column, color);
}

  // proto:  QSize QTreeWidgetItem::sizeHint(int column);
QSize* _ZNK15QTreeWidgetItem8sizeHintEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->sizeHint(column);
  return new QSize(recret);
}

  // proto:  QString QTreeWidgetItem::whatsThis(int column);
QString* _ZNK15QTreeWidgetItem9whatsThisEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->whatsThis(column);
  return new QString(recret);
}

  // proto:  void QTreeWidgetItem::setWhatsThis(int column, const QString & whatsThis);
void _ZN15QTreeWidgetItem12setWhatsThisEiRK7QString(void *that, int column, const QString & whatsThis)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setWhatsThis(column, whatsThis);
}

  // proto:  void QTreeWidgetItem::sortChildren(int column, Qt::SortOrder order);
void _ZN15QTreeWidgetItem12sortChildrenEiN2Qt9SortOrderE(void *that, int column, Qt::SortOrder order)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->sortChildren(column, order);
}

  // proto:  QColor QTreeWidgetItem::textColor(int column);
QColor* _ZNK15QTreeWidgetItem9textColorEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->textColor(column);
  return new QColor(recret);
}

  // proto:  QIcon QTreeWidgetItem::icon(int column);
QIcon* _ZNK15QTreeWidgetItem4iconEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->icon(column);
  return new QIcon(recret);
}

  // proto:  void QTreeWidgetItem::setToolTip(int column, const QString & toolTip);
void _ZN15QTreeWidgetItem10setToolTipEiRK7QString(void *that, int column, const QString & toolTip)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setToolTip(column, toolTip);
}

  // proto:  bool QTreeWidgetItem::isFirstColumnSpanned();
bool _ZNK15QTreeWidgetItem20isFirstColumnSpannedEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isFirstColumnSpanned();
}

  // proto:  int QTreeWidgetItem::textAlignment(int column);
int _ZNK15QTreeWidgetItem13textAlignmentEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->textAlignment(column);
}

  // proto:  QTreeWidgetItem * QTreeWidgetItem::child(int index);
QTreeWidgetItem * _ZNK15QTreeWidgetItem5childEi(void *that, int index)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->child(index);
}

  // proto:  void QTreeWidgetItem::setSelected(bool select);
void _ZN15QTreeWidgetItem11setSelectedEb(void *that, bool select)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  void QTreeWidgetItem::setHidden(bool hide);
void _ZN15QTreeWidgetItem9setHiddenEb(void *that, bool hide)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setHidden(hide);
}

  // proto:  int QTreeWidgetItem::columnCount();
int _ZNK15QTreeWidgetItem11columnCountEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->columnCount();
}

  // proto:  void QTreeWidgetItem::setDisabled(bool disabled);
void _ZN15QTreeWidgetItem11setDisabledEb(void *that, bool disabled)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setDisabled(disabled);
}

  // proto:  void QTreeWidgetItem::setBackground(int column, const QBrush & brush);
void _ZN15QTreeWidgetItem13setBackgroundEiRK6QBrush(void *that, int column, const QBrush & brush)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setBackground(column, brush);
}

  // proto:  void QTreeWidgetItem::setSizeHint(int column, const QSize & size);
void _ZN15QTreeWidgetItem11setSizeHintEiRK5QSize(void *that, int column, const QSize & size)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setSizeHint(column, size);
}

  // proto:  void QTreeWidgetItem::setCheckState(int column, Qt::CheckState state);
void _ZN15QTreeWidgetItem13setCheckStateEiN2Qt10CheckStateE(void *that, int column, Qt::CheckState state)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setCheckState(column, state);
}

  // proto:  QBrush QTreeWidgetItem::foreground(int column);
QBrush* _ZNK15QTreeWidgetItem10foregroundEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->foreground(column);
  return new QBrush(recret);
}

  // proto:  int QTreeWidgetItem::childCount();
int _ZNK15QTreeWidgetItem10childCountEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->childCount();
}

  // proto:  void QTreeWidgetItem::setBackgroundColor(int column, const QColor & color);
void _ZN15QTreeWidgetItem18setBackgroundColorEiRK6QColor(void *that, int column, const QColor & color)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setBackgroundColor(column, color);
}

  // proto:  QString QTreeWidgetItem::statusTip(int column);
QString* _ZNK15QTreeWidgetItem9statusTipEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->statusTip(column);
  return new QString(recret);
}

  // proto:  QBrush QTreeWidgetItem::background(int column);
QBrush* _ZNK15QTreeWidgetItem10backgroundEi(void *that, int column)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->background(column);
  return new QBrush(recret);
}

  // proto:  int QTreeWidgetItem::type();
int _ZNK15QTreeWidgetItem4typeEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->type();
}

  // proto:  QTreeWidget * QTreeWidgetItem::treeWidget();
QTreeWidget * _ZNK15QTreeWidgetItem10treeWidgetEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->treeWidget();
}

  // proto:  void QTreeWidgetItem::setForeground(int column, const QBrush & brush);
void _ZN15QTreeWidgetItem13setForegroundEiRK6QBrush(void *that, int column, const QBrush & brush)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setForeground(column, brush);
}

  // proto:  bool QTreeWidgetItem::isSelected();
bool _ZNK15QTreeWidgetItem10isSelectedEv(void *that)

{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isSelected();
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

