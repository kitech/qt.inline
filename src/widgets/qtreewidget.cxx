// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qtreewidget.h
// dst-file: /src/widgets/qtreewidget.cxx
//

// header block begin =>
#include <qtreewidget.h>

extern "C" {

int QTreeWidget_Class_Size()
{
  return sizeof(QTreeWidget);
}

// ~QTreeWidget()
void dedtor_ZN11QTreeWidgetD0Ev(QTreeWidget* that)
{
  QTreeWidget* rthis = (QTreeWidget*)that;
  delete rthis;
}

// QTreeWidget(class QWidget *)
QTreeWidget* dector_ZN11QTreeWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTreeWidget) == 32, "tyszerr");
  QTreeWidget* rthis = new QTreeWidget(parent);
  return rthis;
}

  // proto:  QTreeWidgetItem * QTreeWidget::itemAt(int x, int y);
QTreeWidgetItem * demth_ZNK11QTreeWidget6itemAtEii(void *that, int x, int y)
{
  QTreeWidget *cthat = (QTreeWidget *)that;
  return cthat->itemAt(x, y);
}

  // proto:  void QTreeWidget::removeItemWidget(QTreeWidgetItem * item, int column);
void demth_ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi(void *that, QTreeWidgetItem * item, int column)
{
  QTreeWidget *cthat = (QTreeWidget *)that;
   cthat->removeItemWidget(item, column);
}

  // proto:  void QTreeWidget::setHeaderLabel(const QString & label);
void demth_ZN11QTreeWidget14setHeaderLabelERK7QString(void *that, const QString & label)
{
  QTreeWidget *cthat = (QTreeWidget *)that;
   cthat->setHeaderLabel(label);
}

int QTreeWidgetItem_Class_Size()
{
  return sizeof(QTreeWidgetItem);
}

// QTreeWidgetItem(class QTreeWidgetItem *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EPS_i(QTreeWidgetItem * parent, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(parent, type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidgetItem *, class QTreeWidgetItem *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EPS_S0_i(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(parent, after, type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidget *, class QTreeWidgetItem *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EP11QTreeWidgetPS_i(QTreeWidget * view, QTreeWidgetItem * after, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(view, after, type);
  return rthis;
}

// QTreeWidgetItem(const class QTreeWidgetItem &)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1ERKS_(const QTreeWidgetItem & other)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(other);
  return rthis;
}

// QTreeWidgetItem(int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1Ei(int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidget *, const class QStringList &, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EP11QTreeWidgetRK11QStringListi(QTreeWidget * view, const QStringList & strings, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(view, strings, type);
  return rthis;
}

// QTreeWidgetItem(const class QStringList &, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1ERK11QStringListi(const QStringList & strings, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(strings, type);
  return rthis;
}

// ~QTreeWidgetItem()
void dedtor_ZN15QTreeWidgetItemD0Ev(QTreeWidgetItem* that)
{
  QTreeWidgetItem* rthis = (QTreeWidgetItem*)that;
  delete rthis;
}

// QTreeWidgetItem(class QTreeWidgetItem *, const class QStringList &, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EPS_RK11QStringListi(QTreeWidgetItem * parent, const QStringList & strings, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(parent, strings, type);
  return rthis;
}

// QTreeWidgetItem(class QTreeWidget *, int)
QTreeWidgetItem* dector_ZN15QTreeWidgetItemC1EP11QTreeWidgeti(QTreeWidget * view, int type)
{
  // static_assert(sizeof(QTreeWidgetItem) == 32, "tyszerr");
  QTreeWidgetItem* rthis = new QTreeWidgetItem(view, type);
  return rthis;
}

  // proto:  void QTreeWidgetItem::setFirstColumnSpanned(bool span);
void demth_ZN15QTreeWidgetItem21setFirstColumnSpannedEb(void *that, bool span)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setFirstColumnSpanned(span);
}

  // proto:  int QTreeWidgetItem::indexOfChild(QTreeWidgetItem * child);
int demth_ZNK15QTreeWidgetItem12indexOfChildEPS_(void *that, QTreeWidgetItem * child)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->indexOfChild(child);
}

  // proto:  QTreeWidgetItem * QTreeWidgetItem::parent();
