// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
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
// QTreeWidget_SlotProxy here
class QTreeWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTreeWidget_SlotProxy():QObject(){}

public slots:
  // itemPressed(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemDoubleClicked(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemEntered(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemExpanded(class QTreeWidgetItem *)
  void slot_proxy_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidgetItem * arg0);
public:
  void (*slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem)(void* rsfptr, QTreeWidgetItem * arg0) = NULL;
public slots:
  // itemCollapsed(class QTreeWidgetItem *)
  void slot_proxy_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidgetItem * arg0);
public:
  void (*slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem)(void* rsfptr, QTreeWidgetItem * arg0) = NULL;
public slots:
  // currentItemChanged(class QTreeWidgetItem *, class QTreeWidgetItem *)
  void slot_proxy_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidgetItem * arg0, QTreeWidgetItem * arg1);
public:
  void (*slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_)(void* rsfptr, QTreeWidgetItem * arg0, QTreeWidgetItem * arg1) = NULL;
public slots:
  // itemSelectionChanged()
  void slot_proxy_func__ZN11QTreeWidget20itemSelectionChangedEv();
public:
  void (*slot_func__ZN11QTreeWidget20itemSelectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // itemClicked(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemChanged(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public slots:
  // itemActivated(class QTreeWidgetItem *, int)
  void slot_proxy_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1);
public:
  void (*slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi)(void* rsfptr, QTreeWidgetItem * arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtreewidget.moc"

extern "C" {
  QTreeWidget_SlotProxy* QTreeWidget_SlotProxy_new()
  {
    return new QTreeWidget_SlotProxy();
  }
};

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemPressed(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemDoubleClicked(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemEntered(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidgetItem * arg0) {
  if (this->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem = (decltype(that->slot_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemExpanded(class QTreeWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidgetItem * arg0)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidgetItem * arg0) {
  if (this->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem = (decltype(that->slot_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemCollapsed(class QTreeWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidgetItem * arg0)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidgetItem * arg0, QTreeWidgetItem * arg1) {
  if (this->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_ != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_ = (decltype(that->slot_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(currentItemChanged(class QTreeWidgetItem *, class QTreeWidgetItem *)), that, SLOT(slot_proxy_func__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidgetItem * arg0, QTreeWidgetItem * arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget20itemSelectionChangedEv() {
  if (this->slot_func__ZN11QTreeWidget20itemSelectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget20itemSelectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget20itemSelectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget20itemSelectionChangedEv = (decltype(that->slot_func__ZN11QTreeWidget20itemSelectionChangedEv))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemSelectionChanged()), that, SLOT(slot_proxy_func__ZN11QTreeWidget20itemSelectionChangedEv()));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget20itemSelectionChangedEv(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemClicked(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemChanged(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeWidget_SlotProxy::slot_proxy_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1) {
  if (this->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi != NULL) {
    // do smth...
    this->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTreeWidget_SlotProxy_connect__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi = (decltype(that->slot_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi))ffifptr;
  QObject::connect((QTreeWidget*)sender, SIGNAL(itemActivated(class QTreeWidgetItem *, int)), that, SLOT(slot_proxy_func__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidgetItem * arg0, int arg1)));
  return that;
}
extern "C"
void QTreeWidget_SlotProxy_disconnect__ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(QTreeWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

