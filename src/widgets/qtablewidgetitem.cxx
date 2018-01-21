//  header block begin
// /usr/include/qt/QtWidgets/qtablewidget.h
#include <qtablewidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qtablewidget.h:83
// void QTableWidgetItem(int)
extern "C"
void* C_ZN16QTableWidgetItemC1Ei(int type) {
  return new QTableWidgetItem(type);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:84
// void QTableWidgetItem(const class QString &, int)
extern "C"
void* C_ZN16QTableWidgetItemC1ERK7QStringi(const QString & text, int type) {
  return new QTableWidgetItem(text, type);
}
// /usr/include/qt/QtWidgets/qtablewidget.h:85
// void QTableWidgetItem(const class QIcon &, const class QString &, int)
extern "C"
void* C_ZN16QTableWidgetItemC1ERK5QIconRK7QStringi(const QIcon & icon, const QString & text, int type) {
  return new QTableWidgetItem(icon, text, type);
}
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:87
// void ~QTableWidgetItem()
extern "C"
void C_ZN16QTableWidgetItemD1Ev(void *this_) {
  delete (QTableWidgetItem*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:89
// QTableWidgetItem * clone()
extern "C"
void C_ZNK16QTableWidgetItem5cloneEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->clone();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:91
// QTableWidget * tableWidget()
extern "C"
void C_ZNK16QTableWidgetItem11tableWidgetEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->tableWidget();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:93
// int row()
extern "C"
void C_ZNK16QTableWidgetItem3rowEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->row();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:94
// int column()
extern "C"
void C_ZNK16QTableWidgetItem6columnEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->column();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:96
// void setSelected(_Bool)
extern "C"
void C_ZN16QTableWidgetItem11setSelectedEb(void *this_, bool select) {
  ((QTableWidgetItem*)this_)->setSelected(select);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:97
// bool isSelected()
extern "C"
void C_ZNK16QTableWidgetItem10isSelectedEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->isSelected();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:99
// Qt::ItemFlags flags()
extern "C"
void C_ZNK16QTableWidgetItem5flagsEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->flags();
}
// /usr/include/qt/QtWidgets/qtablewidget.h:100
// void setFlags(Qt::ItemFlags)
extern "C"
void C_ZN16QTableWidgetItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QTableWidgetItem*)this_)->setFlags(flags);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:102
// QString text()
extern "C"
void C_ZNK16QTableWidgetItem4textEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->text();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:104
// void setText(const class QString &)
extern "C"
void C_ZN16QTableWidgetItem7setTextERK7QString(void *this_, const QString & text) {
  ((QTableWidgetItem*)this_)->setText(text);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:106
// QIcon icon()
extern "C"
void C_ZNK16QTableWidgetItem4iconEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->icon();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:108
// void setIcon(const class QIcon &)
extern "C"
void C_ZN16QTableWidgetItem7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QTableWidgetItem*)this_)->setIcon(icon);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:110
// QString statusTip()
extern "C"
void C_ZNK16QTableWidgetItem9statusTipEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->statusTip();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:112
// void setStatusTip(const class QString &)
extern "C"
void C_ZN16QTableWidgetItem12setStatusTipERK7QString(void *this_, const QString & statusTip) {
  ((QTableWidgetItem*)this_)->setStatusTip(statusTip);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:115
// QString toolTip()
extern "C"
void C_ZNK16QTableWidgetItem7toolTipEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->toolTip();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:117
// void setToolTip(const class QString &)
extern "C"
void C_ZN16QTableWidgetItem10setToolTipERK7QString(void *this_, const QString & toolTip) {
  ((QTableWidgetItem*)this_)->setToolTip(toolTip);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:121
// QString whatsThis()
extern "C"
void C_ZNK16QTableWidgetItem9whatsThisEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->whatsThis();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:123
// void setWhatsThis(const class QString &)
extern "C"
void C_ZN16QTableWidgetItem12setWhatsThisERK7QString(void *this_, const QString & whatsThis) {
  ((QTableWidgetItem*)this_)->setWhatsThis(whatsThis);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:126
// QFont font()
extern "C"
void C_ZNK16QTableWidgetItem4fontEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->font();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:128
// void setFont(const class QFont &)
extern "C"
void C_ZN16QTableWidgetItem7setFontERK5QFont(void *this_, const QFont & font) {
  ((QTableWidgetItem*)this_)->setFont(font);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:130
// int textAlignment()
extern "C"
void C_ZNK16QTableWidgetItem13textAlignmentEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->textAlignment();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:132
// void setTextAlignment(int)
extern "C"
void C_ZN16QTableWidgetItem16setTextAlignmentEi(void *this_, int alignment) {
  ((QTableWidgetItem*)this_)->setTextAlignment(alignment);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:135
// QColor backgroundColor()
extern "C"
void C_ZNK16QTableWidgetItem15backgroundColorEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->backgroundColor();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:137
// void setBackgroundColor(const class QColor &)
extern "C"
void C_ZN16QTableWidgetItem18setBackgroundColorERK6QColor(void *this_, const QColor & color) {
  ((QTableWidgetItem*)this_)->setBackgroundColor(color);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:140
// QBrush background()
extern "C"
void C_ZNK16QTableWidgetItem10backgroundEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->background();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:142
// void setBackground(const class QBrush &)
extern "C"
void C_ZN16QTableWidgetItem13setBackgroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QTableWidgetItem*)this_)->setBackground(brush);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:145
// QColor textColor()
extern "C"
void C_ZNK16QTableWidgetItem9textColorEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->textColor();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:147
// void setTextColor(const class QColor &)
extern "C"
void C_ZN16QTableWidgetItem12setTextColorERK6QColor(void *this_, const QColor & color) {
  ((QTableWidgetItem*)this_)->setTextColor(color);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:150
// QBrush foreground()
extern "C"
void C_ZNK16QTableWidgetItem10foregroundEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->foreground();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:152
// void setForeground(const class QBrush &)
extern "C"
void C_ZN16QTableWidgetItem13setForegroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QTableWidgetItem*)this_)->setForeground(brush);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:155
// Qt::CheckState checkState()
extern "C"
void C_ZNK16QTableWidgetItem10checkStateEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->checkState();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:157
// void setCheckState(Qt::CheckState)
extern "C"
void C_ZN16QTableWidgetItem13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QTableWidgetItem*)this_)->setCheckState(state);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:160
// QSize sizeHint()
extern "C"
void C_ZNK16QTableWidgetItem8sizeHintEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->sizeHint();
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:162
// void setSizeHint(const class QSize &)
extern "C"
void C_ZN16QTableWidgetItem11setSizeHintERK5QSize(void *this_, const QSize & size) {
  ((QTableWidgetItem*)this_)->setSizeHint(size);
}
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:165
// QVariant data(int)
extern "C"
void C_ZNK16QTableWidgetItem4dataEi(void *this_, int role) {
  /*return*/ ((QTableWidgetItem*)this_)->data(role);
}
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:166
// void setData(int, const class QVariant &)
extern "C"
void C_ZN16QTableWidgetItem7setDataEiRK8QVariant(void *this_, int role, const QVariant & value) {
  ((QTableWidgetItem*)this_)->setData(role, value);
}
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:171
// void read(class QDataStream &)
extern "C"
void C_ZN16QTableWidgetItem4readER11QDataStream(void *this_, QDataStream & in) {
  ((QTableWidgetItem*)this_)->read(in);
}
// virtual
// /usr/include/qt/QtWidgets/qtablewidget.h:172
// void write(class QDataStream &)
extern "C"
void C_ZNK16QTableWidgetItem5writeER11QDataStream(void *this_, QDataStream & out) {
  ((QTableWidgetItem*)this_)->write(out);
}
// inline
// /usr/include/qt/QtWidgets/qtablewidget.h:176
// int type()
extern "C"
void C_ZNK16QTableWidgetItem4typeEv(void *this_) {
  /*return*/ ((QTableWidgetItem*)this_)->type();
}
//  main block end