QTreeWidgetItem * demth_ZNK15QTreeWidgetItem6parentEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->parent();
}

  // proto:  void QTreeWidgetItem::setFont(int column, const QFont & font);
void demth_ZN15QTreeWidgetItem7setFontEiRK5QFont(void *that, int column, const QFont & font)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setFont(column, font);
}

  // proto:  QFont QTreeWidgetItem::font(int column);
QFont* demth_ZNK15QTreeWidgetItem4fontEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->font(column);
  return new QFont(recret);
}

  // proto:  void QTreeWidgetItem::setStatusTip(int column, const QString & statusTip);
void demth_ZN15QTreeWidgetItem12setStatusTipEiRK7QString(void *that, int column, const QString & statusTip)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setStatusTip(column, statusTip);
}

  // proto:  void QTreeWidgetItem::setExpanded(bool expand);
void demth_ZN15QTreeWidgetItem11setExpandedEb(void *that, bool expand)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setExpanded(expand);
}

  // proto:  bool QTreeWidgetItem::isExpanded();
bool demth_ZNK15QTreeWidgetItem10isExpandedEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isExpanded();
}

  // proto:  void QTreeWidgetItem::setIcon(int column, const QIcon & icon);
void demth_ZN15QTreeWidgetItem7setIconEiRK5QIcon(void *that, int column, const QIcon & icon)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setIcon(column, icon);
}

  // proto:  QString QTreeWidgetItem::toolTip(int column);
QString* demth_ZNK15QTreeWidgetItem7toolTipEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->toolTip(column);
  return new QString(recret);
}

  // proto:  QColor QTreeWidgetItem::backgroundColor(int column);
QColor* demth_ZNK15QTreeWidgetItem15backgroundColorEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->backgroundColor(column);
  return new QColor(recret);
}

  // proto:  QString QTreeWidgetItem::text(int column);
QString* demth_ZNK15QTreeWidgetItem4textEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->text(column);
  return new QString(recret);
}

  // proto:  bool QTreeWidgetItem::isHidden();
bool demth_ZNK15QTreeWidgetItem8isHiddenEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isHidden();
}

  // proto:  void QTreeWidgetItem::setTextAlignment(int column, int alignment);
void demth_ZN15QTreeWidgetItem16setTextAlignmentEii(void *that, int column, int alignment)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setTextAlignment(column, alignment);
}

  // proto:  bool QTreeWidgetItem::isDisabled();
bool demth_ZNK15QTreeWidgetItem10isDisabledEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isDisabled();
}

  // proto:  void QTreeWidgetItem::setText(int column, const QString & text);
void demth_ZN15QTreeWidgetItem7setTextEiRK7QString(void *that, int column, const QString & text)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setText(column, text);
}

  // proto:  void QTreeWidgetItem::setTextColor(int column, const QColor & color);
void demth_ZN15QTreeWidgetItem12setTextColorEiRK6QColor(void *that, int column, const QColor & color)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setTextColor(column, color);
}

  // proto:  QSize QTreeWidgetItem::sizeHint(int column);
QSize* demth_ZNK15QTreeWidgetItem8sizeHintEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->sizeHint(column);
  return new QSize(recret);
}

  // proto:  QString QTreeWidgetItem::whatsThis(int column);
QString* demth_ZNK15QTreeWidgetItem9whatsThisEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->whatsThis(column);
  return new QString(recret);
}

  // proto:  void QTreeWidgetItem::setWhatsThis(int column, const QString & whatsThis);
void demth_ZN15QTreeWidgetItem12setWhatsThisEiRK7QString(void *that, int column, const QString & whatsThis)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setWhatsThis(column, whatsThis);
}

  // proto:  void QTreeWidgetItem::sortChildren(int column, Qt::SortOrder order);
void demth_ZN15QTreeWidgetItem12sortChildrenEiN2Qt9SortOrderE(void *that, int column, Qt::SortOrder order)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->sortChildren(column, order);
}

  // proto:  QColor QTreeWidgetItem::textColor(int column);
QColor* demth_ZNK15QTreeWidgetItem9textColorEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->textColor(column);
  return new QColor(recret);
}

  // proto:  QIcon QTreeWidgetItem::icon(int column);
