// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qlistwidget.h
// dst-file: /src/widgets/qlistwidget.cxx
//

// header block begin =>
#include <qlistwidget.h>

extern "C" {

  // proto:  bool QListWidgetItem::isHidden();
bool _ZNK15QListWidgetItem8isHiddenEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->isHidden();
}

  // proto:  void QListWidgetItem::setBackground(const QBrush & brush);
void _ZN15QListWidgetItem13setBackgroundERK6QBrush(void *that, const QBrush & brush)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setBackground(brush);
}

  // proto:  void QListWidgetItem::setSelected(bool select);
void _ZN15QListWidgetItem11setSelectedEb(void *that, bool select)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setSelected(select);
}

  // proto:  QFont QListWidgetItem::font();
QFont* _ZNK15QListWidgetItem4fontEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->font();
  return new QFont(recret);
}

  // proto:  void QListWidgetItem::setTextAlignment(int alignment);
void _ZN15QListWidgetItem16setTextAlignmentEi(void *that, int alignment)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setTextAlignment(alignment);
}

  // proto:  QString QListWidgetItem::whatsThis();
QString* _ZNK15QListWidgetItem9whatsThisEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->whatsThis();
  return new QString(recret);
}

  // proto:  int QListWidgetItem::type();
int _ZNK15QListWidgetItem4typeEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->type();
}

  // proto:  QIcon QListWidgetItem::icon();
QIcon* _ZNK15QListWidgetItem4iconEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->icon();
  return new QIcon(recret);
}

  // proto:  QColor QListWidgetItem::textColor();
QColor* _ZNK15QListWidgetItem9textColorEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->textColor();
  return new QColor(recret);
}

  // proto:  QBrush QListWidgetItem::foreground();
QBrush* _ZNK15QListWidgetItem10foregroundEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->foreground();
  return new QBrush(recret);
}

  // proto:  QBrush QListWidgetItem::background();
QBrush* _ZNK15QListWidgetItem10backgroundEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->background();
  return new QBrush(recret);
}

  // proto:  void QListWidgetItem::setStatusTip(const QString & statusTip);
void _ZN15QListWidgetItem12setStatusTipERK7QString(void *that, const QString & statusTip)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setStatusTip(statusTip);
}

  // proto:  QString QListWidgetItem::text();
QString* _ZNK15QListWidgetItem4textEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->text();
  return new QString(recret);
}

  // proto:  QColor QListWidgetItem::backgroundColor();
QColor* _ZNK15QListWidgetItem15backgroundColorEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->backgroundColor();
  return new QColor(recret);
}

  // proto:  bool QListWidgetItem::isSelected();
bool _ZNK15QListWidgetItem10isSelectedEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->isSelected();
}

  // proto:  void QListWidgetItem::setFont(const QFont & font);
void _ZN15QListWidgetItem7setFontERK5QFont(void *that, const QFont & font)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setFont(font);
}

  // proto:  void QListWidgetItem::setCheckState(Qt::CheckState state);
void _ZN15QListWidgetItem13setCheckStateEN2Qt10CheckStateE(void *that, Qt::CheckState state)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setCheckState(state);
}

  // proto:  void QListWidgetItem::setText(const QString & text);
void _ZN15QListWidgetItem7setTextERK7QString(void *that, const QString & text)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setText(text);
}

  // proto:  QSize QListWidgetItem::sizeHint();
QSize* _ZNK15QListWidgetItem8sizeHintEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->sizeHint();
  return new QSize(recret);
}

  // proto:  void QListWidgetItem::setWhatsThis(const QString & whatsThis);
void _ZN15QListWidgetItem12setWhatsThisERK7QString(void *that, const QString & whatsThis)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setWhatsThis(whatsThis);
}

  // proto:  void QListWidgetItem::setTextColor(const QColor & color);
void _ZN15QListWidgetItem12setTextColorERK6QColor(void *that, const QColor & color)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setTextColor(color);
}

  // proto:  void QListWidgetItem::setSizeHint(const QSize & size);
void _ZN15QListWidgetItem11setSizeHintERK5QSize(void *that, const QSize & size)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setSizeHint(size);
}

  // proto:  QListWidget * QListWidgetItem::listWidget();
QListWidget * _ZNK15QListWidgetItem10listWidgetEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->listWidget();
}

  // proto:  void QListWidgetItem::setIcon(const QIcon & icon);
void _ZN15QListWidgetItem7setIconERK5QIcon(void *that, const QIcon & icon)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setIcon(icon);
}

  // proto:  void QListWidgetItem::setBackgroundColor(const QColor & color);
void _ZN15QListWidgetItem18setBackgroundColorERK6QColor(void *that, const QColor & color)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setBackgroundColor(color);
}

  // proto:  void QListWidgetItem::setForeground(const QBrush & brush);
void _ZN15QListWidgetItem13setForegroundERK6QBrush(void *that, const QBrush & brush)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setForeground(brush);
}

  // proto:  void QListWidgetItem::setHidden(bool hide);
void _ZN15QListWidgetItem9setHiddenEb(void *that, bool hide)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setHidden(hide);
}

  // proto:  QString QListWidgetItem::toolTip();
QString* _ZNK15QListWidgetItem7toolTipEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->toolTip();
  return new QString(recret);
}

  // proto:  int QListWidgetItem::textAlignment();
int _ZNK15QListWidgetItem13textAlignmentEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  return cthat->textAlignment();
}

  // proto:  QString QListWidgetItem::statusTip();
QString* _ZNK15QListWidgetItem9statusTipEv(void *that)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
  auto recret = cthat->statusTip();
  return new QString(recret);
}

  // proto:  void QListWidgetItem::setToolTip(const QString & toolTip);
void _ZN15QListWidgetItem10setToolTipERK7QString(void *that, const QString & toolTip)

{
  QListWidgetItem *cthat = (QListWidgetItem *)that;
   cthat->setToolTip(toolTip);
}

  // proto:  void QListWidget::addItem(QListWidgetItem * item);
void _ZN11QListWidget7addItemEP15QListWidgetItem(void *that, QListWidgetItem * item)

{
  QListWidget *cthat = (QListWidget *)that;
   cthat->addItem(item);
}

  // proto:  void QListWidget::addItems(const QStringList & labels);
void _ZN11QListWidget8addItemsERK11QStringList(void *that, const QStringList & labels)

{
  QListWidget *cthat = (QListWidget *)that;
   cthat->addItems(labels);
}

  // proto:  void QListWidget::removeItemWidget(QListWidgetItem * item);
void _ZN11QListWidget16removeItemWidgetEP15QListWidgetItem(void *that, QListWidgetItem * item)

{
  QListWidget *cthat = (QListWidget *)that;
   cthat->removeItemWidget(item);
}

  // proto:  QListWidgetItem * QListWidget::itemAt(int x, int y);
QListWidgetItem * _ZNK11QListWidget6itemAtEii(void *that, int x, int y)

{
  QListWidget *cthat = (QListWidget *)that;
  return cthat->itemAt(x, y);
}

  // proto:  void QListWidget::addItem(const QString & label);
void _ZN11QListWidget7addItemERK7QString(void *that, const QString & label)

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
// <= body block end

