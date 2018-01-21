//  header block begin
// /usr/include/qt/QtWidgets/qlistwidget.h
#include <qlistwidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qlistwidget.h:64
// void QListWidgetItem(class QListWidget *, int)
extern "C"
void* C_ZN15QListWidgetItemC1EP11QListWidgeti(QListWidget * view, int type) {
  return new QListWidgetItem(view, type);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:65
// void QListWidgetItem(const class QString &, class QListWidget *, int)
extern "C"
void* C_ZN15QListWidgetItemC1ERK7QStringP11QListWidgeti(const QString & text, QListWidget * view, int type) {
  return new QListWidgetItem(text, view, type);
}
// /usr/include/qt/QtWidgets/qlistwidget.h:66
// void QListWidgetItem(const class QIcon &, const class QString &, class QListWidget *, int)
extern "C"
void* C_ZN15QListWidgetItemC1ERK5QIconRK7QStringP11QListWidgeti(const QIcon & icon, const QString & text, QListWidget * view, int type) {
  return new QListWidgetItem(icon, text, view, type);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:69
// void ~QListWidgetItem()
extern "C"
void C_ZN15QListWidgetItemD1Ev(void *this_) {
  delete (QListWidgetItem*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:71
// QListWidgetItem * clone()
extern "C"
void C_ZNK15QListWidgetItem5cloneEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->clone();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:73
// QListWidget * listWidget()
extern "C"
void C_ZNK15QListWidgetItem10listWidgetEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->listWidget();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:75
// void setSelected(_Bool)
extern "C"
void C_ZN15QListWidgetItem11setSelectedEb(void *this_, bool select) {
  ((QListWidgetItem*)this_)->setSelected(select);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:76
// bool isSelected()
extern "C"
void C_ZNK15QListWidgetItem10isSelectedEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->isSelected();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:78
// void setHidden(_Bool)
extern "C"
void C_ZN15QListWidgetItem9setHiddenEb(void *this_, bool hide) {
  ((QListWidgetItem*)this_)->setHidden(hide);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:79
// bool isHidden()
extern "C"
void C_ZNK15QListWidgetItem8isHiddenEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->isHidden();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:81
// Qt::ItemFlags flags()
extern "C"
void C_ZNK15QListWidgetItem5flagsEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->flags();
}
// /usr/include/qt/QtWidgets/qlistwidget.h:82
// void setFlags(Qt::ItemFlags)
extern "C"
void C_ZN15QListWidgetItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QListWidgetItem*)this_)->setFlags(flags);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:84
// QString text()
extern "C"
void C_ZNK15QListWidgetItem4textEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->text();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:86
// void setText(const class QString &)
extern "C"
void C_ZN15QListWidgetItem7setTextERK7QString(void *this_, const QString & text) {
  ((QListWidgetItem*)this_)->setText(text);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:88
// QIcon icon()
extern "C"
void C_ZNK15QListWidgetItem4iconEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->icon();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:90
// void setIcon(const class QIcon &)
extern "C"
void C_ZN15QListWidgetItem7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QListWidgetItem*)this_)->setIcon(icon);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:92
// QString statusTip()
extern "C"
void C_ZNK15QListWidgetItem9statusTipEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->statusTip();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:94
// void setStatusTip(const class QString &)
extern "C"
void C_ZN15QListWidgetItem12setStatusTipERK7QString(void *this_, const QString & statusTip) {
  ((QListWidgetItem*)this_)->setStatusTip(statusTip);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:97
// QString toolTip()
extern "C"
void C_ZNK15QListWidgetItem7toolTipEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->toolTip();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:99
// void setToolTip(const class QString &)
extern "C"
void C_ZN15QListWidgetItem10setToolTipERK7QString(void *this_, const QString & toolTip) {
  ((QListWidgetItem*)this_)->setToolTip(toolTip);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:103
// QString whatsThis()
extern "C"
void C_ZNK15QListWidgetItem9whatsThisEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->whatsThis();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:105
// void setWhatsThis(const class QString &)
extern "C"
void C_ZN15QListWidgetItem12setWhatsThisERK7QString(void *this_, const QString & whatsThis) {
  ((QListWidgetItem*)this_)->setWhatsThis(whatsThis);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:108
// QFont font()
extern "C"
void C_ZNK15QListWidgetItem4fontEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->font();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:110
// void setFont(const class QFont &)
extern "C"
void C_ZN15QListWidgetItem7setFontERK5QFont(void *this_, const QFont & font) {
  ((QListWidgetItem*)this_)->setFont(font);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:112
// int textAlignment()
extern "C"
void C_ZNK15QListWidgetItem13textAlignmentEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->textAlignment();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:114
// void setTextAlignment(int)
extern "C"
void C_ZN15QListWidgetItem16setTextAlignmentEi(void *this_, int alignment) {
  ((QListWidgetItem*)this_)->setTextAlignment(alignment);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:117
// QColor backgroundColor()
extern "C"
void C_ZNK15QListWidgetItem15backgroundColorEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->backgroundColor();
}
// inline virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:119
// void setBackgroundColor(const class QColor &)
extern "C"
void C_ZN15QListWidgetItem18setBackgroundColorERK6QColor(void *this_, const QColor & color) {
  ((QListWidgetItem*)this_)->setBackgroundColor(color);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:122
// QBrush background()
extern "C"
void C_ZNK15QListWidgetItem10backgroundEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->background();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:124
// void setBackground(const class QBrush &)
extern "C"
void C_ZN15QListWidgetItem13setBackgroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QListWidgetItem*)this_)->setBackground(brush);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:127
// QColor textColor()
extern "C"
void C_ZNK15QListWidgetItem9textColorEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->textColor();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:129
// void setTextColor(const class QColor &)
extern "C"
void C_ZN15QListWidgetItem12setTextColorERK6QColor(void *this_, const QColor & color) {
  ((QListWidgetItem*)this_)->setTextColor(color);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:132
// QBrush foreground()
extern "C"
void C_ZNK15QListWidgetItem10foregroundEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->foreground();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:134
// void setForeground(const class QBrush &)
extern "C"
void C_ZN15QListWidgetItem13setForegroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QListWidgetItem*)this_)->setForeground(brush);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:137
// Qt::CheckState checkState()
extern "C"
void C_ZNK15QListWidgetItem10checkStateEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->checkState();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:139
// void setCheckState(Qt::CheckState)
extern "C"
void C_ZN15QListWidgetItem13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QListWidgetItem*)this_)->setCheckState(state);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:142
// QSize sizeHint()
extern "C"
void C_ZNK15QListWidgetItem8sizeHintEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->sizeHint();
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:144
// void setSizeHint(const class QSize &)
extern "C"
void C_ZN15QListWidgetItem11setSizeHintERK5QSize(void *this_, const QSize & size) {
  ((QListWidgetItem*)this_)->setSizeHint(size);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:147
// QVariant data(int)
extern "C"
void C_ZNK15QListWidgetItem4dataEi(void *this_, int role) {
  /*return*/ ((QListWidgetItem*)this_)->data(role);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:148
// void setData(int, const class QVariant &)
extern "C"
void C_ZN15QListWidgetItem7setDataEiRK8QVariant(void *this_, int role, const QVariant & value) {
  ((QListWidgetItem*)this_)->setData(role, value);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:153
// void read(class QDataStream &)
extern "C"
void C_ZN15QListWidgetItem4readER11QDataStream(void *this_, QDataStream & in) {
  ((QListWidgetItem*)this_)->read(in);
}
// virtual
// /usr/include/qt/QtWidgets/qlistwidget.h:154
// void write(class QDataStream &)
extern "C"
void C_ZNK15QListWidgetItem5writeER11QDataStream(void *this_, QDataStream & out) {
  ((QListWidgetItem*)this_)->write(out);
}
// inline
// /usr/include/qt/QtWidgets/qlistwidget.h:158
// int type()
extern "C"
void C_ZNK15QListWidgetItem4typeEv(void *this_) {
  /*return*/ ((QListWidgetItem*)this_)->type();
}
//  main block end
