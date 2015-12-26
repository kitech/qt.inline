// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
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
// <= body block end