QIcon* demth_ZNK15QTreeWidgetItem4iconEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->icon(column);
  return new QIcon(recret);
}

  // proto:  void QTreeWidgetItem::setToolTip(int column, const QString & toolTip);
void demth_ZN15QTreeWidgetItem10setToolTipEiRK7QString(void *that, int column, const QString & toolTip)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setToolTip(column, toolTip);
}

  // proto:  bool QTreeWidgetItem::isFirstColumnSpanned();
bool demth_ZNK15QTreeWidgetItem20isFirstColumnSpannedEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->isFirstColumnSpanned();
}

  // proto:  int QTreeWidgetItem::textAlignment(int column);
int demth_ZNK15QTreeWidgetItem13textAlignmentEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->textAlignment(column);
}

  // proto:  QTreeWidgetItem * QTreeWidgetItem::child(int index);
QTreeWidgetItem * demth_ZNK15QTreeWidgetItem5childEi(void *that, int index)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->child(index);
}

  // proto:  void QTreeWidgetItem::setSelected(bool select);
void demth_ZN15QTreeWidgetItem11setSelectedEb(void *that, bool select)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  void QTreeWidgetItem::setHidden(bool hide);
void demth_ZN15QTreeWidgetItem9setHiddenEb(void *that, bool hide)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setHidden(hide);
}

  // proto:  int QTreeWidgetItem::columnCount();
int demth_ZNK15QTreeWidgetItem11columnCountEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->columnCount();
}

  // proto:  void QTreeWidgetItem::setDisabled(bool disabled);
void demth_ZN15QTreeWidgetItem11setDisabledEb(void *that, bool disabled)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setDisabled(disabled);
}

  // proto:  void QTreeWidgetItem::setBackground(int column, const QBrush & brush);
void demth_ZN15QTreeWidgetItem13setBackgroundEiRK6QBrush(void *that, int column, const QBrush & brush)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setBackground(column, brush);
}

  // proto:  void QTreeWidgetItem::setSizeHint(int column, const QSize & size);
void demth_ZN15QTreeWidgetItem11setSizeHintEiRK5QSize(void *that, int column, const QSize & size)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setSizeHint(column, size);
}

  // proto:  void QTreeWidgetItem::setCheckState(int column, Qt::CheckState state);
void demth_ZN15QTreeWidgetItem13setCheckStateEiN2Qt10CheckStateE(void *that, int column, Qt::CheckState state)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setCheckState(column, state);
}

  // proto:  QBrush QTreeWidgetItem::foreground(int column);
QBrush* demth_ZNK15QTreeWidgetItem10foregroundEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->foreground(column);
  return new QBrush(recret);
}

  // proto:  int QTreeWidgetItem::childCount();
int demth_ZNK15QTreeWidgetItem10childCountEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->childCount();
}

  // proto:  void QTreeWidgetItem::setBackgroundColor(int column, const QColor & color);
void demth_ZN15QTreeWidgetItem18setBackgroundColorEiRK6QColor(void *that, int column, const QColor & color)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setBackgroundColor(column, color);
}

  // proto:  QString QTreeWidgetItem::statusTip(int column);
QString* demth_ZNK15QTreeWidgetItem9statusTipEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->statusTip(column);
  return new QString(recret);
}

  // proto:  QBrush QTreeWidgetItem::background(int column);
QBrush* demth_ZNK15QTreeWidgetItem10backgroundEi(void *that, int column)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  auto recret = cthat->background(column);
  return new QBrush(recret);
}

  // proto:  int QTreeWidgetItem::type();
int demth_ZNK15QTreeWidgetItem4typeEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->type();
}

  // proto:  QTreeWidget * QTreeWidgetItem::treeWidget();
QTreeWidget * demth_ZNK15QTreeWidgetItem10treeWidgetEv(void *that)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
  return cthat->treeWidget();
}

  // proto:  void QTreeWidgetItem::setForeground(int column, const QBrush & brush);
void demth_ZN15QTreeWidgetItem13setForegroundEiRK6QBrush(void *that, int column, const QBrush & brush)
{
  QTreeWidgetItem *cthat = (QTreeWidgetItem *)that;
   cthat->setForeground(column, brush);
}

  // proto:  bool QTreeWidgetItem::isSelected();
bool demth_ZNK15QTreeWidgetItem10isSelectedEv(void *that)
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

