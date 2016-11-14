// /usr/include/qt/QtWidgets/qcompleter.h
#include <qcompleter.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qcompleter.h:61
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QCompleter10metaObjectEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcompleter.h:85
// void QCompleter(class QObject *)
extern "C"
void* C_ZN10QCompleterC1EP7QObject(QObject * parent) {
  return new QCompleter(parent);
}
// /usr/include/qt/QtWidgets/qcompleter.h:86
// void QCompleter(class QAbstractItemModel *, class QObject *)
extern "C"
void* C_ZN10QCompleterC1EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent) {
  return new QCompleter(model, parent);
}
// /usr/include/qt/QtWidgets/qcompleter.h:88
// void QCompleter(const class QStringList &, class QObject *)
extern "C"
void* C_ZN10QCompleterC1ERK11QStringListP7QObject(const QStringList & completions, QObject * parent) {
  return new QCompleter(completions, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qcompleter.h:90
// void ~QCompleter()
extern "C"
void C_ZN10QCompleterD1Ev(void *this_) {
  delete (QCompleter*)(this_);
}
// /usr/include/qt/QtWidgets/qcompleter.h:92
// void setWidget(class QWidget *)
extern "C"
void C_ZN10QCompleter9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QCompleter*)this_)->setWidget(widget);
}
// /usr/include/qt/QtWidgets/qcompleter.h:93
// QWidget * widget()
extern "C"
void C_ZNK10QCompleter6widgetEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->widget();
}
// /usr/include/qt/QtWidgets/qcompleter.h:95
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN10QCompleter8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * c) {
  ((QCompleter*)this_)->setModel(c);
}
// /usr/include/qt/QtWidgets/qcompleter.h:96
// QAbstractItemModel * model()
extern "C"
void C_ZNK10QCompleter5modelEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->model();
}
// /usr/include/qt/QtWidgets/qcompleter.h:98
// void setCompletionMode(enum QCompleter::CompletionMode)
extern "C"
void C_ZN10QCompleter17setCompletionModeENS_14CompletionModeE(void *this_, QCompleter::CompletionMode mode) {
  ((QCompleter*)this_)->setCompletionMode(mode);
}
// /usr/include/qt/QtWidgets/qcompleter.h:99
// QCompleter::CompletionMode completionMode()
extern "C"
void C_ZNK10QCompleter14completionModeEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->completionMode();
}
// /usr/include/qt/QtWidgets/qcompleter.h:101
// void setFilterMode(Qt::MatchFlags)
extern "C"
void C_ZN10QCompleter13setFilterModeE6QFlagsIN2Qt9MatchFlagEE(void *this_, QFlags<Qt::MatchFlag> filterMode) {
  ((QCompleter*)this_)->setFilterMode(filterMode);
}
// /usr/include/qt/QtWidgets/qcompleter.h:102
// Qt::MatchFlags filterMode()
extern "C"
void C_ZNK10QCompleter10filterModeEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->filterMode();
}
// /usr/include/qt/QtWidgets/qcompleter.h:104
// QAbstractItemView * popup()
extern "C"
void C_ZNK10QCompleter5popupEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->popup();
}
// /usr/include/qt/QtWidgets/qcompleter.h:105
// void setPopup(class QAbstractItemView *)
extern "C"
void C_ZN10QCompleter8setPopupEP17QAbstractItemView(void *this_, QAbstractItemView * popup) {
  ((QCompleter*)this_)->setPopup(popup);
}
// /usr/include/qt/QtWidgets/qcompleter.h:107
// void setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN10QCompleter18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity caseSensitivity) {
  ((QCompleter*)this_)->setCaseSensitivity(caseSensitivity);
}
// /usr/include/qt/QtWidgets/qcompleter.h:108
// Qt::CaseSensitivity caseSensitivity()
extern "C"
void C_ZNK10QCompleter15caseSensitivityEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->caseSensitivity();
}
// /usr/include/qt/QtWidgets/qcompleter.h:110
// void setModelSorting(enum QCompleter::ModelSorting)
extern "C"
void C_ZN10QCompleter15setModelSortingENS_12ModelSortingE(void *this_, QCompleter::ModelSorting sorting) {
  ((QCompleter*)this_)->setModelSorting(sorting);
}
// /usr/include/qt/QtWidgets/qcompleter.h:111
// QCompleter::ModelSorting modelSorting()
extern "C"
void C_ZNK10QCompleter12modelSortingEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->modelSorting();
}
// /usr/include/qt/QtWidgets/qcompleter.h:113
// void setCompletionColumn(int)
extern "C"
void C_ZN10QCompleter19setCompletionColumnEi(void *this_, int column) {
  ((QCompleter*)this_)->setCompletionColumn(column);
}
// /usr/include/qt/QtWidgets/qcompleter.h:114
// int completionColumn()
extern "C"
void C_ZNK10QCompleter16completionColumnEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->completionColumn();
}
// /usr/include/qt/QtWidgets/qcompleter.h:116
// void setCompletionRole(int)
extern "C"
void C_ZN10QCompleter17setCompletionRoleEi(void *this_, int role) {
  ((QCompleter*)this_)->setCompletionRole(role);
}
// /usr/include/qt/QtWidgets/qcompleter.h:117
// int completionRole()
extern "C"
void C_ZNK10QCompleter14completionRoleEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->completionRole();
}
// /usr/include/qt/QtWidgets/qcompleter.h:119
// bool wrapAround()
extern "C"
void C_ZNK10QCompleter10wrapAroundEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->wrapAround();
}
// /usr/include/qt/QtWidgets/qcompleter.h:121
// int maxVisibleItems()
extern "C"
void C_ZNK10QCompleter15maxVisibleItemsEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->maxVisibleItems();
}
// /usr/include/qt/QtWidgets/qcompleter.h:122
// void setMaxVisibleItems(int)
extern "C"
void C_ZN10QCompleter18setMaxVisibleItemsEi(void *this_, int maxItems) {
  ((QCompleter*)this_)->setMaxVisibleItems(maxItems);
}
// /usr/include/qt/QtWidgets/qcompleter.h:124
// int completionCount()
extern "C"
void C_ZNK10QCompleter15completionCountEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->completionCount();
}
// /usr/include/qt/QtWidgets/qcompleter.h:125
// bool setCurrentRow(int)
extern "C"
void C_ZN10QCompleter13setCurrentRowEi(void *this_, int row) {
  /*return*/ ((QCompleter*)this_)->setCurrentRow(row);
}
// /usr/include/qt/QtWidgets/qcompleter.h:126
// int currentRow()
extern "C"
void C_ZNK10QCompleter10currentRowEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->currentRow();
}
// /usr/include/qt/QtWidgets/qcompleter.h:128
// QModelIndex currentIndex()
extern "C"
void C_ZNK10QCompleter12currentIndexEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qcompleter.h:129
// QString currentCompletion()
extern "C"
void C_ZNK10QCompleter17currentCompletionEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->currentCompletion();
}
// /usr/include/qt/QtWidgets/qcompleter.h:131
// QAbstractItemModel * completionModel()
extern "C"
void C_ZNK10QCompleter15completionModelEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->completionModel();
}
// /usr/include/qt/QtWidgets/qcompleter.h:133
// QString completionPrefix()
extern "C"
void C_ZNK10QCompleter16completionPrefixEv(void *this_) {
  /*return*/ ((QCompleter*)this_)->completionPrefix();
}
// /usr/include/qt/QtWidgets/qcompleter.h:136
// void setCompletionPrefix(const class QString &)
extern "C"
void C_ZN10QCompleter19setCompletionPrefixERK7QString(void *this_, const QString & prefix) {
  ((QCompleter*)this_)->setCompletionPrefix(prefix);
}
// /usr/include/qt/QtWidgets/qcompleter.h:137
// void complete(const class QRect &)
extern "C"
void C_ZN10QCompleter8completeERK5QRect(void *this_, const QRect & rect) {
  ((QCompleter*)this_)->complete(rect);
}
// /usr/include/qt/QtWidgets/qcompleter.h:138
// void setWrapAround(_Bool)
extern "C"
void C_ZN10QCompleter13setWrapAroundEb(void *this_, bool wrap) {
  ((QCompleter*)this_)->setWrapAround(wrap);
}
// virtual
// /usr/include/qt/QtWidgets/qcompleter.h:141
// QString pathFromIndex(const class QModelIndex &)
extern "C"
void C_ZNK10QCompleter13pathFromIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QCompleter*)this_)->pathFromIndex(index);
}
// virtual
// /usr/include/qt/QtWidgets/qcompleter.h:142
// QStringList splitPath(const class QString &)
extern "C"
void C_ZNK10QCompleter9splitPathERK7QString(void *this_, const QString & path) {
  /*return*/ ((QCompleter*)this_)->splitPath(path);
}
// /usr/include/qt/QtWidgets/qcompleter.h:149
// void activated(const class QString &)
extern "C"
void C_ZN10QCompleter9activatedERK7QString(void *this_, const QString & text) {
  ((QCompleter*)this_)->activated(text);
}
// /usr/include/qt/QtWidgets/qcompleter.h:150
// void activated(const class QModelIndex &)
extern "C"
void C_ZN10QCompleter9activatedERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QCompleter*)this_)->activated(index);
}
// /usr/include/qt/QtWidgets/qcompleter.h:151
// void highlighted(const class QString &)
extern "C"
void C_ZN10QCompleter11highlightedERK7QString(void *this_, const QString & text) {
  ((QCompleter*)this_)->highlighted(text);
}
// /usr/include/qt/QtWidgets/qcompleter.h:152
// void highlighted(const class QModelIndex &)
extern "C"
void C_ZN10QCompleter11highlightedERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QCompleter*)this_)->highlighted(index);
}